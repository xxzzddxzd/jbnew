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

// C++: class TextDetectionModel_DB
/**
 * This class represents high-level API for text detection DL networks compatible with DB model.
 *
 * Related publications: CITE: liao2020real
 * Paper: https://arxiv.org/abs/1911.08947
 * For more information about the hyper-parameters setting, please refer to https://github.com/MhLiao/DB
 *
 * Configurable parameters:
 * - (float) binaryThreshold - The threshold of the binary map. It is usually set to 0.3.
 * - (float) polygonThreshold - The threshold of text polygons. It is usually set to 0.5, 0.6, and 0.7. Default is 0.5f
 * - (double) unclipRatio - The unclip ratio of the detected text region, which determines the output size. It is usually set to 2.0.
 * - (int) maxCandidates - The max number of the output results.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface TextDetectionModel_DB : TextDetectionModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::TextDetectionModel_DB> nativePtrTextDetectionModel_DB;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::TextDetectionModel_DB>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::TextDetectionModel_DB>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::TextDetectionModel_DB::TextDetectionModel_DB(Net network)
//
/**
 * Create text detection algorithm from deep learning network.
 * @param network Net object.
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::TextDetectionModel_DB::TextDetectionModel_DB(string model, string config = "")
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
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setBinaryThreshold(float binaryThreshold)
//
- (TextDetectionModel_DB*)setBinaryThreshold:(float)binaryThreshold NS_SWIFT_NAME(setBinaryThreshold(binaryThreshold:));


//
//  float cv::dnn::TextDetectionModel_DB::getBinaryThreshold()
//
- (float)getBinaryThreshold NS_SWIFT_NAME(getBinaryThreshold());


//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setPolygonThreshold(float polygonThreshold)
//
- (TextDetectionModel_DB*)setPolygonThreshold:(float)polygonThreshold NS_SWIFT_NAME(setPolygonThreshold(polygonThreshold:));


//
//  float cv::dnn::TextDetectionModel_DB::getPolygonThreshold()
//
- (float)getPolygonThreshold NS_SWIFT_NAME(getPolygonThreshold());


//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setUnclipRatio(double unclipRatio)
//
- (TextDetectionModel_DB*)setUnclipRatio:(double)unclipRatio NS_SWIFT_NAME(setUnclipRatio(unclipRatio:));


//
//  double cv::dnn::TextDetectionModel_DB::getUnclipRatio()
//
- (double)getUnclipRatio NS_SWIFT_NAME(getUnclipRatio());


//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setMaxCandidates(int maxCandidates)
//
- (TextDetectionModel_DB*)setMaxCandidates:(int)maxCandidates NS_SWIFT_NAME(setMaxCandidates(maxCandidates:));


//
//  int cv::dnn::TextDetectionModel_DB::getMaxCandidates()
//
- (int)getMaxCandidates NS_SWIFT_NAME(getMaxCandidates());



@end

NS_ASSUME_NONNULL_END


