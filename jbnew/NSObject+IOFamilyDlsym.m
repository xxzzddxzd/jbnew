//
//  NSObject+IOFamilyDlsym.m
//  jbnew
//
//  Created by zd on 2021/7/8.
//

#import "NSObject+IOFamilyDlsym.h"
#include <dlfcn.h>
void (*orig_IOHIDEventSystemClientUnregisterEventCallback)(IOHIDEventSystemClientRef client);

void (*orig_IOHIDEventSystemClientUnscheduleWithRunLoop)(IOHIDEventSystemClientRef client, CFRunLoopRef runloop, CFStringRef mode);
uint64_t (*orig_IOHIDEventGetSenderID)(IOHIDEventRef event);
int (*orig_IOHIDEventGetIntegerValue)(IOHIDEventRef event, IOHIDEventField field);
IOHIDEventType (*orig_IOHIDEventGetType)(IOHIDEventRef event);
void (*orig_IOHIDEventSetFloatValue)(IOHIDEventRef event, IOHIDEventField field, IOHIDFloat value);
IOHIDEventRef (*orig_IOHIDEventCreateDigitizerFingerEvent)(CFAllocatorRef allocator, uint64_t timeStamp,
                                                   uint32_t index, uint32_t identity, uint32_t eventMask,
                                                   IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat twist,
                                                   Boolean range, Boolean touch, IOOptionBits options);
void (*orig_IOHIDEventSetIntegerValue)(IOHIDEventRef event, IOHIDEventField field, int value);
void (*orig_IOHIDEventAppendEvent)(IOHIDEventRef event, IOHIDEventRef childEvent);
IOHIDEventRef (*orig_IOHIDEventCreateDigitizerEvent)(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDDigitizerTransducerType type,
                                                            uint32_t index, uint32_t identity, uint32_t eventMask, uint32_t buttonMask,
                                                            IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat barrelPressure,
                                                            Boolean range, Boolean touch, IOOptionBits options);
IOHIDEventRef (*orig_IOHIDEventCreateDigitizerFingerEventWithQuality)(CFAllocatorRef allocator, AbsoluteTime timeStamp,
                                                                             uint32_t index, uint32_t identity, uint32_t eventMask,
                                                                             IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat twist,
                                                                             IOHIDFloat minorRadius, IOHIDFloat majorRadius, IOHIDFloat quality, IOHIDFloat density, IOHIDFloat irregularity,
                                                                             Boolean range, Boolean touch, IOOptionBits options);

void (*orig_IOHIDEventSetIntegerValueWithOptions)(IOHIDEventRef event, IOHIDEventField field, int value, IOOptionBits options);
void (*orig_IOHIDEventSetSenderID)(IOHIDEventRef event, uint64_t senderID);
IOHIDEventSystemClientRef (*orig_IOHIDEventSystemClientCreate)(CFAllocatorRef allocator);
void (*orig_IOHIDEventSystemClientDispatchEvent)(IOHIDEventSystemClientRef client, IOHIDEventRef event);
void (*orig_IOHIDEventSystemClientScheduleWithRunLoop)(IOHIDEventSystemClientRef client, CFRunLoopRef runloop, CFStringRef mode);
void (*orig_IOHIDEventSystemClientRegisterEventCallback)(IOHIDEventSystemClientRef client, IOHIDEventSystemClientEventCallback callback, void* target, void* refcon);




@implementation IOFamilyDlsym
IOFamilyDlsym * center;
+(IOFamilyDlsym *)defaultManager{
    if (!center){
        center = [[IOFamilyDlsym alloc]init];
    }
    return center;
}
-(id)init{
    orig_IOHIDEventSetIntegerValue = dlsym(RTLD_DEFAULT, "IOHIDEventSetIntegerValue");
    orig_IOHIDEventAppendEvent = dlsym(RTLD_DEFAULT, "IOHIDEventAppendEvent");
    orig_IOHIDEventCreateDigitizerEvent = dlsym(RTLD_DEFAULT, "IOHIDEventCreateDigitizerEvent");
    orig_IOHIDEventCreateDigitizerFingerEventWithQuality = dlsym(RTLD_DEFAULT, "IOHIDEventCreateDigitizerFingerEventWithQuality");
    orig_IOHIDEventSetIntegerValueWithOptions = dlsym(RTLD_DEFAULT, "IOHIDEventSetIntegerValueWithOptions");
    orig_IOHIDEventSetSenderID = dlsym(RTLD_DEFAULT, "IOHIDEventSetSenderID");
    orig_IOHIDEventSystemClientCreate= dlsym(RTLD_DEFAULT, "IOHIDEventSystemClientCreate");
    orig_IOHIDEventSystemClientDispatchEvent= dlsym(RTLD_DEFAULT, "IOHIDEventSystemClientDispatchEvent");
    orig_IOHIDEventSystemClientScheduleWithRunLoop=dlsym(RTLD_DEFAULT, "IOHIDEventSystemClientScheduleWithRunLoop");
    orig_IOHIDEventSystemClientRegisterEventCallback=dlsym(RTLD_DEFAULT, "IOHIDEventSystemClientRegisterEventCallback");
    orig_IOHIDEventCreateDigitizerFingerEvent=dlsym(RTLD_DEFAULT, "IOHIDEventCreateDigitizerFingerEvent");
    orig_IOHIDEventSetFloatValue=dlsym(RTLD_DEFAULT, "IOHIDEventSetFloatValue");
    orig_IOHIDEventGetType=dlsym(RTLD_DEFAULT, "IOHIDEventGetType");
    orig_IOHIDEventGetIntegerValue=dlsym(RTLD_DEFAULT, "IOHIDEventGetIntegerValue");
    orig_IOHIDEventGetSenderID=dlsym(RTLD_DEFAULT, "IOHIDEventGetSenderID");
    orig_IOHIDEventSystemClientUnregisterEventCallback=dlsym(RTLD_DEFAULT, "IOHIDEventSystemClientUnregisterEventCallback");
    orig_IOHIDEventSystemClientUnscheduleWithRunLoop=dlsym(RTLD_DEFAULT, "IOHIDEventSystemClientUnscheduleWithRunLoop");
    return self;
}

@end
