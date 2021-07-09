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






NS_ASSUME_NONNULL_BEGIN

// C++: class Params
/**
 * The Params module
 *
 * Member of `Video`
 */
CV_EXPORTS @interface TrackerMILParams : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TrackerMIL::Params> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TrackerMIL::Params>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TrackerMIL::Params>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::TrackerMIL::Params::Params()
//
- (instancetype)init;


    //
    // C++: float cv::TrackerMIL::Params::samplerInitInRadius
    //

@property float samplerInitInRadius;

    //
    // C++: int cv::TrackerMIL::Params::samplerInitMaxNegNum
    //

@property int samplerInitMaxNegNum;

    //
    // C++: float cv::TrackerMIL::Params::samplerSearchWinSize
    //

@property float samplerSearchWinSize;

    //
    // C++: float cv::TrackerMIL::Params::samplerTrackInRadius
    //

@property float samplerTrackInRadius;

    //
    // C++: int cv::TrackerMIL::Params::samplerTrackMaxPosNum
    //

@property int samplerTrackMaxPosNum;

    //
    // C++: int cv::TrackerMIL::Params::samplerTrackMaxNegNum
    //

@property int samplerTrackMaxNegNum;

    //
    // C++: int cv::TrackerMIL::Params::featureSetNumFeatures
    //

@property int featureSetNumFeatures;


@end

NS_ASSUME_NONNULL_END


