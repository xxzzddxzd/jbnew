//
//  threadAndAlert.m
//  jbnew
//
//  Created by zd on 2021/7/6.
//

#import <Foundation/Foundation.h>
#import <objc/message.h>
#import "luafunc.h"
#import "threadAndAlert.h"
#import "p_inc.h"

@implementation threadAndAlert
static threadAndAlert *center = nil;

-(bool)getIsShow{
    return self.isShow;
}
-(void)showAlertBegin:(NSString *)title msg:(NSString *)message
{
    self.isShow=true;
    NSString * path =[NSString stringWithUTF8String:LUA_DIC];
    NSArray * ary =  [[NSFileManager defaultManager] contentsOfDirectoryAtPath:path error:nil];
    XLog(@"%@ %@",path,ary);
    UIAlertView*alert = [[UIAlertView alloc]initWithTitle:nil
                                                  message:nil
                                                 delegate:self
                                        cancelButtonTitle:@"取消"
                                        otherButtonTitles: nil];
    for (NSString*obj in ary) {
        if ([obj containsString:@".zip"]) {
            [alert addButtonWithTitle:obj];
        }else{
            BOOL isDic;
            NSString* fullPath = [NSString stringWithFormat:@"%@/%@",path,obj];
            [[NSFileManager defaultManager] fileExistsAtPath:fullPath isDirectory:&isDic];
            if (isDic && [[NSFileManager defaultManager] fileExistsAtPath:[fullPath stringByAppendingString:@"/1234.lua"] isDirectory:nil]) {
                [alert addButtonWithTitle:obj];
            }
        }
    }
    [alert setTag:1];
    [alert show];

}

-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    self.isShow = FALSE;
    NSLog(@"#################");
    NSLog(@"tag:%ld", (long)alertView.tag);
    switch (alertView.tag) {
        case 1:
        {
            
            NSString * path =[NSString stringWithUTF8String:LUA_DIC];
            NSString * obj = [alertView buttonTitleAtIndex:buttonIndex];
            if ( ![obj isEqualToString:@"取消"]){
                NSLog(@"file %@", obj);
                BOOL isDic;
                NSString* fullPath = [NSString stringWithFormat:@"%@/%@",path,obj];
                NSLog(@"file %@", fullPath);
                [[NSFileManager defaultManager] fileExistsAtPath:fullPath isDirectory:&isDic];
                if (isDic && [[NSFileManager defaultManager] fileExistsAtPath:[fullPath stringByAppendingString:@"/1234.lua"] isDirectory:nil]) {
                    NSString * luaFilePath = [fullPath stringByAppendingString:@"/1234.lua"];
                    NSString * luaImageFolder = [fullPath stringByAppendingString:@"/"];
                    [[threadAndAlert managerCenter] x5ThreadDetach:^{
                        NSLog(@"execLua %@ %@",luaFilePath,luaImageFolder);
                        id luaCenter = [luaManager managerCenter];
                        [luaCenter loadLuaWithName:luaFilePath imgDicPath:luaImageFolder];
                    }];
                }
            }
        }
        case 2:
            break;
        default:
            break;
    }
    
}


- (void)perfrombgg:(_x5ThreadBlock) block {
    @autoreleasepool {
        block();
    }
}

-(void)x5ThreadDetach:(_x5ThreadBlock) block{
    [NSThread detachNewThreadSelector:@selector(perfrombgg:) toTarget:center withObject:[[block copy] autorelease]];
}

+ (instancetype)managerCenter {
    if (!center){
        center = [[threadAndAlert alloc] init];
    }
    XLog(@"threadAndAlert managerCenter %@",center)
    return center;
}

-(void)showAlertMsg:(NSString *)title //msg:(NSString *)message
{
    self.isShow=true;
    UIAlertView * alert = [[UIAlertView alloc]initWithTitle:title
                                                    message:nil
                                                   delegate:self
                                          cancelButtonTitle:@"确定"
                                          otherButtonTitles:nil];
    [alert setTag:2];
    [alert show];
}
@end
