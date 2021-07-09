//
//  hxshxx.h
//  hxshx
//
//  Created by zd on 2018/9/7.
//

#ifndef pinch
#define pinch

#import <mach-o/dyld.h>
#define XLog(FORMAT, ...) NSLog(@"#pc %@" , [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]);
#define psta XLog(@"%lx,%@",_dyld_get_image_vmaddr_slide(0),[NSThread callStackSymbols]);
//#define x5Logt(FORMAT, ...) x5LogPrint(X5_LOG_TYPE_LUAMANAGER , [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]);

#define LUA_DIC "/script"

//设定mSleep函数
#define msleep(n) usleep(n*1000)

//定义端口名称
#define MY_X5_X5SCRIPTD @"com.x5.x5scriptd"



typedef enum {
    STTouchMove = 0,
    STTouchDown,
    STTouchUp
} X5_TSPRE_TYPE;
#endif



