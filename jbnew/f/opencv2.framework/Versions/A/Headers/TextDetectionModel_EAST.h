//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/dnn.hpp"
#import "opencv2/dnn/dnn.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>
#import "TextDetectionModel.h"

@class Net;



NS_ASSUME_NONNULL_BEGIN

// C++: class TextDetectionModel_EAST
/**
 * This class represents high-level API for text detection DL networks compatible with EAST model.
 *
 * Configurable parameters:
 * - (float) confThreshold - used to filter boxes by confidences, default: 0.5f
 * - (float) nmsThreshold - used in non maximum suppression, default: 0.0f
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface TextDetectionModel_EAST : TextDetectionModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::TextDetectionModel_EAST> nativePtrTextDetectionModel_EAST;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::TextDetectionModel_EAST>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::TextDetectionModel_EAST>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::TextDetectionModel_EAST::TextDetectionModel_EAST(Net network)
//
/**
 * Create text detection algorithm from deep learning network
 * @param network Net object
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::TextDetectionModel_EAST::TextDetectionModel_EAST(string model, string config = "")
//
/**
 * Create text detection model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 * @param config Text file contains network configuration.
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create text detection model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  TextDetectionModel_EAST cv::dnn::TextDetectionModel_EAST::setConfidenceThreshold(float confThreshold)
//
/**
 * Set the detection confidence threshold
 * @param confThreshold A threshold used to filter boxes by confidences
 */
- (TextDetectionModel_EAST*)setConfidenceThreshold:(float)confThreshold NS_SWIFT_NAME(setConfidenceThreshold(confThreshold:));


//
//  float cv::dnn::TextDetectionModel_EAST::getConfidenceThreshold()
//
/**
 * Get the detection confidence threshold
 */
- (float)getConfidenceThreshold NS_SWIFT_NAME(getConfidenceThreshold());


//
//  TextDetectionModel_EAST cv::dnn::TextDetectionModel_EAST::setNMSThreshold(float nmsThreshold)
//
/**
 * Set the detection NMS filter threshold
 * @param nmsThreshold A threshold used in non maximum suppression
 */
- (TextDetectionModel_EAST*)setNMSThreshold:(float)nmsThreshold NS_SWIFT_NAME(setNMSThreshold(nmsThreshold:));


//
//  float cv::dnn::TextDetectionModel_EAST::getNMSThreshold()
//
/**
 * Get the detection confidence threshold
 */
- (float)getNMSThreshold NS_SWIFT_NAME(getNMSThreshold());



@end

NS_ASSUME_NONNULL_END


