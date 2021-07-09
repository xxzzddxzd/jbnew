//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/calib3d.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>


#import "Calib3d.h"



NS_ASSUME_NONNULL_BEGIN

// C++: class UsacParams
/**
 * The UsacParams module
 *
 * Member of `Calib3d`
 */
CV_EXPORTS @interface UsacParams : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::UsacParams> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::UsacParams>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::UsacParams>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::UsacParams::UsacParams()
//
- (instancetype)init;


    //
    // C++: double cv::UsacParams::confidence
    //

@property double confidence;

    //
    // C++: bool cv::UsacParams::isParallel
    //

@property BOOL isParallel;

    //
    // C++: int cv::UsacParams::loIterations
    //

@property int loIterations;

    //
    // C++: LocalOptimMethod cv::UsacParams::loMethod
    //

@property LocalOptimMethod loMethod;

    //
    // C++: int cv::UsacParams::loSampleSize
    //

@property int loSampleSize;

    //
    // C++: int cv::UsacParams::maxIterations
    //

@property int maxIterations;

    //
    // C++: NeighborSearchMethod cv::UsacParams::neighborsSearch
    //

@property NeighborSearchMethod neighborsSearch;

    //
    // C++: int cv::UsacParams::randomGeneratorState
    //

@property int randomGeneratorState;

    //
    // C++: SamplingMethod cv::UsacParams::sampler
    //

@property SamplingMethod sampler;

    //
    // C++: ScoreMethod cv::UsacParams::score
    //

@property ScoreMethod score;

    //
    // C++: double cv::UsacParams::threshold
    //

@property double threshold;


@end

NS_ASSUME_NONNULL_END


