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
CV_EXPORTS @interface TrackerDaSiamRPNParams : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TrackerDaSiamRPN::Params> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TrackerDaSiamRPN::Params>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TrackerDaSiamRPN::Params>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::TrackerDaSiamRPN::Params::Params()
//
- (instancetype)init;


    //
    // C++: string cv::TrackerDaSiamRPN::Params::model
    //

@property NSString* model;

    //
    // C++: string cv::TrackerDaSiamRPN::Params::kernel_cls1
    //

@property NSString* kernel_cls1;

    //
    // C++: string cv::TrackerDaSiamRPN::Params::kernel_r1
    //

@property NSString* kernel_r1;

    //
    // C++: int cv::TrackerDaSiamRPN::Params::backend
    //

@property int backend;

    //
    // C++: int cv::TrackerDaSiamRPN::Params::target
    //

@property int target;


@end

NS_ASSUME_NONNULL_END


