//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/video.hpp"
#import "opencv2/video/tracking.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>
#import "Tracker.h"

@class TrackerMILParams;



NS_ASSUME_NONNULL_BEGIN

// C++: class TrackerMIL
/**
 * The MIL algorithm trains a classifier in an online manner to separate the object from the
 * background.
 *
 * Multiple Instance Learning avoids the drift problem for a robust tracking. The implementation is
 * based on CITE: MIL .
 *
 * Original code can be found here <http://vision.ucsd.edu/~bbabenko/project_miltrack.shtml>
 *
 * Member of `Video`
 */
CV_EXPORTS @interface TrackerMIL : Tracker


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TrackerMIL> nativePtrTrackerMIL;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TrackerMIL>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TrackerMIL>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_TrackerMIL cv::TrackerMIL::create(TrackerMIL_Params parameters = TrackerMIL::Params())
//
/**
 * Create MIL tracker instance
 * @param parameters MIL parameters TrackerMIL::Params
 */
+ (TrackerMIL*)create:(TrackerMILParams*)parameters NS_SWIFT_NAME(create(parameters:));

/**
 * Create MIL tracker instance
 */
+ (TrackerMIL*)create NS_SWIFT_NAME(create());



@end

NS_ASSUME_NONNULL_END


