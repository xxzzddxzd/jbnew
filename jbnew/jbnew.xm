#import "p_inc.h"
#import <objc/message.h>
#include <dlfcn.h>

#import "threadAndAlert.h"
#import "luafunc.h"
#import "NSObject+IOFamilyDlsym.h"
#import "x5fPmc.h"


static CFTimeInterval startTime = 0;
void handle_event (void* target, void* filename, IOHIDEventQueueRef service, IOHIDEventRef event){
    if (orig_IOHIDEventGetType(event)==kIOHIDEventTypeKeyboard){
        int usage = orig_IOHIDEventGetIntegerValue(event, kIOHIDEventFieldKeyboardUsage);
        if ( ( usage == 0xea)
            && orig_IOHIDEventGetIntegerValue(event, kIOHIDEventFieldKeyboardDown) == 0 ) {
            CFTimeInterval currentTime = CACurrentMediaTime();

            id talc = [threadAndAlert managerCenter];
            if ([[luaManager managerCenter] isLuaRunning]) {
                XLog(@"check is running, stop now")
                [talc showAlertMsg:@"Stop"];
                [[luaManager managerCenter] scriptStop];
            }
            else {
                if (currentTime - startTime > 0.4){
                    startTime = CACurrentMediaTime();
                    return;
                }
                if([talc isShow] == FALSE){
//                    XLog(@"isShow == FALSE")
                    XLog(@"not running, show menu")
                    [talc showAlertBegin:nil msg:nil];
                }
            }
                
        }
    }
    /* iOS14 改动 需要使用指定的senderid 通过每次屏幕触摸来获得*/
    else if (orig_IOHIDEventGetType(event) == kIOHIDEventTypeDigitizer &&
             [[luaManager managerCenter] senderID] == 0
             ){
        [[luaManager managerCenter] setSenderID:orig_IOHIDEventGetSenderID(event)];
    }
}

void getTouchFromBall(){
    id talc = [threadAndAlert managerCenter];
    if ([[luaManager managerCenter] isLuaRunning]) {
        XLog(@"check is running, stop now")
//        [talc showAlertMsg:@"Stop"];
        [[luaManager managerCenter] scriptStop];
    }
    else {
        [talc runLastScript];
//        if (currentTime - startTime > 0.4){
//            startTime = CACurrentMediaTime();
//            return;
//        }
//        if([talc isShow] == FALSE){
////                    XLog(@"isShow == FALSE")
//            XLog(@"not running, show menu")
//            [talc showAlertBegin:nil msg:nil];
//        }
    }
}

void setListen(){
    XLog(@"jbnew setListen");
    IOHIDEventSystemClientRef ioHIDEventSystem = orig_IOHIDEventSystemClientCreate(kCFAllocatorDefault);
    if (ioHIDEventSystem == NULL) {
        XLog(@"IOHIDEventSystemClientCreate failed.\n");
    }
    orig_IOHIDEventSystemClientScheduleWithRunLoop(ioHIDEventSystem, CFRunLoopGetCurrent(), kCFRunLoopDefaultMode);
    orig_IOHIDEventSystemClientRegisterEventCallback(ioHIDEventSystem, handle_event, NULL, NULL);

    XLog(@"TAG2:listenner add successful");
}

%hook SpringBoard
-(void)applicationDidFinishLaunching:(id)application {
    XLog(@"jbnew")
    [x5fPmc defaultCenter];
    setListen();
    %orig;
}
%end

//%hook SBDisplayBrightnessController
//-(void)setBrightnessLevel:(float)arg1 {
//    XLog(@"setBrightnessLevel %f",arg1)
//    %orig;
//}
//%end
