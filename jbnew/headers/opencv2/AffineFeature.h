//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/features2d.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>
#import "Feature2D.h"

@class Feature2D;
@class FloatVector;



NS_ASSUME_NONNULL_BEGIN

// C++: class AffineFeature
/**
 * Class for implementing the wrapper which makes detectors and extractors to be affine invariant,
 * described as ASIFT in CITE: YM11 .
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface AffineFeature : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::AffineFeature> nativePtrAffineFeature;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::AffineFeature>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::AffineFeature>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_AffineFeature cv::AffineFeature::create(Ptr_Feature2D backend, int maxTilt = 5, int minTilt = 0, float tiltStep = 1.4142135623730951f, float rotateStepBase = 72)
//
/**
 * @param backend The detector/extractor you want to use as backend.
 * @param maxTilt The highest power index of tilt factor. 5 is used in the paper as tilt sampling range n.
 * @param minTilt The lowest power index of tilt factor. 0 is used in the paper.
 * @param tiltStep Tilt sampling step `$$\delta_t$$` in Algorithm 1 in the paper.
 * @param rotateStepBase Rotation sampling step factor b in Algorithm 1 in the paper.
 */
+ (AffineFeature*)create:(Feature2D*)backend maxTilt:(int)maxTilt minTilt:(int)minTilt tiltStep:(float)tiltStep rotateStepBase:(float)rotateStepBase NS_SWIFT_NAME(create(backend:maxTilt:minTilt:tiltStep:rotateStepBase:));

/**
 * @param backend The detector/extractor you want to use as backend.
 * @param maxTilt The highest power index of tilt factor. 5 is used in the paper as tilt sampling range n.
 * @param minTilt The lowest power index of tilt factor. 0 is used in the paper.
 * @param tiltStep Tilt sampling step `$$\delta_t$$` in Algorithm 1 in the paper.
 */
+ (AffineFeature*)create:(Feature2D*)backend maxTilt:(int)maxTilt minTilt:(int)minTilt tiltStep:(float)tiltStep NS_SWIFT_NAME(create(backend:maxTilt:minTilt:tiltStep:));

/**
 * @param backend The detector/extractor you want to use as backend.
 * @param maxTilt The highest power index of tilt factor. 5 is used in the paper as tilt sampling range n.
 * @param minTilt The lowest power index of tilt factor. 0 is used in the paper.
 */
+ (AffineFeature*)create:(Feature2D*)backend maxTilt:(int)maxTilt minTilt:(int)minTilt NS_SWIFT_NAME(create(backend:maxTilt:minTilt:));

/**
 * @param backend The detector/extractor you want to use as backend.
 * @param maxTilt The highest power index of tilt factor. 5 is used in the paper as tilt sampling range n.
 */
+ (AffineFeature*)create:(Feature2D*)backend maxTilt:(int)maxTilt NS_SWIFT_NAME(create(backend:maxTilt:));

/**
 * @param backend The detector/extractor you want to use as backend.
 */
+ (AffineFeature*)create:(Feature2D*)backend NS_SWIFT_NAME(create(backend:));


//
//  void cv::AffineFeature::setViewParams(vector_float tilts, vector_float rolls)
//
- (void)setViewParams:(FloatVector*)tilts rolls:(FloatVector*)rolls NS_SWIFT_NAME(setViewParams(tilts:rolls:));


//
//  void cv::AffineFeature::getViewParams(vector_float tilts, vector_float rolls)
//
- (void)getViewParams:(FloatVector*)tilts rolls:(FloatVector*)rolls NS_SWIFT_NAME(getViewParams(tilts:rolls:));


//
//  String cv::AffineFeature::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());



@end

NS_ASSUME_NONNULL_END


