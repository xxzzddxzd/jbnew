//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/photo.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>
#import "CalibrateCRF.h"

@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class CalibrateRobertson
/**
 * Inverse camera response function is extracted for each brightness value by minimizing an objective
 * function as linear system. This algorithm uses all image pixels.
 *
 * For more information see CITE: RB99 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface CalibrateRobertson : CalibrateCRF


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::CalibrateRobertson> nativePtrCalibrateRobertson;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::CalibrateRobertson>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::CalibrateRobertson>)nativePtr;
#endif


#pragma mark - Methods


//
//  int cv::CalibrateRobertson::getMaxIter()
//
- (int)getMaxIter NS_SWIFT_NAME(getMaxIter());


//
//  void cv::CalibrateRobertson::setMaxIter(int max_iter)
//
- (void)setMaxIter:(int)max_iter NS_SWIFT_NAME(setMaxIter(max_iter:));


//
//  float cv::CalibrateRobertson::getThreshold()
//
- (float)getThreshold NS_SWIFT_NAME(getThreshold());


//
//  void cv::CalibrateRobertson::setThreshold(float threshold)
//
- (void)setThreshold:(float)threshold NS_SWIFT_NAME(setThreshold(threshold:));


//
//  Mat cv::CalibrateRobertson::getRadiance()
//
- (Mat*)getRadiance NS_SWIFT_NAME(getRadiance());



@end

NS_ASSUME_NONNULL_END


