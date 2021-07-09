//
//  csharpfunc.h
//  ykcs
//
//  Created by 徐正达 on 2018/9/4.
//
#ifdef __cplusplus
extern "C" {
#endif
    
#ifdef __OBJC__
#import <Foundation/Foundation.h>
#endif
    
#ifdef __cplusplus
}
#endif


#ifndef csharpfunc_h
#define csharpfunc_h

//#import <Foundation/Foundation.h>
#import <substrate.h>
#import <mach-o/dyld.h>
//#import <Foundation/Foundation.h>
#import <sys/socket.h>
#import "csharpfunc.h"
#define XLog(FORMAT, ...) NSLog(@"#pc %@" , [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]);
//#define XLog(...)
#define psta XLog(@"%lx,%@",_dyld_get_image_vmaddr_slide(0),[NSThread callStackSymbols]);
#define __int64 int64_t
#define __int8 int8_t
int getLen(long inStr);
void setLen(long inStr,char * s);
char* getS(long inStr);
void setS(long inStr, char* s);
id byteArraySaveToTmpDic(long inAddr,NSString* name);
NSData * byteArraySaveToTmpDic_c(long inAddr,long len, NSString * name);
NSData * objectSaveToTmpDic(id data,NSString * name);
id byteArraySaveToTmpDic_revdata(long inAddr,NSString * name);
NSData *uncompressZippedData(NSData *compressedData);
void memPrint64(long start, long len, int type);
NSString * DataToHexStr(NSData *data);
NSMutableDictionary * dumpStringTStringTDictionary(long csharpDict);
NSMutableDictionary * dumpStringTObjectTDictionary(long csharpDict);
NSString * loadYJMfromTTatIndex(int index);
NSString * tmpPath(NSString* name);
#endif /* csharpfunc_h */



//1f2003d503008052  找entrypoint2  __GLOBAL__sub_I_Il2CppCodeRegistration.cpp:   CppCodegenRegistration

