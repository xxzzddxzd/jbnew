//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/imgproc.hpp"
#import "opencv2/imgproc/segmentation.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>


@class Mat;
@class Point2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class IntelligentScissorsMB
/**
 * Intelligent Scissors image segmentation
 *
 * This class is used to find the path (contour) between two points
 * which can be used for image segmentation.
 *
 * Usage example:
 * SNIPPET: snippets/imgproc_segmentation.cpp usage_example_intelligent_scissors
 *
 * Reference: <a href="http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.138.3811&rep=rep1&type=pdf">"Intelligent Scissors for Image Composition"</a>
 * algorithm designed by Eric N. Mortensen and William A. Barrett, Brigham Young University
 * CITE: Mortensen95intelligentscissors
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface IntelligentScissorsMB : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::segmentation::IntelligentScissorsMB> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::segmentation::IntelligentScissorsMB>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::segmentation::IntelligentScissorsMB>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::segmentation::IntelligentScissorsMB::IntelligentScissorsMB()
//
- (instancetype)init;


//
//  IntelligentScissorsMB cv::segmentation::IntelligentScissorsMB::setWeights(float weight_non_edge, float weight_gradient_direction, float weight_gradient_magnitude)
//
/**
 * Specify weights of feature functions
 *
 * Consider keeping weights normalized (sum of weights equals to 1.0)
 * Discrete dynamic programming (DP) goal is minimization of costs between pixels.
 *
 * @param weight_non_edge Specify cost of non-edge pixels (default: 0.43f)
 * @param weight_gradient_direction Specify cost of gradient direction function (default: 0.43f)
 * @param weight_gradient_magnitude Specify cost of gradient magnitude function (default: 0.14f)
 */
- (IntelligentScissorsMB*)setWeights:(float)weight_non_edge weight_gradient_direction:(float)weight_gradient_direction weight_gradient_magnitude:(float)weight_gradient_magnitude NS_SWIFT_NAME(setWeights(weight_non_edge:weight_gradient_direction:weight_gradient_magnitude:));


//
//  IntelligentScissorsMB cv::segmentation::IntelligentScissorsMB::setGradientMagnitudeMaxLimit(float gradient_magnitude_threshold_max = 0.0f)
//
/**
 * Specify gradient magnitude max value threshold
 *
 * Zero limit value is used to disable gradient magnitude thresholding (default behavior, as described in original article).
 * Otherwize pixels with `gradient magnitude >= threshold` have zero cost.
 *
 * NOTE: Thresholding should be used for images with irregular regions (to avoid stuck on parameters from high-contract areas, like embedded logos).
 *
 * @param gradient_magnitude_threshold_max Specify gradient magnitude max value threshold (default: 0, disabled)
 */
- (IntelligentScissorsMB*)setGradientMagnitudeMaxLimit:(float)gradient_magnitude_threshold_max NS_SWIFT_NAME(setGradientMagnitudeMaxLimit(gradient_magnitude_threshold_max:));

/**
 * Specify gradient magnitude max value threshold
 *
 * Zero limit value is used to disable gradient magnitude thresholding (default behavior, as described in original article).
 * Otherwize pixels with `gradient magnitude >= threshold` have zero cost.
 *
 * NOTE: Thresholding should be used for images with irregular regions (to avoid stuck on parameters from high-contract areas, like embedded logos).
 *
 */
- (IntelligentScissorsMB*)setGradientMagnitudeMaxLimit NS_SWIFT_NAME(setGradientMagnitudeMaxLimit());


//
//  IntelligentScissorsMB cv::segmentation::IntelligentScissorsMB::setEdgeFeatureZeroCrossingParameters(float gradient_magnitude_min_value = 0.0f)
//
/**
 * Switch to "Laplacian Zero-Crossing" edge feature extractor and specify its parameters
 *
 * This feature extractor is used by default according to article.
 *
 * Implementation has additional filtering for regions with low-amplitude noise.
 * This filtering is enabled through parameter of minimal gradient amplitude (use some small value 4, 8, 16).
 *
 * NOTE: Current implementation of this feature extractor is based on processing of grayscale images (color image is converted to grayscale image first).
 *
 * NOTE: Canny edge detector is a bit slower, but provides better results (especially on color images): use setEdgeFeatureCannyParameters().
 *
 * @param gradient_magnitude_min_value Minimal gradient magnitude value for edge pixels (default: 0, check is disabled)
 */
- (IntelligentScissorsMB*)setEdgeFeatureZeroCrossingParameters:(float)gradient_magnitude_min_value NS_SWIFT_NAME(setEdgeFeatureZeroCrossingParameters(gradient_magnitude_min_value:));

/**
 * Switch to "Laplacian Zero-Crossing" edge feature extractor and specify its parameters
 *
 * This feature extractor is used by default according to article.
 *
 * Implementation has additional filtering for regions with low-amplitude noise.
 * This filtering is enabled through parameter of minimal gradient amplitude (use some small value 4, 8, 16).
 *
 * NOTE: Current implementation of this feature extractor is based on processing of grayscale images (color image is converted to grayscale image first).
 *
 * NOTE: Canny edge detector is a bit slower, but provides better results (especially on color images): use setEdgeFeatureCannyParameters().
 *
 */
- (IntelligentScissorsMB*)setEdgeFeatureZeroCrossingParameters NS_SWIFT_NAME(setEdgeFeatureZeroCrossingParameters());


//
//  IntelligentScissorsMB cv::segmentation::IntelligentScissorsMB::setEdgeFeatureCannyParameters(double threshold1, double threshold2, int apertureSize = 3, bool L2gradient = false)
//
/**
 * Switch edge feature extractor to use Canny edge detector
 *
 * NOTE: "Laplacian Zero-Crossing" feature extractor is used by default (following to original article)
 *
 * @see `Canny`
 */
- (IntelligentScissorsMB*)setEdgeFeatureCannyParameters:(double)threshold1 threshold2:(double)threshold2 apertureSize:(int)apertureSize L2gradient:(BOOL)L2gradient NS_SWIFT_NAME(setEdgeFeatureCannyParameters(threshold1:threshold2:apertureSize:L2gradient:));

/**
 * Switch edge feature extractor to use Canny edge detector
 *
 * NOTE: "Laplacian Zero-Crossing" feature extractor is used by default (following to original article)
 *
 * @see `Canny`
 */
- (IntelligentScissorsMB*)setEdgeFeatureCannyParameters:(double)threshold1 threshold2:(double)threshold2 apertureSize:(int)apertureSize NS_SWIFT_NAME(setEdgeFeatureCannyParameters(threshold1:threshold2:apertureSize:));

/**
 * Switch edge feature extractor to use Canny edge detector
 *
 * NOTE: "Laplacian Zero-Crossing" feature extractor is used by default (following to original article)
 *
 * @see `Canny`
 */
- (IntelligentScissorsMB*)setEdgeFeatureCannyParameters:(double)threshold1 threshold2:(double)threshold2 NS_SWIFT_NAME(setEdgeFeatureCannyParameters(threshold1:threshold2:));


//
//  IntelligentScissorsMB cv::segmentation::IntelligentScissorsMB::applyImage(Mat image)
//
/**
 * Specify input image and extract image features
 *
 * @param image input image. Type is #CV_8UC1 / #CV_8UC3
 */
- (IntelligentScissorsMB*)applyImage:(Mat*)image NS_SWIFT_NAME(applyImage(image:));


//
//  IntelligentScissorsMB cv::segmentation::IntelligentScissorsMB::applyImageFeatures(Mat non_edge, Mat gradient_direction, Mat gradient_magnitude, Mat image = Mat())
//
/**
 * Specify custom features of imput image
 *
 * Customized advanced variant of applyImage() call.
 *
 * @param non_edge Specify cost of non-edge pixels. Type is CV_8UC1. Expected values are `{0, 1}`.
 * @param gradient_direction Specify gradient direction feature. Type is CV_32FC2. Values are expected to be normalized: `x^2 + y^2 == 1`
 * @param gradient_magnitude Specify cost of gradient magnitude function: Type is CV_32FC1. Values should be in range `[0, 1]`.
 * @param image **Optional parameter**. Must be specified if subset of features is specified (non-specified features are calculated internally)
 */
- (IntelligentScissorsMB*)applyImageFeatures:(Mat*)non_edge gradient_direction:(Mat*)gradient_direction gradient_magnitude:(Mat*)gradient_magnitude image:(Mat*)image NS_SWIFT_NAME(applyImageFeatures(non_edge:gradient_direction:gradient_magnitude:image:));

/**
 * Specify custom features of imput image
 *
 * Customized advanced variant of applyImage() call.
 *
 * @param non_edge Specify cost of non-edge pixels. Type is CV_8UC1. Expected values are `{0, 1}`.
 * @param gradient_direction Specify gradient direction feature. Type is CV_32FC2. Values are expected to be normalized: `x^2 + y^2 == 1`
 * @param gradient_magnitude Specify cost of gradient magnitude function: Type is CV_32FC1. Values should be in range `[0, 1]`.
 */
- (IntelligentScissorsMB*)applyImageFeatures:(Mat*)non_edge gradient_direction:(Mat*)gradient_direction gradient_magnitude:(Mat*)gradient_magnitude NS_SWIFT_NAME(applyImageFeatures(non_edge:gradient_direction:gradient_magnitude:));


//
//  void cv::segmentation::IntelligentScissorsMB::buildMap(Point sourcePt)
//
/**
 * Prepares a map of optimal paths for the given source point on the image
 *
 * NOTE: applyImage() / applyImageFeatures() must be called before this call
 *
 * @param sourcePt The source point used to find the paths
 */
- (void)buildMap:(Point2i*)sourcePt NS_SWIFT_NAME(buildMap(sourcePt:));


//
//  void cv::segmentation::IntelligentScissorsMB::getContour(Point targetPt, Mat& contour, bool backward = false)
//
/**
 * Extracts optimal contour for the given target point on the image
 *
 * NOTE: buildMap() must be called before this call
 *
 * @param targetPt The target point
 * @param contour The list of pixels which contains optimal path between the source and the target points of the image. Type is CV_32SC2 (compatible with `std::vector<Point>`)
 * @param backward Flag to indicate reverse order of retrived pixels (use "true" value to fetch points from the target to the source point)
 */
- (void)getContour:(Point2i*)targetPt contour:(Mat*)contour backward:(BOOL)backward NS_SWIFT_NAME(getContour(targetPt:contour:backward:));

/**
 * Extracts optimal contour for the given target point on the image
 *
 * NOTE: buildMap() must be called before this call
 *
 * @param targetPt The target point
 * @param contour The list of pixels which contains optimal path between the source and the target points of the image. Type is CV_32SC2 (compatible with `std::vector<Point>`)
 */
- (void)getContour:(Point2i*)targetPt contour:(Mat*)contour NS_SWIFT_NAME(getContour(targetPt:contour:));



@end

NS_ASSUME_NONNULL_END


