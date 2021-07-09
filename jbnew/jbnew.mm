#line 1 "/Users/xuzhengda/Documents/GitHub/jbnew/jbnew/jbnew.xm"
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
        if (usage == 0xe9 || usage == 0xea ) { 
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


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class SpringBoard; 
static void (*_logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$)(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST, SEL, id); 

#line 52 "/Users/xuzhengda/Documents/GitHub/jbnew/jbnew/jbnew.xm"

static void _logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id application) {
    XLog(@"jbnew")
    setListen();
    _logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$(self, _cmd, application);
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$SpringBoard = objc_getClass("SpringBoard"); { MSHookMessageEx(_logos_class$_ungrouped$SpringBoard, @selector(applicationDidFinishLaunching:), (IMP)&_logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$, (IMP*)&_logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$);}} }
#line 59 "/Users/xuzhengda/Documents/GitHub/jbnew/jbnew/jbnew.xm"
