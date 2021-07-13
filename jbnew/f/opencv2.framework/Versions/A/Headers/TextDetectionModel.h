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
#import "Model.h"

@class FloatVector;
@class Mat;
@class Point2i;
@class RotatedRect;



NS_ASSUME_NONNULL_BEGIN

// C++: class TextDetectionModel
/**
 * Base class for text detection networks
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface TextDetectionModel : Model


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::TextDetectionModel> nativePtrTextDetectionModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::TextDetectionModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::TextDetectionModel>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::dnn::TextDetectionModel::detect(Mat frame, vector_vector_Point& detections, vector_float& confidences)
//
/**
 * Performs detection
 *
 * Given the input @p frame, prepare network input, run network inference, post-process network output and return result detections.
 *
 * Each result is quadrangle's 4 points in this order:
 * - bottom-left
 * - top-left
 * - top-right
 * - bottom-right
 *
 * Use cv::getPerspectiveTransform function to retrive image region without perspective transformations.
 *
 * NOTE: If DL model doesn't support that kind of output then result may be derived from detectTextRectangles() output.
 *
 * @param frame The input image
 * @param detections array with detections' quadrangles (4 points per result)
 * @param confidences array with detection confidences
 */
- (void)detect:(Mat*)frame detections:(NSMutableArray<NSMutableArray<Point2i*>*>*)detections confidences:(FloatVector*)confidences NS_SWIFT_NAME(detect(frame:detections:confidences:));


//
//  void cv::dnn::TextDetectionModel::detect(Mat frame, vector_vector_Point& detections)
//
- (void)detect:(Mat*)frame detections:(NSMutableArray<NSMutableArray<Point2i*>*>*)detections NS_SWIFT_NAME(detect(frame:detections:));


//
//  void cv::dnn::TextDetectionModel::detectTextRectangles(Mat frame, vector_RotatedRect& detections, vector_float& confidences)
//
/**
 * Performs detection
 *
 * Given the input @p frame, prepare network input, run network inference, post-process network output and return result detections.
 *
 * Each result is rotated rectangle.
 *
 * NOTE: Result may be inaccurate in case of strong perspective transformations.
 *
 * @param frame the input image
 * @param detections array with detections' RotationRect results
 * @param confidences array with detection confidences
 */
- (void)detectTextRectangles:(Mat*)frame detections:(NSMutableArray<RotatedRect*>*)detections confidences:(FloatVector*)confidences NS_SWIFT_NAME(detectTextRectangles(frame:detections:confidences:));


//
//  void cv::dnn::TextDetectionModel::detectTextRectangles(Mat frame, vector_RotatedRect& detections)
//
- (void)detectTextRectangles:(Mat*)frame detections:(NSMutableArray<RotatedRect*>*)detections NS_SWIFT_NAME(detectTextRectangles(frame:detections:));



@end

NS_ASSUME_NONNULL_END


