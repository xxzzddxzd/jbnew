//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/ml.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>
#import "StatModel.h"

@class Mat;
@class TermCriteria;


// C++: enum MarginType (cv.ml.SVMSGD.MarginType)
typedef NS_ENUM(int, MarginType) {
    SOFT_MARGIN = 0,
    HARD_MARGIN = 1
};


// C++: enum SvmsgdType (cv.ml.SVMSGD.SvmsgdType)
typedef NS_ENUM(int, SvmsgdType) {
    SGD = 0,
    ASGD = 1
};



NS_ASSUME_NONNULL_BEGIN

// C++: class SVMSGD
/**
 * *************************************************************************************\
 * Stochastic Gradient Descent SVM Classifier                      *
 * \***************************************************************************************
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface SVMSGD : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::SVMSGD> nativePtrSVMSGD;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::SVMSGD>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::SVMSGD>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::SVMSGD::getWeights()
//
/**
 * @return the weights of the trained model (decision function f(x) = weights * x + shift).
 */
- (Mat*)getWeights NS_SWIFT_NAME(getWeights());


//
//  float cv::ml::SVMSGD::getShift()
//
/**
 * @return the shift of the trained model (decision function f(x) = weights * x + shift).
 */
- (float)getShift NS_SWIFT_NAME(getShift());


//
// static Ptr_SVMSGD cv::ml::SVMSGD::create()
//
/**
 * Creates empty model.
 * Use StatModel::train to train the model. Since %SVMSGD has several parameters, you may want to
 * find the best parameters for your problem or use setOptimalParameters() to set some default parameters.
 */
+ (SVMSGD*)create NS_SWIFT_NAME(create());


//
// static Ptr_SVMSGD cv::ml::SVMSGD::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized SVMSGD from a file
 *
 * Use SVMSGD::save to serialize and store an SVMSGD to disk.
 * Load the SVMSGD from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized SVMSGD
 * @param nodeName name of node containing the classifier
 */
+ (SVMSGD*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized SVMSGD from a file
 *
 * Use SVMSGD::save to serialize and store an SVMSGD to disk.
 * Load the SVMSGD from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized SVMSGD
 */
+ (SVMSGD*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  void cv::ml::SVMSGD::setOptimalParameters(int svmsgdType = SVMSGD::ASGD, int marginType = SVMSGD::SOFT_MARGIN)
//
/**
 * Function sets optimal parameters values for chosen SVM SGD model.
 * @param svmsgdType is the type of SVMSGD classifier.
 * @param marginType is the type of margin constraint.
 */
- (void)setOptimalParameters:(int)svmsgdType marginType:(int)marginType NS_SWIFT_NAME(setOptimalParameters(svmsgdType:marginType:));

/**
 * Function sets optimal parameters values for chosen SVM SGD model.
 * @param svmsgdType is the type of SVMSGD classifier.
 */
- (void)setOptimalParameters:(int)svmsgdType NS_SWIFT_NAME(setOptimalParameters(svmsgdType:));

/**
 * Function sets optimal parameters values for chosen SVM SGD model.
 */
- (void)setOptimalParameters NS_SWIFT_NAME(setOptimalParameters());


//
//  int cv::ml::SVMSGD::getSvmsgdType()
//
/**
 * @see `-setSvmsgdType:`
 */
- (int)getSvmsgdType NS_SWIFT_NAME(getSvmsgdType());


//
//  void cv::ml::SVMSGD::setSvmsgdType(int svmsgdType)
//
/**
 *  getSvmsgdType @see `-getSvmsgdType:`
 */
- (void)setSvmsgdType:(int)svmsgdType NS_SWIFT_NAME(setSvmsgdType(svmsgdType:));


//
//  int cv::ml::SVMSGD::getMarginType()
//
/**
 * @see `-setMarginType:`
 */
- (int)getMarginType NS_SWIFT_NAME(getMarginType());


//
//  void cv::ml::SVMSGD::setMarginType(int marginType)
//
/**
 *  getMarginType @see `-getMarginType:`
 */
- (void)setMarginType:(int)marginType NS_SWIFT_NAME(setMarginType(marginType:));


//
//  float cv::ml::SVMSGD::getMarginRegularization()
//
/**
 * @see `-setMarginRegularization:`
 */
- (float)getMarginRegularization NS_SWIFT_NAME(getMarginRegularization());


//
//  void cv::ml::SVMSGD::setMarginRegularization(float marginRegularization)
//
/**
 *  getMarginRegularization @see `-getMarginRegularization:`
 */
- (void)setMarginRegularization:(float)marginRegularization NS_SWIFT_NAME(setMarginRegularization(marginRegularization:));


//
//  float cv::ml::SVMSGD::getInitialStepSize()
//
/**
 * @see `-setInitialStepSize:`
 */
- (float)getInitialStepSize NS_SWIFT_NAME(getInitialStepSize());


//
//  void cv::ml::SVMSGD::setInitialStepSize(float InitialStepSize)
//
/**
 *  getInitialStepSize @see `-getInitialStepSize:`
 */
- (void)setInitialStepSize:(float)InitialStepSize NS_SWIFT_NAME(setInitialStepSize(InitialStepSize:));


//
//  float cv::ml::SVMSGD::getStepDecreasingPower()
//
/**
 * @see `-setStepDecreasingPower:`
 */
- (float)getStepDecreasingPower NS_SWIFT_NAME(getStepDecreasingPower());


//
//  void cv::ml::SVMSGD::setStepDecreasingPower(float stepDecreasingPower)
//
/**
 *  getStepDecreasingPower @see `-getStepDecreasingPower:`
 */
- (void)setStepDecreasingPower:(float)stepDecreasingPower NS_SWIFT_NAME(setStepDecreasingPower(stepDecreasingPower:));


//
//  TermCriteria cv::ml::SVMSGD::getTermCriteria()
//
/**
 * @see `-setTermCriteria:`
 */
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  void cv::ml::SVMSGD::setTermCriteria(TermCriteria val)
//
/**
 *  getTermCriteria @see `-getTermCriteria:`
 */
- (void)setTermCriteria:(TermCriteria*)val NS_SWIFT_NAME(setTermCriteria(val:));



@end

NS_ASSUME_NONNULL_END


