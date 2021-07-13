//
//  luafunc.h
//  jbnew
//
//  Created by zd on 2021/7/7.
//

#ifndef luafunc_h
#define luafunc_h

#include "lua.hpp"
#import "p_inc.h"
#import <CoreGraphics/CoreGraphics.h>

@interface luaManager : NSObject
@property bool isLuaRunning ;
@property bool sign_luaQuit ;
@property bool isAutoSnapShot;
@property float screenHeight;
@property float screenWidth;
@property float screenScale;
@property unsigned long long int senderID;
@property lua_State *mainL;
@property lua_State * L;
@property NSString * luaPath;
@property NSString * imagePath;
@property NSMutableDictionary* x5TouchGroup;
+ (instancetype)managerCenter;
-(void)loadLuaWithName:(NSString *)luaPath imgDicPath:(NSString*)imgDicPath;
-(void)scriptStop;
-(int)simulateTouch:(int)pathIndex atPoint:(CGPoint)point withType:(X5_TSPRE_TYPE)type;
-(void)luaClean;
@end

extern bool isLuaRunning;

void scriptStop();

#endif /* luafunc_h */
