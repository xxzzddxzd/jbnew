//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/imgproc.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>
#import "GeneralizedHough.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class GeneralizedHoughGuil
/**
 * finds arbitrary template in the grayscale image using Generalized Hough Transform
 *
 * Detects position, translation and rotation CITE: Guil1999 .
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface GeneralizedHoughGuil : GeneralizedHough


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::GeneralizedHoughGuil> nativePtrGeneralizedHoughGuil;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::GeneralizedHoughGuil>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::GeneralizedHoughGuil>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::GeneralizedHoughGuil::setXi(double xi)
//
- (void)setXi:(double)xi NS_SWIFT_NAME(setXi(xi:));


//
//  double cv::GeneralizedHoughGuil::getXi()
//
- (double)getXi NS_SWIFT_NAME(getXi());


//
//  void cv::GeneralizedHoughGuil::setLevels(int levels)
//
- (void)setLevels:(int)levels NS_SWIFT_NAME(setLevels(levels:));


//
//  int cv::GeneralizedHoughGuil::getLevels()
//
- (int)getLevels NS_SWIFT_NAME(getLevels());


//
//  void cv::GeneralizedHoughGuil::setAngleEpsilon(double angleEpsilon)
//
- (void)setAngleEpsilon:(double)angleEpsilon NS_SWIFT_NAME(setAngleEpsilon(angleEpsilon:));


//
//  double cv::GeneralizedHoughGuil::getAngleEpsilon()
//
- (double)getAngleEpsilon NS_SWIFT_NAME(getAngleEpsilon());


//
//  void cv::GeneralizedHoughGuil::setMinAngle(double minAngle)
//
- (void)setMinAngle:(double)minAngle NS_SWIFT_NAME(setMinAngle(minAngle:));


//
//  double cv::GeneralizedHoughGuil::getMinAngle()
//
- (double)getMinAngle NS_SWIFT_NAME(getMinAngle());


//
//  void cv::GeneralizedHoughGuil::setMaxAngle(double maxAngle)
//
- (void)setMaxAngle:(double)maxAngle NS_SWIFT_NAME(setMaxAngle(maxAngle:));


//
//  double cv::GeneralizedHoughGuil::getMaxAngle()
//
- (double)getMaxAngle NS_SWIFT_NAME(getMaxAngle());


//
//  void cv::GeneralizedHoughGuil::setAngleStep(double angleStep)
//
- (void)setAngleStep:(double)angleStep NS_SWIFT_NAME(setAngleStep(angleStep:));


//
//  double cv::GeneralizedHoughGuil::getAngleStep()
//
- (double)getAngleStep NS_SWIFT_NAME(getAngleStep());


//
//  void cv::GeneralizedHoughGuil::setAngleThresh(int angleThresh)
//
- (void)setAngleThresh:(int)angleThresh NS_SWIFT_NAME(setAngleThresh(angleThresh:));


//
//  int cv::GeneralizedHoughGuil::getAngleThresh()
//
- (int)getAngleThresh NS_SWIFT_NAME(getAngleThresh());


//
//  void cv::GeneralizedHoughGuil::setMinScale(double minScale)
//
- (void)setMinScale:(double)minScale NS_SWIFT_NAME(setMinScale(minScale:));


//
//  double cv::GeneralizedHoughGuil::getMinScale()
//
- (double)getMinScale NS_SWIFT_NAME(getMinScale());


//
//  void cv::GeneralizedHoughGuil::setMaxScale(double maxScale)
//
- (void)setMaxScale:(double)maxScale NS_SWIFT_NAME(setMaxScale(maxScale:));


//
//  double cv::GeneralizedHoughGuil::getMaxScale()
//
- (double)getMaxScale NS_SWIFT_NAME(getMaxScale());


//
//  void cv::GeneralizedHoughGuil::setScaleStep(double scaleStep)
//
- (void)setScaleStep:(double)scaleStep NS_SWIFT_NAME(setScaleStep(scaleStep:));


//
//  double cv::GeneralizedHoughGuil::getScaleStep()
//
- (double)getScaleStep NS_SWIFT_NAME(getScaleStep());


//
//  void cv::GeneralizedHoughGuil::setScaleThresh(int scaleThresh)
//
- (void)setScaleThresh:(int)scaleThresh NS_SWIFT_NAME(setScaleThresh(scaleThresh:));


//
//  int cv::GeneralizedHoughGuil::getScaleThresh()
//
- (int)getScaleThresh NS_SWIFT_NAME(getScaleThresh());


//
//  void cv::GeneralizedHoughGuil::setPosThresh(int posThresh)
//
- (void)setPosThresh:(int)posThresh NS_SWIFT_NAME(setPosThresh(posThresh:));


//
//  int cv::GeneralizedHoughGuil::getPosThresh()
//
- (int)getPosThresh NS_SWIFT_NAME(getPosThresh());



@end

NS_ASSUME_NONNULL_END


