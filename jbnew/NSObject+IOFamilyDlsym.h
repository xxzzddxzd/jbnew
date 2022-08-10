//
//  NSObject+IOFamilyDlsym.h
//  jbnew
//
//  Created by zd on 2021/7/8.
//

#import <Foundation/Foundation.h>
#import "IOKit/hid/IOHIDEvent.h"
#import "IOKit/hid/IOHIDEventSystemClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface IOFamilyDlsym: NSObject
+(IOFamilyDlsym *)defaultManager;
@end
extern void (*orig_IOHIDEventSystemClientUnregisterEventCallback)(IOHIDEventSystemClientRef client);

extern void (*orig_IOHIDEventSystemClientUnscheduleWithRunLoop)(IOHIDEventSystemClientRef client, CFRunLoopRef runloop, CFStringRef mode);

extern uint64_t (*orig_IOHIDEventGetSenderID)(IOHIDEventRef event);
extern int (*orig_IOHIDEventGetIntegerValue)(IOHIDEventRef event, IOHIDEventField field);
extern IOHIDEventType (*orig_IOHIDEventGetType)(IOHIDEventRef event);
extern void (*orig_IOHIDEventSetFloatValue)(IOHIDEventRef event, IOHIDEventField field, IOHIDFloat value);
extern IOHIDEventRef (*orig_IOHIDEventCreateDigitizerFingerEvent)(CFAllocatorRef allocator, uint64_t timeStamp,
                                                                  uint32_t index, uint32_t identity, uint32_t eventMask,
                                                                  IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat twist,
                                                                  Boolean range, Boolean touch, IOOptionBits options);
extern void (*orig_IOHIDEventSetIntegerValue)(IOHIDEventRef event, IOHIDEventField field, int value);
extern void (*orig_IOHIDEventAppendEvent)(IOHIDEventRef event, IOHIDEventRef childEvent);
extern IOHIDEventRef (*orig_IOHIDEventCreateDigitizerEvent)(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDDigitizerTransducerType type,
                                                            uint32_t index, uint32_t identity, uint32_t eventMask, uint32_t buttonMask,
                                                            IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat barrelPressure,
                                                            Boolean range, Boolean touch, IOOptionBits options);
extern IOHIDEventRef (*orig_IOHIDEventCreateDigitizerFingerEventWithQuality)(CFAllocatorRef allocator, AbsoluteTime timeStamp,
                                                                             uint32_t index, uint32_t identity, uint32_t eventMask,
                                                                             IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat twist,
                                                                             IOHIDFloat minorRadius, IOHIDFloat majorRadius, IOHIDFloat quality, IOHIDFloat density, IOHIDFloat irregularity,
                                                                             Boolean range, Boolean touch, IOOptionBits options);

extern void (*orig_IOHIDEventSetIntegerValueWithOptions)(IOHIDEventRef event, IOHIDEventField field, int value, IOOptionBits options);
extern void (*orig_IOHIDEventSetSenderID)(IOHIDEventRef event, uint64_t senderID);
extern IOHIDEventSystemClientRef (*orig_IOHIDEventSystemClientCreate)(CFAllocatorRef allocator);
extern void (*orig_IOHIDEventSystemClientDispatchEvent)(IOHIDEventSystemClientRef client, IOHIDEventRef event);
extern void (*orig_IOHIDEventSystemClientScheduleWithRunLoop)(IOHIDEventSystemClientRef client, CFRunLoopRef runloop, CFStringRef mode);
extern void (*orig_IOHIDEventSystemClientRegisterEventCallback)(IOHIDEventSystemClientRef client, IOHIDEventSystemClientEventCallback callback, void* target, void* refcon);


NS_ASSUME_NONNULL_END
