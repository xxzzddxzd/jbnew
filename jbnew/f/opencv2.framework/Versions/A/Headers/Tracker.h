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


@class Mat;
@class Rect2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class Tracker
/**
 * Base abstract class for the long-term tracker
 *
 * Member of `Video`
 */
CV_EXPORTS @interface Tracker : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::Tracker> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::Tracker>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::Tracker>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::Tracker::init(Mat image, Rect boundingBox)
//
/**
 * Initialize the tracker with a known bounding box that surrounded the target
 * @param image The initial frame
 * @param boundingBox The initial bounding box
 */
- (void)init:(Mat*)image boundingBox:(Rect2i*)boundingBox NS_SWIFT_NAME(init(image:boundingBox:));


//
//  bool cv::Tracker::update(Mat image, Rect& boundingBox)
//
/**
 * Update the tracker, find the new most likely bounding box for the target
 * @param image The current frame
 * @param boundingBox The bounding box that represent the new target location, if true was returned, not
 *     modified otherwise
 *
 *     @return True means that target was located and false means that tracker cannot locate target in
 *     current frame. Note, that latter *does not* imply that tracker has failed, maybe target is indeed
 *     missing from the frame (say, out of sight)
 */
- (BOOL)update:(Mat*)image boundingBox:(Rect2i*)boundingBox NS_SWIFT_NAME(update(image:boundingBox:));



@end

NS_ASSUME_NONNULL_END


