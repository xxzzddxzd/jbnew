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

@class TrackerGOTURNParams;



NS_ASSUME_NONNULL_BEGIN

// C++: class TrackerGOTURN
/**
 * the GOTURN (Generic Object Tracking Using Regression Networks) tracker
 *
 * GOTURN (CITE: GOTURN) is kind of trackers based on Convolutional Neural Networks (CNN). While taking all advantages of CNN trackers,
 * GOTURN is much faster due to offline training without online fine-tuning nature.
 * GOTURN tracker addresses the problem of single target tracking: given a bounding box label of an object in the first frame of the video,
 * we track that object through the rest of the video. NOTE: Current method of GOTURN does not handle occlusions; however, it is fairly
 * robust to viewpoint changes, lighting changes, and deformations.
 * Inputs of GOTURN are two RGB patches representing Target and Search patches resized to 227x227.
 * Outputs of GOTURN are predicted bounding box coordinates, relative to Search patch coordinate system, in format X1,Y1,X2,Y2.
 * Original paper is here: <http://davheld.github.io/GOTURN/GOTURN.pdf>
 * As long as original authors implementation: <https://github.com/davheld/GOTURN#train-the-tracker>
 * Implementation of training algorithm is placed in separately here due to 3d-party dependencies:
 * <https://github.com/Auron-X/GOTURN_Training_Toolkit>
 * GOTURN architecture goturn.prototxt and trained model goturn.caffemodel are accessible on opencv_extra GitHub repository.
 *
 * Member of `Video`
 */
CV_EXPORTS @interface TrackerGOTURN : Tracker


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TrackerGOTURN> nativePtrTrackerGOTURN;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TrackerGOTURN>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TrackerGOTURN>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_TrackerGOTURN cv::TrackerGOTURN::create(TrackerGOTURN_Params parameters = TrackerGOTURN::Params())
//
/**
 * Constructor
 * @param parameters GOTURN parameters TrackerGOTURN::Params
 */
+ (TrackerGOTURN*)create:(TrackerGOTURNParams*)parameters NS_SWIFT_NAME(create(parameters:));

/**
 * Constructor
 */
+ (TrackerGOTURN*)create NS_SWIFT_NAME(create());



@end

NS_ASSUME_NONNULL_END


