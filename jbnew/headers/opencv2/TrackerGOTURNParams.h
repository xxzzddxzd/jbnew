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
CV_EXPORTS @interface TrackerGOTURNParams : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TrackerGOTURN::Params> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TrackerGOTURN::Params>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TrackerGOTURN::Params>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::TrackerGOTURN::Params::Params()
//
- (instancetype)init;


    //
    // C++: string cv::TrackerGOTURN::Params::modelTxt
    //

@property NSString* modelTxt;

    //
    // C++: string cv::TrackerGOTURN::Params::modelBin
    //

@property NSString* modelBin;


@end

NS_ASSUME_NONNULL_END


