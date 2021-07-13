#line 1 "/Users/xuzhengda/Documents/GitHub/jbnew/jbnew/jbnew.xm"
#import "p_inc.h"
#import <objc/message.h>
#include <dlfcn.h>

#import "threadAndAlert.h"
#import "luafunc.h"
#import "NSObject+IOFamilyDlsym.h"


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

                    XLog(@"not running, show menu")
                    [talc showAlertBegin:nil msg:nil];
                }
            }
                
        }
    }
    
    else if (orig_IOHIDEventGetType(event) == kIOHIDEventTypeDigitizer &&
             [[luaManager managerCenter] senderID] == 0
             ){
        [[luaManager managerCenter] setSenderID:orig_IOHIDEventGetSenderID(event)];
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

#line 58 "/Users/xuzhengda/Documents/GitHub/jbnew/jbnew/jbnew.xm"

static void _logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id application) {
    XLog(@"jbnew")
    setListen();
    _logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$(self, _cmd, application);
}








static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$SpringBoard = objc_getClass("SpringBoard"); { MSHookMessageEx(_logos_class$_ungrouped$SpringBoard, @selector(applicationDidFinishLaunching:), (IMP)&_logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$, (IMP*)&_logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$);}} }
#line 72 "/Users/xuzhengda/Documents/GitHub/jbnew/jbnew/jbnew.xm"
