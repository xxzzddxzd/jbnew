//
//  csharpfunc.m
//  ykcs
//
//  Created by 徐正达 on 2018/9/4.
//


#import "csharpfunc.h"
#import <CommonCrypto/CommonCryptor.h>
NSString * DataToHexStr(NSData *data) {
    if (!data || [data length] == 0) {
        return @"";
    }
    NSMutableString *string = [[NSMutableString alloc] initWithCapacity:[data length]];
    
    [data enumerateByteRangesUsingBlock:^(const void *bytes, NSRange byteRange, BOOL *stop) {
        unsigned char *dataBytes = (unsigned char*)bytes;
        for (NSInteger i = 0; i < byteRange.length; i++) {
            NSString *hexStr = [NSString stringWithFormat:@"%x", (dataBytes[i]) & 0xff];
            if ([hexStr length] == 2) {
                [string appendString:hexStr];
            } else {
                [string appendFormat:@"0%@", hexStr];
            }
        }
    }];
    
    return string;
}
NSString * deck(NSString* baseStr){
    NSString * key=@"1231231231231231";
    NSData * baseData =[[NSData alloc] initWithBase64EncodedString:baseStr options:NSDataBase64DecodingIgnoreUnknownCharacters];
    NSUInteger dataLength = baseData.length +100+[key dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES].length;
    unsigned char buffer[dataLength];
    memset(buffer, 0,sizeof(char));
    size_t dataOffset = 0;
    CCCryptorStatus status=CCCrypt(kCCDecrypt,
                                   kCCAlgorithmAES,
                                   kCCOptionPKCS7Padding|kCCOptionECBMode,
                                   [key UTF8String],
                                   16,
                                   nil,
                                   [baseData bytes],
                                   [baseData length],
                                   buffer,
                                   dataLength,
                                   &dataOffset);
    NSString*decodingStr=nil;
    if(status==0){
        NSData*data=[[NSData alloc]initWithBytes:buffer length:dataOffset];
        decodingStr=[[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        //        XLog(@"解密后的串：");
    }
    //    else
    //        XLog(@"解密失败；");
    return decodingStr;
}
NSString * loadYJMfromTTatIndex(int index){
    NSString *documentPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory,NSUserDomainMask,YES)lastObject];
    documentPath = [NSString stringWithFormat:@"%@/tt",documentPath];
    NSString * data = deck([NSString stringWithContentsOfFile:documentPath encoding:4 error:0]);
    NSString * subdata= [data componentsSeparatedByString:@" "][index];
    return subdata;
}

int getLen(long inStr){
//    XLog(@" %x %x",inStr,inStr+0x10);
//    XLog(@" %x ",(int*)(inStr+0x10));
//    if((inStr+0x10)<0x100000)
//        return 0;
    int rev = *(int*)(inStr+0x10);;
//    NSLog(@"getLen %d",rev);
    if (rev>20000) {
        rev=0;
    }
    return rev;
}
void setLen(long inStr,char * s){
    *(int*)(inStr+0x10) = (short)strlen(s);
//    NSLog(@"setLen %d",*(int*)(inStr+0x10));
    return ;
}
char* getS(long inStr){
//    XLog(@"%x",inStr)
    if(!inStr) return 0;
    int len =getLen(inStr);
    if (len==0) {
        return 0;
    }
    char * cstr = (char*)malloc(len+1);
    memset(cstr,0,len+1);
    for (int i=0; i<len; i++) {
//        XLog(@"%d", (char*)(inStr+i*2+0x14));
//        XLog(@"%c", *(char*)(inStr+i*2+0x14));
        //NSString * ss = [NSString stringWithCString:(char*)(inStr+i*2+0x14) encoding:NSUTF8StringEncoding];
        *(char*)(cstr+i)= *(char*)(inStr+i*2+0x14);
    }
    //NSLog(@" %s",cstr);
    return cstr;
}
void setS(long inStr, char* s){
    setLen(inStr, s);
    int len = getLen(inStr);
    char * cstr = (char*)malloc(len+1);
    memset(cstr,0,len+1);
    for (int i=0; i<len; i++) {
        //NSString * ss = [NSString stringWithCString:(char*)(inStr+i*2+0x14) encoding:NSUTF8StringEncoding];
        *(char*)(inStr+i*2+0x14)= *(char*)(s+i);
    }
    NSLog(@"setS %s",getS(inStr));
    return;
}
NSData * objectSaveToTmpDic(id data,NSString * name){
    name = [name stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@"." withString:@"_"];
    NSString * pa = [NSString stringWithFormat:@"%@req/%@",NSTemporaryDirectory(),name];
    NSLog(@"# \n%@ %@",data, pa);
    [data writeToFile:pa atomically:1];
    return data;
}
NSString * tmpPath(NSString* name){
    return  [NSString stringWithFormat:@"%@%@",NSTemporaryDirectory(),name];
}

id byteArraySaveToTmpDic(long inAddr,NSString * name){
//    XLog(@"inAddr %lx",inAddr);
    if (!inAddr) {
//        XLog(@"inaddr %x",inAddr)
        return 0;
    }
    NSLog(@"bastt %d",*(int*)(inAddr+0x18));
    if(*(int*)(inAddr+0x18) >20000 || *(int*)(inAddr+0x18) ==0){
//        XLog(@"re2 %d ",*(int*)(inAddr+0x18))
//        XLog(@"%@", [NSData dataWithBytes:(void*)(inAddr) length:300])
        return 0;
        
    }
    NSData * data = [NSData dataWithBytes:(void*)(inAddr+0x20) length:*(int*)(inAddr+0x18)];
    name = [name stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@"." withString:@"_"];
    NSString * pa = [NSString stringWithFormat:@"%@req/%@",NSTemporaryDirectory(),name];
    NSLog(@"# byte[] \n%@\n%@ \nto %@",data, [data base64EncodedStringWithOptions:0], pa);
    [[NSFileManager defaultManager] createDirectoryAtPath:[NSString stringWithFormat:@"%@req",NSTemporaryDirectory()] withIntermediateDirectories:0 attributes:0 error:0];
    [data writeToFile:pa atomically:1];
    return DataToHexStr(data);
}
id byteArraySaveToTmpDic_revdata(long inAddr,NSString * name){
//    XLog(@"inAddr %lx",inAddr);
    if (!inAddr) {
//        XLog(@"inaddr %x",inAddr)
        return 0;
    }
    if(*(int*)(inAddr+0x18) >20000 || *(int*)(inAddr+0x18) ==0){
//        XLog(@"re2 %d ",*(int*)(inAddr+0x18))
//        XLog(@"%@", [NSData dataWithBytes:(void*)(inAddr) length:300])
        return 0;
        
    }
    NSData * data = [NSData dataWithBytes:(void*)(inAddr+0x20) length:*(int*)(inAddr+0x18)];
    name = [name stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@"." withString:@"_"];
    NSString * pa = [NSString stringWithFormat:@"%@req/%@",NSTemporaryDirectory(),name];
    NSLog(@"# byte[] \n%@\n%@ \nto %@",data, [data base64EncodedStringWithOptions:0], pa);
    [data writeToFile:pa atomically:1];
    return (data);
}
NSData * byteArraySaveToTmpDic_c(long inAddr,long len, NSString * name){
    if (!inAddr) {
        return 0;
    }
    NSData * data = [NSData dataWithBytes:(void*)(inAddr) length:len];
    NSString *tmpDir = NSTemporaryDirectory();
    name = [name stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    name = [name stringByReplacingOccurrencesOfString:@"." withString:@"_"];
    NSString * pa = [NSString stringWithFormat:@"%@req/%@",tmpDir,name];
    NSLog(@"byte[] \n%@\n%@ \nto %@",data, [data base64EncodedStringWithOptions:0], pa);
    [data writeToFile:pa atomically:1];
    return data;
}

#import "zlib.h"

NSData *uncompressZippedData(NSData *compressedData){
    if ([compressedData length] == 0) return compressedData;
    unsigned full_length = [compressedData length];
    unsigned half_length = [compressedData length] / 2;
    NSMutableData *decompressed = [NSMutableData dataWithLength: full_length + half_length];
    BOOL done = NO;
    int status;
    z_stream strm;
    strm.next_in = (Bytef *)[compressedData bytes];
    strm.avail_in = [compressedData length];
    strm.total_out = 0;
    strm.zalloc = Z_NULL;
    strm.zfree = Z_NULL;
    if (inflateInit2(&strm, (15+32)) != Z_OK) return nil;
    while (!done) {
        // Make sure we have enough room and reset the lengths.
        if (strm.total_out >= [decompressed length]) {
            [decompressed increaseLengthBy: half_length];
        }
        strm.next_out = (Bytef *)[decompressed mutableBytes] + strm.total_out;
        strm.avail_out = [decompressed length] - strm.total_out;
        // Inflate another chunk.
        status = inflate (&strm, Z_SYNC_FLUSH);
        if (status == Z_STREAM_END) {
            done = YES;
        } else if (status != Z_OK) {
            break;
        }
        
    }
    if (inflateEnd (&strm) != Z_OK) return nil;
    // Set real length.
    if (done) {
        [decompressed setLength: strm.total_out];
        NSData * da = [NSData dataWithData:decompressed];
        NSLog(@"unz %@ %d",da ,[da length] );
        return  da;
    } else {
        return nil;
        
    }
}


 void memPrint64(long start, long len, int type){
    long now = start;
    long end = start+len;
    while (now<=end) {
        if (type==1) {
            XLog(@"0x%lx\t%d\t%d\t%d\t%d", now, *(int*)(now), *(int*)(now+4), *(int*)(now+8), *(int*)(now+12));
        }
        else if(type==2)
        {
            XLog(@"0x%lx\t%f\t%f\t%f\t%f", now, *(float*)(now), *(float*)(now+4), *(float*)(now+8), *(float*)(now+12));
        }
        now+=16;
    }
}

NSMutableDictionary * dumpStringTObjectTDictionary(long csharpDict){
    if(!csharpDict)return 0;
    int count = *(int*)(csharpDict+0x30);
    //    XLog(@"%d",csharpDict+0x30);
    //    XLog(@"%d",csharpDict+0x20);
    long keyAddr =*(long*)(csharpDict+0x20);
    //    XLog(@"%d",keyAddr);
    //    XLog(@"%d",csharpDict+0x28);
    long valueAddr= *(long*)(csharpDict+0x28);
    //    XLog(@"%d",valueAddr);
    if(!keyAddr||!valueAddr) return 0;
    NSMutableDictionary * nsdict = [[NSMutableDictionary alloc]init];
    NSString * key;
    id value;
    for (int i=0; i<count; i++) {
        //        XLog(@"%d %d",i,keyAddr+0x20+i*8);
        
        key = [NSString stringWithCString:getS(*(long*)(keyAddr+0x20+i*8)) encoding:4];
        //        XLog(@"%d %d",i,valueAddr+0x20+i*8);
        //        XLog(@"%d %d",i,*(long*)(valueAddr+0x20+i*8));
        if(*(long*)(valueAddr+0x20+i*8)){
            value = [NSString stringWithFormat:@"%lx", *(long*)(valueAddr+0x20+i*8)];
        }else{
            value=0;
        }
        [nsdict setObject:value forKey:key];
    }
    return nsdict;
}
NSMutableDictionary * dumpStringTStringTDictionary(long csharpDict){
    if(!csharpDict)return 0;
    int count = *(int*)(csharpDict+0x30);
//    XLog(@"%d",csharpDict+0x30);
//    XLog(@"%d",csharpDict+0x20);
    long keyAddr =*(long*)(csharpDict+0x20);
//    XLog(@"%d",keyAddr);
//    XLog(@"%d",csharpDict+0x28);
    long valueAddr= *(long*)(csharpDict+0x28);
//    XLog(@"%d",valueAddr);
    if(!keyAddr||!valueAddr) return 0;
    NSMutableDictionary * nsdict = [[NSMutableDictionary alloc]init];
    NSString * key,*value;
    for (int i=0; i<count; i++) {
//        XLog(@"%d %d",i,keyAddr+0x20+i*8);
        
        key = [NSString stringWithCString:getS(*(long*)(keyAddr+0x20+i*8)) encoding:4];
//        XLog(@"%d %d",i,valueAddr+0x20+i*8);
//        XLog(@"%d %d",i,*(long*)(valueAddr+0x20+i*8));
        if(*(long*)(valueAddr+0x20+i*8)){
        value = [NSString stringWithCString:getS(*(long*)(valueAddr+0x20+i*8)) encoding:4];
        }else{
            value=@"null";
        }
        [nsdict setObject:value forKey:key];
    }
    return nsdict;
}
