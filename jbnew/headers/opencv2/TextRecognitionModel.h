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

@class Mat;
@class Net;



NS_ASSUME_NONNULL_BEGIN

// C++: class TextRecognitionModel
/**
 * This class represents high-level API for text recognition networks.
 *
 * TextRecognitionModel allows to set params for preprocessing input image.
 * TextRecognitionModel creates net from file with trained weights and config,
 * sets preprocessing input, runs forward pass and return recognition result.
 * For TextRecognitionModel, CRNN-CTC is supported.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface TextRecognitionModel : Model


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::TextRecognitionModel> nativePtrTextRecognitionModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::TextRecognitionModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::TextRecognitionModel>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::TextRecognitionModel::TextRecognitionModel(Net network)
//
/**
 * Create Text Recognition model from deep learning network
 * Call setDecodeType() and setVocabulary() after constructor to initialize the decoding method
 * @param network Net object
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::TextRecognitionModel::TextRecognitionModel(string model, string config = "")
//
/**
 * Create text recognition model from network represented in one of the supported formats
 * Call setDecodeType() and setVocabulary() after constructor to initialize the decoding method
 * @param model Binary file contains trained weights
 * @param config Text file contains network configuration
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create text recognition model from network represented in one of the supported formats
 * Call setDecodeType() and setVocabulary() after constructor to initialize the decoding method
 * @param model Binary file contains trained weights
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  TextRecognitionModel cv::dnn::TextRecognitionModel::setDecodeType(string decodeType)
//
/**
 * Set the decoding method of translating the network output into string
 * @param decodeType The decoding method of translating the network output into string: {'CTC-greedy': greedy decoding for the output of CTC-based methods}
 */
- (TextRecognitionModel*)setDecodeType:(NSString*)decodeType NS_SWIFT_NAME(setDecodeType(decodeType:));


//
//  string cv::dnn::TextRecognitionModel::getDecodeType()
//
/**
 * Get the decoding method
 * @return the decoding method
 */
- (NSString*)getDecodeType NS_SWIFT_NAME(getDecodeType());


//
//  TextRecognitionModel cv::dnn::TextRecognitionModel::setVocabulary(vector_string vocabulary)
//
/**
 * Set the vocabulary for recognition.
 * @param vocabulary the associated vocabulary of the network.
 */
- (TextRecognitionModel*)setVocabulary:(NSArray<NSString*>*)vocabulary NS_SWIFT_NAME(setVocabulary(vocabulary:));


//
//  vector_string cv::dnn::TextRecognitionModel::getVocabulary()
//
/**
 * Get the vocabulary for recognition.
 * @return vocabulary the associated vocabulary
 */
- (NSArray<NSString*>*)getVocabulary NS_SWIFT_NAME(getVocabulary());


//
//  string cv::dnn::TextRecognitionModel::recognize(Mat frame)
//
/**
 * Given the @p input frame, create input blob, run net and return recognition result
 * @param frame The input image
 * @return The text recognition result
 */
- (NSString*)recognize:(Mat*)frame NS_SWIFT_NAME(recognize(frame:));


//
//  void cv::dnn::TextRecognitionModel::recognize(Mat frame, vector_Mat roiRects, vector_string& results)
//
/**
 * Given the @p input frame, create input blob, run net and return recognition result
 * @param frame The input image
 * @param roiRects List of text detection regions of interest (cv::Rect, CV_32SC4). ROIs is be cropped as the network inputs
 * @param results A set of text recognition results.
 */
- (void)recognize:(Mat*)frame roiRects:(NSArray<Mat*>*)roiRects results:(NSMutableArray<NSString*>*)results NS_SWIFT_NAME(recognize(frame:roiRects:results:));



@end

NS_ASSUME_NONNULL_END


