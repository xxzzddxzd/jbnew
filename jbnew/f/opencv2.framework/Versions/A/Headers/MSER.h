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

@class Mat;
@class Point2i;
@class Rect2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class MSER
/**
 * Maximally stable extremal region extractor
 *
 * The class encapsulates all the parameters of the %MSER extraction algorithm (see [wiki
 * article](http://en.wikipedia.org/wiki/Maximally_stable_extremal_regions)).
 *
 * - there are two different implementation of %MSER: one for grey image, one for color image
 *
 * - the grey image algorithm is taken from: CITE: nister2008linear ;  the paper claims to be faster
 * than union-find method; it actually get 1.5~2m/s on my centrino L7200 1.2GHz laptop.
 *
 * - the color image algorithm is taken from: CITE: forssen2007maximally ; it should be much slower
 * than grey image method ( 3~4 times )
 *
 * - (Python) A complete example showing the use of the %MSER detector can be found at samples/python/mser.py
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface MSER : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::MSER> nativePtrMSER;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::MSER>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::MSER>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_MSER cv::MSER::create(int delta = 5, int min_area = 60, int max_area = 14400, double max_variation = 0.25, double min_diversity = .2, int max_evolution = 200, double area_threshold = 1.01, double min_margin = 0.003, int edge_blur_size = 5)
//
/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 * @param max_variation prune the area have similar size to its children
 * @param min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param max_evolution  for color image, the evolution steps
 * @param area_threshold for color image, the area threshold to cause re-initialize
 * @param min_margin for color image, ignore too small margin
 * @param edge_blur_size for color image, the aperture size for edge blur
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area max_variation:(double)max_variation min_diversity:(double)min_diversity max_evolution:(int)max_evolution area_threshold:(double)area_threshold min_margin:(double)min_margin edge_blur_size:(int)edge_blur_size NS_SWIFT_NAME(create(delta:min_area:max_area:max_variation:min_diversity:max_evolution:area_threshold:min_margin:edge_blur_size:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 * @param max_variation prune the area have similar size to its children
 * @param min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param max_evolution  for color image, the evolution steps
 * @param area_threshold for color image, the area threshold to cause re-initialize
 * @param min_margin for color image, ignore too small margin
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area max_variation:(double)max_variation min_diversity:(double)min_diversity max_evolution:(int)max_evolution area_threshold:(double)area_threshold min_margin:(double)min_margin NS_SWIFT_NAME(create(delta:min_area:max_area:max_variation:min_diversity:max_evolution:area_threshold:min_margin:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 * @param max_variation prune the area have similar size to its children
 * @param min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param max_evolution  for color image, the evolution steps
 * @param area_threshold for color image, the area threshold to cause re-initialize
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area max_variation:(double)max_variation min_diversity:(double)min_diversity max_evolution:(int)max_evolution area_threshold:(double)area_threshold NS_SWIFT_NAME(create(delta:min_area:max_area:max_variation:min_diversity:max_evolution:area_threshold:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 * @param max_variation prune the area have similar size to its children
 * @param min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param max_evolution  for color image, the evolution steps
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area max_variation:(double)max_variation min_diversity:(double)min_diversity max_evolution:(int)max_evolution NS_SWIFT_NAME(create(delta:min_area:max_area:max_variation:min_diversity:max_evolution:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 * @param max_variation prune the area have similar size to its children
 * @param min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area max_variation:(double)max_variation min_diversity:(double)min_diversity NS_SWIFT_NAME(create(delta:min_area:max_area:max_variation:min_diversity:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 * @param max_variation prune the area have similar size to its children
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area max_variation:(double)max_variation NS_SWIFT_NAME(create(delta:min_area:max_area:max_variation:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 * @param max_area prune the area which bigger than maxArea
 */
+ (MSER*)create:(int)delta min_area:(int)min_area max_area:(int)max_area NS_SWIFT_NAME(create(delta:min_area:max_area:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param min_area prune the area which smaller than minArea
 */
+ (MSER*)create:(int)delta min_area:(int)min_area NS_SWIFT_NAME(create(delta:min_area:));

/**
 * Full constructor for %MSER detector
 *
 * @param delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 */
+ (MSER*)create:(int)delta NS_SWIFT_NAME(create(delta:));

/**
 * Full constructor for %MSER detector
 *
 */
+ (MSER*)create NS_SWIFT_NAME(create());


//
//  void cv::MSER::detectRegions(Mat image, vector_vector_Point& msers, vector_Rect& bboxes)
//
/**
 * Detect %MSER regions
 *
 * @param image input image (8UC1, 8UC3 or 8UC4, must be greater or equal than 3x3)
 * @param msers resulting list of point sets
 * @param bboxes resulting bounding boxes
 */
- (void)detectRegions:(Mat*)image msers:(NSMutableArray<NSMutableArray<Point2i*>*>*)msers bboxes:(NSMutableArray<Rect2i*>*)bboxes NS_SWIFT_NAME(detectRegions(image:msers:bboxes:));


//
//  void cv::MSER::setDelta(int delta)
//
- (void)setDelta:(int)delta NS_SWIFT_NAME(setDelta(delta:));


//
//  int cv::MSER::getDelta()
//
- (int)getDelta NS_SWIFT_NAME(getDelta());


//
//  void cv::MSER::setMinArea(int minArea)
//
- (void)setMinArea:(int)minArea NS_SWIFT_NAME(setMinArea(minArea:));


//
//  int cv::MSER::getMinArea()
//
- (int)getMinArea NS_SWIFT_NAME(getMinArea());


//
//  void cv::MSER::setMaxArea(int maxArea)
//
- (void)setMaxArea:(int)maxArea NS_SWIFT_NAME(setMaxArea(maxArea:));


//
//  int cv::MSER::getMaxArea()
//
- (int)getMaxArea NS_SWIFT_NAME(getMaxArea());


//
//  void cv::MSER::setPass2Only(bool f)
//
- (void)setPass2Only:(BOOL)f NS_SWIFT_NAME(setPass2Only(f:));


//
//  bool cv::MSER::getPass2Only()
//
- (BOOL)getPass2Only NS_SWIFT_NAME(getPass2Only());


//
//  String cv::MSER::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());



@end

NS_ASSUME_NONNULL_END


