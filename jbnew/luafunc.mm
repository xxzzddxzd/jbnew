//
//  luafunc.m
//  jbnew
//
//  Created by zd on 2021/7/7.
//
#import <sys/utsname.h>
#import <CoreImage/CoreImage.h>
#import <UIKit/UIKit.h>
#import <mach-o/dyld.h>
#import <dlfcn.h>
#import <mach/mach_time.h>
#import <objc/runtime.h>

#import "luafunc.h"
#import "imageMatch.h"
#import "p_inc.h"
#import "logCenter.h"
#import "NSObject+IOFamilyDlsym.h"
#import "IOHIDEvent.h"
#import "IOHIDEventTypes.h"
#import "IOHIDService.h"

#define x5Logt(FORMAT, ...) x5LogPrint(X5_LOG_TYPE_LUAMANAGER , [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]);
#define Int2String(i) [NSString stringWithFormat:@"%d", i]

@interface BKUserEventTimer
+ (id)sharedInstance;
- (void)userEventOccurred; //iOS6
- (void)userEventOccurredOnDisplay:(id)arg1; //iOS7
-(BOOL)respondsToSelector:(SEL)selector;
@end

@interface x5Touch : NSObject
{
@public
    int type;
    CGPoint point;
}
@end
@implementation x5Touch
@end

int countall=0;
int pointlast[100][2];

void execTouchAction(int index,int x ,int y,X5_TSPRE_TYPE STTYPE )
{
    if (STTYPE == STTouchDown || STTYPE == STTouchMove) {
        pointlast[index][0] = x;
        pointlast[index][1] = y;
    }
    else
    {
        if (pointlast[index][0] == 0 && pointlast[index][1] == 0) {
            return x5Logt(@"Simutale touchmove failed");
        }
        x = pointlast[index][0];
        y = pointlast[index][1];
        
    }
    
    CGPoint tp1 = CGPointMake(x, y);
    int rev = [[luaManager managerCenter] simulateTouch:index atPoint:tp1 withType:STTYPE];
    x5Logt(@"执行动作 (%f,%f),rev = %d",tp1.x,tp1.y, rev);
    
}


static int lTouchDown(lua_State* L)
{
    int n = lua_gettop(L);
    if (n == 3) {
        int para1 = luaL_checknumber(L,1);
        int para2 = luaL_checknumber(L,2);
        int para3 = luaL_checknumber(L,3);
        execTouchAction(para1, para2, para3, STTouchDown);
        
    }
    else
    {
        x5Logt(@"EXEC TOUCHDOWN ERROR");
    }
    countall+=1;
    return 0;
}


static int lTouchUp(lua_State* L)
{
    int n = lua_gettop(L);
    if (n == 1) {
        int para1 = luaL_checknumber(L,1);
        if (pointlast[para1][0] == 0 && pointlast[para1][1] == 0)
            return 0;
        execTouchAction(para1, pointlast[para1][0], pointlast[para1][1], STTouchUp);
    }
    else
    {
        x5Logt(@"EXEC TOUCHUP ERROR");
    }
    countall+=1;
    return 0;
}

static int lTouchMove(lua_State* L)
{
    int n = lua_gettop(L);
    if (n == 3) {
        int para1 = luaL_checknumber(L,1);
        int para2 = luaL_checknumber(L,2);
        int para3 = luaL_checknumber(L,3);
        execTouchAction(para1,para2,para3, STTouchMove);
    }
    else
    {
        x5Logt(@"EXEC TOUCHMOVE ERROR");
    }
    countall+=1;
    return 0;
}

static int lSleep(lua_State* L)
{
    int n = lua_gettop(L);
    if (n == 1) {
        int para1 = luaL_checknumber(L,1);
        if (para1 > 500) {
            int nowSleep = 0;
            while (nowSleep < para1) {
                if ([[luaManager managerCenter] sign_luaQuit] == true) {
                    return 0;
                }
                nowSleep += 10;
                msleep(10);
            }
        }
        else{
            msleep(para1);
        }
    }
    else
    {
        x5Logt(@"EXEC SLEEP ERROR");
    }
    countall+=1;
    return 0;
}


static int lFindImageInArea(lua_State * L)
{
    int rev1 = 0;
    int rev2 = 0;
    int res = 0;
    int n = lua_gettop(L);
    
    //    x5Logt(@"%d",n);
    if (n == 5) {
        const char * para1 = luaL_checkstring(L,1);    //目标图片文件名或子目录名
        int startX = luaL_checknumber(L,2);    //搜索范围左上X
        int startY = luaL_checknumber(L,3);    //搜索范围左上Y
        //        int searchWidth = luaL_checknumber(L,4);    //搜索范围宽
        //        int searchHeight = luaL_checknumber(L,5);    //搜索范围高
        int endX = luaL_checknumber(L,4);
        int endY = luaL_checknumber(L,5);
        [[imageMatch managerCenter]  execImgFindInArea:para1 startX:startX startY:startY searchWidth:endX-startX searchHeight:endY-startY rev:&res rev1:&rev1 rev2:&rev2];
//        execImgFindInArea(para1, startX, startY, endX - startX, endY - startY, &res, &rev1, &rev2);
        
    }
    x5Logt(@"####Finish found, res = %d", res);
    if (res == 0) {
        rev1 = -1;
        rev2 = -1;
    }
    //RE:
    lua_pushnumber(L,rev1);
    lua_pushnumber(L,rev2);
    countall+=1;
    return 2;
}

static int lCaptureScreen(lua_State * L)
{
    [[luaManager managerCenter] setIsAutoSnapShot:TRUE];
    return 0;
}

static int lSetBrightness(lua_State * L)
{
    [[luaManager managerCenter] setBrightness];
    return 0;
}

NSString * nextImgToSavesFileName = nil;
static int lCaptureScreenAndSaveToFile(lua_State * L)
{
    [[luaManager managerCenter] setIsAutoSnapShot:TRUE];
    int n = lua_gettop(L);
    if (n == 1) {
        const char * para1 = luaL_checkstring(L,1);
        if (para1 != nil ) {
            nextImgToSavesFileName = [NSString stringWithFormat:@"%s", para1];
        }
    }
    return 0;
}
static int lGetImagesDir(lua_State * L)
{
    char * imgdir = (char*)[[[luaManager managerCenter] imagePath] UTF8String];
    if(imgdir!=NULL){
        lua_pushstring(L,imgdir);
        return 1;
    }
    return 0;
}

static int lLog(lua_State * L)
{
    int n = lua_gettop(L);
    if (n == 1) {
        const char * para1 = luaL_checkstring(L,1);
        if (para1 != nil) {
            x5LogPrint(X5_LOG_TYPE_LUA, [NSString stringWithCString:para1 encoding:NSUTF8StringEncoding]);
        }
    }
    return 0;
}

static int lLogParaLoad(lua_State *L)
{
    int n = lua_gettop(L);
    if (n == 2) {
        int para1 = luaL_checknumber(L,1);    //
        int para2 = luaL_checknumber(L,2);    //
        logParaLoad(para1, para2);
    }
    
    return 0;
}

static int lIsLuaRunning(lua_State *L)
{
    lua_pushnumber(L,1);
    return 1;
}

static int lLaunchAppByBundleID(lua_State *L)
{
    static int (*launchByBID)(CFStringRef,Boolean);
    int n = lua_gettop(L);
    int result = 0;
    if (n == 1) {
        const char * para1 = luaL_checkstring(L,1);
        if (para1 != nil) {
            x5Logt(@"启动app使用ID %s", para1);
            void* sbServices = dlopen("/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices", RTLD_LAZY);
            launchByBID = (int (*)(CFStringRef,Boolean))dlsym(sbServices, "SBSLaunchApplicationWithIdentifier");
//            x5Logt(@"获取SBSLaunchApplicationWithIdentifier入口 0x%x", launchByBID);
            if (launchByBID){
                result = launchByBID(__CFStringMakeConstantString(para1), false);
                x5Logt(@"result %d", result);
            }
            dlclose(sbServices);
        }
    }
    lua_pushnumber(L,result);
    return 1;
}
static void LineHookFunc(lua_State *L, lua_Debug *ar)
{
    if(ar->event == LUA_HOOKLINE)
    {
        if([[luaManager managerCenter] sign_luaQuit] == true)
        {
            x5Logt(@"LUA Thread is about to leave. Start clean...");
            
            [[luaManager managerCenter] luaClean];
            
            luaL_error(L, "User about to quit");
            
            
        }
    }
}



@implementation luaManager
static luaManager *center = nil;
IOFamilyDlsym * iokit = [IOFamilyDlsym defaultManager];

-(void)touchSimInit{
    self.x5TouchGroup = [[NSMutableDictionary alloc] init];
}

-(void)scriptStop{
    XLog(@"set scriptStop")
    self.sign_luaQuit = true;
}


-(int)checkFile:(NSString*)fileNameWithPath isFolder:(BOOL)isF{
    BOOL isDir;
    BOOL fileExistsAtPath = [[NSFileManager defaultManager] fileExistsAtPath:fileNameWithPath isDirectory:&isDir];
    if (fileExistsAtPath) {
        if (isDir == isF)
        {
            NSLog(@"%@ check successful",fileNameWithPath);
            return 1;
        }
    }
    NSLog(@"%@ not exist",fileNameWithPath);
    return 0;
}

+ (instancetype)managerCenter {
    if (!center){
        center = [[luaManager alloc] init];
        center.senderID = 0;
    }
    return center;
}

-(NSString*)deviceName{
    struct utsname systemInfo;
    uname(&systemInfo);
    return [NSString stringWithCString:systemInfo.machine
                              encoding:NSUTF8StringEncoding];
}

-(void)luaInit{
    XLog(@"luaInit")
    CGRect screenRect = [[UIScreen mainScreen] bounds];
    self.screenScale = [[UIScreen mainScreen] scale];
    self.screenWidth = screenRect.size.width * self.screenScale;
    self.screenHeight = screenRect.size.height * self.screenScale;
    
    self.mainL=(lua_State *)luaL_newstate();
    luaL_openlibs(self.mainL);
    self.L=lua_newthread(self.mainL);
    luaopen_base(self.L);
    luaopen_table(self.L);
    luaopen_io(self.L);
    luaopen_string(self.L);
    luaopen_math(self.L);
    
    lua_register(self.L, "touchDown",lTouchDown);
    lua_register(self.L, "touchUp", lTouchUp);
    lua_register(self.L, "touchMove", lTouchMove);
    lua_register(self.L, "mSleep", lSleep);
    
    lua_register(self.L, "findImageInRegion", lFindImageInArea);
    lua_register(self.L, "captureScreen", lCaptureScreen);
    lua_register(self.L, "captureScreenToFile", lCaptureScreenAndSaveToFile);
    lua_register(self.L, "getImagesDir", lGetImagesDir);
    lua_register(self.L, "lPrint", lLog);
    lua_register(self.L, "lLogParaSet", lLogParaLoad);
    lua_register(self.L, "isLuaRunning",lIsLuaRunning);
    lua_register(self.L, "launchByID",lLaunchAppByBundleID);
    lua_register(self.L, "setBrightness",lSetBrightness);
//    lua_register(self.L, "getFileList",lGetFileList);
//    lua_register(self.L, "getFileListPath",lGetFileListPath);
//    lua_register(self.L, "writeLineToFile",lWriteLineToFile);
//    lua_register(self.L, "getTimeFormatString",lGetTimeFormatString);
}


-(void)luaClean{
    self.isLuaRunning = FALSE;
    self.sign_luaQuit = FALSE;
    self.isAutoSnapShot = FALSE;
    [x5fPmc refreshBall];
}

-(void)setBrightness{
//    x5Logt(@"setBrightness")
    [[objc_getClass("SBDisplayBrightnessController") alloc] setBrightnessLevel:0];
}

-(void)loadLuaWithName:(NSString *)luaPath imgDicPath:(NSString*)imgDicPath{
    XLog(@"loadLuaWithName %@",luaPath)
    [self scriptStop];
    [self luaInit];
    self.luaPath = luaPath;
    self.imagePath = imgDicPath;
    [self touchSimInit];
    [imageMatch managerCenter];
    lua_sethook(self.L, &LineHookFunc, LUA_MASKLINE, 0);
    [self luaClean];
    
//    开始运行
    self.isLuaRunning=TRUE;
    [x5fPmc refreshBall];
//    开始截图
    [[imageMatch managerCenter] startLoopForScreenShot];
//    调低亮度
    [self setBrightness];
    int s = luaL_dofile(self.L,[self.luaPath UTF8String]);//只是对代码进行载入并不执行
    if ( s!=0 )
    {
        XLog(@"LUA LOAD ERROR %s",lua_tostring(self.L, -1));
        [self luaClean];
        [self PrintLuaError:self.L sErr:s];
        return;
    }
    lua_getglobal(self.L, "main");
    XLog(@"IN executeLuaFile()");

    double abtime =  CFAbsoluteTimeGetCurrent();

    s = lua_resume(self.L,0,0);
    if ( s!=0 )
    {
        [self luaClean];
        [self PrintLuaError:self.L sErr:s];
        return ;
    }

    abtime =  CFAbsoluteTimeGetCurrent() - abtime;
    XLog(@"\nReplay end.\nTotal commands: %d.\nExectime: %lf",countall,abtime);
    [self luaClean];
    return;
}

-(void)PrintLuaError:(lua_State*)L sErr:(int) sErr{
    if (sErr==0)
    {
        return;
    }
    const char* error;
    switch(sErr)
    {
        case LUA_ERRSYNTAX://编译时错误
            /*const char *buf = "mylib.myfun()2222";类似这行语句可以引起编译时错误*/
            NSLog(@"%s","syntax error during pre-compilation");
            break;
        case LUA_ERRMEM://内存错误
            NSLog(@"%s","memory allocation error");
            break;
        case LUA_ERRRUN://运行时错误
            /*const char *buf = "my222lib.myfun()";类似这行语句可以引起运行时错误，my222lib实际上不存在这样的库，返回的值是nil*/
            NSLog(@"%s","a runtime error");
            break;
        case LUA_YIELD://线程被挂起错误
            NSLog(@"%s","Thread has Suspended");
            return;
            break;
        case LUA_ERRERR://在进行错误处理时发生错误
            NSLog(@"%s","error while running the error handler function");
            break;
        default:
            break;
    }
    error = lua_tostring(L, -1);//打印错误结果
    NSLog(@"!!!!!LUA RUN ERROR: %s",error);
    lua_pop(L, 1);
}


-(int)simulateTouch:(int)pathIndex atPoint:(CGPoint)point withType:(X5_TSPRE_TYPE)type
{
    [self SimulateTouchEvent:0 pathIndex:pathIndex type:type touchPoint:point];
    return pathIndex;
}

-(void)SimulateTouchEvent:(mach_port_t)port pathIndex:(int)pathIndex  type:(int)type touchPoint:(CGPoint)touchPoint{
    x5Logt(@"*** index:%d type:%d touch:%@", pathIndex, type, NSStringFromCGPoint(touchPoint));
    if (pathIndex == 0) return;
    x5Touch * touch = [self.x5TouchGroup objectForKey:Int2String(pathIndex)] ?: [[x5Touch alloc] init] ;
    touch->type = type;
    touch->point = touchPoint;
    [self.x5TouchGroup setObject:touch forKey:Int2String(pathIndex)];
    [self SendTouchesEvent:port ];

}


-(void)SendTouchesEvent:(mach_port_t) port{
    x5Logt(@"SendTouchesEvent");
    if ([[self.x5TouchGroup allKeys] count] == 0) {
        return;
    }
    uint64_t abTime = mach_absolute_time();
    AbsoluteTime timeStamp = *(AbsoluteTime *) &abTime;

    IOHIDEventRef handEvent = orig_IOHIDEventCreateDigitizerEvent(kCFAllocatorDefault, timeStamp, 1 ? 3 : kIOHIDDigitizerTransducerTypeHand, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
#define kIOHIDEventFieldDigitizerDisplayIntegrated 720921
#define kIOHIDEventFieldBuiltIn 4

    orig_IOHIDEventSetIntegerValueWithOptions(handEvent, kIOHIDEventFieldDigitizerDisplayIntegrated, 1, -268435456); //-268435456
    orig_IOHIDEventSetIntegerValueWithOptions(handEvent, kIOHIDEventFieldBuiltIn, 1, -268435456); //-268435456
    orig_IOHIDEventSetSenderID(handEvent, self.senderID);
    
    int handEventMask = 0;
    int handEventTouch = 0;
    int touchingCount = 0;
    int i = 0;
    for (NSString* pIndex in [self.x5TouchGroup allKeys])
    {
        x5Touch* touch = [self.x5TouchGroup objectForKey:pIndex];
        int touchType = touch->type;
        
        int eventM = (touchType == 0) ? kIOHIDDigitizerEventPosition : (kIOHIDDigitizerEventRange | kIOHIDDigitizerEventTouch); //Originally, 0, 1 and 2 are used too...
        Boolean touch_ = (touchType == 2) ? 0 : 1;
        
        float x = touch->point.x;
        float y = touch->point.y;
        
        float rX, rY;
        
        //=========================
        
        //0~1 point
        CGRect screenRect = [[UIScreen mainScreen] bounds];
        CGFloat screenScale = [[UIScreen mainScreen] scale];
        
        float f1 = screenRect.size.width;
        float f2 = screenRect.size.height;
        float width = MIN(f1, f2);
        float height = MAX(f1, f2);
        
        rX = x/width/screenScale;
        rY = y/height/screenScale;
              
        x5Logt(@"#####%f, %f, %f, %f",rX,rY,width,height);
        IOHIDEventRef fingerEvent = orig_IOHIDEventCreateDigitizerFingerEventWithQuality(kCFAllocatorDefault, timeStamp,
                                                                                    [pIndex intValue], i + 2, eventM, rX, rY, 0, 0, 0, 0, 0, 0, 0, 0, touch_, touch_, 0);
        orig_IOHIDEventAppendEvent(handEvent, fingerEvent);
        i++;
        handEventTouch |= touch_;
        if (touchType == 0) {
            handEventMask |= kIOHIDDigitizerEventPosition; //4
        }else{
            handEventMask |= (kIOHIDDigitizerEventRange | kIOHIDDigitizerEventTouch | kIOHIDDigitizerEventIdentity); //1 + 2 + 32 = 35
        }
        
        if (touchType == 2) {
            handEventMask |= kIOHIDDigitizerEventPosition;
            [self.x5TouchGroup removeObjectForKey:pIndex];
            [touch release];
        }else{
            touchingCount++;
        }
    }
    
    orig_IOHIDEventSetIntegerValueWithOptions(handEvent, kIOHIDEventFieldDigitizerEventMask, handEventMask, -268435456);
    orig_IOHIDEventSetIntegerValueWithOptions(handEvent, kIOHIDEventFieldDigitizerRange, handEventTouch, -268435456);
    orig_IOHIDEventSetIntegerValueWithOptions(handEvent, kIOHIDEventFieldDigitizerTouch, handEventTouch, -268435456);
    
    static IOHIDEventSystemClientRef client_(NULL);
    if (client_ == NULL)
        client_ = orig_IOHIDEventSystemClientCreate(kCFAllocatorDefault);
    
    orig_IOHIDEventSetSenderID(handEvent, self.senderID); //0xDEFACEDBEEFFECE5
    orig_IOHIDEventSystemClientDispatchEvent(client_, handEvent);
    CFRelease(handEvent);
    
}
@end

