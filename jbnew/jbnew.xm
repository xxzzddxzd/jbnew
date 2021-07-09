#import "p_inc.h"
#import <objc/message.h>
#include <dlfcn.h>

#import "threadAndAlert.h"
#import "luafunc.h"
#import "NSObject+IOFamilyDlsym.h"
BOOL isShow = FALSE;


void handle_event (void* target, void* filename, IOHIDEventQueueRef service, IOHIDEventRef event){
    if (orig_IOHIDEventGetType(event)==kIOHIDEventTypeKeyboard){
        int usage = orig_IOHIDEventGetIntegerValue(event, kIOHIDEventFieldKeyboardUsage);
        XLog(@"检测到按键：%d  0x%x", usage, usage);
        if (usage == 0xe9 || usage == 0xea ) { //|| usage == 0x40 home
            XLog(@"检测到音量键按下  %d",isShow);
            id talc = [threadAndAlert managerCenter];
            if ([[luaManager managerCenter] isLuaRunning]) {
                XLog(@"check is running, stop now")
                isShow = TRUE;
                [talc showAlertMsg:@"Stop"];
                [[luaManager managerCenter] scriptStop];
            }
            else if(isShow == FALSE)
            {
                XLog(@"isShow == FALSE")
                isShow = TRUE;
                XLog(@"not running, show menu")
                [talc showAlertBegin:nil msg:nil];
            }
        }
    }
    /* iOS14 改动 需要使用指定的senderid 通过每次屏幕触摸来获得*/
    else if (orig_IOHIDEventGetType(event) == kIOHIDEventTypeDigitizer){
        [[luaManager managerCenter] setSenderID:orig_IOHIDEventGetSenderID(event)];
        XLog(@"sender id is: %qX", [[luaManager managerCenter] senderID]);
    }
}

void setListen(){
    XLog(@"jbnew setListen");
    IOHIDEventSystemClientRef ioHIDEventSystem = orig_IOHIDEventSystemClientCreate(kCFAllocatorDefault);
    if (ioHIDEventSystem == NULL) {
        XLog(@"IOHIDEventSystemClientCreate failed.\n");
    }
    orig_IOHIDEventSystemClientScheduleWithRunLoop(ioHIDEventSystem, CFRunLoopGetMain(), kCFRunLoopDefaultMode);
    orig_IOHIDEventSystemClientRegisterEventCallback(ioHIDEventSystem, handle_event, NULL, NULL);

    XLog(@"TAG2:listenner add successful");
}

%hook SpringBoard
-(void)applicationDidFinishLaunching:(id)application {
    XLog(@"jbnew")
    setListen();
    %orig;
}
%end
