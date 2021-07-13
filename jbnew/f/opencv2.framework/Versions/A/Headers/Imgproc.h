//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/imgproc.hpp"
#import "imgproc/bindings.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>

#import "Core.h"
@class CLAHE;
@class FloatVector;
@class GeneralizedHoughBallard;
@class GeneralizedHoughGuil;
@class Int4;
@class IntVector;
@class LineSegmentDetector;
@class Mat;
@class Moments;
@class Point2d;
@class Point2f;
@class Point2i;
@class Rect2i;
@class RotatedRect;
@class Scalar;
@class Size2i;
@class TermCriteria;


// C++: enum AdaptiveThresholdTypes (cv.AdaptiveThresholdTypes)
typedef NS_ENUM(int, AdaptiveThresholdTypes) {
    ADAPTIVE_THRESH_MEAN_C = 0,
    ADAPTIVE_THRESH_GAUSSIAN_C = 1
};


// C++: enum ColorConversionCodes (cv.ColorConversionCodes)
typedef NS_ENUM(int, ColorConversionCodes) {
    COLOR_BGR2BGRA = 0,
    COLOR_RGB2RGBA = COLOR_BGR2BGRA,
    COLOR_BGRA2BGR = 1,
    COLOR_RGBA2RGB = COLOR_BGRA2BGR,
    COLOR_BGR2RGBA = 2,
    COLOR_RGB2BGRA = COLOR_BGR2RGBA,
    COLOR_RGBA2BGR = 3,
    COLOR_BGRA2RGB = COLOR_RGBA2BGR,
    COLOR_BGR2RGB = 4,
    COLOR_RGB2BGR = COLOR_BGR2RGB,
    COLOR_BGRA2RGBA = 5,
    COLOR_RGBA2BGRA = COLOR_BGRA2RGBA,
    COLOR_BGR2GRAY = 6,
    COLOR_RGB2GRAY = 7,
    COLOR_GRAY2BGR = 8,
    COLOR_GRAY2RGB = COLOR_GRAY2BGR,
    COLOR_GRAY2BGRA = 9,
    COLOR_GRAY2RGBA = COLOR_GRAY2BGRA,
    COLOR_BGRA2GRAY = 10,
    COLOR_RGBA2GRAY = 11,
    COLOR_BGR2BGR565 = 12,
    COLOR_RGB2BGR565 = 13,
    COLOR_BGR5652BGR = 14,
    COLOR_BGR5652RGB = 15,
    COLOR_BGRA2BGR565 = 16,
    COLOR_RGBA2BGR565 = 17,
    COLOR_BGR5652BGRA = 18,
    COLOR_BGR5652RGBA = 19,
    COLOR_GRAY2BGR565 = 20,
    COLOR_BGR5652GRAY = 21,
    COLOR_BGR2BGR555 = 22,
    COLOR_RGB2BGR555 = 23,
    COLOR_BGR5552BGR = 24,
    COLOR_BGR5552RGB = 25,
    COLOR_BGRA2BGR555 = 26,
    COLOR_RGBA2BGR555 = 27,
    COLOR_BGR5552BGRA = 28,
    COLOR_BGR5552RGBA = 29,
    COLOR_GRAY2BGR555 = 30,
    COLOR_BGR5552GRAY = 31,
    COLOR_BGR2XYZ = 32,
    COLOR_RGB2XYZ = 33,
    COLOR_XYZ2BGR = 34,
    COLOR_XYZ2RGB = 35,
    COLOR_BGR2YCrCb = 36,
    COLOR_RGB2YCrCb = 37,
    COLOR_YCrCb2BGR = 38,
    COLOR_YCrCb2RGB = 39,
    COLOR_BGR2HSV = 40,
    COLOR_RGB2HSV = 41,
    COLOR_BGR2Lab = 44,
    COLOR_RGB2Lab = 45,
    COLOR_BGR2Luv = 50,
    COLOR_RGB2Luv = 51,
    COLOR_BGR2HLS = 52,
    COLOR_RGB2HLS = 53,
    COLOR_HSV2BGR = 54,
    COLOR_HSV2RGB = 55,
    COLOR_Lab2BGR = 56,
    COLOR_Lab2RGB = 57,
    COLOR_Luv2BGR = 58,
    COLOR_Luv2RGB = 59,
    COLOR_HLS2BGR = 60,
    COLOR_HLS2RGB = 61,
    COLOR_BGR2HSV_FULL = 66,
    COLOR_RGB2HSV_FULL = 67,
    COLOR_BGR2HLS_FULL = 68,
    COLOR_RGB2HLS_FULL = 69,
    COLOR_HSV2BGR_FULL = 70,
    COLOR_HSV2RGB_FULL = 71,
    COLOR_HLS2BGR_FULL = 72,
    COLOR_HLS2RGB_FULL = 73,
    COLOR_LBGR2Lab = 74,
    COLOR_LRGB2Lab = 75,
    COLOR_LBGR2Luv = 76,
    COLOR_LRGB2Luv = 77,
    COLOR_Lab2LBGR = 78,
    COLOR_Lab2LRGB = 79,
    COLOR_Luv2LBGR = 80,
    COLOR_Luv2LRGB = 81,
    COLOR_BGR2YUV = 82,
    COLOR_RGB2YUV = 83,
    COLOR_YUV2BGR = 84,
    COLOR_YUV2RGB = 85,
    COLOR_YUV2RGB_NV12 = 90,
    COLOR_YUV2BGR_NV12 = 91,
    COLOR_YUV2RGB_NV21 = 92,
    COLOR_YUV2BGR_NV21 = 93,
    COLOR_YUV420sp2RGB = COLOR_YUV2RGB_NV21,
    COLOR_YUV420sp2BGR = COLOR_YUV2BGR_NV21,
    COLOR_YUV2RGBA_NV12 = 94,
    COLOR_YUV2BGRA_NV12 = 95,
    COLOR_YUV2RGBA_NV21 = 96,
    COLOR_YUV2BGRA_NV21 = 97,
    COLOR_YUV420sp2RGBA = COLOR_YUV2RGBA_NV21,
    COLOR_YUV420sp2BGRA = COLOR_YUV2BGRA_NV21,
    COLOR_YUV2RGB_YV12 = 98,
    COLOR_YUV2BGR_YV12 = 99,
    COLOR_YUV2RGB_IYUV = 100,
    COLOR_YUV2BGR_IYUV = 101,
    COLOR_YUV2RGB_I420 = COLOR_YUV2RGB_IYUV,
    COLOR_YUV2BGR_I420 = COLOR_YUV2BGR_IYUV,
    COLOR_YUV420p2RGB = COLOR_YUV2RGB_YV12,
    COLOR_YUV420p2BGR = COLOR_YUV2BGR_YV12,
    COLOR_YUV2RGBA_YV12 = 102,
    COLOR_YUV2BGRA_YV12 = 103,
    COLOR_YUV2RGBA_IYUV = 104,
    COLOR_YUV2BGRA_IYUV = 105,
    COLOR_YUV2RGBA_I420 = COLOR_YUV2RGBA_IYUV,
    COLOR_YUV2BGRA_I420 = COLOR_YUV2BGRA_IYUV,
    COLOR_YUV420p2RGBA = COLOR_YUV2RGBA_YV12,
    COLOR_YUV420p2BGRA = COLOR_YUV2BGRA_YV12,
    COLOR_YUV2GRAY_420 = 106,
    COLOR_YUV2GRAY_NV21 = COLOR_YUV2GRAY_420,
    COLOR_YUV2GRAY_NV12 = COLOR_YUV2GRAY_420,
    COLOR_YUV2GRAY_YV12 = COLOR_YUV2GRAY_420,
    COLOR_YUV2GRAY_IYUV = COLOR_YUV2GRAY_420,
    COLOR_YUV2GRAY_I420 = COLOR_YUV2GRAY_420,
    COLOR_YUV420sp2GRAY = COLOR_YUV2GRAY_420,
    COLOR_YUV420p2GRAY = COLOR_YUV2GRAY_420,
    COLOR_YUV2RGB_UYVY = 107,
    COLOR_YUV2BGR_UYVY = 108,
    COLOR_YUV2RGB_Y422 = COLOR_YUV2RGB_UYVY,
    COLOR_YUV2BGR_Y422 = COLOR_YUV2BGR_UYVY,
    COLOR_YUV2RGB_UYNV = COLOR_YUV2RGB_UYVY,
    COLOR_YUV2BGR_UYNV = COLOR_YUV2BGR_UYVY,
    COLOR_YUV2RGBA_UYVY = 111,
    COLOR_YUV2BGRA_UYVY = 112,
    COLOR_YUV2RGBA_Y422 = COLOR_YUV2RGBA_UYVY,
    COLOR_YUV2BGRA_Y422 = COLOR_YUV2BGRA_UYVY,
    COLOR_YUV2RGBA_UYNV = COLOR_YUV2RGBA_UYVY,
    COLOR_YUV2BGRA_UYNV = COLOR_YUV2BGRA_UYVY,
    COLOR_YUV2RGB_YUY2 = 115,
    COLOR_YUV2BGR_YUY2 = 116,
    COLOR_YUV2RGB_YVYU = 117,
    COLOR_YUV2BGR_YVYU = 118,
    COLOR_YUV2RGB_YUYV = COLOR_YUV2RGB_YUY2,
    COLOR_YUV2BGR_YUYV = COLOR_YUV2BGR_YUY2,
    COLOR_YUV2RGB_YUNV = COLOR_YUV2RGB_YUY2,
    COLOR_YUV2BGR_YUNV = COLOR_YUV2BGR_YUY2,
    COLOR_YUV2RGBA_YUY2 = 119,
    COLOR_YUV2BGRA_YUY2 = 120,
    COLOR_YUV2RGBA_YVYU = 121,
    COLOR_YUV2BGRA_YVYU = 122,
    COLOR_YUV2RGBA_YUYV = COLOR_YUV2RGBA_YUY2,
    COLOR_YUV2BGRA_YUYV = COLOR_YUV2BGRA_YUY2,
    COLOR_YUV2RGBA_YUNV = COLOR_YUV2RGBA_YUY2,
    COLOR_YUV2BGRA_YUNV = COLOR_YUV2BGRA_YUY2,
    COLOR_YUV2GRAY_UYVY = 123,
    COLOR_YUV2GRAY_YUY2 = 124,
    COLOR_YUV2GRAY_Y422 = COLOR_YUV2GRAY_UYVY,
    COLOR_YUV2GRAY_UYNV = COLOR_YUV2GRAY_UYVY,
    COLOR_YUV2GRAY_YVYU = COLOR_YUV2GRAY_YUY2,
    COLOR_YUV2GRAY_YUYV = COLOR_YUV2GRAY_YUY2,
    COLOR_YUV2GRAY_YUNV = COLOR_YUV2GRAY_YUY2,
    COLOR_RGBA2mRGBA = 125,
    COLOR_mRGBA2RGBA = 126,
    COLOR_RGB2YUV_I420 = 127,
    COLOR_BGR2YUV_I420 = 128,
    COLOR_RGB2YUV_IYUV = COLOR_RGB2YUV_I420,
    COLOR_BGR2YUV_IYUV = COLOR_BGR2YUV_I420,
    COLOR_RGBA2YUV_I420 = 129,
    COLOR_BGRA2YUV_I420 = 130,
    COLOR_RGBA2YUV_IYUV = COLOR_RGBA2YUV_I420,
    COLOR_BGRA2YUV_IYUV = COLOR_BGRA2YUV_I420,
    COLOR_RGB2YUV_YV12 = 131,
    COLOR_BGR2YUV_YV12 = 132,
    COLOR_RGBA2YUV_YV12 = 133,
    COLOR_BGRA2YUV_YV12 = 134,
    COLOR_BayerBG2BGR = 46,
    COLOR_BayerGB2BGR = 47,
    COLOR_BayerRG2BGR = 48,
    COLOR_BayerGR2BGR = 49,
    COLOR_BayerBG2RGB = COLOR_BayerRG2BGR,
    COLOR_BayerGB2RGB = COLOR_BayerGR2BGR,
    COLOR_BayerRG2RGB = COLOR_BayerBG2BGR,
    COLOR_BayerGR2RGB = COLOR_BayerGB2BGR,
    COLOR_BayerBG2GRAY = 86,
    COLOR_BayerGB2GRAY = 87,
    COLOR_BayerRG2GRAY = 88,
    COLOR_BayerGR2GRAY = 89,
    COLOR_BayerBG2BGR_VNG = 62,
    COLOR_BayerGB2BGR_VNG = 63,
    COLOR_BayerRG2BGR_VNG = 64,
    COLOR_BayerGR2BGR_VNG = 65,
    COLOR_BayerBG2RGB_VNG = COLOR_BayerRG2BGR_VNG,
    COLOR_BayerGB2RGB_VNG = COLOR_BayerGR2BGR_VNG,
    COLOR_BayerRG2RGB_VNG = COLOR_BayerBG2BGR_VNG,
    COLOR_BayerGR2RGB_VNG = COLOR_BayerGB2BGR_VNG,
    COLOR_BayerBG2BGR_EA = 135,
    COLOR_BayerGB2BGR_EA = 136,
    COLOR_BayerRG2BGR_EA = 137,
    COLOR_BayerGR2BGR_EA = 138,
    COLOR_BayerBG2RGB_EA = COLOR_BayerRG2BGR_EA,
    COLOR_BayerGB2RGB_EA = COLOR_BayerGR2BGR_EA,
    COLOR_BayerRG2RGB_EA = COLOR_BayerBG2BGR_EA,
    COLOR_BayerGR2RGB_EA = COLOR_BayerGB2BGR_EA,
    COLOR_BayerBG2BGRA = 139,
    COLOR_BayerGB2BGRA = 140,
    COLOR_BayerRG2BGRA = 141,
    COLOR_BayerGR2BGRA = 142,
    COLOR_BayerBG2RGBA = COLOR_BayerRG2BGRA,
    COLOR_BayerGB2RGBA = COLOR_BayerGR2BGRA,
    COLOR_BayerRG2RGBA = COLOR_BayerBG2BGRA,
    COLOR_BayerGR2RGBA = COLOR_BayerGB2BGRA,
    COLOR_COLORCVT_MAX = 143
};


// C++: enum ColormapTypes (cv.ColormapTypes)
typedef NS_ENUM(int, ColormapTypes) {
    COLORMAP_AUTUMN = 0,
    COLORMAP_BONE = 1,
    COLORMAP_JET = 2,
    COLORMAP_WINTER = 3,
    COLORMAP_RAINBOW = 4,
    COLORMAP_OCEAN = 5,
    COLORMAP_SUMMER = 6,
    COLORMAP_SPRING = 7,
    COLORMAP_COOL = 8,
    COLORMAP_HSV = 9,
    COLORMAP_PINK = 10,
    COLORMAP_HOT = 11,
    COLORMAP_PARULA = 12,
    COLORMAP_MAGMA = 13,
    COLORMAP_INFERNO = 14,
    COLORMAP_PLASMA = 15,
    COLORMAP_VIRIDIS = 16,
    COLORMAP_CIVIDIS = 17,
    COLORMAP_TWILIGHT = 18,
    COLORMAP_TWILIGHT_SHIFTED = 19,
    COLORMAP_TURBO = 20,
    COLORMAP_DEEPGREEN = 21
};


// C++: enum ConnectedComponentsAlgorithmsTypes (cv.ConnectedComponentsAlgorithmsTypes)
typedef NS_ENUM(int, ConnectedComponentsAlgorithmsTypes) {
    CCL_DEFAULT = -1,
    CCL_WU = 0,
    CCL_GRANA = 1,
    CCL_BOLELLI = 2,
    CCL_SAUF = 3,
    CCL_BBDT = 4,
    CCL_SPAGHETTI = 5
};


// C++: enum ConnectedComponentsTypes (cv.ConnectedComponentsTypes)
typedef NS_ENUM(int, ConnectedComponentsTypes) {
    CC_STAT_LEFT = 0,
    CC_STAT_TOP = 1,
    CC_STAT_WIDTH = 2,
    CC_STAT_HEIGHT = 3,
    CC_STAT_AREA = 4,
    CC_STAT_MAX = 5
};


// C++: enum ContourApproximationModes (cv.ContourApproximationModes)
typedef NS_ENUM(int, ContourApproximationModes) {
    CHAIN_APPROX_NONE = 1,
    CHAIN_APPROX_SIMPLE = 2,
    CHAIN_APPROX_TC89_L1 = 3,
    CHAIN_APPROX_TC89_KCOS = 4
};


// C++: enum DistanceTransformLabelTypes (cv.DistanceTransformLabelTypes)
typedef NS_ENUM(int, DistanceTransformLabelTypes) {
    DIST_LABEL_CCOMP = 0,
    DIST_LABEL_PIXEL = 1
};


// C++: enum DistanceTransformMasks (cv.DistanceTransformMasks)
typedef NS_ENUM(int, DistanceTransformMasks) {
    DIST_MASK_3 = 3,
    DIST_MASK_5 = 5,
    DIST_MASK_PRECISE = 0
};


// C++: enum DistanceTypes (cv.DistanceTypes)
typedef NS_ENUM(int, DistanceTypes) {
    DIST_USER = -1,
    DIST_L1 = 1,
    DIST_L2 = 2,
    DIST_C = 3,
    DIST_L12 = 4,
    DIST_FAIR = 5,
    DIST_WELSCH = 6,
    DIST_HUBER = 7
};


// C++: enum FloodFillFlags (cv.FloodFillFlags)
typedef NS_ENUM(int, FloodFillFlags) {
    FLOODFILL_FIXED_RANGE = 1 << 16,
    FLOODFILL_MASK_ONLY = 1 << 17
};


// C++: enum GrabCutClasses (cv.GrabCutClasses)
typedef NS_ENUM(int, GrabCutClasses) {
    GC_BGD = 0,
    GC_FGD = 1,
    GC_PR_BGD = 2,
    GC_PR_FGD = 3
};


// C++: enum GrabCutModes (cv.GrabCutModes)
typedef NS_ENUM(int, GrabCutModes) {
    GC_INIT_WITH_RECT = 0,
    GC_INIT_WITH_MASK = 1,
    GC_EVAL = 2,
    GC_EVAL_FREEZE_MODEL = 3
};


// C++: enum HersheyFonts (cv.HersheyFonts)
typedef NS_ENUM(int, HersheyFonts) {
    FONT_HERSHEY_SIMPLEX = 0,
    FONT_HERSHEY_PLAIN = 1,
    FONT_HERSHEY_DUPLEX = 2,
    FONT_HERSHEY_COMPLEX = 3,
    FONT_HERSHEY_TRIPLEX = 4,
    FONT_HERSHEY_COMPLEX_SMALL = 5,
    FONT_HERSHEY_SCRIPT_SIMPLEX = 6,
    FONT_HERSHEY_SCRIPT_COMPLEX = 7,
    FONT_ITALIC = 16
};


// C++: enum HistCompMethods (cv.HistCompMethods)
typedef NS_ENUM(int, HistCompMethods) {
    HISTCMP_CORREL = 0,
    HISTCMP_CHISQR = 1,
    HISTCMP_INTERSECT = 2,
    HISTCMP_BHATTACHARYYA = 3,
    HISTCMP_HELLINGER = HISTCMP_BHATTACHARYYA,
    HISTCMP_CHISQR_ALT = 4,
    HISTCMP_KL_DIV = 5
};


// C++: enum HoughModes (cv.HoughModes)
typedef NS_ENUM(int, HoughModes) {
    HOUGH_STANDARD = 0,
    HOUGH_PROBABILISTIC = 1,
    HOUGH_MULTI_SCALE = 2,
    HOUGH_GRADIENT = 3,
    HOUGH_GRADIENT_ALT = 4
};


// C++: enum InterpolationFlags (cv.InterpolationFlags)
typedef NS_ENUM(int, InterpolationFlags) {
    INTER_NEAREST = 0,
    INTER_LINEAR = 1,
    INTER_CUBIC = 2,
    INTER_AREA = 3,
    INTER_LANCZOS4 = 4,
    INTER_LINEAR_EXACT = 5,
    INTER_NEAREST_EXACT = 6,
    INTER_MAX = 7,
    WARP_FILL_OUTLIERS = 8,
    WARP_INVERSE_MAP = 16
};


// C++: enum InterpolationMasks (cv.InterpolationMasks)
typedef NS_ENUM(int, InterpolationMasks) {
    INTER_BITS = 5,
    INTER_BITS2 = INTER_BITS * 2,
    INTER_TAB_SIZE = 1 << INTER_BITS,
    INTER_TAB_SIZE2 = INTER_TAB_SIZE * INTER_TAB_SIZE
};


// C++: enum LineSegmentDetectorModes (cv.LineSegmentDetectorModes)
typedef NS_ENUM(int, LineSegmentDetectorModes) {
    LSD_REFINE_NONE = 0,
    LSD_REFINE_STD = 1,
    LSD_REFINE_ADV = 2
};


// C++: enum LineTypes (cv.LineTypes)
typedef NS_ENUM(int, LineTypes) {
    FILLED = -1,
    LINE_4 = 4,
    LINE_8 = 8,
    LINE_AA = 16
};


// C++: enum MarkerTypes (cv.MarkerTypes)
typedef NS_ENUM(int, MarkerTypes) {
    MARKER_CROSS = 0,
    MARKER_TILTED_CROSS = 1,
    MARKER_STAR = 2,
    MARKER_DIAMOND = 3,
    MARKER_SQUARE = 4,
    MARKER_TRIANGLE_UP = 5,
    MARKER_TRIANGLE_DOWN = 6
};


// C++: enum MorphShapes (cv.MorphShapes)
typedef NS_ENUM(int, MorphShapes) {
    MORPH_RECT = 0,
    MORPH_CROSS = 1,
    MORPH_ELLIPSE = 2
};


// C++: enum MorphTypes (cv.MorphTypes)
typedef NS_ENUM(int, MorphTypes) {
    MORPH_ERODE = 0,
    MORPH_DILATE = 1,
    MORPH_OPEN = 2,
    MORPH_CLOSE = 3,
    MORPH_GRADIENT = 4,
    MORPH_TOPHAT = 5,
    MORPH_BLACKHAT = 6,
    MORPH_HITMISS = 7
};


// C++: enum RectanglesIntersectTypes (cv.RectanglesIntersectTypes)
typedef NS_ENUM(int, RectanglesIntersectTypes) {
    INTERSECT_NONE = 0,
    INTERSECT_PARTIAL = 1,
    INTERSECT_FULL = 2
};


// C++: enum RetrievalModes (cv.RetrievalModes)
typedef NS_ENUM(int, RetrievalModes) {
    RETR_EXTERNAL = 0,
    RETR_LIST = 1,
    RETR_CCOMP = 2,
    RETR_TREE = 3,
    RETR_FLOODFILL = 4
};


// C++: enum ShapeMatchModes (cv.ShapeMatchModes)
typedef NS_ENUM(int, ShapeMatchModes) {
    CONTOURS_MATCH_I1 = 1,
    CONTOURS_MATCH_I2 = 2,
    CONTOURS_MATCH_I3 = 3
};


// C++: enum SpecialFilter (cv.SpecialFilter)
typedef NS_ENUM(int, SpecialFilter) {
    FILTER_SCHARR = -1
};


// C++: enum TemplateMatchModes (cv.TemplateMatchModes)
typedef NS_ENUM(int, TemplateMatchModes) {
    TM_SQDIFF = 0,
    TM_SQDIFF_NORMED = 1,
    TM_CCORR = 2,
    TM_CCORR_NORMED = 3,
    TM_CCOEFF = 4,
    TM_CCOEFF_NORMED = 5
};


// C++: enum ThresholdTypes (cv.ThresholdTypes)
typedef NS_ENUM(int, ThresholdTypes) {
    THRESH_BINARY = 0,
    THRESH_BINARY_INV = 1,
    THRESH_TRUNC = 2,
    THRESH_TOZERO = 3,
    THRESH_TOZERO_INV = 4,
    THRESH_MASK = 7,
    THRESH_OTSU = 8,
    THRESH_TRIANGLE = 16
};


// C++: enum WarpPolarMode (cv.WarpPolarMode)
typedef NS_ENUM(int, WarpPolarMode) {
    WARP_POLAR_LINEAR = 0,
    WARP_POLAR_LOG = 256
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Imgproc
/**
 * The Imgproc module
 *
 * Member classes: `GeneralizedHough`, `GeneralizedHoughBallard`, `GeneralizedHoughGuil`, `CLAHE`, `Subdiv2D`, `LineSegmentDetector`, `IntelligentScissorsMB`, `Moments`
 *
 * Member enums: `SpecialFilter`, `MorphTypes`, `MorphShapes`, `InterpolationFlags`, `WarpPolarMode`, `InterpolationMasks`, `DistanceTypes`, `DistanceTransformMasks`, `ThresholdTypes`, `AdaptiveThresholdTypes`, `GrabCutClasses`, `GrabCutModes`, `DistanceTransformLabelTypes`, `FloodFillFlags`, `ConnectedComponentsTypes`, `ConnectedComponentsAlgorithmsTypes`, `RetrievalModes`, `ContourApproximationModes`, `ShapeMatchModes`, `HoughModes`, `LineSegmentDetectorModes`, `HistCompMethods`, `ColorConversionCodes`, `RectanglesIntersectTypes`, `LineTypes`, `HersheyFonts`, `MarkerTypes`, `TemplateMatchModes`, `ColormapTypes`
 */
CV_EXPORTS @interface Imgproc : NSObject

#pragma mark - Class Constants


@property (class, readonly) int CV_GAUSSIAN_5x5 NS_SWIFT_NAME(CV_GAUSSIAN_5x5);
@property (class, readonly) int CV_SCHARR NS_SWIFT_NAME(CV_SCHARR);
@property (class, readonly) int CV_MAX_SOBEL_KSIZE NS_SWIFT_NAME(CV_MAX_SOBEL_KSIZE);
@property (class, readonly) int CV_RGBA2mRGBA NS_SWIFT_NAME(CV_RGBA2mRGBA);
@property (class, readonly) int CV_mRGBA2RGBA NS_SWIFT_NAME(CV_mRGBA2RGBA);
@property (class, readonly) int CV_WARP_FILL_OUTLIERS NS_SWIFT_NAME(CV_WARP_FILL_OUTLIERS);
@property (class, readonly) int CV_WARP_INVERSE_MAP NS_SWIFT_NAME(CV_WARP_INVERSE_MAP);
@property (class, readonly) int CV_CHAIN_CODE NS_SWIFT_NAME(CV_CHAIN_CODE);
@property (class, readonly) int CV_LINK_RUNS NS_SWIFT_NAME(CV_LINK_RUNS);
@property (class, readonly) int CV_POLY_APPROX_DP NS_SWIFT_NAME(CV_POLY_APPROX_DP);
@property (class, readonly) int CV_CLOCKWISE NS_SWIFT_NAME(CV_CLOCKWISE);
@property (class, readonly) int CV_COUNTER_CLOCKWISE NS_SWIFT_NAME(CV_COUNTER_CLOCKWISE);
@property (class, readonly) int CV_CANNY_L2_GRADIENT NS_SWIFT_NAME(CV_CANNY_L2_GRADIENT);

#pragma mark - Methods


//
//  Ptr_LineSegmentDetector cv::createLineSegmentDetector(int refine = LSD_REFINE_STD, double scale = 0.8, double sigma_scale = 0.6, double quant = 2.0, double ang_th = 22.5, double log_eps = 0, double density_th = 0.7, int n_bins = 1024)
//
/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 * @param sigma_scale Sigma for Gaussian filter. It is computed as sigma = sigma_scale/scale.
 * @param quant Bound to the quantization error on the gradient norm.
 * @param ang_th Gradient angle tolerance in degrees.
 * @param log_eps Detection threshold: -log10(NFA) \> log_eps. Used only when advance refinement is chosen.
 * @param density_th Minimal density of aligned region points in the enclosing rectangle.
 * @param n_bins Number of bins in pseudo-ordering of gradient modulus.
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale sigma_scale:(double)sigma_scale quant:(double)quant ang_th:(double)ang_th log_eps:(double)log_eps density_th:(double)density_th n_bins:(int)n_bins NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:sigma_scale:quant:ang_th:log_eps:density_th:n_bins:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 * @param sigma_scale Sigma for Gaussian filter. It is computed as sigma = sigma_scale/scale.
 * @param quant Bound to the quantization error on the gradient norm.
 * @param ang_th Gradient angle tolerance in degrees.
 * @param log_eps Detection threshold: -log10(NFA) \> log_eps. Used only when advance refinement is chosen.
 * @param density_th Minimal density of aligned region points in the enclosing rectangle.
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale sigma_scale:(double)sigma_scale quant:(double)quant ang_th:(double)ang_th log_eps:(double)log_eps density_th:(double)density_th NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:sigma_scale:quant:ang_th:log_eps:density_th:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 * @param sigma_scale Sigma for Gaussian filter. It is computed as sigma = sigma_scale/scale.
 * @param quant Bound to the quantization error on the gradient norm.
 * @param ang_th Gradient angle tolerance in degrees.
 * @param log_eps Detection threshold: -log10(NFA) \> log_eps. Used only when advance refinement is chosen.
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale sigma_scale:(double)sigma_scale quant:(double)quant ang_th:(double)ang_th log_eps:(double)log_eps NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:sigma_scale:quant:ang_th:log_eps:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 * @param sigma_scale Sigma for Gaussian filter. It is computed as sigma = sigma_scale/scale.
 * @param quant Bound to the quantization error on the gradient norm.
 * @param ang_th Gradient angle tolerance in degrees.
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale sigma_scale:(double)sigma_scale quant:(double)quant ang_th:(double)ang_th NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:sigma_scale:quant:ang_th:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 * @param sigma_scale Sigma for Gaussian filter. It is computed as sigma = sigma_scale/scale.
 * @param quant Bound to the quantization error on the gradient norm.
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale sigma_scale:(double)sigma_scale quant:(double)quant NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:sigma_scale:quant:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 * @param sigma_scale Sigma for Gaussian filter. It is computed as sigma = sigma_scale/scale.
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale sigma_scale:(double)sigma_scale NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:sigma_scale:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 * @param scale The scale of the image that will be used to find the lines. Range (0..1].
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine scale:(double)scale NS_SWIFT_NAME(createLineSegmentDetector(refine:scale:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 * @param refine The way found lines will be refined, see #LineSegmentDetectorModes
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector:(int)refine NS_SWIFT_NAME(createLineSegmentDetector(refine:));

/**
 * Creates a smart pointer to a LineSegmentDetector object and initializes it.
 *
 * The LineSegmentDetector algorithm is defined using the standard values. Only advanced users may want
 * to edit those, as to tailor it for their own application.
 *
 *
 * NOTE: Implementation has been removed due original code license conflict
 */
+ (LineSegmentDetector*)createLineSegmentDetector NS_SWIFT_NAME(createLineSegmentDetector());


//
//  Mat cv::getGaussianKernel(int ksize, double sigma, int ktype = CV_64F)
//
/**
 * Returns Gaussian filter coefficients.
 *
 * The function computes and returns the `$$\texttt{ksize} \times 1$$` matrix of Gaussian filter
 * coefficients:
 *
 * `$$G_i= \alpha *e^{-(i-( \texttt{ksize} -1)/2)^2/(2* \texttt{sigma}^2)},$$`
 *
 * where `$$i=0..\texttt{ksize}-1$$` and `$$\alpha$$` is the scale factor chosen so that `$$\sum_i G_i=1$$`.
 *
 * Two of such generated kernels can be passed to sepFilter2D. Those functions automatically recognize
 * smoothing kernels (a symmetrical kernel with sum of weights equal to 1) and handle them accordingly.
 * You may also use the higher-level GaussianBlur.
 * @param ksize Aperture size. It should be odd ( `$$\texttt{ksize} \mod 2 = 1$$` ) and positive.
 * @param sigma Gaussian standard deviation. If it is non-positive, it is computed from ksize as
 * `sigma = 0.3*((ksize-1)*0.5 - 1) + 0.8`.
 * @param ktype Type of filter coefficients. It can be CV_32F or CV_64F .
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+getDerivKernels:ky:dx:dy:ksize:normalize:ktype:`, `+getStructuringElement:ksize:anchor:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`
 */
+ (Mat*)getGaussianKernel:(int)ksize sigma:(double)sigma ktype:(int)ktype NS_SWIFT_NAME(getGaussianKernel(ksize:sigma:ktype:));

/**
 * Returns Gaussian filter coefficients.
 *
 * The function computes and returns the `$$\texttt{ksize} \times 1$$` matrix of Gaussian filter
 * coefficients:
 *
 * `$$G_i= \alpha *e^{-(i-( \texttt{ksize} -1)/2)^2/(2* \texttt{sigma}^2)},$$`
 *
 * where `$$i=0..\texttt{ksize}-1$$` and `$$\alpha$$` is the scale factor chosen so that `$$\sum_i G_i=1$$`.
 *
 * Two of such generated kernels can be passed to sepFilter2D. Those functions automatically recognize
 * smoothing kernels (a symmetrical kernel with sum of weights equal to 1) and handle them accordingly.
 * You may also use the higher-level GaussianBlur.
 * @param ksize Aperture size. It should be odd ( `$$\texttt{ksize} \mod 2 = 1$$` ) and positive.
 * @param sigma Gaussian standard deviation. If it is non-positive, it is computed from ksize as
 * `sigma = 0.3*((ksize-1)*0.5 - 1) + 0.8`.
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+getDerivKernels:ky:dx:dy:ksize:normalize:ktype:`, `+getStructuringElement:ksize:anchor:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`
 */
+ (Mat*)getGaussianKernel:(int)ksize sigma:(double)sigma NS_SWIFT_NAME(getGaussianKernel(ksize:sigma:));


//
//  void cv::getDerivKernels(Mat& kx, Mat& ky, int dx, int dy, int ksize, bool normalize = false, int ktype = CV_32F)
//
/**
 * Returns filter coefficients for computing spatial image derivatives.
 *
 * The function computes and returns the filter coefficients for spatial image derivatives. When
 * `ksize=FILTER_SCHARR`, the Scharr `$$3 \times 3$$` kernels are generated (see #Scharr). Otherwise, Sobel
 * kernels are generated (see #Sobel). The filters are normally passed to #sepFilter2D or to
 *
 * @param kx Output matrix of row filter coefficients. It has the type ktype .
 * @param ky Output matrix of column filter coefficients. It has the type ktype .
 * @param dx Derivative order in respect of x.
 * @param dy Derivative order in respect of y.
 * @param ksize Aperture size. It can be FILTER_SCHARR, 1, 3, 5, or 7.
 * @param normalize Flag indicating whether to normalize (scale down) the filter coefficients or not.
 * Theoretically, the coefficients should have the denominator `$$=2^{ksize*2-dx-dy-2}$$`. If you are
 * going to filter floating-point images, you are likely to use the normalized kernels. But if you
 * compute derivatives of an 8-bit image, store the results in a 16-bit image, and wish to preserve
 * all the fractional bits, you may want to set normalize=false .
 * @param ktype Type of filter coefficients. It can be CV_32f or CV_64F .
 */
+ (void)getDerivKernels:(Mat*)kx ky:(Mat*)ky dx:(int)dx dy:(int)dy ksize:(int)ksize normalize:(BOOL)normalize ktype:(int)ktype NS_SWIFT_NAME(getDerivKernels(kx:ky:dx:dy:ksize:normalize:ktype:));

/**
 * Returns filter coefficients for computing spatial image derivatives.
 *
 * The function computes and returns the filter coefficients for spatial image derivatives. When
 * `ksize=FILTER_SCHARR`, the Scharr `$$3 \times 3$$` kernels are generated (see #Scharr). Otherwise, Sobel
 * kernels are generated (see #Sobel). The filters are normally passed to #sepFilter2D or to
 *
 * @param kx Output matrix of row filter coefficients. It has the type ktype .
 * @param ky Output matrix of column filter coefficients. It has the type ktype .
 * @param dx Derivative order in respect of x.
 * @param dy Derivative order in respect of y.
 * @param ksize Aperture size. It can be FILTER_SCHARR, 1, 3, 5, or 7.
 * @param normalize Flag indicating whether to normalize (scale down) the filter coefficients or not.
 * Theoretically, the coefficients should have the denominator `$$=2^{ksize*2-dx-dy-2}$$`. If you are
 * going to filter floating-point images, you are likely to use the normalized kernels. But if you
 * compute derivatives of an 8-bit image, store the results in a 16-bit image, and wish to preserve
 * all the fractional bits, you may want to set normalize=false .
 */
+ (void)getDerivKernels:(Mat*)kx ky:(Mat*)ky dx:(int)dx dy:(int)dy ksize:(int)ksize normalize:(BOOL)normalize NS_SWIFT_NAME(getDerivKernels(kx:ky:dx:dy:ksize:normalize:));

/**
 * Returns filter coefficients for computing spatial image derivatives.
 *
 * The function computes and returns the filter coefficients for spatial image derivatives. When
 * `ksize=FILTER_SCHARR`, the Scharr `$$3 \times 3$$` kernels are generated (see #Scharr). Otherwise, Sobel
 * kernels are generated (see #Sobel). The filters are normally passed to #sepFilter2D or to
 *
 * @param kx Output matrix of row filter coefficients. It has the type ktype .
 * @param ky Output matrix of column filter coefficients. It has the type ktype .
 * @param dx Derivative order in respect of x.
 * @param dy Derivative order in respect of y.
 * @param ksize Aperture size. It can be FILTER_SCHARR, 1, 3, 5, or 7.
 * Theoretically, the coefficients should have the denominator `$$=2^{ksize*2-dx-dy-2}$$`. If you are
 * going to filter floating-point images, you are likely to use the normalized kernels. But if you
 * compute derivatives of an 8-bit image, store the results in a 16-bit image, and wish to preserve
 * all the fractional bits, you may want to set normalize=false .
 */
+ (void)getDerivKernels:(Mat*)kx ky:(Mat*)ky dx:(int)dx dy:(int)dy ksize:(int)ksize NS_SWIFT_NAME(getDerivKernels(kx:ky:dx:dy:ksize:));


//
//  Mat cv::getGaborKernel(Size ksize, double sigma, double theta, double lambd, double gamma, double psi = CV_PI*0.5, int ktype = CV_64F)
//
/**
 * Returns Gabor filter coefficients.
 *
 * For more details about gabor filter equations and parameters, see: [Gabor
 * Filter](http://en.wikipedia.org/wiki/Gabor_filter).
 *
 * @param ksize Size of the filter returned.
 * @param sigma Standard deviation of the gaussian envelope.
 * @param theta Orientation of the normal to the parallel stripes of a Gabor function.
 * @param lambd Wavelength of the sinusoidal factor.
 * @param gamma Spatial aspect ratio.
 * @param psi Phase offset.
 * @param ktype Type of filter coefficients. It can be CV_32F or CV_64F .
 */
+ (Mat*)getGaborKernel:(Size2i*)ksize sigma:(double)sigma theta:(double)theta lambd:(double)lambd gamma:(double)gamma psi:(double)psi ktype:(int)ktype NS_SWIFT_NAME(getGaborKernel(ksize:sigma:theta:lambd:gamma:psi:ktype:));

/**
 * Returns Gabor filter coefficients.
 *
 * For more details about gabor filter equations and parameters, see: [Gabor
 * Filter](http://en.wikipedia.org/wiki/Gabor_filter).
 *
 * @param ksize Size of the filter returned.
 * @param sigma Standard deviation of the gaussian envelope.
 * @param theta Orientation of the normal to the parallel stripes of a Gabor function.
 * @param lambd Wavelength of the sinusoidal factor.
 * @param gamma Spatial aspect ratio.
 * @param psi Phase offset.
 */
+ (Mat*)getGaborKernel:(Size2i*)ksize sigma:(double)sigma theta:(double)theta lambd:(double)lambd gamma:(double)gamma psi:(double)psi NS_SWIFT_NAME(getGaborKernel(ksize:sigma:theta:lambd:gamma:psi:));

/**
 * Returns Gabor filter coefficients.
 *
 * For more details about gabor filter equations and parameters, see: [Gabor
 * Filter](http://en.wikipedia.org/wiki/Gabor_filter).
 *
 * @param ksize Size of the filter returned.
 * @param sigma Standard deviation of the gaussian envelope.
 * @param theta Orientation of the normal to the parallel stripes of a Gabor function.
 * @param lambd Wavelength of the sinusoidal factor.
 * @param gamma Spatial aspect ratio.
 */
+ (Mat*)getGaborKernel:(Size2i*)ksize sigma:(double)sigma theta:(double)theta lambd:(double)lambd gamma:(double)gamma NS_SWIFT_NAME(getGaborKernel(ksize:sigma:theta:lambd:gamma:));


//
//  Mat cv::getStructuringElement(MorphShapes shape, Size ksize, Point anchor = Point(-1,-1))
//
/**
 * Returns a structuring element of the specified size and shape for morphological operations.
 *
 * The function constructs and returns the structuring element that can be further passed to #erode,
 * #dilate or #morphologyEx. But you can also construct an arbitrary binary mask yourself and use it as
 * the structuring element.
 *
 * @param shape Element shape that could be one of #MorphShapes
 * @param ksize Size of the structuring element.
 * @param anchor Anchor position within the element. The default value `$$(-1, -1)$$` means that the
 * anchor is at the center. Note that only the shape of a cross-shaped element depends on the anchor
 * position. In other cases the anchor just regulates how much the result of the morphological
 * operation is shifted.
 */
+ (Mat*)getStructuringElement:(MorphShapes)shape ksize:(Size2i*)ksize anchor:(Point2i*)anchor NS_SWIFT_NAME(getStructuringElement(shape:ksize:anchor:));

/**
 * Returns a structuring element of the specified size and shape for morphological operations.
 *
 * The function constructs and returns the structuring element that can be further passed to #erode,
 * #dilate or #morphologyEx. But you can also construct an arbitrary binary mask yourself and use it as
 * the structuring element.
 *
 * @param shape Element shape that could be one of #MorphShapes
 * @param ksize Size of the structuring element.
 * anchor is at the center. Note that only the shape of a cross-shaped element depends on the anchor
 * position. In other cases the anchor just regulates how much the result of the morphological
 * operation is shifted.
 */
+ (Mat*)getStructuringElement:(MorphShapes)shape ksize:(Size2i*)ksize NS_SWIFT_NAME(getStructuringElement(shape:ksize:));


//
//  void cv::medianBlur(Mat src, Mat& dst, int ksize)
//
/**
 * Blurs an image using the median filter.
 *
 * The function smoothes an image using the median filter with the `$$\texttt{ksize} \times
 * \texttt{ksize}$$` aperture. Each channel of a multi-channel image is processed independently.
 * In-place operation is supported.
 *
 * NOTE: The median filter uses #BORDER_REPLICATE internally to cope with border pixels, see #BorderTypes
 *
 * @param src input 1-, 3-, or 4-channel image; when ksize is 3 or 5, the image depth should be
 * CV_8U, CV_16U, or CV_32F, for larger aperture sizes, it can only be CV_8U.
 * @param dst destination array of the same size and type as src.
 * @param ksize aperture linear size; it must be odd and greater than 1, for example: 3, 5, 7 ...
 * @see `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+blur:dst:ksize:anchor:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`
 */
+ (void)medianBlur:(Mat*)src dst:(Mat*)dst ksize:(int)ksize NS_SWIFT_NAME(medianBlur(src:dst:ksize:));


//
//  void cv::GaussianBlur(Mat src, Mat& dst, Size ksize, double sigmaX, double sigmaY = 0, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Blurs an image using a Gaussian filter.
 *
 * The function convolves the source image with the specified Gaussian kernel. In-place filtering is
 * supported.
 *
 * @param src input image; the image can have any number of channels, which are processed
 * independently, but the depth should be CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param ksize Gaussian kernel size. ksize.width and ksize.height can differ but they both must be
 * positive and odd. Or, they can be zero's and then they are computed from sigma.
 * @param sigmaX Gaussian kernel standard deviation in X direction.
 * @param sigmaY Gaussian kernel standard deviation in Y direction; if sigmaY is zero, it is set to be
 * equal to sigmaX, if both sigmas are zeros, they are computed from ksize.width and ksize.height,
 * respectively (see #getGaussianKernel for details); to fully control the result regardless of
 * possible future modifications of all this semantics, it is recommended to specify all of ksize,
 * sigmaX, and sigmaY.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 *
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+blur:dst:ksize:anchor:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+medianBlur:dst:ksize:`
 */
+ (void)GaussianBlur:(Mat*)src dst:(Mat*)dst ksize:(Size2i*)ksize sigmaX:(double)sigmaX sigmaY:(double)sigmaY borderType:(BorderTypes)borderType NS_SWIFT_NAME(GaussianBlur(src:dst:ksize:sigmaX:sigmaY:borderType:));

/**
 * Blurs an image using a Gaussian filter.
 *
 * The function convolves the source image with the specified Gaussian kernel. In-place filtering is
 * supported.
 *
 * @param src input image; the image can have any number of channels, which are processed
 * independently, but the depth should be CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param ksize Gaussian kernel size. ksize.width and ksize.height can differ but they both must be
 * positive and odd. Or, they can be zero's and then they are computed from sigma.
 * @param sigmaX Gaussian kernel standard deviation in X direction.
 * @param sigmaY Gaussian kernel standard deviation in Y direction; if sigmaY is zero, it is set to be
 * equal to sigmaX, if both sigmas are zeros, they are computed from ksize.width and ksize.height,
 * respectively (see #getGaussianKernel for details); to fully control the result regardless of
 * possible future modifications of all this semantics, it is recommended to specify all of ksize,
 * sigmaX, and sigmaY.
 *
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+blur:dst:ksize:anchor:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+medianBlur:dst:ksize:`
 */
+ (void)GaussianBlur:(Mat*)src dst:(Mat*)dst ksize:(Size2i*)ksize sigmaX:(double)sigmaX sigmaY:(double)sigmaY NS_SWIFT_NAME(GaussianBlur(src:dst:ksize:sigmaX:sigmaY:));

/**
 * Blurs an image using a Gaussian filter.
 *
 * The function convolves the source image with the specified Gaussian kernel. In-place filtering is
 * supported.
 *
 * @param src input image; the image can have any number of channels, which are processed
 * independently, but the depth should be CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param ksize Gaussian kernel size. ksize.width and ksize.height can differ but they both must be
 * positive and odd. Or, they can be zero's and then they are computed from sigma.
 * @param sigmaX Gaussian kernel standard deviation in X direction.
 * equal to sigmaX, if both sigmas are zeros, they are computed from ksize.width and ksize.height,
 * respectively (see #getGaussianKernel for details); to fully control the result regardless of
 * possible future modifications of all this semantics, it is recommended to specify all of ksize,
 * sigmaX, and sigmaY.
 *
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+blur:dst:ksize:anchor:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+medianBlur:dst:ksize:`
 */
+ (void)GaussianBlur:(Mat*)src dst:(Mat*)dst ksize:(Size2i*)ksize sigmaX:(double)sigmaX NS_SWIFT_NAME(GaussianBlur(src:dst:ksize:sigmaX:));


//
//  void cv::bilateralFilter(Mat src, Mat& dst, int d, double sigmaColor, double sigmaSpace, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Applies the bilateral filter to an image.
 *
 * The function applies bilateral filtering to the input image, as described in
 * http://www.dai.ed.ac.uk/CVonline/LOCAL_COPIES/MANDUCHI1/Bilateral_Filtering.html
 * bilateralFilter can reduce unwanted noise very well while keeping edges fairly sharp. However, it is
 * very slow compared to most filters.
 *
 * _Sigma values_: For simplicity, you can set the 2 sigma values to be the same. If they are small (\<
 * 10), the filter will not have much effect, whereas if they are large (\> 150), they will have a very
 * strong effect, making the image look "cartoonish".
 *
 * _Filter size_: Large filters (d \> 5) are very slow, so it is recommended to use d=5 for real-time
 * applications, and perhaps d=9 for offline applications that need heavy noise filtering.
 *
 * This filter does not work inplace.
 * @param src Source 8-bit or floating-point, 1-channel or 3-channel image.
 * @param dst Destination image of the same size and type as src .
 * @param d Diameter of each pixel neighborhood that is used during filtering. If it is non-positive,
 * it is computed from sigmaSpace.
 * @param sigmaColor Filter sigma in the color space. A larger value of the parameter means that
 * farther colors within the pixel neighborhood (see sigmaSpace) will be mixed together, resulting
 * in larger areas of semi-equal color.
 * @param sigmaSpace Filter sigma in the coordinate space. A larger value of the parameter means that
 * farther pixels will influence each other as long as their colors are close enough (see sigmaColor
 * ). When d\>0, it specifies the neighborhood size regardless of sigmaSpace. Otherwise, d is
 * proportional to sigmaSpace.
 * @param borderType border mode used to extrapolate pixels outside of the image, see #BorderTypes
 */
+ (void)bilateralFilter:(Mat*)src dst:(Mat*)dst d:(int)d sigmaColor:(double)sigmaColor sigmaSpace:(double)sigmaSpace borderType:(BorderTypes)borderType NS_SWIFT_NAME(bilateralFilter(src:dst:d:sigmaColor:sigmaSpace:borderType:));

/**
 * Applies the bilateral filter to an image.
 *
 * The function applies bilateral filtering to the input image, as described in
 * http://www.dai.ed.ac.uk/CVonline/LOCAL_COPIES/MANDUCHI1/Bilateral_Filtering.html
 * bilateralFilter can reduce unwanted noise very well while keeping edges fairly sharp. However, it is
 * very slow compared to most filters.
 *
 * _Sigma values_: For simplicity, you can set the 2 sigma values to be the same. If they are small (\<
 * 10), the filter will not have much effect, whereas if they are large (\> 150), they will have a very
 * strong effect, making the image look "cartoonish".
 *
 * _Filter size_: Large filters (d \> 5) are very slow, so it is recommended to use d=5 for real-time
 * applications, and perhaps d=9 for offline applications that need heavy noise filtering.
 *
 * This filter does not work inplace.
 * @param src Source 8-bit or floating-point, 1-channel or 3-channel image.
 * @param dst Destination image of the same size and type as src .
 * @param d Diameter of each pixel neighborhood that is used during filtering. If it is non-positive,
 * it is computed from sigmaSpace.
 * @param sigmaColor Filter sigma in the color space. A larger value of the parameter means that
 * farther colors within the pixel neighborhood (see sigmaSpace) will be mixed together, resulting
 * in larger areas of semi-equal color.
 * @param sigmaSpace Filter sigma in the coordinate space. A larger value of the parameter means that
 * farther pixels will influence each other as long as their colors are close enough (see sigmaColor
 * ). When d\>0, it specifies the neighborhood size regardless of sigmaSpace. Otherwise, d is
 * proportional to sigmaSpace.
 */
+ (void)bilateralFilter:(Mat*)src dst:(Mat*)dst d:(int)d sigmaColor:(double)sigmaColor sigmaSpace:(double)sigmaSpace NS_SWIFT_NAME(bilateralFilter(src:dst:d:sigmaColor:sigmaSpace:));


//
//  void cv::boxFilter(Mat src, Mat& dst, int ddepth, Size ksize, Point anchor = Point(-1,-1), bool normalize = true, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Blurs an image using the box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \alpha \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1 \end{bmatrix}$$`
 *
 * where
 *
 * `$$\alpha = \begin{cases} \frac{1}{\texttt{ksize.width*ksize.height}} & \texttt{when } \texttt{normalize=true}  \\1 & \texttt{otherwise}\end{cases}$$`
 *
 * Unnormalized box filter is useful for computing various integral characteristics over each pixel
 * neighborhood, such as covariance matrices of image derivatives (used in dense optical flow
 * algorithms, and so on). If you need to compute pixel sums over variable-size windows, use #integral.
 *
 * @param src input image.
 * @param dst output image of the same size and type as src.
 * @param ddepth the output image depth (-1 to use src.depth()).
 * @param ksize blurring kernel size.
 * @param anchor anchor point; default value Point(-1,-1) means that the anchor is at the kernel
 * center.
 * @param normalize flag, specifying whether the kernel is normalized by its area or not.
 * @param borderType border mode used to extrapolate pixels outside of the image, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+blur:dst:ksize:anchor:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`, `+integral:sum:sdepth:`
 */
+ (void)boxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize anchor:(Point2i*)anchor normalize:(BOOL)normalize borderType:(BorderTypes)borderType NS_SWIFT_NAME(boxFilter(src:dst:ddepth:ksize:anchor:normalize:borderType:));

/**
 * Blurs an image using the box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \alpha \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1 \end{bmatrix}$$`
 *
 * where
 *
 * `$$\alpha = \begin{cases} \frac{1}{\texttt{ksize.width*ksize.height}} & \texttt{when } \texttt{normalize=true}  \\1 & \texttt{otherwise}\end{cases}$$`
 *
 * Unnormalized box filter is useful for computing various integral characteristics over each pixel
 * neighborhood, such as covariance matrices of image derivatives (used in dense optical flow
 * algorithms, and so on). If you need to compute pixel sums over variable-size windows, use #integral.
 *
 * @param src input image.
 * @param dst output image of the same size and type as src.
 * @param ddepth the output image depth (-1 to use src.depth()).
 * @param ksize blurring kernel size.
 * @param anchor anchor point; default value Point(-1,-1) means that the anchor is at the kernel
 * center.
 * @param normalize flag, specifying whether the kernel is normalized by its area or not.
 * @see `+blur:dst:ksize:anchor:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`, `+integral:sum:sdepth:`
 */
+ (void)boxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize anchor:(Point2i*)anchor normalize:(BOOL)normalize NS_SWIFT_NAME(boxFilter(src:dst:ddepth:ksize:anchor:normalize:));

/**
 * Blurs an image using the box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \alpha \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1 \end{bmatrix}$$`
 *
 * where
 *
 * `$$\alpha = \begin{cases} \frac{1}{\texttt{ksize.width*ksize.height}} & \texttt{when } \texttt{normalize=true}  \\1 & \texttt{otherwise}\end{cases}$$`
 *
 * Unnormalized box filter is useful for computing various integral characteristics over each pixel
 * neighborhood, such as covariance matrices of image derivatives (used in dense optical flow
 * algorithms, and so on). If you need to compute pixel sums over variable-size windows, use #integral.
 *
 * @param src input image.
 * @param dst output image of the same size and type as src.
 * @param ddepth the output image depth (-1 to use src.depth()).
 * @param ksize blurring kernel size.
 * @param anchor anchor point; default value Point(-1,-1) means that the anchor is at the kernel
 * center.
 * @see `+blur:dst:ksize:anchor:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`, `+integral:sum:sdepth:`
 */
+ (void)boxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize anchor:(Point2i*)anchor NS_SWIFT_NAME(boxFilter(src:dst:ddepth:ksize:anchor:));

/**
 * Blurs an image using the box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \alpha \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1 \end{bmatrix}$$`
 *
 * where
 *
 * `$$\alpha = \begin{cases} \frac{1}{\texttt{ksize.width*ksize.height}} & \texttt{when } \texttt{normalize=true}  \\1 & \texttt{otherwise}\end{cases}$$`
 *
 * Unnormalized box filter is useful for computing various integral characteristics over each pixel
 * neighborhood, such as covariance matrices of image derivatives (used in dense optical flow
 * algorithms, and so on). If you need to compute pixel sums over variable-size windows, use #integral.
 *
 * @param src input image.
 * @param dst output image of the same size and type as src.
 * @param ddepth the output image depth (-1 to use src.depth()).
 * @param ksize blurring kernel size.
 * center.
 * @see `+blur:dst:ksize:anchor:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`, `+integral:sum:sdepth:`
 */
+ (void)boxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize NS_SWIFT_NAME(boxFilter(src:dst:ddepth:ksize:));


//
//  void cv::sqrBoxFilter(Mat src, Mat& dst, int ddepth, Size ksize, Point anchor = Point(-1, -1), bool normalize = true, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates the normalized sum of squares of the pixel values overlapping the filter.
 *
 * For every pixel `$$ (x, y) $$` in the source image, the function calculates the sum of squares of those neighboring
 * pixel values which overlap the filter placed over the pixel `$$ (x, y) $$`.
 *
 * The unnormalized square box filter can be useful in computing local image statistics such as the the local
 * variance and standard deviation around the neighborhood of a pixel.
 *
 * @param src input image
 * @param dst output image of the same size and type as src
 * @param ddepth the output image depth (-1 to use src.depth())
 * @param ksize kernel size
 * @param anchor kernel anchor point. The default value of Point(-1, -1) denotes that the anchor is at the kernel
 * center.
 * @param normalize flag, specifying whether the kernel is to be normalized by it's area or not.
 * @param borderType border mode used to extrapolate pixels outside of the image, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`
 */
+ (void)sqrBoxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize anchor:(Point2i*)anchor normalize:(BOOL)normalize borderType:(BorderTypes)borderType NS_SWIFT_NAME(sqrBoxFilter(src:dst:ddepth:ksize:anchor:normalize:borderType:));

/**
 * Calculates the normalized sum of squares of the pixel values overlapping the filter.
 *
 * For every pixel `$$ (x, y) $$` in the source image, the function calculates the sum of squares of those neighboring
 * pixel values which overlap the filter placed over the pixel `$$ (x, y) $$`.
 *
 * The unnormalized square box filter can be useful in computing local image statistics such as the the local
 * variance and standard deviation around the neighborhood of a pixel.
 *
 * @param src input image
 * @param dst output image of the same size and type as src
 * @param ddepth the output image depth (-1 to use src.depth())
 * @param ksize kernel size
 * @param anchor kernel anchor point. The default value of Point(-1, -1) denotes that the anchor is at the kernel
 * center.
 * @param normalize flag, specifying whether the kernel is to be normalized by it's area or not.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`
 */
+ (void)sqrBoxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize anchor:(Point2i*)anchor normalize:(BOOL)normalize NS_SWIFT_NAME(sqrBoxFilter(src:dst:ddepth:ksize:anchor:normalize:));

/**
 * Calculates the normalized sum of squares of the pixel values overlapping the filter.
 *
 * For every pixel `$$ (x, y) $$` in the source image, the function calculates the sum of squares of those neighboring
 * pixel values which overlap the filter placed over the pixel `$$ (x, y) $$`.
 *
 * The unnormalized square box filter can be useful in computing local image statistics such as the the local
 * variance and standard deviation around the neighborhood of a pixel.
 *
 * @param src input image
 * @param dst output image of the same size and type as src
 * @param ddepth the output image depth (-1 to use src.depth())
 * @param ksize kernel size
 * @param anchor kernel anchor point. The default value of Point(-1, -1) denotes that the anchor is at the kernel
 * center.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`
 */
+ (void)sqrBoxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize anchor:(Point2i*)anchor NS_SWIFT_NAME(sqrBoxFilter(src:dst:ddepth:ksize:anchor:));

/**
 * Calculates the normalized sum of squares of the pixel values overlapping the filter.
 *
 * For every pixel `$$ (x, y) $$` in the source image, the function calculates the sum of squares of those neighboring
 * pixel values which overlap the filter placed over the pixel `$$ (x, y) $$`.
 *
 * The unnormalized square box filter can be useful in computing local image statistics such as the the local
 * variance and standard deviation around the neighborhood of a pixel.
 *
 * @param src input image
 * @param dst output image of the same size and type as src
 * @param ddepth the output image depth (-1 to use src.depth())
 * @param ksize kernel size
 * center.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`
 */
+ (void)sqrBoxFilter:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(Size2i*)ksize NS_SWIFT_NAME(sqrBoxFilter(src:dst:ddepth:ksize:));


//
//  void cv::blur(Mat src, Mat& dst, Size ksize, Point anchor = Point(-1,-1), BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Blurs an image using the normalized box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \frac{1}{\texttt{ksize.width*ksize.height}} \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \end{bmatrix}$$`
 *
 * The call `blur(src, dst, ksize, anchor, borderType)` is equivalent to `boxFilter(src, dst, src.type(), ksize,
 * anchor, true, borderType)`.
 *
 * @param src input image; it can have any number of channels, which are processed independently, but
 * the depth should be CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param ksize blurring kernel size.
 * @param anchor anchor point; default value Point(-1,-1) means that the anchor is at the kernel
 * center.
 * @param borderType border mode used to extrapolate pixels outside of the image, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`
 */
+ (void)blur:(Mat*)src dst:(Mat*)dst ksize:(Size2i*)ksize anchor:(Point2i*)anchor borderType:(BorderTypes)borderType NS_SWIFT_NAME(blur(src:dst:ksize:anchor:borderType:));

/**
 * Blurs an image using the normalized box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \frac{1}{\texttt{ksize.width*ksize.height}} \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \end{bmatrix}$$`
 *
 * The call `blur(src, dst, ksize, anchor, borderType)` is equivalent to `boxFilter(src, dst, src.type(), ksize,
 * anchor, true, borderType)`.
 *
 * @param src input image; it can have any number of channels, which are processed independently, but
 * the depth should be CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param ksize blurring kernel size.
 * @param anchor anchor point; default value Point(-1,-1) means that the anchor is at the kernel
 * center.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`
 */
+ (void)blur:(Mat*)src dst:(Mat*)dst ksize:(Size2i*)ksize anchor:(Point2i*)anchor NS_SWIFT_NAME(blur(src:dst:ksize:anchor:));

/**
 * Blurs an image using the normalized box filter.
 *
 * The function smooths an image using the kernel:
 *
 * `$$\texttt{K} =  \frac{1}{\texttt{ksize.width*ksize.height}} \begin{bmatrix} 1 & 1 & 1 &  \cdots & 1 & 1  \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \hdotsfor{6} \\ 1 & 1 & 1 &  \cdots & 1 & 1  \\ \end{bmatrix}$$`
 *
 * The call `blur(src, dst, ksize, anchor, borderType)` is equivalent to `boxFilter(src, dst, src.type(), ksize,
 * anchor, true, borderType)`.
 *
 * @param src input image; it can have any number of channels, which are processed independently, but
 * the depth should be CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param ksize blurring kernel size.
 * center.
 * @see `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+bilateralFilter:dst:d:sigmaColor:sigmaSpace:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+medianBlur:dst:ksize:`
 */
+ (void)blur:(Mat*)src dst:(Mat*)dst ksize:(Size2i*)ksize NS_SWIFT_NAME(blur(src:dst:ksize:));


//
//  void cv::filter2D(Mat src, Mat& dst, int ddepth, Mat kernel, Point anchor = Point(-1,-1), double delta = 0, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Convolves an image with the kernel.
 *
 * The function applies an arbitrary linear filter to an image. In-place operation is supported. When
 * the aperture is partially outside the image, the function interpolates outlier pixel values
 * according to the specified border mode.
 *
 * The function does actually compute correlation, not the convolution:
 *
 * `$$\texttt{dst} (x,y) =  \sum _{ \substack{0\leq x' < \texttt{kernel.cols}\\{0\leq y' < \texttt{kernel.rows}}}}  \texttt{kernel} (x',y')* \texttt{src} (x+x'- \texttt{anchor.x} ,y+y'- \texttt{anchor.y} )$$`
 *
 * That is, the kernel is not mirrored around the anchor point. If you need a real convolution, flip
 * the kernel using #flip and set the new anchor to `(kernel.cols - anchor.x - 1, kernel.rows -
 * anchor.y - 1)`.
 *
 * The function uses the DFT-based algorithm in case of sufficiently large kernels (~`11 x 11` or
 * larger) and the direct algorithm for small kernels.
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth desired depth of the destination image, see REF: filter_depths "combinations"
 * @param kernel convolution kernel (or rather a correlation kernel), a single-channel floating point
 * matrix; if you want to apply different kernels to different channels, split the image into
 * separate color planes using split and process them individually.
 * @param anchor anchor of the kernel that indicates the relative position of a filtered point within
 * the kernel; the anchor should lie within the kernel; default value (-1,-1) means that the anchor
 * is at the kernel center.
 * @param delta optional value added to the filtered pixels before storing them in dst.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `dft`, `+matchTemplate:templ:result:method:mask:`
 */
+ (void)filter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernel:(Mat*)kernel anchor:(Point2i*)anchor delta:(double)delta borderType:(BorderTypes)borderType NS_SWIFT_NAME(filter2D(src:dst:ddepth:kernel:anchor:delta:borderType:));

/**
 * Convolves an image with the kernel.
 *
 * The function applies an arbitrary linear filter to an image. In-place operation is supported. When
 * the aperture is partially outside the image, the function interpolates outlier pixel values
 * according to the specified border mode.
 *
 * The function does actually compute correlation, not the convolution:
 *
 * `$$\texttt{dst} (x,y) =  \sum _{ \substack{0\leq x' < \texttt{kernel.cols}\\{0\leq y' < \texttt{kernel.rows}}}}  \texttt{kernel} (x',y')* \texttt{src} (x+x'- \texttt{anchor.x} ,y+y'- \texttt{anchor.y} )$$`
 *
 * That is, the kernel is not mirrored around the anchor point. If you need a real convolution, flip
 * the kernel using #flip and set the new anchor to `(kernel.cols - anchor.x - 1, kernel.rows -
 * anchor.y - 1)`.
 *
 * The function uses the DFT-based algorithm in case of sufficiently large kernels (~`11 x 11` or
 * larger) and the direct algorithm for small kernels.
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth desired depth of the destination image, see REF: filter_depths "combinations"
 * @param kernel convolution kernel (or rather a correlation kernel), a single-channel floating point
 * matrix; if you want to apply different kernels to different channels, split the image into
 * separate color planes using split and process them individually.
 * @param anchor anchor of the kernel that indicates the relative position of a filtered point within
 * the kernel; the anchor should lie within the kernel; default value (-1,-1) means that the anchor
 * is at the kernel center.
 * @param delta optional value added to the filtered pixels before storing them in dst.
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `dft`, `+matchTemplate:templ:result:method:mask:`
 */
+ (void)filter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernel:(Mat*)kernel anchor:(Point2i*)anchor delta:(double)delta NS_SWIFT_NAME(filter2D(src:dst:ddepth:kernel:anchor:delta:));

/**
 * Convolves an image with the kernel.
 *
 * The function applies an arbitrary linear filter to an image. In-place operation is supported. When
 * the aperture is partially outside the image, the function interpolates outlier pixel values
 * according to the specified border mode.
 *
 * The function does actually compute correlation, not the convolution:
 *
 * `$$\texttt{dst} (x,y) =  \sum _{ \substack{0\leq x' < \texttt{kernel.cols}\\{0\leq y' < \texttt{kernel.rows}}}}  \texttt{kernel} (x',y')* \texttt{src} (x+x'- \texttt{anchor.x} ,y+y'- \texttt{anchor.y} )$$`
 *
 * That is, the kernel is not mirrored around the anchor point. If you need a real convolution, flip
 * the kernel using #flip and set the new anchor to `(kernel.cols - anchor.x - 1, kernel.rows -
 * anchor.y - 1)`.
 *
 * The function uses the DFT-based algorithm in case of sufficiently large kernels (~`11 x 11` or
 * larger) and the direct algorithm for small kernels.
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth desired depth of the destination image, see REF: filter_depths "combinations"
 * @param kernel convolution kernel (or rather a correlation kernel), a single-channel floating point
 * matrix; if you want to apply different kernels to different channels, split the image into
 * separate color planes using split and process them individually.
 * @param anchor anchor of the kernel that indicates the relative position of a filtered point within
 * the kernel; the anchor should lie within the kernel; default value (-1,-1) means that the anchor
 * is at the kernel center.
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `dft`, `+matchTemplate:templ:result:method:mask:`
 */
+ (void)filter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernel:(Mat*)kernel anchor:(Point2i*)anchor NS_SWIFT_NAME(filter2D(src:dst:ddepth:kernel:anchor:));

/**
 * Convolves an image with the kernel.
 *
 * The function applies an arbitrary linear filter to an image. In-place operation is supported. When
 * the aperture is partially outside the image, the function interpolates outlier pixel values
 * according to the specified border mode.
 *
 * The function does actually compute correlation, not the convolution:
 *
 * `$$\texttt{dst} (x,y) =  \sum _{ \substack{0\leq x' < \texttt{kernel.cols}\\{0\leq y' < \texttt{kernel.rows}}}}  \texttt{kernel} (x',y')* \texttt{src} (x+x'- \texttt{anchor.x} ,y+y'- \texttt{anchor.y} )$$`
 *
 * That is, the kernel is not mirrored around the anchor point. If you need a real convolution, flip
 * the kernel using #flip and set the new anchor to `(kernel.cols - anchor.x - 1, kernel.rows -
 * anchor.y - 1)`.
 *
 * The function uses the DFT-based algorithm in case of sufficiently large kernels (~`11 x 11` or
 * larger) and the direct algorithm for small kernels.
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth desired depth of the destination image, see REF: filter_depths "combinations"
 * @param kernel convolution kernel (or rather a correlation kernel), a single-channel floating point
 * matrix; if you want to apply different kernels to different channels, split the image into
 * separate color planes using split and process them individually.
 * the kernel; the anchor should lie within the kernel; default value (-1,-1) means that the anchor
 * is at the kernel center.
 * @see `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `dft`, `+matchTemplate:templ:result:method:mask:`
 */
+ (void)filter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernel:(Mat*)kernel NS_SWIFT_NAME(filter2D(src:dst:ddepth:kernel:));


//
//  void cv::sepFilter2D(Mat src, Mat& dst, int ddepth, Mat kernelX, Mat kernelY, Point anchor = Point(-1,-1), double delta = 0, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Applies a separable linear filter to an image.
 *
 * The function applies a separable linear filter to the image. That is, first, every row of src is
 * filtered with the 1D kernel kernelX. Then, every column of the result is filtered with the 1D
 * kernel kernelY. The final result shifted by delta is stored in dst .
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Destination image depth, see REF: filter_depths "combinations"
 * @param kernelX Coefficients for filtering each row.
 * @param kernelY Coefficients for filtering each column.
 * @param anchor Anchor position within the kernel. The default value `$$(-1,-1)$$` means that the anchor
 * is at the kernel center.
 * @param delta Value added to the filtered results before storing them.
 * @param borderType Pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+blur:dst:ksize:anchor:borderType:`
 */
+ (void)sepFilter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernelX:(Mat*)kernelX kernelY:(Mat*)kernelY anchor:(Point2i*)anchor delta:(double)delta borderType:(BorderTypes)borderType NS_SWIFT_NAME(sepFilter2D(src:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:));

/**
 * Applies a separable linear filter to an image.
 *
 * The function applies a separable linear filter to the image. That is, first, every row of src is
 * filtered with the 1D kernel kernelX. Then, every column of the result is filtered with the 1D
 * kernel kernelY. The final result shifted by delta is stored in dst .
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Destination image depth, see REF: filter_depths "combinations"
 * @param kernelX Coefficients for filtering each row.
 * @param kernelY Coefficients for filtering each column.
 * @param anchor Anchor position within the kernel. The default value `$$(-1,-1)$$` means that the anchor
 * is at the kernel center.
 * @param delta Value added to the filtered results before storing them.
 * @see `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+blur:dst:ksize:anchor:borderType:`
 */
+ (void)sepFilter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernelX:(Mat*)kernelX kernelY:(Mat*)kernelY anchor:(Point2i*)anchor delta:(double)delta NS_SWIFT_NAME(sepFilter2D(src:dst:ddepth:kernelX:kernelY:anchor:delta:));

/**
 * Applies a separable linear filter to an image.
 *
 * The function applies a separable linear filter to the image. That is, first, every row of src is
 * filtered with the 1D kernel kernelX. Then, every column of the result is filtered with the 1D
 * kernel kernelY. The final result shifted by delta is stored in dst .
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Destination image depth, see REF: filter_depths "combinations"
 * @param kernelX Coefficients for filtering each row.
 * @param kernelY Coefficients for filtering each column.
 * @param anchor Anchor position within the kernel. The default value `$$(-1,-1)$$` means that the anchor
 * is at the kernel center.
 * @see `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+blur:dst:ksize:anchor:borderType:`
 */
+ (void)sepFilter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernelX:(Mat*)kernelX kernelY:(Mat*)kernelY anchor:(Point2i*)anchor NS_SWIFT_NAME(sepFilter2D(src:dst:ddepth:kernelX:kernelY:anchor:));

/**
 * Applies a separable linear filter to an image.
 *
 * The function applies a separable linear filter to the image. That is, first, every row of src is
 * filtered with the 1D kernel kernelX. Then, every column of the result is filtered with the 1D
 * kernel kernelY. The final result shifted by delta is stored in dst .
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Destination image depth, see REF: filter_depths "combinations"
 * @param kernelX Coefficients for filtering each row.
 * @param kernelY Coefficients for filtering each column.
 * is at the kernel center.
 * @see `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `+boxFilter:dst:ddepth:ksize:anchor:normalize:borderType:`, `+blur:dst:ksize:anchor:borderType:`
 */
+ (void)sepFilter2D:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth kernelX:(Mat*)kernelX kernelY:(Mat*)kernelY NS_SWIFT_NAME(sepFilter2D(src:dst:ddepth:kernelX:kernelY:));


//
//  void cv::Sobel(Mat src, Mat& dst, int ddepth, int dx, int dy, int ksize = 3, double scale = 1, double delta = 0, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates the first, second, third, or mixed image derivatives using an extended Sobel operator.
 *
 * In all cases except one, the `$$\texttt{ksize} \times \texttt{ksize}$$` separable kernel is used to
 * calculate the derivative. When `$$\texttt{ksize = 1}$$`, the `$$3 \times 1$$` or `$$1 \times 3$$`
 * kernel is used (that is, no Gaussian smoothing is done). `ksize = 1` can only be used for the first
 * or the second x- or y- derivatives.
 *
 * There is also the special value `ksize = #FILTER_SCHARR (-1)` that corresponds to the `$$3\times3$$` Scharr
 * filter that may give more accurate results than the `$$3\times3$$` Sobel. The Scharr aperture is
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-3}{0}{3}{-10}{0}{10}{-3}{0}{3}$$`
 *
 * for the x-derivative, or transposed for the y-derivative.
 *
 * The function calculates an image derivative by convolving the image with the appropriate kernel:
 *
 * `$$\texttt{dst} =  \frac{\partial^{xorder+yorder} \texttt{src}}{\partial x^{xorder} \partial y^{yorder}}$$`
 *
 * The Sobel operators combine Gaussian smoothing and differentiation, so the result is more or less
 * resistant to the noise. Most often, the function is called with ( xorder = 1, yorder = 0, ksize = 3)
 * or ( xorder = 0, yorder = 1, ksize = 3) to calculate the first x- or y- image derivative. The first
 * case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{0}{1}{-2}{0}{2}{-1}{0}{1}$$`
 *
 * The second case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{-2}{-1}{0}{0}{0}{1}{2}{1}$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src .
 * @param ddepth output image depth, see REF: filter_depths "combinations"; in the case of
 *     8-bit input images it will result in truncated derivatives.
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param ksize size of the extended Sobel kernel; it must be 1, 3, 5, or 7.
 * @param scale optional scale factor for the computed derivative values; by default, no scaling is
 * applied (see #getDerivKernels for details).
 * @param delta optional delta value that is added to the results prior to storing them in dst.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`, `+Laplacian:dst:ddepth:ksize:scale:delta:borderType:`, `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `cartToPolar`
 */
+ (void)Sobel:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy ksize:(int)ksize scale:(double)scale delta:(double)delta borderType:(BorderTypes)borderType NS_SWIFT_NAME(Sobel(src:dst:ddepth:dx:dy:ksize:scale:delta:borderType:));

/**
 * Calculates the first, second, third, or mixed image derivatives using an extended Sobel operator.
 *
 * In all cases except one, the `$$\texttt{ksize} \times \texttt{ksize}$$` separable kernel is used to
 * calculate the derivative. When `$$\texttt{ksize = 1}$$`, the `$$3 \times 1$$` or `$$1 \times 3$$`
 * kernel is used (that is, no Gaussian smoothing is done). `ksize = 1` can only be used for the first
 * or the second x- or y- derivatives.
 *
 * There is also the special value `ksize = #FILTER_SCHARR (-1)` that corresponds to the `$$3\times3$$` Scharr
 * filter that may give more accurate results than the `$$3\times3$$` Sobel. The Scharr aperture is
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-3}{0}{3}{-10}{0}{10}{-3}{0}{3}$$`
 *
 * for the x-derivative, or transposed for the y-derivative.
 *
 * The function calculates an image derivative by convolving the image with the appropriate kernel:
 *
 * `$$\texttt{dst} =  \frac{\partial^{xorder+yorder} \texttt{src}}{\partial x^{xorder} \partial y^{yorder}}$$`
 *
 * The Sobel operators combine Gaussian smoothing and differentiation, so the result is more or less
 * resistant to the noise. Most often, the function is called with ( xorder = 1, yorder = 0, ksize = 3)
 * or ( xorder = 0, yorder = 1, ksize = 3) to calculate the first x- or y- image derivative. The first
 * case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{0}{1}{-2}{0}{2}{-1}{0}{1}$$`
 *
 * The second case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{-2}{-1}{0}{0}{0}{1}{2}{1}$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src .
 * @param ddepth output image depth, see REF: filter_depths "combinations"; in the case of
 *     8-bit input images it will result in truncated derivatives.
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param ksize size of the extended Sobel kernel; it must be 1, 3, 5, or 7.
 * @param scale optional scale factor for the computed derivative values; by default, no scaling is
 * applied (see #getDerivKernels for details).
 * @param delta optional delta value that is added to the results prior to storing them in dst.
 * @see `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`, `+Laplacian:dst:ddepth:ksize:scale:delta:borderType:`, `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `cartToPolar`
 */
+ (void)Sobel:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy ksize:(int)ksize scale:(double)scale delta:(double)delta NS_SWIFT_NAME(Sobel(src:dst:ddepth:dx:dy:ksize:scale:delta:));

/**
 * Calculates the first, second, third, or mixed image derivatives using an extended Sobel operator.
 *
 * In all cases except one, the `$$\texttt{ksize} \times \texttt{ksize}$$` separable kernel is used to
 * calculate the derivative. When `$$\texttt{ksize = 1}$$`, the `$$3 \times 1$$` or `$$1 \times 3$$`
 * kernel is used (that is, no Gaussian smoothing is done). `ksize = 1` can only be used for the first
 * or the second x- or y- derivatives.
 *
 * There is also the special value `ksize = #FILTER_SCHARR (-1)` that corresponds to the `$$3\times3$$` Scharr
 * filter that may give more accurate results than the `$$3\times3$$` Sobel. The Scharr aperture is
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-3}{0}{3}{-10}{0}{10}{-3}{0}{3}$$`
 *
 * for the x-derivative, or transposed for the y-derivative.
 *
 * The function calculates an image derivative by convolving the image with the appropriate kernel:
 *
 * `$$\texttt{dst} =  \frac{\partial^{xorder+yorder} \texttt{src}}{\partial x^{xorder} \partial y^{yorder}}$$`
 *
 * The Sobel operators combine Gaussian smoothing and differentiation, so the result is more or less
 * resistant to the noise. Most often, the function is called with ( xorder = 1, yorder = 0, ksize = 3)
 * or ( xorder = 0, yorder = 1, ksize = 3) to calculate the first x- or y- image derivative. The first
 * case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{0}{1}{-2}{0}{2}{-1}{0}{1}$$`
 *
 * The second case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{-2}{-1}{0}{0}{0}{1}{2}{1}$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src .
 * @param ddepth output image depth, see REF: filter_depths "combinations"; in the case of
 *     8-bit input images it will result in truncated derivatives.
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param ksize size of the extended Sobel kernel; it must be 1, 3, 5, or 7.
 * @param scale optional scale factor for the computed derivative values; by default, no scaling is
 * applied (see #getDerivKernels for details).
 * @see `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`, `+Laplacian:dst:ddepth:ksize:scale:delta:borderType:`, `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `cartToPolar`
 */
+ (void)Sobel:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy ksize:(int)ksize scale:(double)scale NS_SWIFT_NAME(Sobel(src:dst:ddepth:dx:dy:ksize:scale:));

/**
 * Calculates the first, second, third, or mixed image derivatives using an extended Sobel operator.
 *
 * In all cases except one, the `$$\texttt{ksize} \times \texttt{ksize}$$` separable kernel is used to
 * calculate the derivative. When `$$\texttt{ksize = 1}$$`, the `$$3 \times 1$$` or `$$1 \times 3$$`
 * kernel is used (that is, no Gaussian smoothing is done). `ksize = 1` can only be used for the first
 * or the second x- or y- derivatives.
 *
 * There is also the special value `ksize = #FILTER_SCHARR (-1)` that corresponds to the `$$3\times3$$` Scharr
 * filter that may give more accurate results than the `$$3\times3$$` Sobel. The Scharr aperture is
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-3}{0}{3}{-10}{0}{10}{-3}{0}{3}$$`
 *
 * for the x-derivative, or transposed for the y-derivative.
 *
 * The function calculates an image derivative by convolving the image with the appropriate kernel:
 *
 * `$$\texttt{dst} =  \frac{\partial^{xorder+yorder} \texttt{src}}{\partial x^{xorder} \partial y^{yorder}}$$`
 *
 * The Sobel operators combine Gaussian smoothing and differentiation, so the result is more or less
 * resistant to the noise. Most often, the function is called with ( xorder = 1, yorder = 0, ksize = 3)
 * or ( xorder = 0, yorder = 1, ksize = 3) to calculate the first x- or y- image derivative. The first
 * case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{0}{1}{-2}{0}{2}{-1}{0}{1}$$`
 *
 * The second case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{-2}{-1}{0}{0}{0}{1}{2}{1}$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src .
 * @param ddepth output image depth, see REF: filter_depths "combinations"; in the case of
 *     8-bit input images it will result in truncated derivatives.
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param ksize size of the extended Sobel kernel; it must be 1, 3, 5, or 7.
 * applied (see #getDerivKernels for details).
 * @see `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`, `+Laplacian:dst:ddepth:ksize:scale:delta:borderType:`, `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `cartToPolar`
 */
+ (void)Sobel:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy ksize:(int)ksize NS_SWIFT_NAME(Sobel(src:dst:ddepth:dx:dy:ksize:));

/**
 * Calculates the first, second, third, or mixed image derivatives using an extended Sobel operator.
 *
 * In all cases except one, the `$$\texttt{ksize} \times \texttt{ksize}$$` separable kernel is used to
 * calculate the derivative. When `$$\texttt{ksize = 1}$$`, the `$$3 \times 1$$` or `$$1 \times 3$$`
 * kernel is used (that is, no Gaussian smoothing is done). `ksize = 1` can only be used for the first
 * or the second x- or y- derivatives.
 *
 * There is also the special value `ksize = #FILTER_SCHARR (-1)` that corresponds to the `$$3\times3$$` Scharr
 * filter that may give more accurate results than the `$$3\times3$$` Sobel. The Scharr aperture is
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-3}{0}{3}{-10}{0}{10}{-3}{0}{3}$$`
 *
 * for the x-derivative, or transposed for the y-derivative.
 *
 * The function calculates an image derivative by convolving the image with the appropriate kernel:
 *
 * `$$\texttt{dst} =  \frac{\partial^{xorder+yorder} \texttt{src}}{\partial x^{xorder} \partial y^{yorder}}$$`
 *
 * The Sobel operators combine Gaussian smoothing and differentiation, so the result is more or less
 * resistant to the noise. Most often, the function is called with ( xorder = 1, yorder = 0, ksize = 3)
 * or ( xorder = 0, yorder = 1, ksize = 3) to calculate the first x- or y- image derivative. The first
 * case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{0}{1}{-2}{0}{2}{-1}{0}{1}$$`
 *
 * The second case corresponds to a kernel of:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{-1}{-2}{-1}{0}{0}{0}{1}{2}{1}$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src .
 * @param ddepth output image depth, see REF: filter_depths "combinations"; in the case of
 *     8-bit input images it will result in truncated derivatives.
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * applied (see #getDerivKernels for details).
 * @see `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`, `+Laplacian:dst:ddepth:ksize:scale:delta:borderType:`, `+sepFilter2D:dst:ddepth:kernelX:kernelY:anchor:delta:borderType:`, `+filter2D:dst:ddepth:kernel:anchor:delta:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`, `cartToPolar`
 */
+ (void)Sobel:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy NS_SWIFT_NAME(Sobel(src:dst:ddepth:dx:dy:));


//
//  void cv::spatialGradient(Mat src, Mat& dx, Mat& dy, int ksize = 3, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates the first order image derivative in both x and y using a Sobel operator
 *
 * Equivalent to calling:
 *
 *
 * Sobel( src, dx, CV_16SC1, 1, 0, 3 );
 * Sobel( src, dy, CV_16SC1, 0, 1, 3 );
 *
 *
 * @param src input image.
 * @param dx output image with first-order derivative in x.
 * @param dy output image with first-order derivative in y.
 * @param ksize size of Sobel kernel. It must be 3.
 * @param borderType pixel extrapolation method, see #BorderTypes.
 *                   Only #BORDER_DEFAULT=#BORDER_REFLECT_101 and #BORDER_REPLICATE are supported.
 *
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`
 */
+ (void)spatialGradient:(Mat*)src dx:(Mat*)dx dy:(Mat*)dy ksize:(int)ksize borderType:(BorderTypes)borderType NS_SWIFT_NAME(spatialGradient(src:dx:dy:ksize:borderType:));

/**
 * Calculates the first order image derivative in both x and y using a Sobel operator
 *
 * Equivalent to calling:
 *
 *
 * Sobel( src, dx, CV_16SC1, 1, 0, 3 );
 * Sobel( src, dy, CV_16SC1, 0, 1, 3 );
 *
 *
 * @param src input image.
 * @param dx output image with first-order derivative in x.
 * @param dy output image with first-order derivative in y.
 * @param ksize size of Sobel kernel. It must be 3.
 *                   Only #BORDER_DEFAULT=#BORDER_REFLECT_101 and #BORDER_REPLICATE are supported.
 *
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`
 */
+ (void)spatialGradient:(Mat*)src dx:(Mat*)dx dy:(Mat*)dy ksize:(int)ksize NS_SWIFT_NAME(spatialGradient(src:dx:dy:ksize:));

/**
 * Calculates the first order image derivative in both x and y using a Sobel operator
 *
 * Equivalent to calling:
 *
 *
 * Sobel( src, dx, CV_16SC1, 1, 0, 3 );
 * Sobel( src, dy, CV_16SC1, 0, 1, 3 );
 *
 *
 * @param src input image.
 * @param dx output image with first-order derivative in x.
 * @param dy output image with first-order derivative in y.
 *                   Only #BORDER_DEFAULT=#BORDER_REFLECT_101 and #BORDER_REPLICATE are supported.
 *
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`
 */
+ (void)spatialGradient:(Mat*)src dx:(Mat*)dx dy:(Mat*)dy NS_SWIFT_NAME(spatialGradient(src:dx:dy:));


//
//  void cv::Scharr(Mat src, Mat& dst, int ddepth, int dx, int dy, double scale = 1, double delta = 0, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates the first x- or y- image derivative using Scharr operator.
 *
 * The function computes the first x- or y- spatial image derivative using the Scharr operator. The
 * call
 *
 * `$$\texttt{Scharr(src, dst, ddepth, dx, dy, scale, delta, borderType)}$$`
 *
 * is equivalent to
 *
 * `$$\texttt{Sobel(src, dst, ddepth, dx, dy, FILTER\_SCHARR, scale, delta, borderType)} .$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth output image depth, see REF: filter_depths "combinations"
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param scale optional scale factor for the computed derivative values; by default, no scaling is
 * applied (see #getDerivKernels for details).
 * @param delta optional delta value that is added to the results prior to storing them in dst.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `cartToPolar`
 */
+ (void)Scharr:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy scale:(double)scale delta:(double)delta borderType:(BorderTypes)borderType NS_SWIFT_NAME(Scharr(src:dst:ddepth:dx:dy:scale:delta:borderType:));

/**
 * Calculates the first x- or y- image derivative using Scharr operator.
 *
 * The function computes the first x- or y- spatial image derivative using the Scharr operator. The
 * call
 *
 * `$$\texttt{Scharr(src, dst, ddepth, dx, dy, scale, delta, borderType)}$$`
 *
 * is equivalent to
 *
 * `$$\texttt{Sobel(src, dst, ddepth, dx, dy, FILTER\_SCHARR, scale, delta, borderType)} .$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth output image depth, see REF: filter_depths "combinations"
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param scale optional scale factor for the computed derivative values; by default, no scaling is
 * applied (see #getDerivKernels for details).
 * @param delta optional delta value that is added to the results prior to storing them in dst.
 * @see `cartToPolar`
 */
+ (void)Scharr:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy scale:(double)scale delta:(double)delta NS_SWIFT_NAME(Scharr(src:dst:ddepth:dx:dy:scale:delta:));

/**
 * Calculates the first x- or y- image derivative using Scharr operator.
 *
 * The function computes the first x- or y- spatial image derivative using the Scharr operator. The
 * call
 *
 * `$$\texttt{Scharr(src, dst, ddepth, dx, dy, scale, delta, borderType)}$$`
 *
 * is equivalent to
 *
 * `$$\texttt{Sobel(src, dst, ddepth, dx, dy, FILTER\_SCHARR, scale, delta, borderType)} .$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth output image depth, see REF: filter_depths "combinations"
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * @param scale optional scale factor for the computed derivative values; by default, no scaling is
 * applied (see #getDerivKernels for details).
 * @see `cartToPolar`
 */
+ (void)Scharr:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy scale:(double)scale NS_SWIFT_NAME(Scharr(src:dst:ddepth:dx:dy:scale:));

/**
 * Calculates the first x- or y- image derivative using Scharr operator.
 *
 * The function computes the first x- or y- spatial image derivative using the Scharr operator. The
 * call
 *
 * `$$\texttt{Scharr(src, dst, ddepth, dx, dy, scale, delta, borderType)}$$`
 *
 * is equivalent to
 *
 * `$$\texttt{Sobel(src, dst, ddepth, dx, dy, FILTER\_SCHARR, scale, delta, borderType)} .$$`
 *
 * @param src input image.
 * @param dst output image of the same size and the same number of channels as src.
 * @param ddepth output image depth, see REF: filter_depths "combinations"
 * @param dx order of the derivative x.
 * @param dy order of the derivative y.
 * applied (see #getDerivKernels for details).
 * @see `cartToPolar`
 */
+ (void)Scharr:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth dx:(int)dx dy:(int)dy NS_SWIFT_NAME(Scharr(src:dst:ddepth:dx:dy:));


//
//  void cv::Laplacian(Mat src, Mat& dst, int ddepth, int ksize = 1, double scale = 1, double delta = 0, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates the Laplacian of an image.
 *
 * The function calculates the Laplacian of the source image by adding up the second x and y
 * derivatives calculated using the Sobel operator:
 *
 * `$$\texttt{dst} =  \Delta \texttt{src} =  \frac{\partial^2 \texttt{src}}{\partial x^2} +  \frac{\partial^2 \texttt{src}}{\partial y^2}$$`
 *
 * This is done when `ksize > 1`. When `ksize == 1`, the Laplacian is computed by filtering the image
 * with the following `$$3 \times 3$$` aperture:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree {0}{1}{0}{1}{-4}{1}{0}{1}{0}$$`
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Desired depth of the destination image.
 * @param ksize Aperture size used to compute the second-derivative filters. See #getDerivKernels for
 * details. The size must be positive and odd.
 * @param scale Optional scale factor for the computed Laplacian values. By default, no scaling is
 * applied. See #getDerivKernels for details.
 * @param delta Optional delta value that is added to the results prior to storing them in dst .
 * @param borderType Pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`
 */
+ (void)Laplacian:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(int)ksize scale:(double)scale delta:(double)delta borderType:(BorderTypes)borderType NS_SWIFT_NAME(Laplacian(src:dst:ddepth:ksize:scale:delta:borderType:));

/**
 * Calculates the Laplacian of an image.
 *
 * The function calculates the Laplacian of the source image by adding up the second x and y
 * derivatives calculated using the Sobel operator:
 *
 * `$$\texttt{dst} =  \Delta \texttt{src} =  \frac{\partial^2 \texttt{src}}{\partial x^2} +  \frac{\partial^2 \texttt{src}}{\partial y^2}$$`
 *
 * This is done when `ksize > 1`. When `ksize == 1`, the Laplacian is computed by filtering the image
 * with the following `$$3 \times 3$$` aperture:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree {0}{1}{0}{1}{-4}{1}{0}{1}{0}$$`
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Desired depth of the destination image.
 * @param ksize Aperture size used to compute the second-derivative filters. See #getDerivKernels for
 * details. The size must be positive and odd.
 * @param scale Optional scale factor for the computed Laplacian values. By default, no scaling is
 * applied. See #getDerivKernels for details.
 * @param delta Optional delta value that is added to the results prior to storing them in dst .
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`
 */
+ (void)Laplacian:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(int)ksize scale:(double)scale delta:(double)delta NS_SWIFT_NAME(Laplacian(src:dst:ddepth:ksize:scale:delta:));

/**
 * Calculates the Laplacian of an image.
 *
 * The function calculates the Laplacian of the source image by adding up the second x and y
 * derivatives calculated using the Sobel operator:
 *
 * `$$\texttt{dst} =  \Delta \texttt{src} =  \frac{\partial^2 \texttt{src}}{\partial x^2} +  \frac{\partial^2 \texttt{src}}{\partial y^2}$$`
 *
 * This is done when `ksize > 1`. When `ksize == 1`, the Laplacian is computed by filtering the image
 * with the following `$$3 \times 3$$` aperture:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree {0}{1}{0}{1}{-4}{1}{0}{1}{0}$$`
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Desired depth of the destination image.
 * @param ksize Aperture size used to compute the second-derivative filters. See #getDerivKernels for
 * details. The size must be positive and odd.
 * @param scale Optional scale factor for the computed Laplacian values. By default, no scaling is
 * applied. See #getDerivKernels for details.
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`
 */
+ (void)Laplacian:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(int)ksize scale:(double)scale NS_SWIFT_NAME(Laplacian(src:dst:ddepth:ksize:scale:));

/**
 * Calculates the Laplacian of an image.
 *
 * The function calculates the Laplacian of the source image by adding up the second x and y
 * derivatives calculated using the Sobel operator:
 *
 * `$$\texttt{dst} =  \Delta \texttt{src} =  \frac{\partial^2 \texttt{src}}{\partial x^2} +  \frac{\partial^2 \texttt{src}}{\partial y^2}$$`
 *
 * This is done when `ksize > 1`. When `ksize == 1`, the Laplacian is computed by filtering the image
 * with the following `$$3 \times 3$$` aperture:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree {0}{1}{0}{1}{-4}{1}{0}{1}{0}$$`
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Desired depth of the destination image.
 * @param ksize Aperture size used to compute the second-derivative filters. See #getDerivKernels for
 * details. The size must be positive and odd.
 * applied. See #getDerivKernels for details.
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`
 */
+ (void)Laplacian:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth ksize:(int)ksize NS_SWIFT_NAME(Laplacian(src:dst:ddepth:ksize:));

/**
 * Calculates the Laplacian of an image.
 *
 * The function calculates the Laplacian of the source image by adding up the second x and y
 * derivatives calculated using the Sobel operator:
 *
 * `$$\texttt{dst} =  \Delta \texttt{src} =  \frac{\partial^2 \texttt{src}}{\partial x^2} +  \frac{\partial^2 \texttt{src}}{\partial y^2}$$`
 *
 * This is done when `ksize > 1`. When `ksize == 1`, the Laplacian is computed by filtering the image
 * with the following `$$3 \times 3$$` aperture:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree {0}{1}{0}{1}{-4}{1}{0}{1}{0}$$`
 *
 * @param src Source image.
 * @param dst Destination image of the same size and the same number of channels as src .
 * @param ddepth Desired depth of the destination image.
 * details. The size must be positive and odd.
 * applied. See #getDerivKernels for details.
 * @see `+Sobel:dst:ddepth:dx:dy:ksize:scale:delta:borderType:`, `+Scharr:dst:ddepth:dx:dy:scale:delta:borderType:`
 */
+ (void)Laplacian:(Mat*)src dst:(Mat*)dst ddepth:(int)ddepth NS_SWIFT_NAME(Laplacian(src:dst:ddepth:));


//
//  void cv::Canny(Mat image, Mat& edges, double threshold1, double threshold2, int apertureSize = 3, bool L2gradient = false)
//
/**
 * Finds edges in an image using the Canny algorithm CITE: Canny86 .
 *
 * The function finds edges in the input image and marks them in the output map edges using the
 * Canny algorithm. The smallest value between threshold1 and threshold2 is used for edge linking. The
 * largest value is used to find initial segments of strong edges. See
 * <http://en.wikipedia.org/wiki/Canny_edge_detector>
 *
 * @param image 8-bit input image.
 * @param edges output edge map; single channels 8-bit image, which has the same size as image .
 * @param threshold1 first threshold for the hysteresis procedure.
 * @param threshold2 second threshold for the hysteresis procedure.
 * @param apertureSize aperture size for the Sobel operator.
 * @param L2gradient a flag, indicating whether a more accurate `$$L_2$$` norm
 * `$$=\sqrt{(dI/dx)^2 + (dI/dy)^2}$$` should be used to calculate the image gradient magnitude (
 * L2gradient=true ), or whether the default `$$L_1$$` norm `$$=|dI/dx|+|dI/dy|$$` is enough (
 * L2gradient=false ).
 */
+ (void)Canny:(Mat*)image edges:(Mat*)edges threshold1:(double)threshold1 threshold2:(double)threshold2 apertureSize:(int)apertureSize L2gradient:(BOOL)L2gradient NS_SWIFT_NAME(Canny(image:edges:threshold1:threshold2:apertureSize:L2gradient:));

/**
 * Finds edges in an image using the Canny algorithm CITE: Canny86 .
 *
 * The function finds edges in the input image and marks them in the output map edges using the
 * Canny algorithm. The smallest value between threshold1 and threshold2 is used for edge linking. The
 * largest value is used to find initial segments of strong edges. See
 * <http://en.wikipedia.org/wiki/Canny_edge_detector>
 *
 * @param image 8-bit input image.
 * @param edges output edge map; single channels 8-bit image, which has the same size as image .
 * @param threshold1 first threshold for the hysteresis procedure.
 * @param threshold2 second threshold for the hysteresis procedure.
 * @param apertureSize aperture size for the Sobel operator.
 * `$$=\sqrt{(dI/dx)^2 + (dI/dy)^2}$$` should be used to calculate the image gradient magnitude (
 * L2gradient=true ), or whether the default `$$L_1$$` norm `$$=|dI/dx|+|dI/dy|$$` is enough (
 * L2gradient=false ).
 */
+ (void)Canny:(Mat*)image edges:(Mat*)edges threshold1:(double)threshold1 threshold2:(double)threshold2 apertureSize:(int)apertureSize NS_SWIFT_NAME(Canny(image:edges:threshold1:threshold2:apertureSize:));

/**
 * Finds edges in an image using the Canny algorithm CITE: Canny86 .
 *
 * The function finds edges in the input image and marks them in the output map edges using the
 * Canny algorithm. The smallest value between threshold1 and threshold2 is used for edge linking. The
 * largest value is used to find initial segments of strong edges. See
 * <http://en.wikipedia.org/wiki/Canny_edge_detector>
 *
 * @param image 8-bit input image.
 * @param edges output edge map; single channels 8-bit image, which has the same size as image .
 * @param threshold1 first threshold for the hysteresis procedure.
 * @param threshold2 second threshold for the hysteresis procedure.
 * `$$=\sqrt{(dI/dx)^2 + (dI/dy)^2}$$` should be used to calculate the image gradient magnitude (
 * L2gradient=true ), or whether the default `$$L_1$$` norm `$$=|dI/dx|+|dI/dy|$$` is enough (
 * L2gradient=false ).
 */
+ (void)Canny:(Mat*)image edges:(Mat*)edges threshold1:(double)threshold1 threshold2:(double)threshold2 NS_SWIFT_NAME(Canny(image:edges:threshold1:threshold2:));


//
//  void cv::Canny(Mat dx, Mat dy, Mat& edges, double threshold1, double threshold2, bool L2gradient = false)
//
/**
 * \overload
 *
 * Finds edges in an image using the Canny algorithm with custom image gradient.
 *
 * @param dx 16-bit x derivative of input image (CV_16SC1 or CV_16SC3).
 * @param dy 16-bit y derivative of input image (same type as dx).
 * @param edges output edge map; single channels 8-bit image, which has the same size as image .
 * @param threshold1 first threshold for the hysteresis procedure.
 * @param threshold2 second threshold for the hysteresis procedure.
 * @param L2gradient a flag, indicating whether a more accurate `$$L_2$$` norm
 * `$$=\sqrt{(dI/dx)^2 + (dI/dy)^2}$$` should be used to calculate the image gradient magnitude (
 * L2gradient=true ), or whether the default `$$L_1$$` norm `$$=|dI/dx|+|dI/dy|$$` is enough (
 * L2gradient=false ).
 */
+ (void)Canny:(Mat*)dx dy:(Mat*)dy edges:(Mat*)edges threshold1:(double)threshold1 threshold2:(double)threshold2 L2gradient:(BOOL)L2gradient NS_SWIFT_NAME(Canny(dx:dy:edges:threshold1:threshold2:L2gradient:));

/**
 * \overload
 *
 * Finds edges in an image using the Canny algorithm with custom image gradient.
 *
 * @param dx 16-bit x derivative of input image (CV_16SC1 or CV_16SC3).
 * @param dy 16-bit y derivative of input image (same type as dx).
 * @param edges output edge map; single channels 8-bit image, which has the same size as image .
 * @param threshold1 first threshold for the hysteresis procedure.
 * @param threshold2 second threshold for the hysteresis procedure.
 * `$$=\sqrt{(dI/dx)^2 + (dI/dy)^2}$$` should be used to calculate the image gradient magnitude (
 * L2gradient=true ), or whether the default `$$L_1$$` norm `$$=|dI/dx|+|dI/dy|$$` is enough (
 * L2gradient=false ).
 */
+ (void)Canny:(Mat*)dx dy:(Mat*)dy edges:(Mat*)edges threshold1:(double)threshold1 threshold2:(double)threshold2 NS_SWIFT_NAME(Canny(dx:dy:edges:threshold1:threshold2:));


//
//  void cv::cornerMinEigenVal(Mat src, Mat& dst, int blockSize, int ksize = 3, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates the minimal eigenvalue of gradient matrices for corner detection.
 *
 * The function is similar to cornerEigenValsAndVecs but it calculates and stores only the minimal
 * eigenvalue of the covariance matrix of derivatives, that is, `$$\min(\lambda_1, \lambda_2)$$` in terms
 * of the formulae in the cornerEigenValsAndVecs description.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the minimal eigenvalues. It has the type CV_32FC1 and the same size as
 * src .
 * @param blockSize Neighborhood size (see the details on #cornerEigenValsAndVecs ).
 * @param ksize Aperture parameter for the Sobel operator.
 * @param borderType Pixel extrapolation method. See #BorderTypes. #BORDER_WRAP is not supported.
 */
+ (void)cornerMinEigenVal:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize ksize:(int)ksize borderType:(BorderTypes)borderType NS_SWIFT_NAME(cornerMinEigenVal(src:dst:blockSize:ksize:borderType:));

/**
 * Calculates the minimal eigenvalue of gradient matrices for corner detection.
 *
 * The function is similar to cornerEigenValsAndVecs but it calculates and stores only the minimal
 * eigenvalue of the covariance matrix of derivatives, that is, `$$\min(\lambda_1, \lambda_2)$$` in terms
 * of the formulae in the cornerEigenValsAndVecs description.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the minimal eigenvalues. It has the type CV_32FC1 and the same size as
 * src .
 * @param blockSize Neighborhood size (see the details on #cornerEigenValsAndVecs ).
 * @param ksize Aperture parameter for the Sobel operator.
 */
+ (void)cornerMinEigenVal:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize ksize:(int)ksize NS_SWIFT_NAME(cornerMinEigenVal(src:dst:blockSize:ksize:));

/**
 * Calculates the minimal eigenvalue of gradient matrices for corner detection.
 *
 * The function is similar to cornerEigenValsAndVecs but it calculates and stores only the minimal
 * eigenvalue of the covariance matrix of derivatives, that is, `$$\min(\lambda_1, \lambda_2)$$` in terms
 * of the formulae in the cornerEigenValsAndVecs description.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the minimal eigenvalues. It has the type CV_32FC1 and the same size as
 * src .
 * @param blockSize Neighborhood size (see the details on #cornerEigenValsAndVecs ).
 */
+ (void)cornerMinEigenVal:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize NS_SWIFT_NAME(cornerMinEigenVal(src:dst:blockSize:));


//
//  void cv::cornerHarris(Mat src, Mat& dst, int blockSize, int ksize, double k, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Harris corner detector.
 *
 * The function runs the Harris corner detector on the image. Similarly to cornerMinEigenVal and
 * cornerEigenValsAndVecs , for each pixel `$$(x, y)$$` it calculates a `$$2\times2$$` gradient covariance
 * matrix `$$M^{(x,y)}$$` over a `$$\texttt{blockSize} \times \texttt{blockSize}$$` neighborhood. Then, it
 * computes the following characteristic:
 *
 * `$$\texttt{dst} (x,y) =  \mathrm{det} M^{(x,y)} - k  \cdot \left ( \mathrm{tr} M^{(x,y)} \right )^2$$`
 *
 * Corners in the image can be found as the local maxima of this response map.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the Harris detector responses. It has the type CV_32FC1 and the same
 * size as src .
 * @param blockSize Neighborhood size (see the details on #cornerEigenValsAndVecs ).
 * @param ksize Aperture parameter for the Sobel operator.
 * @param k Harris detector free parameter. See the formula above.
 * @param borderType Pixel extrapolation method. See #BorderTypes. #BORDER_WRAP is not supported.
 */
+ (void)cornerHarris:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize ksize:(int)ksize k:(double)k borderType:(BorderTypes)borderType NS_SWIFT_NAME(cornerHarris(src:dst:blockSize:ksize:k:borderType:));

/**
 * Harris corner detector.
 *
 * The function runs the Harris corner detector on the image. Similarly to cornerMinEigenVal and
 * cornerEigenValsAndVecs , for each pixel `$$(x, y)$$` it calculates a `$$2\times2$$` gradient covariance
 * matrix `$$M^{(x,y)}$$` over a `$$\texttt{blockSize} \times \texttt{blockSize}$$` neighborhood. Then, it
 * computes the following characteristic:
 *
 * `$$\texttt{dst} (x,y) =  \mathrm{det} M^{(x,y)} - k  \cdot \left ( \mathrm{tr} M^{(x,y)} \right )^2$$`
 *
 * Corners in the image can be found as the local maxima of this response map.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the Harris detector responses. It has the type CV_32FC1 and the same
 * size as src .
 * @param blockSize Neighborhood size (see the details on #cornerEigenValsAndVecs ).
 * @param ksize Aperture parameter for the Sobel operator.
 * @param k Harris detector free parameter. See the formula above.
 */
+ (void)cornerHarris:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize ksize:(int)ksize k:(double)k NS_SWIFT_NAME(cornerHarris(src:dst:blockSize:ksize:k:));


//
//  void cv::cornerEigenValsAndVecs(Mat src, Mat& dst, int blockSize, int ksize, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates eigenvalues and eigenvectors of image blocks for corner detection.
 *
 * For every pixel `$$p$$` , the function cornerEigenValsAndVecs considers a blockSize `$$\times$$` blockSize
 * neighborhood `$$S(p)$$` . It calculates the covariation matrix of derivatives over the neighborhood as:
 *
 * `$$M =  \begin{bmatrix} \sum _{S(p)}(dI/dx)^2 &  \sum _{S(p)}dI/dx dI/dy  \\ \sum _{S(p)}dI/dx dI/dy &  \sum _{S(p)}(dI/dy)^2 \end{bmatrix}$$`
 *
 * where the derivatives are computed using the Sobel operator.
 *
 * After that, it finds eigenvectors and eigenvalues of `$$M$$` and stores them in the destination image as
 * `$$(\lambda_1, \lambda_2, x_1, y_1, x_2, y_2)$$` where
 *
 * -   `$$\lambda_1, \lambda_2$$` are the non-sorted eigenvalues of `$$M$$`
 * -   `$$x_1, y_1$$` are the eigenvectors corresponding to `$$\lambda_1$$`
 * -   `$$x_2, y_2$$` are the eigenvectors corresponding to `$$\lambda_2$$`
 *
 * The output of the function can be used for robust edge or corner detection.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the results. It has the same size as src and the type CV_32FC(6) .
 * @param blockSize Neighborhood size (see details below).
 * @param ksize Aperture parameter for the Sobel operator.
 * @param borderType Pixel extrapolation method. See #BorderTypes. #BORDER_WRAP is not supported.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `+preCornerDetect:dst:ksize:borderType:`
 */
+ (void)cornerEigenValsAndVecs:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize ksize:(int)ksize borderType:(BorderTypes)borderType NS_SWIFT_NAME(cornerEigenValsAndVecs(src:dst:blockSize:ksize:borderType:));

/**
 * Calculates eigenvalues and eigenvectors of image blocks for corner detection.
 *
 * For every pixel `$$p$$` , the function cornerEigenValsAndVecs considers a blockSize `$$\times$$` blockSize
 * neighborhood `$$S(p)$$` . It calculates the covariation matrix of derivatives over the neighborhood as:
 *
 * `$$M =  \begin{bmatrix} \sum _{S(p)}(dI/dx)^2 &  \sum _{S(p)}dI/dx dI/dy  \\ \sum _{S(p)}dI/dx dI/dy &  \sum _{S(p)}(dI/dy)^2 \end{bmatrix}$$`
 *
 * where the derivatives are computed using the Sobel operator.
 *
 * After that, it finds eigenvectors and eigenvalues of `$$M$$` and stores them in the destination image as
 * `$$(\lambda_1, \lambda_2, x_1, y_1, x_2, y_2)$$` where
 *
 * -   `$$\lambda_1, \lambda_2$$` are the non-sorted eigenvalues of `$$M$$`
 * -   `$$x_1, y_1$$` are the eigenvectors corresponding to `$$\lambda_1$$`
 * -   `$$x_2, y_2$$` are the eigenvectors corresponding to `$$\lambda_2$$`
 *
 * The output of the function can be used for robust edge or corner detection.
 *
 * @param src Input single-channel 8-bit or floating-point image.
 * @param dst Image to store the results. It has the same size as src and the type CV_32FC(6) .
 * @param blockSize Neighborhood size (see details below).
 * @param ksize Aperture parameter for the Sobel operator.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `+preCornerDetect:dst:ksize:borderType:`
 */
+ (void)cornerEigenValsAndVecs:(Mat*)src dst:(Mat*)dst blockSize:(int)blockSize ksize:(int)ksize NS_SWIFT_NAME(cornerEigenValsAndVecs(src:dst:blockSize:ksize:));


//
//  void cv::preCornerDetect(Mat src, Mat& dst, int ksize, BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Calculates a feature map for corner detection.
 *
 * The function calculates the complex spatial derivative-based function of the source image
 *
 * `$$\texttt{dst} = (D_x  \texttt{src} )^2  \cdot D_{yy}  \texttt{src} + (D_y  \texttt{src} )^2  \cdot D_{xx}  \texttt{src} - 2 D_x  \texttt{src} \cdot D_y  \texttt{src} \cdot D_{xy}  \texttt{src}$$`
 *
 * where `$$D_x$$`,`$$D_y$$` are the first image derivatives, `$$D_{xx}$$`,`$$D_{yy}$$` are the second image
 * derivatives, and `$$D_{xy}$$` is the mixed derivative.
 *
 * The corners can be found as local maximums of the functions, as shown below:
 *
 *     Mat corners, dilated_corners;
 *     preCornerDetect(image, corners, 3);
 *     // dilation with 3x3 rectangular structuring element
 *     dilate(corners, dilated_corners, Mat(), 1);
 *     Mat corner_mask = corners == dilated_corners;
 *
 *
 * @param src Source single-channel 8-bit of floating-point image.
 * @param dst Output image that has the type CV_32F and the same size as src .
 * @param ksize %Aperture size of the Sobel .
 * @param borderType Pixel extrapolation method. See #BorderTypes. #BORDER_WRAP is not supported.
 */
+ (void)preCornerDetect:(Mat*)src dst:(Mat*)dst ksize:(int)ksize borderType:(BorderTypes)borderType NS_SWIFT_NAME(preCornerDetect(src:dst:ksize:borderType:));

/**
 * Calculates a feature map for corner detection.
 *
 * The function calculates the complex spatial derivative-based function of the source image
 *
 * `$$\texttt{dst} = (D_x  \texttt{src} )^2  \cdot D_{yy}  \texttt{src} + (D_y  \texttt{src} )^2  \cdot D_{xx}  \texttt{src} - 2 D_x  \texttt{src} \cdot D_y  \texttt{src} \cdot D_{xy}  \texttt{src}$$`
 *
 * where `$$D_x$$`,`$$D_y$$` are the first image derivatives, `$$D_{xx}$$`,`$$D_{yy}$$` are the second image
 * derivatives, and `$$D_{xy}$$` is the mixed derivative.
 *
 * The corners can be found as local maximums of the functions, as shown below:
 *
 *     Mat corners, dilated_corners;
 *     preCornerDetect(image, corners, 3);
 *     // dilation with 3x3 rectangular structuring element
 *     dilate(corners, dilated_corners, Mat(), 1);
 *     Mat corner_mask = corners == dilated_corners;
 *
 *
 * @param src Source single-channel 8-bit of floating-point image.
 * @param dst Output image that has the type CV_32F and the same size as src .
 * @param ksize %Aperture size of the Sobel .
 */
+ (void)preCornerDetect:(Mat*)src dst:(Mat*)dst ksize:(int)ksize NS_SWIFT_NAME(preCornerDetect(src:dst:ksize:));


//
//  void cv::cornerSubPix(Mat image, Mat& corners, Size winSize, Size zeroZone, TermCriteria criteria)
//
/**
 * Refines the corner locations.
 *
 * The function iterates to find the sub-pixel accurate location of corners or radial saddle
 * points as described in CITE: forstner1987fast, and as shown on the figure below.
 *
 * ![image](pics/cornersubpix.png)
 *
 * Sub-pixel accurate corner locator is based on the observation that every vector from the center `$$q$$`
 * to a point `$$p$$` located within a neighborhood of `$$q$$` is orthogonal to the image gradient at `$$p$$`
 * subject to image and measurement noise. Consider the expression:
 *
 * `$$\epsilon _i = {DI_{p_i}}^T  \cdot (q - p_i)$$`
 *
 * where `$${DI_{p_i}}$$` is an image gradient at one of the points `$$p_i$$` in a neighborhood of `$$q$$` . The
 * value of `$$q$$` is to be found so that `$$\epsilon_i$$` is minimized. A system of equations may be set up
 * with `$$\epsilon_i$$` set to zero:
 *
 * `$$\sum _i(DI_{p_i}  \cdot {DI_{p_i}}^T) \cdot q -  \sum _i(DI_{p_i}  \cdot {DI_{p_i}}^T  \cdot p_i)$$`
 *
 * where the gradients are summed within a neighborhood ("search window") of `$$q$$` . Calling the first
 * gradient term `$$G$$` and the second gradient term `$$b$$` gives:
 *
 * `$$q = G^{-1}  \cdot b$$`
 *
 * The algorithm sets the center of the neighborhood window at this new center `$$q$$` and then iterates
 * until the center stays within a set threshold.
 *
 * @param image Input single-channel, 8-bit or float image.
 * @param corners Initial coordinates of the input corners and refined coordinates provided for
 * output.
 * @param winSize Half of the side length of the search window. For example, if winSize=Size(5,5) ,
 * then a `$$(5*2+1) \times (5*2+1) = 11 \times 11$$` search window is used.
 * @param zeroZone Half of the size of the dead region in the middle of the search zone over which
 * the summation in the formula below is not done. It is used sometimes to avoid possible
 * singularities of the autocorrelation matrix. The value of (-1,-1) indicates that there is no such
 * a size.
 * @param criteria Criteria for termination of the iterative process of corner refinement. That is,
 * the process of corner position refinement stops either after criteria.maxCount iterations or when
 * the corner position moves by less than criteria.epsilon on some iteration.
 */
+ (void)cornerSubPix:(Mat*)image corners:(Mat*)corners winSize:(Size2i*)winSize zeroZone:(Size2i*)zeroZone criteria:(TermCriteria*)criteria NS_SWIFT_NAME(cornerSubPix(image:corners:winSize:zeroZone:criteria:));


//
//  void cv::goodFeaturesToTrack(Mat image, vector_Point& corners, int maxCorners, double qualityLevel, double minDistance, Mat mask = Mat(), int blockSize = 3, bool useHarrisDetector = false, double k = 0.04)
//
/**
 * Determines strong corners on an image.
 *
 * The function finds the most prominent corners in the image or in the specified image region, as
 * described in CITE: Shi94
 *
 * -   Function calculates the corner quality measure at every source image pixel using the
 *     #cornerMinEigenVal or #cornerHarris .
 * -   Function performs a non-maximum suppression (the local maximums in *3 x 3* neighborhood are
 *     retained).
 * -   The corners with the minimal eigenvalue less than
 *     `$$\texttt{qualityLevel} \cdot \max_{x,y} qualityMeasureMap(x,y)$$` are rejected.
 * -   The remaining corners are sorted by the quality measure in the descending order.
 * -   Function throws away each corner for which there is a stronger corner at a distance less than
 *     maxDistance.
 *
 * The function can be used to initialize a point-based tracker of an object.
 *
 * NOTE: If the function is called with different values A and B of the parameter qualityLevel , and
 * A \> B, the vector of returned corners with qualityLevel=A will be the prefix of the output vector
 * with qualityLevel=B .
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Optional region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * @param useHarrisDetector Parameter indicating whether to use a Harris detector (see #cornerHarris)
 * or #cornerMinEigenVal.
 * @param k Free parameter of the Harris detector.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `calcOpticalFlowPyrLK`, `estimateRigidTransform`, ``
 */
+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask blockSize:(int)blockSize useHarrisDetector:(BOOL)useHarrisDetector k:(double)k NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:blockSize:useHarrisDetector:k:));

/**
 * Determines strong corners on an image.
 *
 * The function finds the most prominent corners in the image or in the specified image region, as
 * described in CITE: Shi94
 *
 * -   Function calculates the corner quality measure at every source image pixel using the
 *     #cornerMinEigenVal or #cornerHarris .
 * -   Function performs a non-maximum suppression (the local maximums in *3 x 3* neighborhood are
 *     retained).
 * -   The corners with the minimal eigenvalue less than
 *     `$$\texttt{qualityLevel} \cdot \max_{x,y} qualityMeasureMap(x,y)$$` are rejected.
 * -   The remaining corners are sorted by the quality measure in the descending order.
 * -   Function throws away each corner for which there is a stronger corner at a distance less than
 *     maxDistance.
 *
 * The function can be used to initialize a point-based tracker of an object.
 *
 * NOTE: If the function is called with different values A and B of the parameter qualityLevel , and
 * A \> B, the vector of returned corners with qualityLevel=A will be the prefix of the output vector
 * with qualityLevel=B .
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Optional region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * @param useHarrisDetector Parameter indicating whether to use a Harris detector (see #cornerHarris)
 * or #cornerMinEigenVal.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `calcOpticalFlowPyrLK`, `estimateRigidTransform`, ``
 */
+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask blockSize:(int)blockSize useHarrisDetector:(BOOL)useHarrisDetector NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:blockSize:useHarrisDetector:));

/**
 * Determines strong corners on an image.
 *
 * The function finds the most prominent corners in the image or in the specified image region, as
 * described in CITE: Shi94
 *
 * -   Function calculates the corner quality measure at every source image pixel using the
 *     #cornerMinEigenVal or #cornerHarris .
 * -   Function performs a non-maximum suppression (the local maximums in *3 x 3* neighborhood are
 *     retained).
 * -   The corners with the minimal eigenvalue less than
 *     `$$\texttt{qualityLevel} \cdot \max_{x,y} qualityMeasureMap(x,y)$$` are rejected.
 * -   The remaining corners are sorted by the quality measure in the descending order.
 * -   Function throws away each corner for which there is a stronger corner at a distance less than
 *     maxDistance.
 *
 * The function can be used to initialize a point-based tracker of an object.
 *
 * NOTE: If the function is called with different values A and B of the parameter qualityLevel , and
 * A \> B, the vector of returned corners with qualityLevel=A will be the prefix of the output vector
 * with qualityLevel=B .
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Optional region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * or #cornerMinEigenVal.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `calcOpticalFlowPyrLK`, `estimateRigidTransform`, ``
 */
+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask blockSize:(int)blockSize NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:blockSize:));

/**
 * Determines strong corners on an image.
 *
 * The function finds the most prominent corners in the image or in the specified image region, as
 * described in CITE: Shi94
 *
 * -   Function calculates the corner quality measure at every source image pixel using the
 *     #cornerMinEigenVal or #cornerHarris .
 * -   Function performs a non-maximum suppression (the local maximums in *3 x 3* neighborhood are
 *     retained).
 * -   The corners with the minimal eigenvalue less than
 *     `$$\texttt{qualityLevel} \cdot \max_{x,y} qualityMeasureMap(x,y)$$` are rejected.
 * -   The remaining corners are sorted by the quality measure in the descending order.
 * -   Function throws away each corner for which there is a stronger corner at a distance less than
 *     maxDistance.
 *
 * The function can be used to initialize a point-based tracker of an object.
 *
 * NOTE: If the function is called with different values A and B of the parameter qualityLevel , and
 * A \> B, the vector of returned corners with qualityLevel=A will be the prefix of the output vector
 * with qualityLevel=B .
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Optional region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * or #cornerMinEigenVal.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `calcOpticalFlowPyrLK`, `estimateRigidTransform`, ``
 */
+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:));

/**
 * Determines strong corners on an image.
 *
 * The function finds the most prominent corners in the image or in the specified image region, as
 * described in CITE: Shi94
 *
 * -   Function calculates the corner quality measure at every source image pixel using the
 *     #cornerMinEigenVal or #cornerHarris .
 * -   Function performs a non-maximum suppression (the local maximums in *3 x 3* neighborhood are
 *     retained).
 * -   The corners with the minimal eigenvalue less than
 *     `$$\texttt{qualityLevel} \cdot \max_{x,y} qualityMeasureMap(x,y)$$` are rejected.
 * -   The remaining corners are sorted by the quality measure in the descending order.
 * -   Function throws away each corner for which there is a stronger corner at a distance less than
 *     maxDistance.
 *
 * The function can be used to initialize a point-based tracker of an object.
 *
 * NOTE: If the function is called with different values A and B of the parameter qualityLevel , and
 * A \> B, the vector of returned corners with qualityLevel=A will be the prefix of the output vector
 * with qualityLevel=B .
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * or #cornerMinEigenVal.
 *
 * @see `+cornerMinEigenVal:dst:blockSize:ksize:borderType:`, `+cornerHarris:dst:blockSize:ksize:k:borderType:`, `calcOpticalFlowPyrLK`, `estimateRigidTransform`, ``
 */
+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:));


//
//  void cv::goodFeaturesToTrack(Mat image, vector_Point& corners, int maxCorners, double qualityLevel, double minDistance, Mat mask, int blockSize, int gradientSize, bool useHarrisDetector = false, double k = 0.04)
//
+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask blockSize:(int)blockSize gradientSize:(int)gradientSize useHarrisDetector:(BOOL)useHarrisDetector k:(double)k NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:blockSize:gradientSize:useHarrisDetector:k:));

+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask blockSize:(int)blockSize gradientSize:(int)gradientSize useHarrisDetector:(BOOL)useHarrisDetector NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:blockSize:gradientSize:useHarrisDetector:));

+ (void)goodFeaturesToTrack:(Mat*)image corners:(NSMutableArray<Point2i*>*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask blockSize:(int)blockSize gradientSize:(int)gradientSize NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:blockSize:gradientSize:));


//
//  void cv::goodFeaturesToTrack(Mat image, Mat& corners, int maxCorners, double qualityLevel, double minDistance, Mat mask, Mat& cornersQuality, int blockSize = 3, int gradientSize = 3, bool useHarrisDetector = false, double k = 0.04)
//
/**
 * Same as above, but returns also quality measure of the detected corners.
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param cornersQuality Output vector of quality measure of the detected corners.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * @param gradientSize Aperture parameter for the Sobel operator used for derivatives computation.
 * See cornerEigenValsAndVecs .
 * @param useHarrisDetector Parameter indicating whether to use a Harris detector (see #cornerHarris)
 * or #cornerMinEigenVal.
 * @param k Free parameter of the Harris detector.
 */
+ (void)goodFeaturesToTrackWithQuality:(Mat*)image corners:(Mat*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask cornersQuality:(Mat*)cornersQuality blockSize:(int)blockSize gradientSize:(int)gradientSize useHarrisDetector:(BOOL)useHarrisDetector k:(double)k NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:cornersQuality:blockSize:gradientSize:useHarrisDetector:k:));

/**
 * Same as above, but returns also quality measure of the detected corners.
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param cornersQuality Output vector of quality measure of the detected corners.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * @param gradientSize Aperture parameter for the Sobel operator used for derivatives computation.
 * See cornerEigenValsAndVecs .
 * @param useHarrisDetector Parameter indicating whether to use a Harris detector (see #cornerHarris)
 * or #cornerMinEigenVal.
 */
+ (void)goodFeaturesToTrackWithQuality:(Mat*)image corners:(Mat*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask cornersQuality:(Mat*)cornersQuality blockSize:(int)blockSize gradientSize:(int)gradientSize useHarrisDetector:(BOOL)useHarrisDetector NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:cornersQuality:blockSize:gradientSize:useHarrisDetector:));

/**
 * Same as above, but returns also quality measure of the detected corners.
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param cornersQuality Output vector of quality measure of the detected corners.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * @param gradientSize Aperture parameter for the Sobel operator used for derivatives computation.
 * See cornerEigenValsAndVecs .
 * or #cornerMinEigenVal.
 */
+ (void)goodFeaturesToTrackWithQuality:(Mat*)image corners:(Mat*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask cornersQuality:(Mat*)cornersQuality blockSize:(int)blockSize gradientSize:(int)gradientSize NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:cornersQuality:blockSize:gradientSize:));

/**
 * Same as above, but returns also quality measure of the detected corners.
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param cornersQuality Output vector of quality measure of the detected corners.
 * @param blockSize Size of an average block for computing a derivative covariation matrix over each
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * See cornerEigenValsAndVecs .
 * or #cornerMinEigenVal.
 */
+ (void)goodFeaturesToTrackWithQuality:(Mat*)image corners:(Mat*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask cornersQuality:(Mat*)cornersQuality blockSize:(int)blockSize NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:cornersQuality:blockSize:));

/**
 * Same as above, but returns also quality measure of the detected corners.
 *
 * @param image Input 8-bit or floating-point 32-bit, single-channel image.
 * @param corners Output vector of detected corners.
 * @param maxCorners Maximum number of corners to return. If there are more corners than are found,
 * the strongest of them is returned. `maxCorners <= 0` implies that no limit on the maximum is set
 * and all detected corners are returned.
 * @param qualityLevel Parameter characterizing the minimal accepted quality of image corners. The
 * parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue
 * (see #cornerMinEigenVal ) or the Harris function response (see #cornerHarris ). The corners with the
 * quality measure less than the product are rejected. For example, if the best corner has the
 * quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure
 * less than 15 are rejected.
 * @param minDistance Minimum possible Euclidean distance between the returned corners.
 * @param mask Region of interest. If the image is not empty (it needs to have the type
 * CV_8UC1 and the same size as image ), it specifies the region in which the corners are detected.
 * @param cornersQuality Output vector of quality measure of the detected corners.
 * pixel neighborhood. See cornerEigenValsAndVecs .
 * See cornerEigenValsAndVecs .
 * or #cornerMinEigenVal.
 */
+ (void)goodFeaturesToTrackWithQuality:(Mat*)image corners:(Mat*)corners maxCorners:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance mask:(Mat*)mask cornersQuality:(Mat*)cornersQuality NS_SWIFT_NAME(goodFeaturesToTrack(image:corners:maxCorners:qualityLevel:minDistance:mask:cornersQuality:));


//
//  void cv::HoughLines(Mat image, Mat& lines, double rho, double theta, int threshold, double srn = 0, double stn = 0, double min_theta = 0, double max_theta = CV_PI)
//
/**
 * Finds lines in a binary image using the standard Hough transform.
 *
 * The function implements the standard or standard multi-scale Hough transform algorithm for line
 * detection. See <http://homepages.inf.ed.ac.uk/rbf/HIPR2/hough.htm> for a good explanation of Hough
 * transform.
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 2 or 3 element vector
 * `$$(\rho, \theta)$$` or `$$(\rho, \theta, \textrm{votes})$$` . `$$\rho$$` is the distance from the coordinate origin `$$(0,0)$$` (top-left corner of
 * the image). `$$\theta$$` is the line rotation angle in radians (
 * `$$0 \sim \textrm{vertical line}, \pi/2 \sim \textrm{horizontal line}$$` ).
 * `$$\textrm{votes}$$` is the value of accumulator.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * @param srn For the multi-scale Hough transform, it is a divisor for the distance resolution rho .
 * The coarse accumulator distance resolution is rho and the accurate accumulator resolution is
 * rho/srn . If both srn=0 and stn=0 , the classical Hough transform is used. Otherwise, both these
 * parameters should be positive.
 * @param stn For the multi-scale Hough transform, it is a divisor for the distance resolution theta.
 * @param min_theta For standard and multi-scale Hough transform, minimum angle to check for lines.
 * Must fall between 0 and max_theta.
 * @param max_theta For standard and multi-scale Hough transform, maximum angle to check for lines.
 * Must fall between min_theta and CV_PI.
 */
+ (void)HoughLines:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn stn:(double)stn min_theta:(double)min_theta max_theta:(double)max_theta NS_SWIFT_NAME(HoughLines(image:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:));

/**
 * Finds lines in a binary image using the standard Hough transform.
 *
 * The function implements the standard or standard multi-scale Hough transform algorithm for line
 * detection. See <http://homepages.inf.ed.ac.uk/rbf/HIPR2/hough.htm> for a good explanation of Hough
 * transform.
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 2 or 3 element vector
 * `$$(\rho, \theta)$$` or `$$(\rho, \theta, \textrm{votes})$$` . `$$\rho$$` is the distance from the coordinate origin `$$(0,0)$$` (top-left corner of
 * the image). `$$\theta$$` is the line rotation angle in radians (
 * `$$0 \sim \textrm{vertical line}, \pi/2 \sim \textrm{horizontal line}$$` ).
 * `$$\textrm{votes}$$` is the value of accumulator.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * @param srn For the multi-scale Hough transform, it is a divisor for the distance resolution rho .
 * The coarse accumulator distance resolution is rho and the accurate accumulator resolution is
 * rho/srn . If both srn=0 and stn=0 , the classical Hough transform is used. Otherwise, both these
 * parameters should be positive.
 * @param stn For the multi-scale Hough transform, it is a divisor for the distance resolution theta.
 * @param min_theta For standard and multi-scale Hough transform, minimum angle to check for lines.
 * Must fall between 0 and max_theta.
 * Must fall between min_theta and CV_PI.
 */
+ (void)HoughLines:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn stn:(double)stn min_theta:(double)min_theta NS_SWIFT_NAME(HoughLines(image:lines:rho:theta:threshold:srn:stn:min_theta:));

/**
 * Finds lines in a binary image using the standard Hough transform.
 *
 * The function implements the standard or standard multi-scale Hough transform algorithm for line
 * detection. See <http://homepages.inf.ed.ac.uk/rbf/HIPR2/hough.htm> for a good explanation of Hough
 * transform.
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 2 or 3 element vector
 * `$$(\rho, \theta)$$` or `$$(\rho, \theta, \textrm{votes})$$` . `$$\rho$$` is the distance from the coordinate origin `$$(0,0)$$` (top-left corner of
 * the image). `$$\theta$$` is the line rotation angle in radians (
 * `$$0 \sim \textrm{vertical line}, \pi/2 \sim \textrm{horizontal line}$$` ).
 * `$$\textrm{votes}$$` is the value of accumulator.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * @param srn For the multi-scale Hough transform, it is a divisor for the distance resolution rho .
 * The coarse accumulator distance resolution is rho and the accurate accumulator resolution is
 * rho/srn . If both srn=0 and stn=0 , the classical Hough transform is used. Otherwise, both these
 * parameters should be positive.
 * @param stn For the multi-scale Hough transform, it is a divisor for the distance resolution theta.
 * Must fall between 0 and max_theta.
 * Must fall between min_theta and CV_PI.
 */
+ (void)HoughLines:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn stn:(double)stn NS_SWIFT_NAME(HoughLines(image:lines:rho:theta:threshold:srn:stn:));

/**
 * Finds lines in a binary image using the standard Hough transform.
 *
 * The function implements the standard or standard multi-scale Hough transform algorithm for line
 * detection. See <http://homepages.inf.ed.ac.uk/rbf/HIPR2/hough.htm> for a good explanation of Hough
 * transform.
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 2 or 3 element vector
 * `$$(\rho, \theta)$$` or `$$(\rho, \theta, \textrm{votes})$$` . `$$\rho$$` is the distance from the coordinate origin `$$(0,0)$$` (top-left corner of
 * the image). `$$\theta$$` is the line rotation angle in radians (
 * `$$0 \sim \textrm{vertical line}, \pi/2 \sim \textrm{horizontal line}$$` ).
 * `$$\textrm{votes}$$` is the value of accumulator.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * @param srn For the multi-scale Hough transform, it is a divisor for the distance resolution rho .
 * The coarse accumulator distance resolution is rho and the accurate accumulator resolution is
 * rho/srn . If both srn=0 and stn=0 , the classical Hough transform is used. Otherwise, both these
 * parameters should be positive.
 * Must fall between 0 and max_theta.
 * Must fall between min_theta and CV_PI.
 */
+ (void)HoughLines:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn NS_SWIFT_NAME(HoughLines(image:lines:rho:theta:threshold:srn:));

/**
 * Finds lines in a binary image using the standard Hough transform.
 *
 * The function implements the standard or standard multi-scale Hough transform algorithm for line
 * detection. See <http://homepages.inf.ed.ac.uk/rbf/HIPR2/hough.htm> for a good explanation of Hough
 * transform.
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 2 or 3 element vector
 * `$$(\rho, \theta)$$` or `$$(\rho, \theta, \textrm{votes})$$` . `$$\rho$$` is the distance from the coordinate origin `$$(0,0)$$` (top-left corner of
 * the image). `$$\theta$$` is the line rotation angle in radians (
 * `$$0 \sim \textrm{vertical line}, \pi/2 \sim \textrm{horizontal line}$$` ).
 * `$$\textrm{votes}$$` is the value of accumulator.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * The coarse accumulator distance resolution is rho and the accurate accumulator resolution is
 * rho/srn . If both srn=0 and stn=0 , the classical Hough transform is used. Otherwise, both these
 * parameters should be positive.
 * Must fall between 0 and max_theta.
 * Must fall between min_theta and CV_PI.
 */
+ (void)HoughLines:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold NS_SWIFT_NAME(HoughLines(image:lines:rho:theta:threshold:));


//
//  void cv::HoughLinesP(Mat image, Mat& lines, double rho, double theta, int threshold, double minLineLength = 0, double maxLineGap = 0)
//
/**
 * Finds line segments in a binary image using the probabilistic Hough transform.
 *
 * The function implements the probabilistic Hough transform algorithm for line detection, described
 * in CITE: Matas00
 *
 * See the line detection example below:
 * INCLUDE: snippets/imgproc_HoughLinesP.cpp
 * This is a sample picture the function parameters have been tuned for:
 *
 * ![image](pics/building.jpg)
 *
 * And this is the output of the above program in case of the probabilistic Hough transform:
 *
 * ![image](pics/houghp.png)
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 4-element vector
 * `$$(x_1, y_1, x_2, y_2)$$` , where `$$(x_1,y_1)$$` and `$$(x_2, y_2)$$` are the ending points of each detected
 * line segment.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * @param minLineLength Minimum line length. Line segments shorter than that are rejected.
 * @param maxLineGap Maximum allowed gap between points on the same line to link them.
 *
 * @see `LineSegmentDetector`
 */
+ (void)HoughLinesP:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold minLineLength:(double)minLineLength maxLineGap:(double)maxLineGap NS_SWIFT_NAME(HoughLinesP(image:lines:rho:theta:threshold:minLineLength:maxLineGap:));

/**
 * Finds line segments in a binary image using the probabilistic Hough transform.
 *
 * The function implements the probabilistic Hough transform algorithm for line detection, described
 * in CITE: Matas00
 *
 * See the line detection example below:
 * INCLUDE: snippets/imgproc_HoughLinesP.cpp
 * This is a sample picture the function parameters have been tuned for:
 *
 * ![image](pics/building.jpg)
 *
 * And this is the output of the above program in case of the probabilistic Hough transform:
 *
 * ![image](pics/houghp.png)
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 4-element vector
 * `$$(x_1, y_1, x_2, y_2)$$` , where `$$(x_1,y_1)$$` and `$$(x_2, y_2)$$` are the ending points of each detected
 * line segment.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 * @param minLineLength Minimum line length. Line segments shorter than that are rejected.
 *
 * @see `LineSegmentDetector`
 */
+ (void)HoughLinesP:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold minLineLength:(double)minLineLength NS_SWIFT_NAME(HoughLinesP(image:lines:rho:theta:threshold:minLineLength:));

/**
 * Finds line segments in a binary image using the probabilistic Hough transform.
 *
 * The function implements the probabilistic Hough transform algorithm for line detection, described
 * in CITE: Matas00
 *
 * See the line detection example below:
 * INCLUDE: snippets/imgproc_HoughLinesP.cpp
 * This is a sample picture the function parameters have been tuned for:
 *
 * ![image](pics/building.jpg)
 *
 * And this is the output of the above program in case of the probabilistic Hough transform:
 *
 * ![image](pics/houghp.png)
 *
 * @param image 8-bit, single-channel binary source image. The image may be modified by the function.
 * @param lines Output vector of lines. Each line is represented by a 4-element vector
 * `$$(x_1, y_1, x_2, y_2)$$` , where `$$(x_1,y_1)$$` and `$$(x_2, y_2)$$` are the ending points of each detected
 * line segment.
 * @param rho Distance resolution of the accumulator in pixels.
 * @param theta Angle resolution of the accumulator in radians.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` ).
 *
 * @see `LineSegmentDetector`
 */
+ (void)HoughLinesP:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold NS_SWIFT_NAME(HoughLinesP(image:lines:rho:theta:threshold:));


//
//  void cv::HoughLinesPointSet(Mat point, Mat& lines, int lines_max, int threshold, double min_rho, double max_rho, double rho_step, double min_theta, double max_theta, double theta_step)
//
/**
 * Finds lines in a set of points using the standard Hough transform.
 *
 * The function finds lines in a set of points using a modification of the Hough transform.
 * INCLUDE: snippets/imgproc_HoughLinesPointSet.cpp
 * @param point Input vector of points. Each vector must be encoded as a Point vector `$$(x,y)$$`. Type must be CV_32FC2 or CV_32SC2.
 * @param lines Output vector of found lines. Each vector is encoded as a vector<Vec3d> `$$(votes, rho, theta)$$`.
 * The larger the value of 'votes', the higher the reliability of the Hough line.
 * @param lines_max Max count of hough lines.
 * @param threshold Accumulator threshold parameter. Only those lines are returned that get enough
 * votes ( `$$>\texttt{threshold}$$` )
 * @param min_rho Minimum Distance value of the accumulator in pixels.
 * @param max_rho Maximum Distance value of the accumulator in pixels.
 * @param rho_step Distance resolution of the accumulator in pixels.
 * @param min_theta Minimum angle value of the accumulator in radians.
 * @param max_theta Maximum angle value of the accumulator in radians.
 * @param theta_step Angle resolution of the accumulator in radians.
 */
+ (void)HoughLinesPointSet:(Mat*)point lines:(Mat*)lines lines_max:(int)lines_max threshold:(int)threshold min_rho:(double)min_rho max_rho:(double)max_rho rho_step:(double)rho_step min_theta:(double)min_theta max_theta:(double)max_theta theta_step:(double)theta_step NS_SWIFT_NAME(HoughLinesPointSet(point:lines:lines_max:threshold:min_rho:max_rho:rho_step:min_theta:max_theta:theta_step:));


//
//  void cv::HoughCircles(Mat image, Mat& circles, HoughModes method, double dp, double minDist, double param1 = 100, double param2 = 100, int minRadius = 0, int maxRadius = 0)
//
/**
 * Finds circles in a grayscale image using the Hough transform.
 *
 * The function finds circles in a grayscale image using a modification of the Hough transform.
 *
 * Example: :
 * INCLUDE: snippets/imgproc_HoughLinesCircles.cpp
 *
 * NOTE: Usually the function detects the centers of circles well. However, it may fail to find correct
 * radii. You can assist to the function by specifying the radius range ( minRadius and maxRadius ) if
 * you know it. Or, in the case of #HOUGH_GRADIENT method you may set maxRadius to a negative number
 * to return centers only without radius search, and find the correct radius using an additional procedure.
 *
 * It also helps to smooth image a bit unless it's already soft. For example,
 * GaussianBlur() with 7x7 kernel and 1.5x1.5 sigma or similar blurring may help.
 *
 * @param image 8-bit, single-channel, grayscale input image.
 * @param circles Output vector of found circles. Each vector is encoded as  3 or 4 element
 * floating-point vector `$$(x, y, radius)$$` or `$$(x, y, radius, votes)$$` .
 * @param method Detection method, see #HoughModes. The available methods are #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT.
 * @param dp Inverse ratio of the accumulator resolution to the image resolution. For example, if
 * dp=1 , the accumulator has the same resolution as the input image. If dp=2 , the accumulator has
 * half as big width and height. For #HOUGH_GRADIENT_ALT the recommended value is dp=1.5,
 * unless some small very circles need to be detected.
 * @param minDist Minimum distance between the centers of the detected circles. If the parameter is
 * too small, multiple neighbor circles may be falsely detected in addition to a true one. If it is
 * too large, some circles may be missed.
 * @param param1 First method-specific parameter. In case of #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT,
 * it is the higher threshold of the two passed to the Canny edge detector (the lower one is twice smaller).
 * Note that #HOUGH_GRADIENT_ALT uses #Scharr algorithm to compute image derivatives, so the threshold value
 * shough normally be higher, such as 300 or normally exposed and contrasty images.
 * @param param2 Second method-specific parameter. In case of #HOUGH_GRADIENT, it is the
 * accumulator threshold for the circle centers at the detection stage. The smaller it is, the more
 * false circles may be detected. Circles, corresponding to the larger accumulator values, will be
 * returned first. In the case of #HOUGH_GRADIENT_ALT algorithm, this is the circle "perfectness" measure.
 * The closer it to 1, the better shaped circles algorithm selects. In most cases 0.9 should be fine.
 * If you want get better detection of small circles, you may decrease it to 0.85, 0.8 or even less.
 * But then also try to limit the search range [minRadius, maxRadius] to avoid many false circles.
 * @param minRadius Minimum circle radius.
 * @param maxRadius Maximum circle radius. If <= 0, uses the maximum image dimension. If < 0, #HOUGH_GRADIENT returns
 * centers without finding the radius. #HOUGH_GRADIENT_ALT always computes circle radiuses.
 *
 * @see `+fitEllipse:`, `+minEnclosingCircle:center:radius:`
 */
+ (void)HoughCircles:(Mat*)image circles:(Mat*)circles method:(HoughModes)method dp:(double)dp minDist:(double)minDist param1:(double)param1 param2:(double)param2 minRadius:(int)minRadius maxRadius:(int)maxRadius NS_SWIFT_NAME(HoughCircles(image:circles:method:dp:minDist:param1:param2:minRadius:maxRadius:));

/**
 * Finds circles in a grayscale image using the Hough transform.
 *
 * The function finds circles in a grayscale image using a modification of the Hough transform.
 *
 * Example: :
 * INCLUDE: snippets/imgproc_HoughLinesCircles.cpp
 *
 * NOTE: Usually the function detects the centers of circles well. However, it may fail to find correct
 * radii. You can assist to the function by specifying the radius range ( minRadius and maxRadius ) if
 * you know it. Or, in the case of #HOUGH_GRADIENT method you may set maxRadius to a negative number
 * to return centers only without radius search, and find the correct radius using an additional procedure.
 *
 * It also helps to smooth image a bit unless it's already soft. For example,
 * GaussianBlur() with 7x7 kernel and 1.5x1.5 sigma or similar blurring may help.
 *
 * @param image 8-bit, single-channel, grayscale input image.
 * @param circles Output vector of found circles. Each vector is encoded as  3 or 4 element
 * floating-point vector `$$(x, y, radius)$$` or `$$(x, y, radius, votes)$$` .
 * @param method Detection method, see #HoughModes. The available methods are #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT.
 * @param dp Inverse ratio of the accumulator resolution to the image resolution. For example, if
 * dp=1 , the accumulator has the same resolution as the input image. If dp=2 , the accumulator has
 * half as big width and height. For #HOUGH_GRADIENT_ALT the recommended value is dp=1.5,
 * unless some small very circles need to be detected.
 * @param minDist Minimum distance between the centers of the detected circles. If the parameter is
 * too small, multiple neighbor circles may be falsely detected in addition to a true one. If it is
 * too large, some circles may be missed.
 * @param param1 First method-specific parameter. In case of #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT,
 * it is the higher threshold of the two passed to the Canny edge detector (the lower one is twice smaller).
 * Note that #HOUGH_GRADIENT_ALT uses #Scharr algorithm to compute image derivatives, so the threshold value
 * shough normally be higher, such as 300 or normally exposed and contrasty images.
 * @param param2 Second method-specific parameter. In case of #HOUGH_GRADIENT, it is the
 * accumulator threshold for the circle centers at the detection stage. The smaller it is, the more
 * false circles may be detected. Circles, corresponding to the larger accumulator values, will be
 * returned first. In the case of #HOUGH_GRADIENT_ALT algorithm, this is the circle "perfectness" measure.
 * The closer it to 1, the better shaped circles algorithm selects. In most cases 0.9 should be fine.
 * If you want get better detection of small circles, you may decrease it to 0.85, 0.8 or even less.
 * But then also try to limit the search range [minRadius, maxRadius] to avoid many false circles.
 * @param minRadius Minimum circle radius.
 * centers without finding the radius. #HOUGH_GRADIENT_ALT always computes circle radiuses.
 *
 * @see `+fitEllipse:`, `+minEnclosingCircle:center:radius:`
 */
+ (void)HoughCircles:(Mat*)image circles:(Mat*)circles method:(HoughModes)method dp:(double)dp minDist:(double)minDist param1:(double)param1 param2:(double)param2 minRadius:(int)minRadius NS_SWIFT_NAME(HoughCircles(image:circles:method:dp:minDist:param1:param2:minRadius:));

/**
 * Finds circles in a grayscale image using the Hough transform.
 *
 * The function finds circles in a grayscale image using a modification of the Hough transform.
 *
 * Example: :
 * INCLUDE: snippets/imgproc_HoughLinesCircles.cpp
 *
 * NOTE: Usually the function detects the centers of circles well. However, it may fail to find correct
 * radii. You can assist to the function by specifying the radius range ( minRadius and maxRadius ) if
 * you know it. Or, in the case of #HOUGH_GRADIENT method you may set maxRadius to a negative number
 * to return centers only without radius search, and find the correct radius using an additional procedure.
 *
 * It also helps to smooth image a bit unless it's already soft. For example,
 * GaussianBlur() with 7x7 kernel and 1.5x1.5 sigma or similar blurring may help.
 *
 * @param image 8-bit, single-channel, grayscale input image.
 * @param circles Output vector of found circles. Each vector is encoded as  3 or 4 element
 * floating-point vector `$$(x, y, radius)$$` or `$$(x, y, radius, votes)$$` .
 * @param method Detection method, see #HoughModes. The available methods are #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT.
 * @param dp Inverse ratio of the accumulator resolution to the image resolution. For example, if
 * dp=1 , the accumulator has the same resolution as the input image. If dp=2 , the accumulator has
 * half as big width and height. For #HOUGH_GRADIENT_ALT the recommended value is dp=1.5,
 * unless some small very circles need to be detected.
 * @param minDist Minimum distance between the centers of the detected circles. If the parameter is
 * too small, multiple neighbor circles may be falsely detected in addition to a true one. If it is
 * too large, some circles may be missed.
 * @param param1 First method-specific parameter. In case of #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT,
 * it is the higher threshold of the two passed to the Canny edge detector (the lower one is twice smaller).
 * Note that #HOUGH_GRADIENT_ALT uses #Scharr algorithm to compute image derivatives, so the threshold value
 * shough normally be higher, such as 300 or normally exposed and contrasty images.
 * @param param2 Second method-specific parameter. In case of #HOUGH_GRADIENT, it is the
 * accumulator threshold for the circle centers at the detection stage. The smaller it is, the more
 * false circles may be detected. Circles, corresponding to the larger accumulator values, will be
 * returned first. In the case of #HOUGH_GRADIENT_ALT algorithm, this is the circle "perfectness" measure.
 * The closer it to 1, the better shaped circles algorithm selects. In most cases 0.9 should be fine.
 * If you want get better detection of small circles, you may decrease it to 0.85, 0.8 or even less.
 * But then also try to limit the search range [minRadius, maxRadius] to avoid many false circles.
 * centers without finding the radius. #HOUGH_GRADIENT_ALT always computes circle radiuses.
 *
 * @see `+fitEllipse:`, `+minEnclosingCircle:center:radius:`
 */
+ (void)HoughCircles:(Mat*)image circles:(Mat*)circles method:(HoughModes)method dp:(double)dp minDist:(double)minDist param1:(double)param1 param2:(double)param2 NS_SWIFT_NAME(HoughCircles(image:circles:method:dp:minDist:param1:param2:));

/**
 * Finds circles in a grayscale image using the Hough transform.
 *
 * The function finds circles in a grayscale image using a modification of the Hough transform.
 *
 * Example: :
 * INCLUDE: snippets/imgproc_HoughLinesCircles.cpp
 *
 * NOTE: Usually the function detects the centers of circles well. However, it may fail to find correct
 * radii. You can assist to the function by specifying the radius range ( minRadius and maxRadius ) if
 * you know it. Or, in the case of #HOUGH_GRADIENT method you may set maxRadius to a negative number
 * to return centers only without radius search, and find the correct radius using an additional procedure.
 *
 * It also helps to smooth image a bit unless it's already soft. For example,
 * GaussianBlur() with 7x7 kernel and 1.5x1.5 sigma or similar blurring may help.
 *
 * @param image 8-bit, single-channel, grayscale input image.
 * @param circles Output vector of found circles. Each vector is encoded as  3 or 4 element
 * floating-point vector `$$(x, y, radius)$$` or `$$(x, y, radius, votes)$$` .
 * @param method Detection method, see #HoughModes. The available methods are #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT.
 * @param dp Inverse ratio of the accumulator resolution to the image resolution. For example, if
 * dp=1 , the accumulator has the same resolution as the input image. If dp=2 , the accumulator has
 * half as big width and height. For #HOUGH_GRADIENT_ALT the recommended value is dp=1.5,
 * unless some small very circles need to be detected.
 * @param minDist Minimum distance between the centers of the detected circles. If the parameter is
 * too small, multiple neighbor circles may be falsely detected in addition to a true one. If it is
 * too large, some circles may be missed.
 * @param param1 First method-specific parameter. In case of #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT,
 * it is the higher threshold of the two passed to the Canny edge detector (the lower one is twice smaller).
 * Note that #HOUGH_GRADIENT_ALT uses #Scharr algorithm to compute image derivatives, so the threshold value
 * shough normally be higher, such as 300 or normally exposed and contrasty images.
 * accumulator threshold for the circle centers at the detection stage. The smaller it is, the more
 * false circles may be detected. Circles, corresponding to the larger accumulator values, will be
 * returned first. In the case of #HOUGH_GRADIENT_ALT algorithm, this is the circle "perfectness" measure.
 * The closer it to 1, the better shaped circles algorithm selects. In most cases 0.9 should be fine.
 * If you want get better detection of small circles, you may decrease it to 0.85, 0.8 or even less.
 * But then also try to limit the search range [minRadius, maxRadius] to avoid many false circles.
 * centers without finding the radius. #HOUGH_GRADIENT_ALT always computes circle radiuses.
 *
 * @see `+fitEllipse:`, `+minEnclosingCircle:center:radius:`
 */
+ (void)HoughCircles:(Mat*)image circles:(Mat*)circles method:(HoughModes)method dp:(double)dp minDist:(double)minDist param1:(double)param1 NS_SWIFT_NAME(HoughCircles(image:circles:method:dp:minDist:param1:));

/**
 * Finds circles in a grayscale image using the Hough transform.
 *
 * The function finds circles in a grayscale image using a modification of the Hough transform.
 *
 * Example: :
 * INCLUDE: snippets/imgproc_HoughLinesCircles.cpp
 *
 * NOTE: Usually the function detects the centers of circles well. However, it may fail to find correct
 * radii. You can assist to the function by specifying the radius range ( minRadius and maxRadius ) if
 * you know it. Or, in the case of #HOUGH_GRADIENT method you may set maxRadius to a negative number
 * to return centers only without radius search, and find the correct radius using an additional procedure.
 *
 * It also helps to smooth image a bit unless it's already soft. For example,
 * GaussianBlur() with 7x7 kernel and 1.5x1.5 sigma or similar blurring may help.
 *
 * @param image 8-bit, single-channel, grayscale input image.
 * @param circles Output vector of found circles. Each vector is encoded as  3 or 4 element
 * floating-point vector `$$(x, y, radius)$$` or `$$(x, y, radius, votes)$$` .
 * @param method Detection method, see #HoughModes. The available methods are #HOUGH_GRADIENT and #HOUGH_GRADIENT_ALT.
 * @param dp Inverse ratio of the accumulator resolution to the image resolution. For example, if
 * dp=1 , the accumulator has the same resolution as the input image. If dp=2 , the accumulator has
 * half as big width and height. For #HOUGH_GRADIENT_ALT the recommended value is dp=1.5,
 * unless some small very circles need to be detected.
 * @param minDist Minimum distance between the centers of the detected circles. If the parameter is
 * too small, multiple neighbor circles may be falsely detected in addition to a true one. If it is
 * too large, some circles may be missed.
 * it is the higher threshold of the two passed to the Canny edge detector (the lower one is twice smaller).
 * Note that #HOUGH_GRADIENT_ALT uses #Scharr algorithm to compute image derivatives, so the threshold value
 * shough normally be higher, such as 300 or normally exposed and contrasty images.
 * accumulator threshold for the circle centers at the detection stage. The smaller it is, the more
 * false circles may be detected. Circles, corresponding to the larger accumulator values, will be
 * returned first. In the case of #HOUGH_GRADIENT_ALT algorithm, this is the circle "perfectness" measure.
 * The closer it to 1, the better shaped circles algorithm selects. In most cases 0.9 should be fine.
 * If you want get better detection of small circles, you may decrease it to 0.85, 0.8 or even less.
 * But then also try to limit the search range [minRadius, maxRadius] to avoid many false circles.
 * centers without finding the radius. #HOUGH_GRADIENT_ALT always computes circle radiuses.
 *
 * @see `+fitEllipse:`, `+minEnclosingCircle:center:radius:`
 */
+ (void)HoughCircles:(Mat*)image circles:(Mat*)circles method:(HoughModes)method dp:(double)dp minDist:(double)minDist NS_SWIFT_NAME(HoughCircles(image:circles:method:dp:minDist:));


//
//  void cv::erode(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, BorderTypes borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
//
/**
 * Erodes an image by using a specific structuring element.
 *
 * The function erodes the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the minimum is taken:
 *
 * `$$\texttt{dst} (x,y) =  \min _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Erosion can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for erosion; if `element=Mat()`, a `3 x 3` rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement.
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @param iterations number of times erosion is applied.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @param borderValue border value in case of a constant border
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)erode:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations borderType:(BorderTypes)borderType borderValue:(Scalar*)borderValue NS_SWIFT_NAME(erode(src:dst:kernel:anchor:iterations:borderType:borderValue:));

/**
 * Erodes an image by using a specific structuring element.
 *
 * The function erodes the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the minimum is taken:
 *
 * `$$\texttt{dst} (x,y) =  \min _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Erosion can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for erosion; if `element=Mat()`, a `3 x 3` rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement.
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @param iterations number of times erosion is applied.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)erode:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations borderType:(BorderTypes)borderType NS_SWIFT_NAME(erode(src:dst:kernel:anchor:iterations:borderType:));

/**
 * Erodes an image by using a specific structuring element.
 *
 * The function erodes the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the minimum is taken:
 *
 * `$$\texttt{dst} (x,y) =  \min _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Erosion can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for erosion; if `element=Mat()`, a `3 x 3` rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement.
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @param iterations number of times erosion is applied.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)erode:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations NS_SWIFT_NAME(erode(src:dst:kernel:anchor:iterations:));

/**
 * Erodes an image by using a specific structuring element.
 *
 * The function erodes the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the minimum is taken:
 *
 * `$$\texttt{dst} (x,y) =  \min _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Erosion can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for erosion; if `element=Mat()`, a `3 x 3` rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement.
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)erode:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor NS_SWIFT_NAME(erode(src:dst:kernel:anchor:));

/**
 * Erodes an image by using a specific structuring element.
 *
 * The function erodes the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the minimum is taken:
 *
 * `$$\texttt{dst} (x,y) =  \min _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Erosion can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for erosion; if `element=Mat()`, a `3 x 3` rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement.
 * anchor is at the element center.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)erode:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel NS_SWIFT_NAME(erode(src:dst:kernel:));


//
//  void cv::dilate(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, BorderTypes borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
//
/**
 * Dilates an image by using a specific structuring element.
 *
 * The function dilates the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the maximum is taken:
 * `$$\texttt{dst} (x,y) =  \max _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Dilation can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for dilation; if elemenat=Mat(), a 3 x 3 rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @param iterations number of times dilation is applied.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not suported.
 * @param borderValue border value in case of a constant border
 * @see `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)dilate:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations borderType:(BorderTypes)borderType borderValue:(Scalar*)borderValue NS_SWIFT_NAME(dilate(src:dst:kernel:anchor:iterations:borderType:borderValue:));

/**
 * Dilates an image by using a specific structuring element.
 *
 * The function dilates the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the maximum is taken:
 * `$$\texttt{dst} (x,y) =  \max _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Dilation can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for dilation; if elemenat=Mat(), a 3 x 3 rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @param iterations number of times dilation is applied.
 * @param borderType pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not suported.
 * @see `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)dilate:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations borderType:(BorderTypes)borderType NS_SWIFT_NAME(dilate(src:dst:kernel:anchor:iterations:borderType:));

/**
 * Dilates an image by using a specific structuring element.
 *
 * The function dilates the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the maximum is taken:
 * `$$\texttt{dst} (x,y) =  \max _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Dilation can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for dilation; if elemenat=Mat(), a 3 x 3 rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @param iterations number of times dilation is applied.
 * @see `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)dilate:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations NS_SWIFT_NAME(dilate(src:dst:kernel:anchor:iterations:));

/**
 * Dilates an image by using a specific structuring element.
 *
 * The function dilates the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the maximum is taken:
 * `$$\texttt{dst} (x,y) =  \max _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Dilation can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for dilation; if elemenat=Mat(), a 3 x 3 rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement
 * @param anchor position of the anchor within the element; default value (-1, -1) means that the
 * anchor is at the element center.
 * @see `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)dilate:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel anchor:(Point2i*)anchor NS_SWIFT_NAME(dilate(src:dst:kernel:anchor:));

/**
 * Dilates an image by using a specific structuring element.
 *
 * The function dilates the source image using the specified structuring element that determines the
 * shape of a pixel neighborhood over which the maximum is taken:
 * `$$\texttt{dst} (x,y) =  \max _{(x',y'):  \, \texttt{element} (x',y') \ne0 } \texttt{src} (x+x',y+y')$$`
 *
 * The function supports the in-place mode. Dilation can be applied several ( iterations ) times. In
 * case of multi-channel images, each channel is processed independently.
 *
 * @param src input image; the number of channels can be arbitrary, but the depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst output image of the same size and type as src.
 * @param kernel structuring element used for dilation; if elemenat=Mat(), a 3 x 3 rectangular
 * structuring element is used. Kernel can be created using #getStructuringElement
 * anchor is at the element center.
 * @see `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+morphologyEx:dst:op:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 */
+ (void)dilate:(Mat*)src dst:(Mat*)dst kernel:(Mat*)kernel NS_SWIFT_NAME(dilate(src:dst:kernel:));


//
//  void cv::morphologyEx(Mat src, Mat& dst, MorphTypes op, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, BorderTypes borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
//
/**
 * Performs advanced morphological transformations.
 *
 * The function cv::morphologyEx can perform advanced morphological transformations using an erosion and dilation as
 * basic operations.
 *
 * Any of the operations can be done in-place. In case of multi-channel images, each channel is
 * processed independently.
 *
 * @param src Source image. The number of channels can be arbitrary. The depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst Destination image of the same size and type as source image.
 * @param op Type of a morphological operation, see #MorphTypes
 * @param kernel Structuring element. It can be created using #getStructuringElement.
 * @param anchor Anchor position with the kernel. Negative values mean that the anchor is at the
 * kernel center.
 * @param iterations Number of times erosion and dilation are applied.
 * @param borderType Pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * @param borderValue Border value in case of a constant border. The default value has a special
 * meaning.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 * NOTE: The number of iterations is the number of times erosion or dilatation operation will be applied.
 * For instance, an opening operation (#MORPH_OPEN) with two iterations is equivalent to apply
 * successively: erode -> erode -> dilate -> dilate (and not erode -> dilate -> erode -> dilate).
 */
+ (void)morphologyEx:(Mat*)src dst:(Mat*)dst op:(MorphTypes)op kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations borderType:(BorderTypes)borderType borderValue:(Scalar*)borderValue NS_SWIFT_NAME(morphologyEx(src:dst:op:kernel:anchor:iterations:borderType:borderValue:));

/**
 * Performs advanced morphological transformations.
 *
 * The function cv::morphologyEx can perform advanced morphological transformations using an erosion and dilation as
 * basic operations.
 *
 * Any of the operations can be done in-place. In case of multi-channel images, each channel is
 * processed independently.
 *
 * @param src Source image. The number of channels can be arbitrary. The depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst Destination image of the same size and type as source image.
 * @param op Type of a morphological operation, see #MorphTypes
 * @param kernel Structuring element. It can be created using #getStructuringElement.
 * @param anchor Anchor position with the kernel. Negative values mean that the anchor is at the
 * kernel center.
 * @param iterations Number of times erosion and dilation are applied.
 * @param borderType Pixel extrapolation method, see #BorderTypes. #BORDER_WRAP is not supported.
 * meaning.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 * NOTE: The number of iterations is the number of times erosion or dilatation operation will be applied.
 * For instance, an opening operation (#MORPH_OPEN) with two iterations is equivalent to apply
 * successively: erode -> erode -> dilate -> dilate (and not erode -> dilate -> erode -> dilate).
 */
+ (void)morphologyEx:(Mat*)src dst:(Mat*)dst op:(MorphTypes)op kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations borderType:(BorderTypes)borderType NS_SWIFT_NAME(morphologyEx(src:dst:op:kernel:anchor:iterations:borderType:));

/**
 * Performs advanced morphological transformations.
 *
 * The function cv::morphologyEx can perform advanced morphological transformations using an erosion and dilation as
 * basic operations.
 *
 * Any of the operations can be done in-place. In case of multi-channel images, each channel is
 * processed independently.
 *
 * @param src Source image. The number of channels can be arbitrary. The depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst Destination image of the same size and type as source image.
 * @param op Type of a morphological operation, see #MorphTypes
 * @param kernel Structuring element. It can be created using #getStructuringElement.
 * @param anchor Anchor position with the kernel. Negative values mean that the anchor is at the
 * kernel center.
 * @param iterations Number of times erosion and dilation are applied.
 * meaning.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 * NOTE: The number of iterations is the number of times erosion or dilatation operation will be applied.
 * For instance, an opening operation (#MORPH_OPEN) with two iterations is equivalent to apply
 * successively: erode -> erode -> dilate -> dilate (and not erode -> dilate -> erode -> dilate).
 */
+ (void)morphologyEx:(Mat*)src dst:(Mat*)dst op:(MorphTypes)op kernel:(Mat*)kernel anchor:(Point2i*)anchor iterations:(int)iterations NS_SWIFT_NAME(morphologyEx(src:dst:op:kernel:anchor:iterations:));

/**
 * Performs advanced morphological transformations.
 *
 * The function cv::morphologyEx can perform advanced morphological transformations using an erosion and dilation as
 * basic operations.
 *
 * Any of the operations can be done in-place. In case of multi-channel images, each channel is
 * processed independently.
 *
 * @param src Source image. The number of channels can be arbitrary. The depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst Destination image of the same size and type as source image.
 * @param op Type of a morphological operation, see #MorphTypes
 * @param kernel Structuring element. It can be created using #getStructuringElement.
 * @param anchor Anchor position with the kernel. Negative values mean that the anchor is at the
 * kernel center.
 * meaning.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 * NOTE: The number of iterations is the number of times erosion or dilatation operation will be applied.
 * For instance, an opening operation (#MORPH_OPEN) with two iterations is equivalent to apply
 * successively: erode -> erode -> dilate -> dilate (and not erode -> dilate -> erode -> dilate).
 */
+ (void)morphologyEx:(Mat*)src dst:(Mat*)dst op:(MorphTypes)op kernel:(Mat*)kernel anchor:(Point2i*)anchor NS_SWIFT_NAME(morphologyEx(src:dst:op:kernel:anchor:));

/**
 * Performs advanced morphological transformations.
 *
 * The function cv::morphologyEx can perform advanced morphological transformations using an erosion and dilation as
 * basic operations.
 *
 * Any of the operations can be done in-place. In case of multi-channel images, each channel is
 * processed independently.
 *
 * @param src Source image. The number of channels can be arbitrary. The depth should be one of
 * CV_8U, CV_16U, CV_16S, CV_32F or CV_64F.
 * @param dst Destination image of the same size and type as source image.
 * @param op Type of a morphological operation, see #MorphTypes
 * @param kernel Structuring element. It can be created using #getStructuringElement.
 * kernel center.
 * meaning.
 * @see `+dilate:dst:kernel:anchor:iterations:borderType:borderValue:`, `+erode:dst:kernel:anchor:iterations:borderType:borderValue:`, `+getStructuringElement:ksize:anchor:`
 * NOTE: The number of iterations is the number of times erosion or dilatation operation will be applied.
 * For instance, an opening operation (#MORPH_OPEN) with two iterations is equivalent to apply
 * successively: erode -> erode -> dilate -> dilate (and not erode -> dilate -> erode -> dilate).
 */
+ (void)morphologyEx:(Mat*)src dst:(Mat*)dst op:(MorphTypes)op kernel:(Mat*)kernel NS_SWIFT_NAME(morphologyEx(src:dst:op:kernel:));


//
//  void cv::resize(Mat src, Mat& dst, Size dsize, double fx = 0, double fy = 0, int interpolation = INTER_LINEAR)
//
/**
 * Resizes an image.
 *
 * The function resize resizes the image src down to or up to the specified size. Note that the
 * initial dst type or size are not taken into account. Instead, the size and type are derived from
 * the `src`,`dsize`,`fx`, and `fy`. If you want to resize src so that it fits the pre-created dst,
 * you may call the function as follows:
 *
 *     // explicitly specify dsize=dst.size(); fx and fy will be computed from that.
 *     resize(src, dst, dst.size(), 0, 0, interpolation);
 *
 * If you want to decimate the image by factor of 2 in each direction, you can call the function this
 * way:
 *
 *     // specify fx and fy and let the function compute the destination image size.
 *     resize(src, dst, Size(), 0.5, 0.5, interpolation);
 *
 * To shrink an image, it will generally look best with #INTER_AREA interpolation, whereas to
 * enlarge an image, it will generally look best with c#INTER_CUBIC (slow) or #INTER_LINEAR
 * (faster but still looks OK).
 *
 * @param src input image.
 * @param dst output image; it has the size dsize (when it is non-zero) or the size computed from
 * src.size(), fx, and fy; the type of dst is the same as of src.
 * @param dsize output image size; if it equals zero, it is computed as:
 *  `$$\texttt{dsize = Size(round(fx*src.cols), round(fy*src.rows))}$$`
 *  Either dsize or both fx and fy must be non-zero.
 * @param fx scale factor along the horizontal axis; when it equals 0, it is computed as
 * `$$\texttt{(double)dsize.width/src.cols}$$`
 * @param fy scale factor along the vertical axis; when it equals 0, it is computed as
 * `$$\texttt{(double)dsize.height/src.rows}$$`
 * @param interpolation interpolation method, see #InterpolationFlags
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`
 */
+ (void)resize:(Mat*)src dst:(Mat*)dst dsize:(Size2i*)dsize fx:(double)fx fy:(double)fy interpolation:(int)interpolation NS_SWIFT_NAME(resize(src:dst:dsize:fx:fy:interpolation:));

/**
 * Resizes an image.
 *
 * The function resize resizes the image src down to or up to the specified size. Note that the
 * initial dst type or size are not taken into account. Instead, the size and type are derived from
 * the `src`,`dsize`,`fx`, and `fy`. If you want to resize src so that it fits the pre-created dst,
 * you may call the function as follows:
 *
 *     // explicitly specify dsize=dst.size(); fx and fy will be computed from that.
 *     resize(src, dst, dst.size(), 0, 0, interpolation);
 *
 * If you want to decimate the image by factor of 2 in each direction, you can call the function this
 * way:
 *
 *     // specify fx and fy and let the function compute the destination image size.
 *     resize(src, dst, Size(), 0.5, 0.5, interpolation);
 *
 * To shrink an image, it will generally look best with #INTER_AREA interpolation, whereas to
 * enlarge an image, it will generally look best with c#INTER_CUBIC (slow) or #INTER_LINEAR
 * (faster but still looks OK).
 *
 * @param src input image.
 * @param dst output image; it has the size dsize (when it is non-zero) or the size computed from
 * src.size(), fx, and fy; the type of dst is the same as of src.
 * @param dsize output image size; if it equals zero, it is computed as:
 *  `$$\texttt{dsize = Size(round(fx*src.cols), round(fy*src.rows))}$$`
 *  Either dsize or both fx and fy must be non-zero.
 * @param fx scale factor along the horizontal axis; when it equals 0, it is computed as
 * `$$\texttt{(double)dsize.width/src.cols}$$`
 * @param fy scale factor along the vertical axis; when it equals 0, it is computed as
 * `$$\texttt{(double)dsize.height/src.rows}$$`
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`
 */
+ (void)resize:(Mat*)src dst:(Mat*)dst dsize:(Size2i*)dsize fx:(double)fx fy:(double)fy NS_SWIFT_NAME(resize(src:dst:dsize:fx:fy:));

/**
 * Resizes an image.
 *
 * The function resize resizes the image src down to or up to the specified size. Note that the
 * initial dst type or size are not taken into account. Instead, the size and type are derived from
 * the `src`,`dsize`,`fx`, and `fy`. If you want to resize src so that it fits the pre-created dst,
 * you may call the function as follows:
 *
 *     // explicitly specify dsize=dst.size(); fx and fy will be computed from that.
 *     resize(src, dst, dst.size(), 0, 0, interpolation);
 *
 * If you want to decimate the image by factor of 2 in each direction, you can call the function this
 * way:
 *
 *     // specify fx and fy and let the function compute the destination image size.
 *     resize(src, dst, Size(), 0.5, 0.5, interpolation);
 *
 * To shrink an image, it will generally look best with #INTER_AREA interpolation, whereas to
 * enlarge an image, it will generally look best with c#INTER_CUBIC (slow) or #INTER_LINEAR
 * (faster but still looks OK).
 *
 * @param src input image.
 * @param dst output image; it has the size dsize (when it is non-zero) or the size computed from
 * src.size(), fx, and fy; the type of dst is the same as of src.
 * @param dsize output image size; if it equals zero, it is computed as:
 *  `$$\texttt{dsize = Size(round(fx*src.cols), round(fy*src.rows))}$$`
 *  Either dsize or both fx and fy must be non-zero.
 * @param fx scale factor along the horizontal axis; when it equals 0, it is computed as
 * `$$\texttt{(double)dsize.width/src.cols}$$`
 * `$$\texttt{(double)dsize.height/src.rows}$$`
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`
 */
+ (void)resize:(Mat*)src dst:(Mat*)dst dsize:(Size2i*)dsize fx:(double)fx NS_SWIFT_NAME(resize(src:dst:dsize:fx:));

/**
 * Resizes an image.
 *
 * The function resize resizes the image src down to or up to the specified size. Note that the
 * initial dst type or size are not taken into account. Instead, the size and type are derived from
 * the `src`,`dsize`,`fx`, and `fy`. If you want to resize src so that it fits the pre-created dst,
 * you may call the function as follows:
 *
 *     // explicitly specify dsize=dst.size(); fx and fy will be computed from that.
 *     resize(src, dst, dst.size(), 0, 0, interpolation);
 *
 * If you want to decimate the image by factor of 2 in each direction, you can call the function this
 * way:
 *
 *     // specify fx and fy and let the function compute the destination image size.
 *     resize(src, dst, Size(), 0.5, 0.5, interpolation);
 *
 * To shrink an image, it will generally look best with #INTER_AREA interpolation, whereas to
 * enlarge an image, it will generally look best with c#INTER_CUBIC (slow) or #INTER_LINEAR
 * (faster but still looks OK).
 *
 * @param src input image.
 * @param dst output image; it has the size dsize (when it is non-zero) or the size computed from
 * src.size(), fx, and fy; the type of dst is the same as of src.
 * @param dsize output image size; if it equals zero, it is computed as:
 *  `$$\texttt{dsize = Size(round(fx*src.cols), round(fy*src.rows))}$$`
 *  Either dsize or both fx and fy must be non-zero.
 * `$$\texttt{(double)dsize.width/src.cols}$$`
 * `$$\texttt{(double)dsize.height/src.rows}$$`
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`
 */
+ (void)resize:(Mat*)src dst:(Mat*)dst dsize:(Size2i*)dsize NS_SWIFT_NAME(resize(src:dst:dsize:));


//
//  void cv::warpAffine(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, BorderTypes borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
//
/**
 * Applies an affine transformation to an image.
 *
 * The function warpAffine transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} ( \texttt{M} _{11} x +  \texttt{M} _{12} y +  \texttt{M} _{13}, \texttt{M} _{21} x +  \texttt{M} _{22} y +  \texttt{M} _{23})$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted
 * with #invertAffineTransform and then put in the formula above instead of M. The function cannot
 * operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$2\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * @param flags combination of interpolation methods (see #InterpolationFlags) and the optional
 * flag #WARP_INVERSE_MAP that means that M is the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 * @param borderMode pixel extrapolation method (see #BorderTypes); when
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image corresponding to
 * the "outliers" in the source image are not modified by the function.
 * @param borderValue value used in case of a constant border; by default, it is 0.
 *
 * @see `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `transform`
 */
+ (void)warpAffine:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize flags:(int)flags borderMode:(BorderTypes)borderMode borderValue:(Scalar*)borderValue NS_SWIFT_NAME(warpAffine(src:dst:M:dsize:flags:borderMode:borderValue:));

/**
 * Applies an affine transformation to an image.
 *
 * The function warpAffine transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} ( \texttt{M} _{11} x +  \texttt{M} _{12} y +  \texttt{M} _{13}, \texttt{M} _{21} x +  \texttt{M} _{22} y +  \texttt{M} _{23})$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted
 * with #invertAffineTransform and then put in the formula above instead of M. The function cannot
 * operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$2\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * @param flags combination of interpolation methods (see #InterpolationFlags) and the optional
 * flag #WARP_INVERSE_MAP that means that M is the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 * @param borderMode pixel extrapolation method (see #BorderTypes); when
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image corresponding to
 * the "outliers" in the source image are not modified by the function.
 *
 * @see `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `transform`
 */
+ (void)warpAffine:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize flags:(int)flags borderMode:(BorderTypes)borderMode NS_SWIFT_NAME(warpAffine(src:dst:M:dsize:flags:borderMode:));

/**
 * Applies an affine transformation to an image.
 *
 * The function warpAffine transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} ( \texttt{M} _{11} x +  \texttt{M} _{12} y +  \texttt{M} _{13}, \texttt{M} _{21} x +  \texttt{M} _{22} y +  \texttt{M} _{23})$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted
 * with #invertAffineTransform and then put in the formula above instead of M. The function cannot
 * operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$2\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * @param flags combination of interpolation methods (see #InterpolationFlags) and the optional
 * flag #WARP_INVERSE_MAP that means that M is the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image corresponding to
 * the "outliers" in the source image are not modified by the function.
 *
 * @see `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `transform`
 */
+ (void)warpAffine:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize flags:(int)flags NS_SWIFT_NAME(warpAffine(src:dst:M:dsize:flags:));

/**
 * Applies an affine transformation to an image.
 *
 * The function warpAffine transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} ( \texttt{M} _{11} x +  \texttt{M} _{12} y +  \texttt{M} _{13}, \texttt{M} _{21} x +  \texttt{M} _{22} y +  \texttt{M} _{23})$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted
 * with #invertAffineTransform and then put in the formula above instead of M. The function cannot
 * operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$2\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * flag #WARP_INVERSE_MAP that means that M is the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image corresponding to
 * the "outliers" in the source image are not modified by the function.
 *
 * @see `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `transform`
 */
+ (void)warpAffine:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize NS_SWIFT_NAME(warpAffine(src:dst:M:dsize:));


//
//  void cv::warpPerspective(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, BorderTypes borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
//
/**
 * Applies a perspective transformation to an image.
 *
 * The function warpPerspective transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} \left ( \frac{M_{11} x + M_{12} y + M_{13}}{M_{31} x + M_{32} y + M_{33}} ,
 *      \frac{M_{21} x + M_{22} y + M_{23}}{M_{31} x + M_{32} y + M_{33}} \right )$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted with invert
 * and then put in the formula above instead of M. The function cannot operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$3\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * @param flags combination of interpolation methods (#INTER_LINEAR or #INTER_NEAREST) and the
 * optional flag #WARP_INVERSE_MAP, that sets M as the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 * @param borderMode pixel extrapolation method (#BORDER_CONSTANT or #BORDER_REPLICATE).
 * @param borderValue value used in case of a constant border; by default, it equals 0.
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `perspectiveTransform`
 */
+ (void)warpPerspective:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize flags:(int)flags borderMode:(BorderTypes)borderMode borderValue:(Scalar*)borderValue NS_SWIFT_NAME(warpPerspective(src:dst:M:dsize:flags:borderMode:borderValue:));

/**
 * Applies a perspective transformation to an image.
 *
 * The function warpPerspective transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} \left ( \frac{M_{11} x + M_{12} y + M_{13}}{M_{31} x + M_{32} y + M_{33}} ,
 *      \frac{M_{21} x + M_{22} y + M_{23}}{M_{31} x + M_{32} y + M_{33}} \right )$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted with invert
 * and then put in the formula above instead of M. The function cannot operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$3\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * @param flags combination of interpolation methods (#INTER_LINEAR or #INTER_NEAREST) and the
 * optional flag #WARP_INVERSE_MAP, that sets M as the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 * @param borderMode pixel extrapolation method (#BORDER_CONSTANT or #BORDER_REPLICATE).
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `perspectiveTransform`
 */
+ (void)warpPerspective:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize flags:(int)flags borderMode:(BorderTypes)borderMode NS_SWIFT_NAME(warpPerspective(src:dst:M:dsize:flags:borderMode:));

/**
 * Applies a perspective transformation to an image.
 *
 * The function warpPerspective transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} \left ( \frac{M_{11} x + M_{12} y + M_{13}}{M_{31} x + M_{32} y + M_{33}} ,
 *      \frac{M_{21} x + M_{22} y + M_{23}}{M_{31} x + M_{32} y + M_{33}} \right )$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted with invert
 * and then put in the formula above instead of M. The function cannot operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$3\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * @param flags combination of interpolation methods (#INTER_LINEAR or #INTER_NEAREST) and the
 * optional flag #WARP_INVERSE_MAP, that sets M as the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `perspectiveTransform`
 */
+ (void)warpPerspective:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize flags:(int)flags NS_SWIFT_NAME(warpPerspective(src:dst:M:dsize:flags:));

/**
 * Applies a perspective transformation to an image.
 *
 * The function warpPerspective transforms the source image using the specified matrix:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} \left ( \frac{M_{11} x + M_{12} y + M_{13}}{M_{31} x + M_{32} y + M_{33}} ,
 *      \frac{M_{21} x + M_{22} y + M_{23}}{M_{31} x + M_{32} y + M_{33}} \right )$$`
 *
 * when the flag #WARP_INVERSE_MAP is set. Otherwise, the transformation is first inverted with invert
 * and then put in the formula above instead of M. The function cannot operate in-place.
 *
 * @param src input image.
 * @param dst output image that has the size dsize and the same type as src .
 * @param M `$$3\times 3$$` transformation matrix.
 * @param dsize size of the output image.
 * optional flag #WARP_INVERSE_MAP, that sets M as the inverse transformation (
 * `$$\texttt{dst}\rightarrow\texttt{src}$$` ).
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+resize:dst:dsize:fx:fy:interpolation:`, `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `+getRectSubPix:patchSize:center:patch:patchType:`, `perspectiveTransform`
 */
+ (void)warpPerspective:(Mat*)src dst:(Mat*)dst M:(Mat*)M dsize:(Size2i*)dsize NS_SWIFT_NAME(warpPerspective(src:dst:M:dsize:));


//
//  void cv::remap(Mat src, Mat& dst, Mat map1, Mat map2, int interpolation, BorderTypes borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
//
/**
 * Applies a generic geometrical transformation to an image.
 *
 * The function remap transforms the source image using the specified map:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} (map_x(x,y),map_y(x,y))$$`
 *
 * where values of pixels with non-integer coordinates are computed using one of available
 * interpolation methods. `$$map_x$$` and `$$map_y$$` can be encoded as separate floating-point maps
 * in `$$map_1$$` and `$$map_2$$` respectively, or interleaved floating-point maps of `$$(x,y)$$` in
 * `$$map_1$$`, or fixed-point maps created by using convertMaps. The reason you might want to
 * convert from floating to fixed-point representations of a map is that they can yield much faster
 * (\~2x) remapping operations. In the converted case, `$$map_1$$` contains pairs (cvFloor(x),
 * cvFloor(y)) and `$$map_2$$` contains indices in a table of interpolation coefficients.
 *
 * This function cannot operate in-place.
 *
 * @param src Source image.
 * @param dst Destination image. It has the same size as map1 and the same type as src .
 * @param map1 The first map of either (x,y) points or just x values having the type CV_16SC2 ,
 * CV_32FC1, or CV_32FC2. See convertMaps for details on converting a floating point
 * representation to fixed-point for speed.
 * @param map2 The second map of y values having the type CV_16UC1, CV_32FC1, or none (empty map
 * if map1 is (x,y) points), respectively.
 * @param interpolation Interpolation method (see #InterpolationFlags). The methods #INTER_AREA
 * and #INTER_LINEAR_EXACT are not supported by this function.
 * @param borderMode Pixel extrapolation method (see #BorderTypes). When
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image that
 * corresponds to the "outliers" in the source image are not modified by the function.
 * @param borderValue Value used in case of a constant border. By default, it is 0.
 * NOTE:
 * Due to current implementation limitations the size of an input and output images should be less than 32767x32767.
 */
+ (void)remap:(Mat*)src dst:(Mat*)dst map1:(Mat*)map1 map2:(Mat*)map2 interpolation:(int)interpolation borderMode:(BorderTypes)borderMode borderValue:(Scalar*)borderValue NS_SWIFT_NAME(remap(src:dst:map1:map2:interpolation:borderMode:borderValue:));

/**
 * Applies a generic geometrical transformation to an image.
 *
 * The function remap transforms the source image using the specified map:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} (map_x(x,y),map_y(x,y))$$`
 *
 * where values of pixels with non-integer coordinates are computed using one of available
 * interpolation methods. `$$map_x$$` and `$$map_y$$` can be encoded as separate floating-point maps
 * in `$$map_1$$` and `$$map_2$$` respectively, or interleaved floating-point maps of `$$(x,y)$$` in
 * `$$map_1$$`, or fixed-point maps created by using convertMaps. The reason you might want to
 * convert from floating to fixed-point representations of a map is that they can yield much faster
 * (\~2x) remapping operations. In the converted case, `$$map_1$$` contains pairs (cvFloor(x),
 * cvFloor(y)) and `$$map_2$$` contains indices in a table of interpolation coefficients.
 *
 * This function cannot operate in-place.
 *
 * @param src Source image.
 * @param dst Destination image. It has the same size as map1 and the same type as src .
 * @param map1 The first map of either (x,y) points or just x values having the type CV_16SC2 ,
 * CV_32FC1, or CV_32FC2. See convertMaps for details on converting a floating point
 * representation to fixed-point for speed.
 * @param map2 The second map of y values having the type CV_16UC1, CV_32FC1, or none (empty map
 * if map1 is (x,y) points), respectively.
 * @param interpolation Interpolation method (see #InterpolationFlags). The methods #INTER_AREA
 * and #INTER_LINEAR_EXACT are not supported by this function.
 * @param borderMode Pixel extrapolation method (see #BorderTypes). When
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image that
 * corresponds to the "outliers" in the source image are not modified by the function.
 * NOTE:
 * Due to current implementation limitations the size of an input and output images should be less than 32767x32767.
 */
+ (void)remap:(Mat*)src dst:(Mat*)dst map1:(Mat*)map1 map2:(Mat*)map2 interpolation:(int)interpolation borderMode:(BorderTypes)borderMode NS_SWIFT_NAME(remap(src:dst:map1:map2:interpolation:borderMode:));

/**
 * Applies a generic geometrical transformation to an image.
 *
 * The function remap transforms the source image using the specified map:
 *
 * `$$\texttt{dst} (x,y) =  \texttt{src} (map_x(x,y),map_y(x,y))$$`
 *
 * where values of pixels with non-integer coordinates are computed using one of available
 * interpolation methods. `$$map_x$$` and `$$map_y$$` can be encoded as separate floating-point maps
 * in `$$map_1$$` and `$$map_2$$` respectively, or interleaved floating-point maps of `$$(x,y)$$` in
 * `$$map_1$$`, or fixed-point maps created by using convertMaps. The reason you might want to
 * convert from floating to fixed-point representations of a map is that they can yield much faster
 * (\~2x) remapping operations. In the converted case, `$$map_1$$` contains pairs (cvFloor(x),
 * cvFloor(y)) and `$$map_2$$` contains indices in a table of interpolation coefficients.
 *
 * This function cannot operate in-place.
 *
 * @param src Source image.
 * @param dst Destination image. It has the same size as map1 and the same type as src .
 * @param map1 The first map of either (x,y) points or just x values having the type CV_16SC2 ,
 * CV_32FC1, or CV_32FC2. See convertMaps for details on converting a floating point
 * representation to fixed-point for speed.
 * @param map2 The second map of y values having the type CV_16UC1, CV_32FC1, or none (empty map
 * if map1 is (x,y) points), respectively.
 * @param interpolation Interpolation method (see #InterpolationFlags). The methods #INTER_AREA
 * and #INTER_LINEAR_EXACT are not supported by this function.
 * borderMode=#BORDER_TRANSPARENT, it means that the pixels in the destination image that
 * corresponds to the "outliers" in the source image are not modified by the function.
 * NOTE:
 * Due to current implementation limitations the size of an input and output images should be less than 32767x32767.
 */
+ (void)remap:(Mat*)src dst:(Mat*)dst map1:(Mat*)map1 map2:(Mat*)map2 interpolation:(int)interpolation NS_SWIFT_NAME(remap(src:dst:map1:map2:interpolation:));


//
//  void cv::convertMaps(Mat map1, Mat map2, Mat& dstmap1, Mat& dstmap2, int dstmap1type, bool nninterpolation = false)
//
/**
 * Converts image transformation maps from one representation to another.
 *
 * The function converts a pair of maps for remap from one representation to another. The following
 * options ( (map1.type(), map2.type()) `$$\rightarrow$$` (dstmap1.type(), dstmap2.type()) ) are
 * supported:
 *
 * - `$$\texttt{(CV\_32FC1, CV\_32FC1)} \rightarrow \texttt{(CV\_16SC2, CV\_16UC1)}$$`. This is the
 * most frequently used conversion operation, in which the original floating-point maps (see remap )
 * are converted to a more compact and much faster fixed-point representation. The first output array
 * contains the rounded coordinates and the second array (created only when nninterpolation=false )
 * contains indices in the interpolation tables.
 *
 * - `$$\texttt{(CV\_32FC2)} \rightarrow \texttt{(CV\_16SC2, CV\_16UC1)}$$`. The same as above but
 * the original maps are stored in one 2-channel matrix.
 *
 * - Reverse conversion. Obviously, the reconstructed floating-point maps will not be exactly the same
 * as the originals.
 *
 * @param map1 The first input map of type CV_16SC2, CV_32FC1, or CV_32FC2 .
 * @param map2 The second input map of type CV_16UC1, CV_32FC1, or none (empty matrix),
 * respectively.
 * @param dstmap1 The first output map that has the type dstmap1type and the same size as src .
 * @param dstmap2 The second output map.
 * @param dstmap1type Type of the first output map that should be CV_16SC2, CV_32FC1, or
 * CV_32FC2 .
 * @param nninterpolation Flag indicating whether the fixed-point maps are used for the
 * nearest-neighbor or for a more complex interpolation.
 *
 * @see `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `undistort`, `initUndistortRectifyMap`
 */
+ (void)convertMaps:(Mat*)map1 map2:(Mat*)map2 dstmap1:(Mat*)dstmap1 dstmap2:(Mat*)dstmap2 dstmap1type:(int)dstmap1type nninterpolation:(BOOL)nninterpolation NS_SWIFT_NAME(convertMaps(map1:map2:dstmap1:dstmap2:dstmap1type:nninterpolation:));

/**
 * Converts image transformation maps from one representation to another.
 *
 * The function converts a pair of maps for remap from one representation to another. The following
 * options ( (map1.type(), map2.type()) `$$\rightarrow$$` (dstmap1.type(), dstmap2.type()) ) are
 * supported:
 *
 * - `$$\texttt{(CV\_32FC1, CV\_32FC1)} \rightarrow \texttt{(CV\_16SC2, CV\_16UC1)}$$`. This is the
 * most frequently used conversion operation, in which the original floating-point maps (see remap )
 * are converted to a more compact and much faster fixed-point representation. The first output array
 * contains the rounded coordinates and the second array (created only when nninterpolation=false )
 * contains indices in the interpolation tables.
 *
 * - `$$\texttt{(CV\_32FC2)} \rightarrow \texttt{(CV\_16SC2, CV\_16UC1)}$$`. The same as above but
 * the original maps are stored in one 2-channel matrix.
 *
 * - Reverse conversion. Obviously, the reconstructed floating-point maps will not be exactly the same
 * as the originals.
 *
 * @param map1 The first input map of type CV_16SC2, CV_32FC1, or CV_32FC2 .
 * @param map2 The second input map of type CV_16UC1, CV_32FC1, or none (empty matrix),
 * respectively.
 * @param dstmap1 The first output map that has the type dstmap1type and the same size as src .
 * @param dstmap2 The second output map.
 * @param dstmap1type Type of the first output map that should be CV_16SC2, CV_32FC1, or
 * CV_32FC2 .
 * nearest-neighbor or for a more complex interpolation.
 *
 * @see `+remap:dst:map1:map2:interpolation:borderMode:borderValue:`, `undistort`, `initUndistortRectifyMap`
 */
+ (void)convertMaps:(Mat*)map1 map2:(Mat*)map2 dstmap1:(Mat*)dstmap1 dstmap2:(Mat*)dstmap2 dstmap1type:(int)dstmap1type NS_SWIFT_NAME(convertMaps(map1:map2:dstmap1:dstmap2:dstmap1type:));


//
//  Mat cv::getRotationMatrix2D(Point2f center, double angle, double scale)
//
/**
 * Calculates an affine matrix of 2D rotation.
 *
 * The function calculates the following matrix:
 *
 * `$$\begin{bmatrix} \alpha &  \beta & (1- \alpha )  \cdot \texttt{center.x} -  \beta \cdot \texttt{center.y} \\ - \beta &  \alpha &  \beta \cdot \texttt{center.x} + (1- \alpha )  \cdot \texttt{center.y} \end{bmatrix}$$`
 *
 * where
 *
 * `$$\begin{array}{l} \alpha =  \texttt{scale} \cdot \cos \texttt{angle} , \\ \beta =  \texttt{scale} \cdot \sin \texttt{angle} \end{array}$$`
 *
 * The transformation maps the rotation center to itself. If this is not the target, adjust the shift.
 *
 * @param center Center of the rotation in the source image.
 * @param angle Rotation angle in degrees. Positive values mean counter-clockwise rotation (the
 * coordinate origin is assumed to be the top-left corner).
 * @param scale Isotropic scale factor.
 *
 * @see `+getAffineTransform:dst:`, `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `transform`
 */
+ (Mat*)getRotationMatrix2D:(Point2f*)center angle:(double)angle scale:(double)scale NS_SWIFT_NAME(getRotationMatrix2D(center:angle:scale:));


//
//  void cv::invertAffineTransform(Mat M, Mat& iM)
//
/**
 * Inverts an affine transformation.
 *
 * The function computes an inverse affine transformation represented by `$$2 \times 3$$` matrix M:
 *
 * `$$\begin{bmatrix} a_{11} & a_{12} & b_1  \\ a_{21} & a_{22} & b_2 \end{bmatrix}$$`
 *
 * The result is also a `$$2 \times 3$$` matrix of the same type as M.
 *
 * @param M Original affine transformation.
 * @param iM Output reverse affine transformation.
 */
+ (void)invertAffineTransform:(Mat*)M iM:(Mat*)iM NS_SWIFT_NAME(invertAffineTransform(M:iM:));


//
//  Mat cv::getPerspectiveTransform(Mat src, Mat dst, int solveMethod = DECOMP_LU)
//
/**
 * Calculates a perspective transform from four pairs of the corresponding points.
 *
 * The function calculates the `$$3 \times 3$$` matrix of a perspective transform so that:
 *
 * `$$\begin{bmatrix} t_i x'_i \\ t_i y'_i \\ t_i \end{bmatrix} = \texttt{map\_matrix} \cdot \begin{bmatrix} x_i \\ y_i \\ 1 \end{bmatrix}$$`
 *
 * where
 *
 * `$$dst(i)=(x'_i,y'_i), src(i)=(x_i, y_i), i=0,1,2,3$$`
 *
 * @param src Coordinates of quadrangle vertices in the source image.
 * @param dst Coordinates of the corresponding quadrangle vertices in the destination image.
 * @param solveMethod method passed to cv::solve (#DecompTypes)
 *
 * @see `findHomography`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `perspectiveTransform`
 */
+ (Mat*)getPerspectiveTransform:(Mat*)src dst:(Mat*)dst solveMethod:(int)solveMethod NS_SWIFT_NAME(getPerspectiveTransform(src:dst:solveMethod:));

/**
 * Calculates a perspective transform from four pairs of the corresponding points.
 *
 * The function calculates the `$$3 \times 3$$` matrix of a perspective transform so that:
 *
 * `$$\begin{bmatrix} t_i x'_i \\ t_i y'_i \\ t_i \end{bmatrix} = \texttt{map\_matrix} \cdot \begin{bmatrix} x_i \\ y_i \\ 1 \end{bmatrix}$$`
 *
 * where
 *
 * `$$dst(i)=(x'_i,y'_i), src(i)=(x_i, y_i), i=0,1,2,3$$`
 *
 * @param src Coordinates of quadrangle vertices in the source image.
 * @param dst Coordinates of the corresponding quadrangle vertices in the destination image.
 *
 * @see `findHomography`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`, `perspectiveTransform`
 */
+ (Mat*)getPerspectiveTransform:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(getPerspectiveTransform(src:dst:));


//
//  Mat cv::getAffineTransform(vector_Point2f src, vector_Point2f dst)
//
+ (Mat*)getAffineTransform:(NSArray<Point2f*>*)src dst:(NSArray<Point2f*>*)dst NS_SWIFT_NAME(getAffineTransform(src:dst:));


//
//  void cv::getRectSubPix(Mat image, Size patchSize, Point2f center, Mat& patch, int patchType = -1)
//
/**
 * Retrieves a pixel rectangle from an image with sub-pixel accuracy.
 *
 * The function getRectSubPix extracts pixels from src:
 *
 * `$$patch(x, y) = src(x +  \texttt{center.x} - ( \texttt{dst.cols} -1)*0.5, y +  \texttt{center.y} - ( \texttt{dst.rows} -1)*0.5)$$`
 *
 * where the values of the pixels at non-integer coordinates are retrieved using bilinear
 * interpolation. Every channel of multi-channel images is processed independently. Also
 * the image should be a single channel or three channel image. While the center of the
 * rectangle must be inside the image, parts of the rectangle may be outside.
 *
 * @param image Source image.
 * @param patchSize Size of the extracted patch.
 * @param center Floating point coordinates of the center of the extracted rectangle within the
 * source image. The center must be inside the image.
 * @param patch Extracted patch that has the size patchSize and the same number of channels as src .
 * @param patchType Depth of the extracted pixels. By default, they have the same depth as src .
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`
 */
+ (void)getRectSubPix:(Mat*)image patchSize:(Size2i*)patchSize center:(Point2f*)center patch:(Mat*)patch patchType:(int)patchType NS_SWIFT_NAME(getRectSubPix(image:patchSize:center:patch:patchType:));

/**
 * Retrieves a pixel rectangle from an image with sub-pixel accuracy.
 *
 * The function getRectSubPix extracts pixels from src:
 *
 * `$$patch(x, y) = src(x +  \texttt{center.x} - ( \texttt{dst.cols} -1)*0.5, y +  \texttt{center.y} - ( \texttt{dst.rows} -1)*0.5)$$`
 *
 * where the values of the pixels at non-integer coordinates are retrieved using bilinear
 * interpolation. Every channel of multi-channel images is processed independently. Also
 * the image should be a single channel or three channel image. While the center of the
 * rectangle must be inside the image, parts of the rectangle may be outside.
 *
 * @param image Source image.
 * @param patchSize Size of the extracted patch.
 * @param center Floating point coordinates of the center of the extracted rectangle within the
 * source image. The center must be inside the image.
 * @param patch Extracted patch that has the size patchSize and the same number of channels as src .
 *
 * @see `+warpAffine:dst:M:dsize:flags:borderMode:borderValue:`, `+warpPerspective:dst:M:dsize:flags:borderMode:borderValue:`
 */
+ (void)getRectSubPix:(Mat*)image patchSize:(Size2i*)patchSize center:(Point2f*)center patch:(Mat*)patch NS_SWIFT_NAME(getRectSubPix(image:patchSize:center:patch:));


//
//  void cv::logPolar(Mat src, Mat& dst, Point2f center, double M, int flags)
//
/**
 * Remaps an image to semilog-polar coordinates space.
 *
 * @deprecated This function produces same result as cv::warpPolar(src, dst, src.size(), center, maxRadius, flags+WARP_POLAR_LOG);
 *
 *
 * Transform the source image using the following transformation (See REF: polar_remaps_reference_image "Polar remaps reference image d)"):
 * `$$\begin{array}{l}
 *   dst( \rho , \phi ) = src(x,y) \\
 *   dst.size() \leftarrow src.size()
 * \end{array}$$`
 *
 * where
 * `$$\begin{array}{l}
 *   I = (dx,dy) = (x - center.x,y - center.y) \\
 *   \rho = M \cdot log_e(\texttt{magnitude} (I)) ,\\
 *   \phi = Kangle \cdot \texttt{angle} (I) \\
 * \end{array}$$`
 *
 * and
 * `$$\begin{array}{l}
 *   M = src.cols / log_e(maxRadius) \\
 *   Kangle = src.rows / 2\Pi \\
 * \end{array}$$`
 *
 * The function emulates the human "foveal" vision and can be used for fast scale and
 * rotation-invariant template matching, for object tracking and so forth.
 * @param src Source image
 * @param dst Destination image. It will have same size and type as src.
 * @param center The transformation center; where the output precision is maximal
 * @param M Magnitude scale parameter. It determines the radius of the bounding circle to transform too.
 * @param flags A combination of interpolation methods, see #InterpolationFlags
 *
 * NOTE:
 * -   The function can not operate in-place.
 * -   To calculate magnitude and angle in degrees #cartToPolar is used internally thus angles are measured from 0 to 360 with accuracy about 0.3 degrees.
 *
 * @see `cv::linearPolar`
 */
+ (void)logPolar:(Mat*)src dst:(Mat*)dst center:(Point2f*)center M:(double)M flags:(int)flags NS_SWIFT_NAME(logPolar(src:dst:center:M:flags:)) DEPRECATED_ATTRIBUTE;


//
//  void cv::linearPolar(Mat src, Mat& dst, Point2f center, double maxRadius, int flags)
//
/**
 * Remaps an image to polar coordinates space.
 *
 * @deprecated This function produces same result as cv::warpPolar(src, dst, src.size(), center, maxRadius, flags)
 *
 *
 * Transform the source image using the following transformation (See REF: polar_remaps_reference_image "Polar remaps reference image c)"):
 * `$$\begin{array}{l}
 *   dst( \rho , \phi ) = src(x,y) \\
 *   dst.size() \leftarrow src.size()
 * \end{array}$$`
 *
 * where
 * `$$\begin{array}{l}
 *   I = (dx,dy) = (x - center.x,y - center.y) \\
 *   \rho = Kmag \cdot \texttt{magnitude} (I) ,\\
 *   \phi = angle \cdot \texttt{angle} (I)
 * \end{array}$$`
 *
 * and
 * `$$\begin{array}{l}
 *   Kx = src.cols / maxRadius \\
 *   Ky = src.rows / 2\Pi
 * \end{array}$$`
 *
 *
 * @param src Source image
 * @param dst Destination image. It will have same size and type as src.
 * @param center The transformation center;
 * @param maxRadius The radius of the bounding circle to transform. It determines the inverse magnitude scale parameter too.
 * @param flags A combination of interpolation methods, see #InterpolationFlags
 *
 * NOTE:
 * -   The function can not operate in-place.
 * -   To calculate magnitude and angle in degrees #cartToPolar is used internally thus angles are measured from 0 to 360 with accuracy about 0.3 degrees.
 *
 * @see `cv::logPolar`
 */
+ (void)linearPolar:(Mat*)src dst:(Mat*)dst center:(Point2f*)center maxRadius:(double)maxRadius flags:(int)flags NS_SWIFT_NAME(linearPolar(src:dst:center:maxRadius:flags:)) DEPRECATED_ATTRIBUTE;


//
//  void cv::warpPolar(Mat src, Mat& dst, Size dsize, Point2f center, double maxRadius, int flags)
//
/**
 * Remaps an image to polar or semilog-polar coordinates space
 *
 *  polar_remaps_reference_image
 * ![Polar remaps reference](pics/polar_remap_doc.png)
 *
 * Transform the source image using the following transformation:
 * `$$
 * dst(\rho , \phi ) = src(x,y)
 * $$`
 *
 * where
 * `$$
 * \begin{array}{l}
 * \vec{I} = (x - center.x, \;y - center.y) \\
 * \phi = Kangle \cdot \texttt{angle} (\vec{I}) \\
 * \rho = \left\{\begin{matrix}
 * Klin \cdot \texttt{magnitude} (\vec{I}) & default \\
 * Klog \cdot log_e(\texttt{magnitude} (\vec{I})) & if \; semilog \\
 * \end{matrix}\right.
 * \end{array}
 * $$`
 *
 * and
 * `$$
 * \begin{array}{l}
 * Kangle = dsize.height / 2\Pi \\
 * Klin = dsize.width / maxRadius \\
 * Klog = dsize.width / log_e(maxRadius) \\
 * \end{array}
 * $$`
 *
 *
 * \par Linear vs semilog mapping
 *
 * Polar mapping can be linear or semi-log. Add one of #WarpPolarMode to `flags` to specify the polar mapping mode.
 *
 * Linear is the default mode.
 *
 * The semilog mapping emulates the human "foveal" vision that permit very high acuity on the line of sight (central vision)
 * in contrast to peripheral vision where acuity is minor.
 *
 * \par Option on `dsize`:
 *
 * - if both values in `dsize <=0 ` (default),
 * the destination image will have (almost) same area of source bounding circle:
 * `$$\begin{array}{l}
 * dsize.area  \leftarrow (maxRadius^2 \cdot \Pi) \\
 * dsize.width = \texttt{cvRound}(maxRadius) \\
 * dsize.height = \texttt{cvRound}(maxRadius \cdot \Pi) \\
 * \end{array}$$`
 *
 *
 * - if only `dsize.height <= 0`,
 * the destination image area will be proportional to the bounding circle area but scaled by `Kx * Kx`:
 * `$$\begin{array}{l}
 * dsize.height = \texttt{cvRound}(dsize.width \cdot \Pi) \\
 * \end{array}
 * $$`
 *
 * - if both values in `dsize > 0 `,
 * the destination image will have the given size therefore the area of the bounding circle will be scaled to `dsize`.
 *
 *
 * \par Reverse mapping
 *
 * You can get reverse mapping adding #WARP_INVERSE_MAP to `flags`
 * \snippet polar_transforms.cpp InverseMap
 *
 * In addiction, to calculate the original coordinate from a polar mapped coordinate `$$(rho, phi)->(x, y)$$`:
 * \snippet polar_transforms.cpp InverseCoordinate
 *
 * @param src Source image.
 * @param dst Destination image. It will have same type as src.
 * @param dsize The destination image size (see description for valid options).
 * @param center The transformation center.
 * @param maxRadius The radius of the bounding circle to transform. It determines the inverse magnitude scale parameter too.
 * @param flags A combination of interpolation methods, #InterpolationFlags + #WarpPolarMode.
 *             - Add #WARP_POLAR_LINEAR to select linear polar mapping (default)
 *             - Add #WARP_POLAR_LOG to select semilog polar mapping
 *             - Add #WARP_INVERSE_MAP for reverse mapping.
 * NOTE:
 * -  The function can not operate in-place.
 * -  To calculate magnitude and angle in degrees #cartToPolar is used internally thus angles are measured from 0 to 360 with accuracy about 0.3 degrees.
 * -  This function uses #remap. Due to current implementation limitations the size of an input and output images should be less than 32767x32767.
 *
 * @see `cv::remap`
 */
+ (void)warpPolar:(Mat*)src dst:(Mat*)dst dsize:(Size2i*)dsize center:(Point2f*)center maxRadius:(double)maxRadius flags:(int)flags NS_SWIFT_NAME(warpPolar(src:dst:dsize:center:maxRadius:flags:));


//
//  void cv::integral(Mat src, Mat& sum, int sdepth = -1)
//
+ (void)integral:(Mat*)src sum:(Mat*)sum sdepth:(int)sdepth NS_SWIFT_NAME(integral(src:sum:sdepth:));

+ (void)integral:(Mat*)src sum:(Mat*)sum NS_SWIFT_NAME(integral(src:sum:));


//
//  void cv::integral(Mat src, Mat& sum, Mat& sqsum, int sdepth = -1, int sqdepth = -1)
//
+ (void)integral2:(Mat*)src sum:(Mat*)sum sqsum:(Mat*)sqsum sdepth:(int)sdepth sqdepth:(int)sqdepth NS_SWIFT_NAME(integral(src:sum:sqsum:sdepth:sqdepth:));

+ (void)integral2:(Mat*)src sum:(Mat*)sum sqsum:(Mat*)sqsum sdepth:(int)sdepth NS_SWIFT_NAME(integral(src:sum:sqsum:sdepth:));

+ (void)integral2:(Mat*)src sum:(Mat*)sum sqsum:(Mat*)sqsum NS_SWIFT_NAME(integral(src:sum:sqsum:));


//
//  void cv::integral(Mat src, Mat& sum, Mat& sqsum, Mat& tilted, int sdepth = -1, int sqdepth = -1)
//
/**
 * Calculates the integral of an image.
 *
 * The function calculates one or more integral images for the source image as follows:
 *
 * `$$\texttt{sum} (X,Y) =  \sum _{x<X,y<Y}  \texttt{image} (x,y)$$`
 *
 * `$$\texttt{sqsum} (X,Y) =  \sum _{x<X,y<Y}  \texttt{image} (x,y)^2$$`
 *
 * `$$\texttt{tilted} (X,Y) =  \sum _{y<Y,abs(x-X+1) \leq Y-y-1}  \texttt{image} (x,y)$$`
 *
 * Using these integral images, you can calculate sum, mean, and standard deviation over a specific
 * up-right or rotated rectangular region of the image in a constant time, for example:
 *
 * `$$\sum _{x_1 \leq x < x_2,  \, y_1  \leq y < y_2}  \texttt{image} (x,y) =  \texttt{sum} (x_2,y_2)- \texttt{sum} (x_1,y_2)- \texttt{sum} (x_2,y_1)+ \texttt{sum} (x_1,y_1)$$`
 *
 * It makes possible to do a fast blurring or fast block correlation with a variable window size, for
 * example. In case of multi-channel images, sums for each channel are accumulated independently.
 *
 * As a practical example, the next figure shows the calculation of the integral of a straight
 * rectangle Rect(3,3,3,2) and of a tilted rectangle Rect(5,1,2,3) . The selected pixels in the
 * original image are shown, as well as the relative pixels in the integral images sum and tilted .
 *
 * ![integral calculation example](pics/integral.png)
 *
 * @param src input image as `$$W \times H$$`, 8-bit or floating-point (32f or 64f).
 * @param sum integral image as `$$(W+1)\times (H+1)$$` , 32-bit integer or floating-point (32f or 64f).
 * @param sqsum integral image for squared pixel values; it is `$$(W+1)\times (H+1)$$`, double-precision
 * floating-point (64f) array.
 * @param tilted integral for the image rotated by 45 degrees; it is `$$(W+1)\times (H+1)$$` array with
 * the same data type as sum.
 * @param sdepth desired depth of the integral and the tilted integral images, CV_32S, CV_32F, or
 * CV_64F.
 * @param sqdepth desired depth of the integral image of squared pixel values, CV_32F or CV_64F.
 */
+ (void)integral3:(Mat*)src sum:(Mat*)sum sqsum:(Mat*)sqsum tilted:(Mat*)tilted sdepth:(int)sdepth sqdepth:(int)sqdepth NS_SWIFT_NAME(integral(src:sum:sqsum:tilted:sdepth:sqdepth:));

/**
 * Calculates the integral of an image.
 *
 * The function calculates one or more integral images for the source image as follows:
 *
 * `$$\texttt{sum} (X,Y) =  \sum _{x<X,y<Y}  \texttt{image} (x,y)$$`
 *
 * `$$\texttt{sqsum} (X,Y) =  \sum _{x<X,y<Y}  \texttt{image} (x,y)^2$$`
 *
 * `$$\texttt{tilted} (X,Y) =  \sum _{y<Y,abs(x-X+1) \leq Y-y-1}  \texttt{image} (x,y)$$`
 *
 * Using these integral images, you can calculate sum, mean, and standard deviation over a specific
 * up-right or rotated rectangular region of the image in a constant time, for example:
 *
 * `$$\sum _{x_1 \leq x < x_2,  \, y_1  \leq y < y_2}  \texttt{image} (x,y) =  \texttt{sum} (x_2,y_2)- \texttt{sum} (x_1,y_2)- \texttt{sum} (x_2,y_1)+ \texttt{sum} (x_1,y_1)$$`
 *
 * It makes possible to do a fast blurring or fast block correlation with a variable window size, for
 * example. In case of multi-channel images, sums for each channel are accumulated independently.
 *
 * As a practical example, the next figure shows the calculation of the integral of a straight
 * rectangle Rect(3,3,3,2) and of a tilted rectangle Rect(5,1,2,3) . The selected pixels in the
 * original image are shown, as well as the relative pixels in the integral images sum and tilted .
 *
 * ![integral calculation example](pics/integral.png)
 *
 * @param src input image as `$$W \times H$$`, 8-bit or floating-point (32f or 64f).
 * @param sum integral image as `$$(W+1)\times (H+1)$$` , 32-bit integer or floating-point (32f or 64f).
 * @param sqsum integral image for squared pixel values; it is `$$(W+1)\times (H+1)$$`, double-precision
 * floating-point (64f) array.
 * @param tilted integral for the image rotated by 45 degrees; it is `$$(W+1)\times (H+1)$$` array with
 * the same data type as sum.
 * @param sdepth desired depth of the integral and the tilted integral images, CV_32S, CV_32F, or
 * CV_64F.
 */
+ (void)integral3:(Mat*)src sum:(Mat*)sum sqsum:(Mat*)sqsum tilted:(Mat*)tilted sdepth:(int)sdepth NS_SWIFT_NAME(integral(src:sum:sqsum:tilted:sdepth:));

/**
 * Calculates the integral of an image.
 *
 * The function calculates one or more integral images for the source image as follows:
 *
 * `$$\texttt{sum} (X,Y) =  \sum _{x<X,y<Y}  \texttt{image} (x,y)$$`
 *
 * `$$\texttt{sqsum} (X,Y) =  \sum _{x<X,y<Y}  \texttt{image} (x,y)^2$$`
 *
 * `$$\texttt{tilted} (X,Y) =  \sum _{y<Y,abs(x-X+1) \leq Y-y-1}  \texttt{image} (x,y)$$`
 *
 * Using these integral images, you can calculate sum, mean, and standard deviation over a specific
 * up-right or rotated rectangular region of the image in a constant time, for example:
 *
 * `$$\sum _{x_1 \leq x < x_2,  \, y_1  \leq y < y_2}  \texttt{image} (x,y) =  \texttt{sum} (x_2,y_2)- \texttt{sum} (x_1,y_2)- \texttt{sum} (x_2,y_1)+ \texttt{sum} (x_1,y_1)$$`
 *
 * It makes possible to do a fast blurring or fast block correlation with a variable window size, for
 * example. In case of multi-channel images, sums for each channel are accumulated independently.
 *
 * As a practical example, the next figure shows the calculation of the integral of a straight
 * rectangle Rect(3,3,3,2) and of a tilted rectangle Rect(5,1,2,3) . The selected pixels in the
 * original image are shown, as well as the relative pixels in the integral images sum and tilted .
 *
 * ![integral calculation example](pics/integral.png)
 *
 * @param src input image as `$$W \times H$$`, 8-bit or floating-point (32f or 64f).
 * @param sum integral image as `$$(W+1)\times (H+1)$$` , 32-bit integer or floating-point (32f or 64f).
 * @param sqsum integral image for squared pixel values; it is `$$(W+1)\times (H+1)$$`, double-precision
 * floating-point (64f) array.
 * @param tilted integral for the image rotated by 45 degrees; it is `$$(W+1)\times (H+1)$$` array with
 * the same data type as sum.
 * CV_64F.
 */
+ (void)integral3:(Mat*)src sum:(Mat*)sum sqsum:(Mat*)sqsum tilted:(Mat*)tilted NS_SWIFT_NAME(integral(src:sum:sqsum:tilted:));


//
//  void cv::accumulate(Mat src, Mat& dst, Mat mask = Mat())
//
/**
 * Adds an image to the accumulator image.
 *
 * The function adds src or some of its elements to dst :
 *
 * `$$\texttt{dst} (x,y)  \leftarrow \texttt{dst} (x,y) +  \texttt{src} (x,y)  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * The function cv::accumulate can be used, for example, to collect statistics of a scene background
 * viewed by a still camera and for the further foreground-background segmentation.
 *
 * @param src Input image of type CV_8UC(n), CV_16UC(n), CV_32FC(n) or CV_64FC(n), where n is a positive integer.
 * @param dst %Accumulator image with the same number of channels as input image, and a depth of CV_32F or CV_64F.
 * @param mask Optional operation mask.
 *
 * @see `+accumulateSquare:dst:mask:`, `+accumulateProduct:src2:dst:mask:`, `+accumulateWeighted:dst:alpha:mask:`
 */
+ (void)accumulate:(Mat*)src dst:(Mat*)dst mask:(Mat*)mask NS_SWIFT_NAME(accumulate(src:dst:mask:));

/**
 * Adds an image to the accumulator image.
 *
 * The function adds src or some of its elements to dst :
 *
 * `$$\texttt{dst} (x,y)  \leftarrow \texttt{dst} (x,y) +  \texttt{src} (x,y)  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * The function cv::accumulate can be used, for example, to collect statistics of a scene background
 * viewed by a still camera and for the further foreground-background segmentation.
 *
 * @param src Input image of type CV_8UC(n), CV_16UC(n), CV_32FC(n) or CV_64FC(n), where n is a positive integer.
 * @param dst %Accumulator image with the same number of channels as input image, and a depth of CV_32F or CV_64F.
 *
 * @see `+accumulateSquare:dst:mask:`, `+accumulateProduct:src2:dst:mask:`, `+accumulateWeighted:dst:alpha:mask:`
 */
+ (void)accumulate:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(accumulate(src:dst:));


//
//  void cv::accumulateSquare(Mat src, Mat& dst, Mat mask = Mat())
//
/**
 * Adds the square of a source image to the accumulator image.
 *
 * The function adds the input image src or its selected region, raised to a power of 2, to the
 * accumulator dst :
 *
 * `$$\texttt{dst} (x,y)  \leftarrow \texttt{dst} (x,y) +  \texttt{src} (x,y)^2  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * @param src Input image as 1- or 3-channel, 8-bit or 32-bit floating point.
 * @param dst %Accumulator image with the same number of channels as input image, 32-bit or 64-bit
 * floating-point.
 * @param mask Optional operation mask.
 *
 * @see `+accumulateSquare:dst:mask:`, `+accumulateProduct:src2:dst:mask:`, `+accumulateWeighted:dst:alpha:mask:`
 */
+ (void)accumulateSquare:(Mat*)src dst:(Mat*)dst mask:(Mat*)mask NS_SWIFT_NAME(accumulateSquare(src:dst:mask:));

/**
 * Adds the square of a source image to the accumulator image.
 *
 * The function adds the input image src or its selected region, raised to a power of 2, to the
 * accumulator dst :
 *
 * `$$\texttt{dst} (x,y)  \leftarrow \texttt{dst} (x,y) +  \texttt{src} (x,y)^2  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * @param src Input image as 1- or 3-channel, 8-bit or 32-bit floating point.
 * @param dst %Accumulator image with the same number of channels as input image, 32-bit or 64-bit
 * floating-point.
 *
 * @see `+accumulateSquare:dst:mask:`, `+accumulateProduct:src2:dst:mask:`, `+accumulateWeighted:dst:alpha:mask:`
 */
+ (void)accumulateSquare:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(accumulateSquare(src:dst:));


//
//  void cv::accumulateProduct(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
//
/**
 * Adds the per-element product of two input images to the accumulator image.
 *
 * The function adds the product of two images or their selected regions to the accumulator dst :
 *
 * `$$\texttt{dst} (x,y)  \leftarrow \texttt{dst} (x,y) +  \texttt{src1} (x,y)  \cdot \texttt{src2} (x,y)  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * @param src1 First input image, 1- or 3-channel, 8-bit or 32-bit floating point.
 * @param src2 Second input image of the same type and the same size as src1 .
 * @param dst %Accumulator image with the same number of channels as input images, 32-bit or 64-bit
 * floating-point.
 * @param mask Optional operation mask.
 *
 * @see `+accumulate:dst:mask:`, `+accumulateSquare:dst:mask:`, `+accumulateWeighted:dst:alpha:mask:`
 */
+ (void)accumulateProduct:(Mat*)src1 src2:(Mat*)src2 dst:(Mat*)dst mask:(Mat*)mask NS_SWIFT_NAME(accumulateProduct(src1:src2:dst:mask:));

/**
 * Adds the per-element product of two input images to the accumulator image.
 *
 * The function adds the product of two images or their selected regions to the accumulator dst :
 *
 * `$$\texttt{dst} (x,y)  \leftarrow \texttt{dst} (x,y) +  \texttt{src1} (x,y)  \cdot \texttt{src2} (x,y)  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * @param src1 First input image, 1- or 3-channel, 8-bit or 32-bit floating point.
 * @param src2 Second input image of the same type and the same size as src1 .
 * @param dst %Accumulator image with the same number of channels as input images, 32-bit or 64-bit
 * floating-point.
 *
 * @see `+accumulate:dst:mask:`, `+accumulateSquare:dst:mask:`, `+accumulateWeighted:dst:alpha:mask:`
 */
+ (void)accumulateProduct:(Mat*)src1 src2:(Mat*)src2 dst:(Mat*)dst NS_SWIFT_NAME(accumulateProduct(src1:src2:dst:));


//
//  void cv::accumulateWeighted(Mat src, Mat& dst, double alpha, Mat mask = Mat())
//
/**
 * Updates a running average.
 *
 * The function calculates the weighted sum of the input image src and the accumulator dst so that dst
 * becomes a running average of a frame sequence:
 *
 * `$$\texttt{dst} (x,y)  \leftarrow (1- \texttt{alpha} )  \cdot \texttt{dst} (x,y) +  \texttt{alpha} \cdot \texttt{src} (x,y)  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * That is, alpha regulates the update speed (how fast the accumulator "forgets" about earlier images).
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * @param src Input image as 1- or 3-channel, 8-bit or 32-bit floating point.
 * @param dst %Accumulator image with the same number of channels as input image, 32-bit or 64-bit
 * floating-point.
 * @param alpha Weight of the input image.
 * @param mask Optional operation mask.
 *
 * @see `+accumulate:dst:mask:`, `+accumulateSquare:dst:mask:`, `+accumulateProduct:src2:dst:mask:`
 */
+ (void)accumulateWeighted:(Mat*)src dst:(Mat*)dst alpha:(double)alpha mask:(Mat*)mask NS_SWIFT_NAME(accumulateWeighted(src:dst:alpha:mask:));

/**
 * Updates a running average.
 *
 * The function calculates the weighted sum of the input image src and the accumulator dst so that dst
 * becomes a running average of a frame sequence:
 *
 * `$$\texttt{dst} (x,y)  \leftarrow (1- \texttt{alpha} )  \cdot \texttt{dst} (x,y) +  \texttt{alpha} \cdot \texttt{src} (x,y)  \quad \text{if} \quad \texttt{mask} (x,y)  \ne 0$$`
 *
 * That is, alpha regulates the update speed (how fast the accumulator "forgets" about earlier images).
 * The function supports multi-channel images. Each channel is processed independently.
 *
 * @param src Input image as 1- or 3-channel, 8-bit or 32-bit floating point.
 * @param dst %Accumulator image with the same number of channels as input image, 32-bit or 64-bit
 * floating-point.
 * @param alpha Weight of the input image.
 *
 * @see `+accumulate:dst:mask:`, `+accumulateSquare:dst:mask:`, `+accumulateProduct:src2:dst:mask:`
 */
+ (void)accumulateWeighted:(Mat*)src dst:(Mat*)dst alpha:(double)alpha NS_SWIFT_NAME(accumulateWeighted(src:dst:alpha:));


//
//  Point2d cv::phaseCorrelate(Mat src1, Mat src2, Mat window = Mat(), double* response = 0)
//
/**
 * The function is used to detect translational shifts that occur between two images.
 *
 * The operation takes advantage of the Fourier shift theorem for detecting the translational shift in
 * the frequency domain. It can be used for fast image registration as well as motion estimation. For
 * more information please see <http://en.wikipedia.org/wiki/Phase_correlation>
 *
 * Calculates the cross-power spectrum of two supplied source arrays. The arrays are padded if needed
 * with getOptimalDFTSize.
 *
 * The function performs the following equations:
 * - First it applies a Hanning window (see <http://en.wikipedia.org/wiki/Hann_function>) to each
 * image to remove possible edge effects. This window is cached until the array size changes to speed
 * up processing time.
 * - Next it computes the forward DFTs of each source array:
 * `$$\mathbf{G}_a = \mathcal{F}\{src_1\}, \; \mathbf{G}_b = \mathcal{F}\{src_2\}$$`
 * where `$$\mathcal{F}$$` is the forward DFT.
 * - It then computes the cross-power spectrum of each frequency domain array:
 * `$$R = \frac{ \mathbf{G}_a \mathbf{G}_b^*}{|\mathbf{G}_a \mathbf{G}_b^*|}$$`
 * - Next the cross-correlation is converted back into the time domain via the inverse DFT:
 * `$$r = \mathcal{F}^{-1}\{R\}$$`
 * - Finally, it computes the peak location and computes a 5x5 weighted centroid around the peak to
 * achieve sub-pixel accuracy.
 * `$$(\Delta x, \Delta y) = \texttt{weightedCentroid} \{\arg \max_{(x, y)}\{r\}\}$$`
 * - If non-zero, the response parameter is computed as the sum of the elements of r within the 5x5
 * centroid around the peak location. It is normalized to a maximum of 1 (meaning there is a single
 * peak) and will be smaller when there are multiple peaks.
 *
 * @param src1 Source floating point array (CV_32FC1 or CV_64FC1)
 * @param src2 Source floating point array (CV_32FC1 or CV_64FC1)
 * @param window Floating point array with windowing coefficients to reduce edge effects (optional).
 * @param response Signal power within the 5x5 centroid around the peak, between 0 and 1 (optional).
 * @return detected phase shift (sub-pixel) between the two arrays.
 *
 * @see `dft`, `getOptimalDFTSize`, `idft`, `mulSpectrums createHanningWindow`
 */
+ (Point2d*)phaseCorrelate:(Mat*)src1 src2:(Mat*)src2 window:(Mat*)window response:(double*)response NS_SWIFT_NAME(phaseCorrelate(src1:src2:window:response:));

/**
 * The function is used to detect translational shifts that occur between two images.
 *
 * The operation takes advantage of the Fourier shift theorem for detecting the translational shift in
 * the frequency domain. It can be used for fast image registration as well as motion estimation. For
 * more information please see <http://en.wikipedia.org/wiki/Phase_correlation>
 *
 * Calculates the cross-power spectrum of two supplied source arrays. The arrays are padded if needed
 * with getOptimalDFTSize.
 *
 * The function performs the following equations:
 * - First it applies a Hanning window (see <http://en.wikipedia.org/wiki/Hann_function>) to each
 * image to remove possible edge effects. This window is cached until the array size changes to speed
 * up processing time.
 * - Next it computes the forward DFTs of each source array:
 * `$$\mathbf{G}_a = \mathcal{F}\{src_1\}, \; \mathbf{G}_b = \mathcal{F}\{src_2\}$$`
 * where `$$\mathcal{F}$$` is the forward DFT.
 * - It then computes the cross-power spectrum of each frequency domain array:
 * `$$R = \frac{ \mathbf{G}_a \mathbf{G}_b^*}{|\mathbf{G}_a \mathbf{G}_b^*|}$$`
 * - Next the cross-correlation is converted back into the time domain via the inverse DFT:
 * `$$r = \mathcal{F}^{-1}\{R\}$$`
 * - Finally, it computes the peak location and computes a 5x5 weighted centroid around the peak to
 * achieve sub-pixel accuracy.
 * `$$(\Delta x, \Delta y) = \texttt{weightedCentroid} \{\arg \max_{(x, y)}\{r\}\}$$`
 * - If non-zero, the response parameter is computed as the sum of the elements of r within the 5x5
 * centroid around the peak location. It is normalized to a maximum of 1 (meaning there is a single
 * peak) and will be smaller when there are multiple peaks.
 *
 * @param src1 Source floating point array (CV_32FC1 or CV_64FC1)
 * @param src2 Source floating point array (CV_32FC1 or CV_64FC1)
 * @param window Floating point array with windowing coefficients to reduce edge effects (optional).
 * @return detected phase shift (sub-pixel) between the two arrays.
 *
 * @see `dft`, `getOptimalDFTSize`, `idft`, `mulSpectrums createHanningWindow`
 */
+ (Point2d*)phaseCorrelate:(Mat*)src1 src2:(Mat*)src2 window:(Mat*)window NS_SWIFT_NAME(phaseCorrelate(src1:src2:window:));

/**
 * The function is used to detect translational shifts that occur between two images.
 *
 * The operation takes advantage of the Fourier shift theorem for detecting the translational shift in
 * the frequency domain. It can be used for fast image registration as well as motion estimation. For
 * more information please see <http://en.wikipedia.org/wiki/Phase_correlation>
 *
 * Calculates the cross-power spectrum of two supplied source arrays. The arrays are padded if needed
 * with getOptimalDFTSize.
 *
 * The function performs the following equations:
 * - First it applies a Hanning window (see <http://en.wikipedia.org/wiki/Hann_function>) to each
 * image to remove possible edge effects. This window is cached until the array size changes to speed
 * up processing time.
 * - Next it computes the forward DFTs of each source array:
 * `$$\mathbf{G}_a = \mathcal{F}\{src_1\}, \; \mathbf{G}_b = \mathcal{F}\{src_2\}$$`
 * where `$$\mathcal{F}$$` is the forward DFT.
 * - It then computes the cross-power spectrum of each frequency domain array:
 * `$$R = \frac{ \mathbf{G}_a \mathbf{G}_b^*}{|\mathbf{G}_a \mathbf{G}_b^*|}$$`
 * - Next the cross-correlation is converted back into the time domain via the inverse DFT:
 * `$$r = \mathcal{F}^{-1}\{R\}$$`
 * - Finally, it computes the peak location and computes a 5x5 weighted centroid around the peak to
 * achieve sub-pixel accuracy.
 * `$$(\Delta x, \Delta y) = \texttt{weightedCentroid} \{\arg \max_{(x, y)}\{r\}\}$$`
 * - If non-zero, the response parameter is computed as the sum of the elements of r within the 5x5
 * centroid around the peak location. It is normalized to a maximum of 1 (meaning there is a single
 * peak) and will be smaller when there are multiple peaks.
 *
 * @param src1 Source floating point array (CV_32FC1 or CV_64FC1)
 * @param src2 Source floating point array (CV_32FC1 or CV_64FC1)
 * @return detected phase shift (sub-pixel) between the two arrays.
 *
 * @see `dft`, `getOptimalDFTSize`, `idft`, `mulSpectrums createHanningWindow`
 */
+ (Point2d*)phaseCorrelate:(Mat*)src1 src2:(Mat*)src2 NS_SWIFT_NAME(phaseCorrelate(src1:src2:));


//
//  void cv::createHanningWindow(Mat& dst, Size winSize, int type)
//
/**
 * This function computes a Hanning window coefficients in two dimensions.
 *
 * See (http://en.wikipedia.org/wiki/Hann_function) and (http://en.wikipedia.org/wiki/Window_function)
 * for more information.
 *
 * An example is shown below:
 *
 *     // create hanning window of size 100x100 and type CV_32F
 *     Mat hann;
 *     createHanningWindow(hann, Size(100, 100), CV_32F);
 *
 * @param dst Destination array to place Hann coefficients in
 * @param winSize The window size specifications (both width and height must be > 1)
 * @param type Created array type
 */
+ (void)createHanningWindow:(Mat*)dst winSize:(Size2i*)winSize type:(int)type NS_SWIFT_NAME(createHanningWindow(dst:winSize:type:));


//
//  void cv::divSpectrums(Mat a, Mat b, Mat& c, int flags, bool conjB = false)
//
/**
 * Performs the per-element division of the first Fourier spectrum by the second Fourier spectrum.
 *
 * The function cv::divSpectrums performs the per-element division of the first array by the second array.
 * The arrays are CCS-packed or complex matrices that are results of a real or complex Fourier transform.
 *
 * @param a first input array.
 * @param b second input array of the same size and type as src1 .
 * @param c output array of the same size and type as src1 .
 * @param flags operation flags; currently, the only supported flag is cv::DFT_ROWS, which indicates that
 * each row of src1 and src2 is an independent 1D Fourier spectrum. If you do not want to use this flag, then simply add a `0` as value.
 * @param conjB optional flag that conjugates the second input array before the multiplication (true)
 * or not (false).
 */
+ (void)divSpectrums:(Mat*)a b:(Mat*)b c:(Mat*)c flags:(int)flags conjB:(BOOL)conjB NS_SWIFT_NAME(divSpectrums(a:b:c:flags:conjB:));

/**
 * Performs the per-element division of the first Fourier spectrum by the second Fourier spectrum.
 *
 * The function cv::divSpectrums performs the per-element division of the first array by the second array.
 * The arrays are CCS-packed or complex matrices that are results of a real or complex Fourier transform.
 *
 * @param a first input array.
 * @param b second input array of the same size and type as src1 .
 * @param c output array of the same size and type as src1 .
 * @param flags operation flags; currently, the only supported flag is cv::DFT_ROWS, which indicates that
 * each row of src1 and src2 is an independent 1D Fourier spectrum. If you do not want to use this flag, then simply add a `0` as value.
 * or not (false).
 */
+ (void)divSpectrums:(Mat*)a b:(Mat*)b c:(Mat*)c flags:(int)flags NS_SWIFT_NAME(divSpectrums(a:b:c:flags:));


//
//  double cv::threshold(Mat src, Mat& dst, double thresh, double maxval, ThresholdTypes type)
//
/**
 * Applies a fixed-level threshold to each array element.
 *
 * The function applies fixed-level thresholding to a multiple-channel array. The function is typically
 * used to get a bi-level (binary) image out of a grayscale image ( #compare could be also used for
 * this purpose) or for removing a noise, that is, filtering out pixels with too small or too large
 * values. There are several types of thresholding supported by the function. They are determined by
 * type parameter.
 *
 * Also, the special values #THRESH_OTSU or #THRESH_TRIANGLE may be combined with one of the
 * above values. In these cases, the function determines the optimal threshold value using the Otsu's
 * or Triangle algorithm and uses it instead of the specified thresh.
 *
 * NOTE: Currently, the Otsu's and Triangle methods are implemented only for 8-bit single-channel images.
 *
 * @param src input array (multiple-channel, 8-bit or 32-bit floating point).
 * @param dst output array of the same size  and type and the same number of channels as src.
 * @param thresh threshold value.
 * @param maxval maximum value to use with the #THRESH_BINARY and #THRESH_BINARY_INV thresholding
 * types.
 * @param type thresholding type (see #ThresholdTypes).
 * @return the computed threshold value if Otsu's or Triangle methods used.
 *
 * @see `+adaptiveThreshold:dst:maxValue:adaptiveMethod:thresholdType:blockSize:C:`, `+findContours:contours:hierarchy:mode:method:offset:`, `compare`, `min`, `max`
 */
+ (double)threshold:(Mat*)src dst:(Mat*)dst thresh:(double)thresh maxval:(double)maxval type:(ThresholdTypes)type NS_SWIFT_NAME(threshold(src:dst:thresh:maxval:type:));


//
//  void cv::adaptiveThreshold(Mat src, Mat& dst, double maxValue, AdaptiveThresholdTypes adaptiveMethod, ThresholdTypes thresholdType, int blockSize, double C)
//
/**
 * Applies an adaptive threshold to an array.
 *
 * The function transforms a grayscale image to a binary image according to the formulae:
 * -   **THRESH_BINARY**
 *     `$$\newcommand{\fork}[4]{ \left\{ \begin{array}{l l} #1 & \text{#2}\\\\ #3 & \text{#4}\\\\ \end{array} \right.} dst(x,y) =  \fork{\texttt{maxValue}}{if \(src(x,y) > T(x,y)\)}{0}{otherwise}$$`
 * -   **THRESH_BINARY_INV**
 *     `$$\newcommand{\fork}[4]{ \left\{ \begin{array}{l l} #1 & \text{#2}\\\\ #3 & \text{#4}\\\\ \end{array} \right.} dst(x,y) =  \fork{0}{if \(src(x,y) > T(x,y)\)}{\texttt{maxValue}}{otherwise}$$`
 * where `$$T(x,y)$$` is a threshold calculated individually for each pixel (see adaptiveMethod parameter).
 *
 * The function can process the image in-place.
 *
 * @param src Source 8-bit single-channel image.
 * @param dst Destination image of the same size and the same type as src.
 * @param maxValue Non-zero value assigned to the pixels for which the condition is satisfied
 * @param adaptiveMethod Adaptive thresholding algorithm to use, see #AdaptiveThresholdTypes.
 * The #BORDER_REPLICATE | #BORDER_ISOLATED is used to process boundaries.
 * @param thresholdType Thresholding type that must be either #THRESH_BINARY or #THRESH_BINARY_INV,
 * see #ThresholdTypes.
 * @param blockSize Size of a pixel neighborhood that is used to calculate a threshold value for the
 * pixel: 3, 5, 7, and so on.
 * @param C Constant subtracted from the mean or weighted mean (see the details below). Normally, it
 * is positive but may be zero or negative as well.
 *
 * @see `+threshold:dst:thresh:maxval:type:`, `+blur:dst:ksize:anchor:borderType:`, `+GaussianBlur:dst:ksize:sigmaX:sigmaY:borderType:`
 */
+ (void)adaptiveThreshold:(Mat*)src dst:(Mat*)dst maxValue:(double)maxValue adaptiveMethod:(AdaptiveThresholdTypes)adaptiveMethod thresholdType:(ThresholdTypes)thresholdType blockSize:(int)blockSize C:(double)C NS_SWIFT_NAME(adaptiveThreshold(src:dst:maxValue:adaptiveMethod:thresholdType:blockSize:C:));


//
//  void cv::pyrDown(Mat src, Mat& dst, Size dstsize = Size(), BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Blurs an image and downsamples it.
 *
 * By default, size of the output image is computed as `Size((src.cols+1)/2, (src.rows+1)/2)`, but in
 * any case, the following conditions should be satisfied:
 *
 * `$$\begin{array}{l} | \texttt{dstsize.width} *2-src.cols| \leq 2 \\ | \texttt{dstsize.height} *2-src.rows| \leq 2 \end{array}$$`
 *
 * The function performs the downsampling step of the Gaussian pyramid construction. First, it
 * convolves the source image with the kernel:
 *
 * `$$\frac{1}{256} \begin{bmatrix} 1 & 4 & 6 & 4 & 1  \\ 4 & 16 & 24 & 16 & 4  \\ 6 & 24 & 36 & 24 & 6  \\ 4 & 16 & 24 & 16 & 4  \\ 1 & 4 & 6 & 4 & 1 \end{bmatrix}$$`
 *
 * Then, it downsamples the image by rejecting even rows and columns.
 *
 * @param src input image.
 * @param dst output image; it has the specified size and the same type as src.
 * @param dstsize size of the output image.
 * @param borderType Pixel extrapolation method, see #BorderTypes (#BORDER_CONSTANT isn't supported)
 */
+ (void)pyrDown:(Mat*)src dst:(Mat*)dst dstsize:(Size2i*)dstsize borderType:(BorderTypes)borderType NS_SWIFT_NAME(pyrDown(src:dst:dstsize:borderType:));

/**
 * Blurs an image and downsamples it.
 *
 * By default, size of the output image is computed as `Size((src.cols+1)/2, (src.rows+1)/2)`, but in
 * any case, the following conditions should be satisfied:
 *
 * `$$\begin{array}{l} | \texttt{dstsize.width} *2-src.cols| \leq 2 \\ | \texttt{dstsize.height} *2-src.rows| \leq 2 \end{array}$$`
 *
 * The function performs the downsampling step of the Gaussian pyramid construction. First, it
 * convolves the source image with the kernel:
 *
 * `$$\frac{1}{256} \begin{bmatrix} 1 & 4 & 6 & 4 & 1  \\ 4 & 16 & 24 & 16 & 4  \\ 6 & 24 & 36 & 24 & 6  \\ 4 & 16 & 24 & 16 & 4  \\ 1 & 4 & 6 & 4 & 1 \end{bmatrix}$$`
 *
 * Then, it downsamples the image by rejecting even rows and columns.
 *
 * @param src input image.
 * @param dst output image; it has the specified size and the same type as src.
 * @param dstsize size of the output image.
 */
+ (void)pyrDown:(Mat*)src dst:(Mat*)dst dstsize:(Size2i*)dstsize NS_SWIFT_NAME(pyrDown(src:dst:dstsize:));

/**
 * Blurs an image and downsamples it.
 *
 * By default, size of the output image is computed as `Size((src.cols+1)/2, (src.rows+1)/2)`, but in
 * any case, the following conditions should be satisfied:
 *
 * `$$\begin{array}{l} | \texttt{dstsize.width} *2-src.cols| \leq 2 \\ | \texttt{dstsize.height} *2-src.rows| \leq 2 \end{array}$$`
 *
 * The function performs the downsampling step of the Gaussian pyramid construction. First, it
 * convolves the source image with the kernel:
 *
 * `$$\frac{1}{256} \begin{bmatrix} 1 & 4 & 6 & 4 & 1  \\ 4 & 16 & 24 & 16 & 4  \\ 6 & 24 & 36 & 24 & 6  \\ 4 & 16 & 24 & 16 & 4  \\ 1 & 4 & 6 & 4 & 1 \end{bmatrix}$$`
 *
 * Then, it downsamples the image by rejecting even rows and columns.
 *
 * @param src input image.
 * @param dst output image; it has the specified size and the same type as src.
 */
+ (void)pyrDown:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(pyrDown(src:dst:));


//
//  void cv::pyrUp(Mat src, Mat& dst, Size dstsize = Size(), BorderTypes borderType = BORDER_DEFAULT)
//
/**
 * Upsamples an image and then blurs it.
 *
 * By default, size of the output image is computed as `Size(src.cols\*2, (src.rows\*2)`, but in any
 * case, the following conditions should be satisfied:
 *
 * `$$\begin{array}{l} | \texttt{dstsize.width} -src.cols*2| \leq  ( \texttt{dstsize.width}   \mod  2)  \\ | \texttt{dstsize.height} -src.rows*2| \leq  ( \texttt{dstsize.height}   \mod  2) \end{array}$$`
 *
 * The function performs the upsampling step of the Gaussian pyramid construction, though it can
 * actually be used to construct the Laplacian pyramid. First, it upsamples the source image by
 * injecting even zero rows and columns and then convolves the result with the same kernel as in
 * pyrDown multiplied by 4.
 *
 * @param src input image.
 * @param dst output image. It has the specified size and the same type as src .
 * @param dstsize size of the output image.
 * @param borderType Pixel extrapolation method, see #BorderTypes (only #BORDER_DEFAULT is supported)
 */
+ (void)pyrUp:(Mat*)src dst:(Mat*)dst dstsize:(Size2i*)dstsize borderType:(BorderTypes)borderType NS_SWIFT_NAME(pyrUp(src:dst:dstsize:borderType:));

/**
 * Upsamples an image and then blurs it.
 *
 * By default, size of the output image is computed as `Size(src.cols\*2, (src.rows\*2)`, but in any
 * case, the following conditions should be satisfied:
 *
 * `$$\begin{array}{l} | \texttt{dstsize.width} -src.cols*2| \leq  ( \texttt{dstsize.width}   \mod  2)  \\ | \texttt{dstsize.height} -src.rows*2| \leq  ( \texttt{dstsize.height}   \mod  2) \end{array}$$`
 *
 * The function performs the upsampling step of the Gaussian pyramid construction, though it can
 * actually be used to construct the Laplacian pyramid. First, it upsamples the source image by
 * injecting even zero rows and columns and then convolves the result with the same kernel as in
 * pyrDown multiplied by 4.
 *
 * @param src input image.
 * @param dst output image. It has the specified size and the same type as src .
 * @param dstsize size of the output image.
 */
+ (void)pyrUp:(Mat*)src dst:(Mat*)dst dstsize:(Size2i*)dstsize NS_SWIFT_NAME(pyrUp(src:dst:dstsize:));

/**
 * Upsamples an image and then blurs it.
 *
 * By default, size of the output image is computed as `Size(src.cols\*2, (src.rows\*2)`, but in any
 * case, the following conditions should be satisfied:
 *
 * `$$\begin{array}{l} | \texttt{dstsize.width} -src.cols*2| \leq  ( \texttt{dstsize.width}   \mod  2)  \\ | \texttt{dstsize.height} -src.rows*2| \leq  ( \texttt{dstsize.height}   \mod  2) \end{array}$$`
 *
 * The function performs the upsampling step of the Gaussian pyramid construction, though it can
 * actually be used to construct the Laplacian pyramid. First, it upsamples the source image by
 * injecting even zero rows and columns and then convolves the result with the same kernel as in
 * pyrDown multiplied by 4.
 *
 * @param src input image.
 * @param dst output image. It has the specified size and the same type as src .
 */
+ (void)pyrUp:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(pyrUp(src:dst:));


//
//  void cv::calcHist(vector_Mat images, vector_int channels, Mat mask, Mat& hist, vector_int histSize, vector_float ranges, bool accumulate = false)
//
+ (void)calcHist:(NSArray<Mat*>*)images channels:(IntVector*)channels mask:(Mat*)mask hist:(Mat*)hist histSize:(IntVector*)histSize ranges:(FloatVector*)ranges accumulate:(BOOL)accumulate NS_SWIFT_NAME(calcHist(images:channels:mask:hist:histSize:ranges:accumulate:));

+ (void)calcHist:(NSArray<Mat*>*)images channels:(IntVector*)channels mask:(Mat*)mask hist:(Mat*)hist histSize:(IntVector*)histSize ranges:(FloatVector*)ranges NS_SWIFT_NAME(calcHist(images:channels:mask:hist:histSize:ranges:));


//
//  void cv::calcBackProject(vector_Mat images, vector_int channels, Mat hist, Mat& dst, vector_float ranges, double scale)
//
+ (void)calcBackProject:(NSArray<Mat*>*)images channels:(IntVector*)channels hist:(Mat*)hist dst:(Mat*)dst ranges:(FloatVector*)ranges scale:(double)scale NS_SWIFT_NAME(calcBackProject(images:channels:hist:dst:ranges:scale:));


//
//  double cv::compareHist(Mat H1, Mat H2, HistCompMethods method)
//
/**
 * Compares two histograms.
 *
 * The function cv::compareHist compares two dense or two sparse histograms using the specified method.
 *
 * The function returns `$$d(H_1, H_2)$$` .
 *
 * While the function works well with 1-, 2-, 3-dimensional dense histograms, it may not be suitable
 * for high-dimensional sparse histograms. In such histograms, because of aliasing and sampling
 * problems, the coordinates of non-zero histogram bins can slightly shift. To compare such histograms
 * or more general sparse configurations of weighted points, consider using the #EMD function.
 *
 * @param H1 First compared histogram.
 * @param H2 Second compared histogram of the same size as H1 .
 * @param method Comparison method, see #HistCompMethods
 */
+ (double)compareHist:(Mat*)H1 H2:(Mat*)H2 method:(HistCompMethods)method NS_SWIFT_NAME(compareHist(H1:H2:method:));


//
//  void cv::equalizeHist(Mat src, Mat& dst)
//
/**
 * Equalizes the histogram of a grayscale image.
 *
 * The function equalizes the histogram of the input image using the following algorithm:
 *
 * - Calculate the histogram `$$H$$` for src .
 * - Normalize the histogram so that the sum of histogram bins is 255.
 * - Compute the integral of the histogram:
 * `$$H'_i =  \sum _{0  \le j < i} H(j)$$`
 * - Transform the image using `$$H'$$` as a look-up table: `$$\texttt{dst}(x,y) = H'(\texttt{src}(x,y))$$`
 *
 * The algorithm normalizes the brightness and increases the contrast of the image.
 *
 * @param src Source 8-bit single channel image.
 * @param dst Destination image of the same size and type as src .
 */
+ (void)equalizeHist:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(equalizeHist(src:dst:));


//
//  Ptr_CLAHE cv::createCLAHE(double clipLimit = 40.0, Size tileGridSize = Size(8, 8))
//
/**
 * Creates a smart pointer to a cv::CLAHE class and initializes it.
 *
 * @param clipLimit Threshold for contrast limiting.
 * @param tileGridSize Size of grid for histogram equalization. Input image will be divided into
 * equally sized rectangular tiles. tileGridSize defines the number of tiles in row and column.
 */
+ (CLAHE*)createCLAHE:(double)clipLimit tileGridSize:(Size2i*)tileGridSize NS_SWIFT_NAME(createCLAHE(clipLimit:tileGridSize:));

/**
 * Creates a smart pointer to a cv::CLAHE class and initializes it.
 *
 * @param clipLimit Threshold for contrast limiting.
 * equally sized rectangular tiles. tileGridSize defines the number of tiles in row and column.
 */
+ (CLAHE*)createCLAHE:(double)clipLimit NS_SWIFT_NAME(createCLAHE(clipLimit:));

/**
 * Creates a smart pointer to a cv::CLAHE class and initializes it.
 *
 * equally sized rectangular tiles. tileGridSize defines the number of tiles in row and column.
 */
+ (CLAHE*)createCLAHE NS_SWIFT_NAME(createCLAHE());


//
//  float cv::wrapperEMD(Mat signature1, Mat signature2, DistanceTypes distType, Mat cost = Mat(),  _hidden_ & lowerBound = cv::Ptr<float>(), Mat& flow = Mat())
//
/**
 * Computes the "minimal work" distance between two weighted point configurations.
 *
 * The function computes the earth mover distance and/or a lower boundary of the distance between the
 * two weighted point configurations. One of the applications described in CITE: RubnerSept98,
 * CITE: Rubner2000 is multi-dimensional histogram comparison for image retrieval. EMD is a transportation
 * problem that is solved using some modification of a simplex algorithm, thus the complexity is
 * exponential in the worst case, though, on average it is much faster. In the case of a real metric
 * the lower boundary can be calculated even faster (using linear-time algorithm) and it can be used
 * to determine roughly whether the two signatures are far enough so that they cannot relate to the
 * same object.
 *
 * @param signature1 First signature, a `$$\texttt{size1}\times \texttt{dims}+1$$` floating-point matrix.
 * Each row stores the point weight followed by the point coordinates. The matrix is allowed to have
 * a single column (weights only) if the user-defined cost matrix is used. The weights must be
 * non-negative and have at least one non-zero value.
 * @param signature2 Second signature of the same format as signature1 , though the number of rows
 * may be different. The total weights may be different. In this case an extra "dummy" point is added
 * to either signature1 or signature2. The weights must be non-negative and have at least one non-zero
 * value.
 * @param distType Used metric. See #DistanceTypes.
 * @param cost User-defined `$$\texttt{size1}\times \texttt{size2}$$` cost matrix. Also, if a cost matrix
 * is used, lower boundary lowerBound cannot be calculated because it needs a metric function.
 * @param lowerBound Optional input/output parameter: lower boundary of a distance between the two
 * signatures that is a distance between mass centers. The lower boundary may not be calculated if
 * the user-defined cost matrix is used, the total weights of point configurations are not equal, or
 * if the signatures consist of weights only (the signature matrices have a single column). You
 * *must** initialize \*lowerBound . If the calculated distance between mass centers is greater or
 * equal to \*lowerBound (it means that the signatures are far enough), the function does not
 * calculate EMD. In any case \*lowerBound is set to the calculated distance between mass centers on
 * return. Thus, if you want to calculate both distance between mass centers and EMD, \*lowerBound
 * should be set to 0.
 * @param flow Resultant `$$\texttt{size1} \times \texttt{size2}$$` flow matrix: `$$\texttt{flow}_{i,j}$$` is
 * a flow from `$$i$$` -th point of signature1 to `$$j$$` -th point of signature2 .
 */
+ (float)EMD:(Mat*)signature1 signature2:(Mat*)signature2 distType:(DistanceTypes)distType cost:(Mat*)cost flow:(Mat*)flow NS_SWIFT_NAME(wrapperEMD(signature1:signature2:distType:cost:flow:));

/**
 * Computes the "minimal work" distance between two weighted point configurations.
 *
 * The function computes the earth mover distance and/or a lower boundary of the distance between the
 * two weighted point configurations. One of the applications described in CITE: RubnerSept98,
 * CITE: Rubner2000 is multi-dimensional histogram comparison for image retrieval. EMD is a transportation
 * problem that is solved using some modification of a simplex algorithm, thus the complexity is
 * exponential in the worst case, though, on average it is much faster. In the case of a real metric
 * the lower boundary can be calculated even faster (using linear-time algorithm) and it can be used
 * to determine roughly whether the two signatures are far enough so that they cannot relate to the
 * same object.
 *
 * @param signature1 First signature, a `$$\texttt{size1}\times \texttt{dims}+1$$` floating-point matrix.
 * Each row stores the point weight followed by the point coordinates. The matrix is allowed to have
 * a single column (weights only) if the user-defined cost matrix is used. The weights must be
 * non-negative and have at least one non-zero value.
 * @param signature2 Second signature of the same format as signature1 , though the number of rows
 * may be different. The total weights may be different. In this case an extra "dummy" point is added
 * to either signature1 or signature2. The weights must be non-negative and have at least one non-zero
 * value.
 * @param distType Used metric. See #DistanceTypes.
 * @param cost User-defined `$$\texttt{size1}\times \texttt{size2}$$` cost matrix. Also, if a cost matrix
 * is used, lower boundary lowerBound cannot be calculated because it needs a metric function.
 * @param lowerBound Optional input/output parameter: lower boundary of a distance between the two
 * signatures that is a distance between mass centers. The lower boundary may not be calculated if
 * the user-defined cost matrix is used, the total weights of point configurations are not equal, or
 * if the signatures consist of weights only (the signature matrices have a single column). You
 * *must** initialize \*lowerBound . If the calculated distance between mass centers is greater or
 * equal to \*lowerBound (it means that the signatures are far enough), the function does not
 * calculate EMD. In any case \*lowerBound is set to the calculated distance between mass centers on
 * return. Thus, if you want to calculate both distance between mass centers and EMD, \*lowerBound
 * should be set to 0.
 * a flow from `$$i$$` -th point of signature1 to `$$j$$` -th point of signature2 .
 */
+ (float)EMD:(Mat*)signature1 signature2:(Mat*)signature2 distType:(DistanceTypes)distType cost:(Mat*)cost NS_SWIFT_NAME(wrapperEMD(signature1:signature2:distType:cost:));

/**
 * Computes the "minimal work" distance between two weighted point configurations.
 *
 * The function computes the earth mover distance and/or a lower boundary of the distance between the
 * two weighted point configurations. One of the applications described in CITE: RubnerSept98,
 * CITE: Rubner2000 is multi-dimensional histogram comparison for image retrieval. EMD is a transportation
 * problem that is solved using some modification of a simplex algorithm, thus the complexity is
 * exponential in the worst case, though, on average it is much faster. In the case of a real metric
 * the lower boundary can be calculated even faster (using linear-time algorithm) and it can be used
 * to determine roughly whether the two signatures are far enough so that they cannot relate to the
 * same object.
 *
 * @param signature1 First signature, a `$$\texttt{size1}\times \texttt{dims}+1$$` floating-point matrix.
 * Each row stores the point weight followed by the point coordinates. The matrix is allowed to have
 * a single column (weights only) if the user-defined cost matrix is used. The weights must be
 * non-negative and have at least one non-zero value.
 * @param signature2 Second signature of the same format as signature1 , though the number of rows
 * may be different. The total weights may be different. In this case an extra "dummy" point is added
 * to either signature1 or signature2. The weights must be non-negative and have at least one non-zero
 * value.
 * @param distType Used metric. See #DistanceTypes.
 * is used, lower boundary lowerBound cannot be calculated because it needs a metric function.
 * signatures that is a distance between mass centers. The lower boundary may not be calculated if
 * the user-defined cost matrix is used, the total weights of point configurations are not equal, or
 * if the signatures consist of weights only (the signature matrices have a single column). You
 * *must** initialize \*lowerBound . If the calculated distance between mass centers is greater or
 * equal to \*lowerBound (it means that the signatures are far enough), the function does not
 * calculate EMD. In any case \*lowerBound is set to the calculated distance between mass centers on
 * return. Thus, if you want to calculate both distance between mass centers and EMD, \*lowerBound
 * should be set to 0.
 * a flow from `$$i$$` -th point of signature1 to `$$j$$` -th point of signature2 .
 */
+ (float)EMD:(Mat*)signature1 signature2:(Mat*)signature2 distType:(DistanceTypes)distType NS_SWIFT_NAME(wrapperEMD(signature1:signature2:distType:));


//
//  void cv::watershed(Mat image, Mat& markers)
//
/**
 * Performs a marker-based image segmentation using the watershed algorithm.
 *
 * The function implements one of the variants of watershed, non-parametric marker-based segmentation
 * algorithm, described in CITE: Meyer92 .
 *
 * Before passing the image to the function, you have to roughly outline the desired regions in the
 * image markers with positive (\>0) indices. So, every region is represented as one or more connected
 * components with the pixel values 1, 2, 3, and so on. Such markers can be retrieved from a binary
 * mask using #findContours and #drawContours (see the watershed.cpp demo). The markers are "seeds" of
 * the future image regions. All the other pixels in markers , whose relation to the outlined regions
 * is not known and should be defined by the algorithm, should be set to 0's. In the function output,
 * each pixel in markers is set to a value of the "seed" components or to -1 at boundaries between the
 * regions.
 *
 * NOTE: Any two neighbor connected components are not necessarily separated by a watershed boundary
 * (-1's pixels); for example, they can touch each other in the initial marker image passed to the
 * function.
 *
 * @param image Input 8-bit 3-channel image.
 * @param markers Input/output 32-bit single-channel image (map) of markers. It should have the same
 * size as image .
 *
 * @see `+findContours:contours:hierarchy:mode:method:offset:`
 */
+ (void)watershed:(Mat*)image markers:(Mat*)markers NS_SWIFT_NAME(watershed(image:markers:));


//
//  void cv::pyrMeanShiftFiltering(Mat src, Mat& dst, double sp, double sr, int maxLevel = 1, TermCriteria termcrit = TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5,1))
//
/**
 * Performs initial step of meanshift segmentation of an image.
 *
 * The function implements the filtering stage of meanshift segmentation, that is, the output of the
 * function is the filtered "posterized" image with color gradients and fine-grain texture flattened.
 * At every pixel (X,Y) of the input image (or down-sized input image, see below) the function executes
 * meanshift iterations, that is, the pixel (X,Y) neighborhood in the joint space-color hyperspace is
 * considered:
 *
 * `$$(x,y): X- \texttt{sp} \le x  \le X+ \texttt{sp} , Y- \texttt{sp} \le y  \le Y+ \texttt{sp} , ||(R,G,B)-(r,g,b)||   \le \texttt{sr}$$`
 *
 * where (R,G,B) and (r,g,b) are the vectors of color components at (X,Y) and (x,y), respectively
 * (though, the algorithm does not depend on the color space used, so any 3-component color space can
 * be used instead). Over the neighborhood the average spatial value (X',Y') and average color vector
 * (R',G',B') are found and they act as the neighborhood center on the next iteration:
 *
 * `$$(X,Y)~(X',Y'), (R,G,B)~(R',G',B').$$`
 *
 * After the iterations over, the color components of the initial pixel (that is, the pixel from where
 * the iterations started) are set to the final value (average color at the last iteration):
 *
 * `$$I(X,Y) <- (R*,G*,B*)$$`
 *
 * When maxLevel \> 0, the gaussian pyramid of maxLevel+1 levels is built, and the above procedure is
 * run on the smallest layer first. After that, the results are propagated to the larger layer and the
 * iterations are run again only on those pixels where the layer colors differ by more than sr from the
 * lower-resolution layer of the pyramid. That makes boundaries of color regions sharper. Note that the
 * results will be actually different from the ones obtained by running the meanshift procedure on the
 * whole original image (i.e. when maxLevel==0).
 *
 * @param src The source 8-bit, 3-channel image.
 * @param dst The destination image of the same format and the same size as the source.
 * @param sp The spatial window radius.
 * @param sr The color window radius.
 * @param maxLevel Maximum level of the pyramid for the segmentation.
 * @param termcrit Termination criteria: when to stop meanshift iterations.
 */
+ (void)pyrMeanShiftFiltering:(Mat*)src dst:(Mat*)dst sp:(double)sp sr:(double)sr maxLevel:(int)maxLevel termcrit:(TermCriteria*)termcrit NS_SWIFT_NAME(pyrMeanShiftFiltering(src:dst:sp:sr:maxLevel:termcrit:));

/**
 * Performs initial step of meanshift segmentation of an image.
 *
 * The function implements the filtering stage of meanshift segmentation, that is, the output of the
 * function is the filtered "posterized" image with color gradients and fine-grain texture flattened.
 * At every pixel (X,Y) of the input image (or down-sized input image, see below) the function executes
 * meanshift iterations, that is, the pixel (X,Y) neighborhood in the joint space-color hyperspace is
 * considered:
 *
 * `$$(x,y): X- \texttt{sp} \le x  \le X+ \texttt{sp} , Y- \texttt{sp} \le y  \le Y+ \texttt{sp} , ||(R,G,B)-(r,g,b)||   \le \texttt{sr}$$`
 *
 * where (R,G,B) and (r,g,b) are the vectors of color components at (X,Y) and (x,y), respectively
 * (though, the algorithm does not depend on the color space used, so any 3-component color space can
 * be used instead). Over the neighborhood the average spatial value (X',Y') and average color vector
 * (R',G',B') are found and they act as the neighborhood center on the next iteration:
 *
 * `$$(X,Y)~(X',Y'), (R,G,B)~(R',G',B').$$`
 *
 * After the iterations over, the color components of the initial pixel (that is, the pixel from where
 * the iterations started) are set to the final value (average color at the last iteration):
 *
 * `$$I(X,Y) <- (R*,G*,B*)$$`
 *
 * When maxLevel \> 0, the gaussian pyramid of maxLevel+1 levels is built, and the above procedure is
 * run on the smallest layer first. After that, the results are propagated to the larger layer and the
 * iterations are run again only on those pixels where the layer colors differ by more than sr from the
 * lower-resolution layer of the pyramid. That makes boundaries of color regions sharper. Note that the
 * results will be actually different from the ones obtained by running the meanshift procedure on the
 * whole original image (i.e. when maxLevel==0).
 *
 * @param src The source 8-bit, 3-channel image.
 * @param dst The destination image of the same format and the same size as the source.
 * @param sp The spatial window radius.
 * @param sr The color window radius.
 * @param maxLevel Maximum level of the pyramid for the segmentation.
 */
+ (void)pyrMeanShiftFiltering:(Mat*)src dst:(Mat*)dst sp:(double)sp sr:(double)sr maxLevel:(int)maxLevel NS_SWIFT_NAME(pyrMeanShiftFiltering(src:dst:sp:sr:maxLevel:));

/**
 * Performs initial step of meanshift segmentation of an image.
 *
 * The function implements the filtering stage of meanshift segmentation, that is, the output of the
 * function is the filtered "posterized" image with color gradients and fine-grain texture flattened.
 * At every pixel (X,Y) of the input image (or down-sized input image, see below) the function executes
 * meanshift iterations, that is, the pixel (X,Y) neighborhood in the joint space-color hyperspace is
 * considered:
 *
 * `$$(x,y): X- \texttt{sp} \le x  \le X+ \texttt{sp} , Y- \texttt{sp} \le y  \le Y+ \texttt{sp} , ||(R,G,B)-(r,g,b)||   \le \texttt{sr}$$`
 *
 * where (R,G,B) and (r,g,b) are the vectors of color components at (X,Y) and (x,y), respectively
 * (though, the algorithm does not depend on the color space used, so any 3-component color space can
 * be used instead). Over the neighborhood the average spatial value (X',Y') and average color vector
 * (R',G',B') are found and they act as the neighborhood center on the next iteration:
 *
 * `$$(X,Y)~(X',Y'), (R,G,B)~(R',G',B').$$`
 *
 * After the iterations over, the color components of the initial pixel (that is, the pixel from where
 * the iterations started) are set to the final value (average color at the last iteration):
 *
 * `$$I(X,Y) <- (R*,G*,B*)$$`
 *
 * When maxLevel \> 0, the gaussian pyramid of maxLevel+1 levels is built, and the above procedure is
 * run on the smallest layer first. After that, the results are propagated to the larger layer and the
 * iterations are run again only on those pixels where the layer colors differ by more than sr from the
 * lower-resolution layer of the pyramid. That makes boundaries of color regions sharper. Note that the
 * results will be actually different from the ones obtained by running the meanshift procedure on the
 * whole original image (i.e. when maxLevel==0).
 *
 * @param src The source 8-bit, 3-channel image.
 * @param dst The destination image of the same format and the same size as the source.
 * @param sp The spatial window radius.
 * @param sr The color window radius.
 */
+ (void)pyrMeanShiftFiltering:(Mat*)src dst:(Mat*)dst sp:(double)sp sr:(double)sr NS_SWIFT_NAME(pyrMeanShiftFiltering(src:dst:sp:sr:));


//
//  void cv::grabCut(Mat img, Mat& mask, Rect rect, Mat& bgdModel, Mat& fgdModel, int iterCount, int mode = GC_EVAL)
//
/**
 * Runs the GrabCut algorithm.
 *
 * The function implements the [GrabCut image segmentation algorithm](http://en.wikipedia.org/wiki/GrabCut).
 *
 * @param img Input 8-bit 3-channel image.
 * @param mask Input/output 8-bit single-channel mask. The mask is initialized by the function when
 * mode is set to #GC_INIT_WITH_RECT. Its elements may have one of the #GrabCutClasses.
 * @param rect ROI containing a segmented object. The pixels outside of the ROI are marked as
 * "obvious background". The parameter is only used when mode==#GC_INIT_WITH_RECT .
 * @param bgdModel Temporary array for the background model. Do not modify it while you are
 * processing the same image.
 * @param fgdModel Temporary arrays for the foreground model. Do not modify it while you are
 * processing the same image.
 * @param iterCount Number of iterations the algorithm should make before returning the result. Note
 * that the result can be refined with further calls with mode==#GC_INIT_WITH_MASK or
 * mode==GC_EVAL .
 * @param mode Operation mode that could be one of the #GrabCutModes
 */
+ (void)grabCut:(Mat*)img mask:(Mat*)mask rect:(Rect2i*)rect bgdModel:(Mat*)bgdModel fgdModel:(Mat*)fgdModel iterCount:(int)iterCount mode:(int)mode NS_SWIFT_NAME(grabCut(img:mask:rect:bgdModel:fgdModel:iterCount:mode:));

/**
 * Runs the GrabCut algorithm.
 *
 * The function implements the [GrabCut image segmentation algorithm](http://en.wikipedia.org/wiki/GrabCut).
 *
 * @param img Input 8-bit 3-channel image.
 * @param mask Input/output 8-bit single-channel mask. The mask is initialized by the function when
 * mode is set to #GC_INIT_WITH_RECT. Its elements may have one of the #GrabCutClasses.
 * @param rect ROI containing a segmented object. The pixels outside of the ROI are marked as
 * "obvious background". The parameter is only used when mode==#GC_INIT_WITH_RECT .
 * @param bgdModel Temporary array for the background model. Do not modify it while you are
 * processing the same image.
 * @param fgdModel Temporary arrays for the foreground model. Do not modify it while you are
 * processing the same image.
 * @param iterCount Number of iterations the algorithm should make before returning the result. Note
 * that the result can be refined with further calls with mode==#GC_INIT_WITH_MASK or
 * mode==GC_EVAL .
 */
+ (void)grabCut:(Mat*)img mask:(Mat*)mask rect:(Rect2i*)rect bgdModel:(Mat*)bgdModel fgdModel:(Mat*)fgdModel iterCount:(int)iterCount NS_SWIFT_NAME(grabCut(img:mask:rect:bgdModel:fgdModel:iterCount:));


//
//  void cv::distanceTransform(Mat src, Mat& dst, Mat& labels, DistanceTypes distanceType, DistanceTransformMasks maskSize, DistanceTransformLabelTypes labelType = DIST_LABEL_CCOMP)
//
/**
 * Calculates the distance to the closest zero pixel for each pixel of the source image.
 *
 * The function cv::distanceTransform calculates the approximate or precise distance from every binary
 * image pixel to the nearest zero pixel. For zero image pixels, the distance will obviously be zero.
 *
 * When maskSize == #DIST_MASK_PRECISE and distanceType == #DIST_L2 , the function runs the
 * algorithm described in CITE: Felzenszwalb04 . This algorithm is parallelized with the TBB library.
 *
 * In other cases, the algorithm CITE: Borgefors86 is used. This means that for a pixel the function
 * finds the shortest path to the nearest zero pixel consisting of basic shifts: horizontal, vertical,
 * diagonal, or knight's move (the latest is available for a `$$5\times 5$$` mask). The overall
 * distance is calculated as a sum of these basic distances. Since the distance function should be
 * symmetric, all of the horizontal and vertical shifts must have the same cost (denoted as a ), all
 * the diagonal shifts must have the same cost (denoted as `b`), and all knight's moves must have the
 * same cost (denoted as `c`). For the #DIST_C and #DIST_L1 types, the distance is calculated
 * precisely, whereas for #DIST_L2 (Euclidean distance) the distance can be calculated only with a
 * relative error (a `$$5\times 5$$` mask gives more accurate results). For `a`,`b`, and `c`, OpenCV
 * uses the values suggested in the original paper:
 * - DIST_L1: `a = 1, b = 2`
 * - DIST_L2:
 *     - `3 x 3`: `a=0.955, b=1.3693`
 *     - `5 x 5`: `a=1, b=1.4, c=2.1969`
 * - DIST_C: `a = 1, b = 1`
 *
 * Typically, for a fast, coarse distance estimation #DIST_L2, a `$$3\times 3$$` mask is used. For a
 * more accurate distance estimation #DIST_L2, a `$$5\times 5$$` mask or the precise algorithm is used.
 * Note that both the precise and the approximate algorithms are linear on the number of pixels.
 *
 * This variant of the function does not only compute the minimum distance for each pixel `$$(x, y)$$`
 * but also identifies the nearest connected component consisting of zero pixels
 * (labelType==#DIST_LABEL_CCOMP) or the nearest zero pixel (labelType==#DIST_LABEL_PIXEL). Index of the
 * component/pixel is stored in `labels(x, y)`. When labelType==#DIST_LABEL_CCOMP, the function
 * automatically finds connected components of zero pixels in the input image and marks them with
 * distinct labels. When labelType==#DIST_LABEL_PIXEL, the function scans through the input image and
 * marks all the zero pixels with distinct labels.
 *
 * In this mode, the complexity is still linear. That is, the function provides a very fast way to
 * compute the Voronoi diagram for a binary image. Currently, the second variant can use only the
 * approximate distance transform algorithm, i.e. maskSize=#DIST_MASK_PRECISE is not supported
 * yet.
 *
 * @param src 8-bit, single-channel (binary) source image.
 * @param dst Output image with calculated distances. It is a 8-bit or 32-bit floating-point,
 * single-channel image of the same size as src.
 * @param labels Output 2D array of labels (the discrete Voronoi diagram). It has the type
 * CV_32SC1 and the same size as src.
 * @param distanceType Type of distance, see #DistanceTypes
 * @param maskSize Size of the distance transform mask, see #DistanceTransformMasks.
 * #DIST_MASK_PRECISE is not supported by this variant. In case of the #DIST_L1 or #DIST_C distance type,
 * the parameter is forced to 3 because a `$$3\times 3$$` mask gives the same result as `$$5\times
 * 5$$` or any larger aperture.
 * @param labelType Type of the label array to build, see #DistanceTransformLabelTypes.
 */
+ (void)distanceTransformWithLabels:(Mat*)src dst:(Mat*)dst labels:(Mat*)labels distanceType:(DistanceTypes)distanceType maskSize:(DistanceTransformMasks)maskSize labelType:(DistanceTransformLabelTypes)labelType NS_SWIFT_NAME(distanceTransform(src:dst:labels:distanceType:maskSize:labelType:));

/**
 * Calculates the distance to the closest zero pixel for each pixel of the source image.
 *
 * The function cv::distanceTransform calculates the approximate or precise distance from every binary
 * image pixel to the nearest zero pixel. For zero image pixels, the distance will obviously be zero.
 *
 * When maskSize == #DIST_MASK_PRECISE and distanceType == #DIST_L2 , the function runs the
 * algorithm described in CITE: Felzenszwalb04 . This algorithm is parallelized with the TBB library.
 *
 * In other cases, the algorithm CITE: Borgefors86 is used. This means that for a pixel the function
 * finds the shortest path to the nearest zero pixel consisting of basic shifts: horizontal, vertical,
 * diagonal, or knight's move (the latest is available for a `$$5\times 5$$` mask). The overall
 * distance is calculated as a sum of these basic distances. Since the distance function should be
 * symmetric, all of the horizontal and vertical shifts must have the same cost (denoted as a ), all
 * the diagonal shifts must have the same cost (denoted as `b`), and all knight's moves must have the
 * same cost (denoted as `c`). For the #DIST_C and #DIST_L1 types, the distance is calculated
 * precisely, whereas for #DIST_L2 (Euclidean distance) the distance can be calculated only with a
 * relative error (a `$$5\times 5$$` mask gives more accurate results). For `a`,`b`, and `c`, OpenCV
 * uses the values suggested in the original paper:
 * - DIST_L1: `a = 1, b = 2`
 * - DIST_L2:
 *     - `3 x 3`: `a=0.955, b=1.3693`
 *     - `5 x 5`: `a=1, b=1.4, c=2.1969`
 * - DIST_C: `a = 1, b = 1`
 *
 * Typically, for a fast, coarse distance estimation #DIST_L2, a `$$3\times 3$$` mask is used. For a
 * more accurate distance estimation #DIST_L2, a `$$5\times 5$$` mask or the precise algorithm is used.
 * Note that both the precise and the approximate algorithms are linear on the number of pixels.
 *
 * This variant of the function does not only compute the minimum distance for each pixel `$$(x, y)$$`
 * but also identifies the nearest connected component consisting of zero pixels
 * (labelType==#DIST_LABEL_CCOMP) or the nearest zero pixel (labelType==#DIST_LABEL_PIXEL). Index of the
 * component/pixel is stored in `labels(x, y)`. When labelType==#DIST_LABEL_CCOMP, the function
 * automatically finds connected components of zero pixels in the input image and marks them with
 * distinct labels. When labelType==#DIST_LABEL_PIXEL, the function scans through the input image and
 * marks all the zero pixels with distinct labels.
 *
 * In this mode, the complexity is still linear. That is, the function provides a very fast way to
 * compute the Voronoi diagram for a binary image. Currently, the second variant can use only the
 * approximate distance transform algorithm, i.e. maskSize=#DIST_MASK_PRECISE is not supported
 * yet.
 *
 * @param src 8-bit, single-channel (binary) source image.
 * @param dst Output image with calculated distances. It is a 8-bit or 32-bit floating-point,
 * single-channel image of the same size as src.
 * @param labels Output 2D array of labels (the discrete Voronoi diagram). It has the type
 * CV_32SC1 and the same size as src.
 * @param distanceType Type of distance, see #DistanceTypes
 * @param maskSize Size of the distance transform mask, see #DistanceTransformMasks.
 * #DIST_MASK_PRECISE is not supported by this variant. In case of the #DIST_L1 or #DIST_C distance type,
 * the parameter is forced to 3 because a `$$3\times 3$$` mask gives the same result as `$$5\times
 * 5$$` or any larger aperture.
 */
+ (void)distanceTransformWithLabels:(Mat*)src dst:(Mat*)dst labels:(Mat*)labels distanceType:(DistanceTypes)distanceType maskSize:(DistanceTransformMasks)maskSize NS_SWIFT_NAME(distanceTransform(src:dst:labels:distanceType:maskSize:));


//
//  void cv::distanceTransform(Mat src, Mat& dst, DistanceTypes distanceType, DistanceTransformMasks maskSize, int dstType = CV_32F)
//
/**
 *
 * @param src 8-bit, single-channel (binary) source image.
 * @param dst Output image with calculated distances. It is a 8-bit or 32-bit floating-point,
 * single-channel image of the same size as src .
 * @param distanceType Type of distance, see #DistanceTypes
 * @param maskSize Size of the distance transform mask, see #DistanceTransformMasks. In case of the
 * #DIST_L1 or #DIST_C distance type, the parameter is forced to 3 because a `$$3\times 3$$` mask gives
 * the same result as `$$5\times 5$$` or any larger aperture.
 * @param dstType Type of output image. It can be CV_8U or CV_32F. Type CV_8U can be used only for
 * the first variant of the function and distanceType == #DIST_L1.
 */
+ (void)distanceTransform:(Mat*)src dst:(Mat*)dst distanceType:(DistanceTypes)distanceType maskSize:(DistanceTransformMasks)maskSize dstType:(int)dstType NS_SWIFT_NAME(distanceTransform(src:dst:distanceType:maskSize:dstType:));

/**
 *
 * @param src 8-bit, single-channel (binary) source image.
 * @param dst Output image with calculated distances. It is a 8-bit or 32-bit floating-point,
 * single-channel image of the same size as src .
 * @param distanceType Type of distance, see #DistanceTypes
 * @param maskSize Size of the distance transform mask, see #DistanceTransformMasks. In case of the
 * #DIST_L1 or #DIST_C distance type, the parameter is forced to 3 because a `$$3\times 3$$` mask gives
 * the same result as `$$5\times 5$$` or any larger aperture.
 * the first variant of the function and distanceType == #DIST_L1.
 */
+ (void)distanceTransform:(Mat*)src dst:(Mat*)dst distanceType:(DistanceTypes)distanceType maskSize:(DistanceTransformMasks)maskSize NS_SWIFT_NAME(distanceTransform(src:dst:distanceType:maskSize:));


//
//  int cv::floodFill(Mat& image, Mat& mask, Point seedPoint, Scalar newVal, Rect* rect = 0, Scalar loDiff = Scalar(), Scalar upDiff = Scalar(), int flags = 4)
//
/**
 * Fills a connected component with the given color.
 *
 * The function cv::floodFill fills a connected component starting from the seed point with the specified
 * color. The connectivity is determined by the color/brightness closeness of the neighbor pixels. The
 * pixel at `$$(x,y)$$` is considered to belong to the repainted domain if:
 *
 * - in case of a grayscale image and floating range
 * `$$\texttt{src} (x',y')- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} (x',y')+ \texttt{upDiff}$$`
 *
 *
 * - in case of a grayscale image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)+ \texttt{upDiff}$$`
 *
 *
 * - in case of a color image and floating range
 * `$$\texttt{src} (x',y')_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} (x',y')_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} (x',y')_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} (x',y')_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} (x',y')_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} (x',y')_b+ \texttt{upDiff} _b$$`
 *
 *
 * - in case of a color image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b+ \texttt{upDiff} _b$$`
 *
 *
 * where `$$src(x',y')$$` is the value of one of pixel neighbors that is already known to belong to the
 * component. That is, to be added to the connected component, a color/brightness of the pixel should
 * be close enough to:
 * - Color/brightness of one of its neighbors that already belong to the connected component in case
 * of a floating range.
 * - Color/brightness of the seed point in case of a fixed range.
 *
 * Use these functions to either mark a connected component with the specified color in-place, or build
 * a mask and then extract the contour, or copy the region to another image, and so on.
 *
 * @param image Input/output 1- or 3-channel, 8-bit, or floating-point image. It is modified by the
 * function unless the #FLOODFILL_MASK_ONLY flag is set in the second variant of the function. See
 * the details below.
 * @param mask Operation mask that should be a single-channel 8-bit image, 2 pixels wider and 2 pixels
 * taller than image. Since this is both an input and output parameter, you must take responsibility
 * of initializing it. Flood-filling cannot go across non-zero pixels in the input mask. For example,
 * an edge detector output can be used as a mask to stop filling at edges. On output, pixels in the
 * mask corresponding to filled pixels in the image are set to 1 or to the a value specified in flags
 * as described below. Additionally, the function fills the border of the mask with ones to simplify
 * internal processing. It is therefore possible to use the same mask in multiple calls to the function
 * to make sure the filled areas do not overlap.
 * @param seedPoint Starting point.
 * @param newVal New value of the repainted domain pixels.
 * @param loDiff Maximal lower brightness/color difference between the currently observed pixel and
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * @param upDiff Maximal upper brightness/color difference between the currently observed pixel and
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * @param rect Optional output parameter set by the function to the minimum bounding rectangle of the
 * repainted domain.
 * @param flags Operation flags. The first 8 bits contain a connectivity value. The default value of
 * 4 means that only the four nearest neighbor pixels (those that share an edge) are considered. A
 * connectivity value of 8 means that the eight nearest neighbor pixels (those that share a corner)
 * will be considered. The next 8 bits (8-16) contain a value between 1 and 255 with which to fill
 * the mask (the default value is 1). For example, 4 | ( 255 \<\< 8 ) will consider 4 nearest
 * neighbours and fill the mask with a value of 255. The following additional options occupy higher
 * bits and therefore may be further combined with the connectivity and mask fill values using
 * bit-wise or (|), see #FloodFillFlags.
 *
 * NOTE: Since the mask is larger than the filled image, a pixel `$$(x, y)$$` in image corresponds to the
 * pixel `$$(x+1, y+1)$$` in the mask .
 *
 * @see `+findContours:contours:hierarchy:mode:method:offset:`
 */
+ (int)floodFill:(Mat*)image mask:(Mat*)mask seedPoint:(Point2i*)seedPoint newVal:(Scalar*)newVal rect:(Rect2i*)rect loDiff:(Scalar*)loDiff upDiff:(Scalar*)upDiff flags:(int)flags NS_SWIFT_NAME(floodFill(image:mask:seedPoint:newVal:rect:loDiff:upDiff:flags:));

/**
 * Fills a connected component with the given color.
 *
 * The function cv::floodFill fills a connected component starting from the seed point with the specified
 * color. The connectivity is determined by the color/brightness closeness of the neighbor pixels. The
 * pixel at `$$(x,y)$$` is considered to belong to the repainted domain if:
 *
 * - in case of a grayscale image and floating range
 * `$$\texttt{src} (x',y')- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} (x',y')+ \texttt{upDiff}$$`
 *
 *
 * - in case of a grayscale image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)+ \texttt{upDiff}$$`
 *
 *
 * - in case of a color image and floating range
 * `$$\texttt{src} (x',y')_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} (x',y')_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} (x',y')_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} (x',y')_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} (x',y')_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} (x',y')_b+ \texttt{upDiff} _b$$`
 *
 *
 * - in case of a color image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b+ \texttt{upDiff} _b$$`
 *
 *
 * where `$$src(x',y')$$` is the value of one of pixel neighbors that is already known to belong to the
 * component. That is, to be added to the connected component, a color/brightness of the pixel should
 * be close enough to:
 * - Color/brightness of one of its neighbors that already belong to the connected component in case
 * of a floating range.
 * - Color/brightness of the seed point in case of a fixed range.
 *
 * Use these functions to either mark a connected component with the specified color in-place, or build
 * a mask and then extract the contour, or copy the region to another image, and so on.
 *
 * @param image Input/output 1- or 3-channel, 8-bit, or floating-point image. It is modified by the
 * function unless the #FLOODFILL_MASK_ONLY flag is set in the second variant of the function. See
 * the details below.
 * @param mask Operation mask that should be a single-channel 8-bit image, 2 pixels wider and 2 pixels
 * taller than image. Since this is both an input and output parameter, you must take responsibility
 * of initializing it. Flood-filling cannot go across non-zero pixels in the input mask. For example,
 * an edge detector output can be used as a mask to stop filling at edges. On output, pixels in the
 * mask corresponding to filled pixels in the image are set to 1 or to the a value specified in flags
 * as described below. Additionally, the function fills the border of the mask with ones to simplify
 * internal processing. It is therefore possible to use the same mask in multiple calls to the function
 * to make sure the filled areas do not overlap.
 * @param seedPoint Starting point.
 * @param newVal New value of the repainted domain pixels.
 * @param loDiff Maximal lower brightness/color difference between the currently observed pixel and
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * @param upDiff Maximal upper brightness/color difference between the currently observed pixel and
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * @param rect Optional output parameter set by the function to the minimum bounding rectangle of the
 * repainted domain.
 * 4 means that only the four nearest neighbor pixels (those that share an edge) are considered. A
 * connectivity value of 8 means that the eight nearest neighbor pixels (those that share a corner)
 * will be considered. The next 8 bits (8-16) contain a value between 1 and 255 with which to fill
 * the mask (the default value is 1). For example, 4 | ( 255 \<\< 8 ) will consider 4 nearest
 * neighbours and fill the mask with a value of 255. The following additional options occupy higher
 * bits and therefore may be further combined with the connectivity and mask fill values using
 * bit-wise or (|), see #FloodFillFlags.
 *
 * NOTE: Since the mask is larger than the filled image, a pixel `$$(x, y)$$` in image corresponds to the
 * pixel `$$(x+1, y+1)$$` in the mask .
 *
 * @see `+findContours:contours:hierarchy:mode:method:offset:`
 */
+ (int)floodFill:(Mat*)image mask:(Mat*)mask seedPoint:(Point2i*)seedPoint newVal:(Scalar*)newVal rect:(Rect2i*)rect loDiff:(Scalar*)loDiff upDiff:(Scalar*)upDiff NS_SWIFT_NAME(floodFill(image:mask:seedPoint:newVal:rect:loDiff:upDiff:));

/**
 * Fills a connected component with the given color.
 *
 * The function cv::floodFill fills a connected component starting from the seed point with the specified
 * color. The connectivity is determined by the color/brightness closeness of the neighbor pixels. The
 * pixel at `$$(x,y)$$` is considered to belong to the repainted domain if:
 *
 * - in case of a grayscale image and floating range
 * `$$\texttt{src} (x',y')- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} (x',y')+ \texttt{upDiff}$$`
 *
 *
 * - in case of a grayscale image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)+ \texttt{upDiff}$$`
 *
 *
 * - in case of a color image and floating range
 * `$$\texttt{src} (x',y')_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} (x',y')_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} (x',y')_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} (x',y')_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} (x',y')_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} (x',y')_b+ \texttt{upDiff} _b$$`
 *
 *
 * - in case of a color image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b+ \texttt{upDiff} _b$$`
 *
 *
 * where `$$src(x',y')$$` is the value of one of pixel neighbors that is already known to belong to the
 * component. That is, to be added to the connected component, a color/brightness of the pixel should
 * be close enough to:
 * - Color/brightness of one of its neighbors that already belong to the connected component in case
 * of a floating range.
 * - Color/brightness of the seed point in case of a fixed range.
 *
 * Use these functions to either mark a connected component with the specified color in-place, or build
 * a mask and then extract the contour, or copy the region to another image, and so on.
 *
 * @param image Input/output 1- or 3-channel, 8-bit, or floating-point image. It is modified by the
 * function unless the #FLOODFILL_MASK_ONLY flag is set in the second variant of the function. See
 * the details below.
 * @param mask Operation mask that should be a single-channel 8-bit image, 2 pixels wider and 2 pixels
 * taller than image. Since this is both an input and output parameter, you must take responsibility
 * of initializing it. Flood-filling cannot go across non-zero pixels in the input mask. For example,
 * an edge detector output can be used as a mask to stop filling at edges. On output, pixels in the
 * mask corresponding to filled pixels in the image are set to 1 or to the a value specified in flags
 * as described below. Additionally, the function fills the border of the mask with ones to simplify
 * internal processing. It is therefore possible to use the same mask in multiple calls to the function
 * to make sure the filled areas do not overlap.
 * @param seedPoint Starting point.
 * @param newVal New value of the repainted domain pixels.
 * @param loDiff Maximal lower brightness/color difference between the currently observed pixel and
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * @param rect Optional output parameter set by the function to the minimum bounding rectangle of the
 * repainted domain.
 * 4 means that only the four nearest neighbor pixels (those that share an edge) are considered. A
 * connectivity value of 8 means that the eight nearest neighbor pixels (those that share a corner)
 * will be considered. The next 8 bits (8-16) contain a value between 1 and 255 with which to fill
 * the mask (the default value is 1). For example, 4 | ( 255 \<\< 8 ) will consider 4 nearest
 * neighbours and fill the mask with a value of 255. The following additional options occupy higher
 * bits and therefore may be further combined with the connectivity and mask fill values using
 * bit-wise or (|), see #FloodFillFlags.
 *
 * NOTE: Since the mask is larger than the filled image, a pixel `$$(x, y)$$` in image corresponds to the
 * pixel `$$(x+1, y+1)$$` in the mask .
 *
 * @see `+findContours:contours:hierarchy:mode:method:offset:`
 */
+ (int)floodFill:(Mat*)image mask:(Mat*)mask seedPoint:(Point2i*)seedPoint newVal:(Scalar*)newVal rect:(Rect2i*)rect loDiff:(Scalar*)loDiff NS_SWIFT_NAME(floodFill(image:mask:seedPoint:newVal:rect:loDiff:));

/**
 * Fills a connected component with the given color.
 *
 * The function cv::floodFill fills a connected component starting from the seed point with the specified
 * color. The connectivity is determined by the color/brightness closeness of the neighbor pixels. The
 * pixel at `$$(x,y)$$` is considered to belong to the repainted domain if:
 *
 * - in case of a grayscale image and floating range
 * `$$\texttt{src} (x',y')- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} (x',y')+ \texttt{upDiff}$$`
 *
 *
 * - in case of a grayscale image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)+ \texttt{upDiff}$$`
 *
 *
 * - in case of a color image and floating range
 * `$$\texttt{src} (x',y')_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} (x',y')_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} (x',y')_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} (x',y')_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} (x',y')_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} (x',y')_b+ \texttt{upDiff} _b$$`
 *
 *
 * - in case of a color image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b+ \texttt{upDiff} _b$$`
 *
 *
 * where `$$src(x',y')$$` is the value of one of pixel neighbors that is already known to belong to the
 * component. That is, to be added to the connected component, a color/brightness of the pixel should
 * be close enough to:
 * - Color/brightness of one of its neighbors that already belong to the connected component in case
 * of a floating range.
 * - Color/brightness of the seed point in case of a fixed range.
 *
 * Use these functions to either mark a connected component with the specified color in-place, or build
 * a mask and then extract the contour, or copy the region to another image, and so on.
 *
 * @param image Input/output 1- or 3-channel, 8-bit, or floating-point image. It is modified by the
 * function unless the #FLOODFILL_MASK_ONLY flag is set in the second variant of the function. See
 * the details below.
 * @param mask Operation mask that should be a single-channel 8-bit image, 2 pixels wider and 2 pixels
 * taller than image. Since this is both an input and output parameter, you must take responsibility
 * of initializing it. Flood-filling cannot go across non-zero pixels in the input mask. For example,
 * an edge detector output can be used as a mask to stop filling at edges. On output, pixels in the
 * mask corresponding to filled pixels in the image are set to 1 or to the a value specified in flags
 * as described below. Additionally, the function fills the border of the mask with ones to simplify
 * internal processing. It is therefore possible to use the same mask in multiple calls to the function
 * to make sure the filled areas do not overlap.
 * @param seedPoint Starting point.
 * @param newVal New value of the repainted domain pixels.
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * @param rect Optional output parameter set by the function to the minimum bounding rectangle of the
 * repainted domain.
 * 4 means that only the four nearest neighbor pixels (those that share an edge) are considered. A
 * connectivity value of 8 means that the eight nearest neighbor pixels (those that share a corner)
 * will be considered. The next 8 bits (8-16) contain a value between 1 and 255 with which to fill
 * the mask (the default value is 1). For example, 4 | ( 255 \<\< 8 ) will consider 4 nearest
 * neighbours and fill the mask with a value of 255. The following additional options occupy higher
 * bits and therefore may be further combined with the connectivity and mask fill values using
 * bit-wise or (|), see #FloodFillFlags.
 *
 * NOTE: Since the mask is larger than the filled image, a pixel `$$(x, y)$$` in image corresponds to the
 * pixel `$$(x+1, y+1)$$` in the mask .
 *
 * @see `+findContours:contours:hierarchy:mode:method:offset:`
 */
+ (int)floodFill:(Mat*)image mask:(Mat*)mask seedPoint:(Point2i*)seedPoint newVal:(Scalar*)newVal rect:(Rect2i*)rect NS_SWIFT_NAME(floodFill(image:mask:seedPoint:newVal:rect:));

/**
 * Fills a connected component with the given color.
 *
 * The function cv::floodFill fills a connected component starting from the seed point with the specified
 * color. The connectivity is determined by the color/brightness closeness of the neighbor pixels. The
 * pixel at `$$(x,y)$$` is considered to belong to the repainted domain if:
 *
 * - in case of a grayscale image and floating range
 * `$$\texttt{src} (x',y')- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} (x',y')+ \texttt{upDiff}$$`
 *
 *
 * - in case of a grayscale image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)- \texttt{loDiff} \leq \texttt{src} (x,y)  \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)+ \texttt{upDiff}$$`
 *
 *
 * - in case of a color image and floating range
 * `$$\texttt{src} (x',y')_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} (x',y')_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} (x',y')_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} (x',y')_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} (x',y')_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} (x',y')_b+ \texttt{upDiff} _b$$`
 *
 *
 * - in case of a color image and fixed range
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r- \texttt{loDiff} _r \leq \texttt{src} (x,y)_r \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_r+ \texttt{upDiff} _r,$$`
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g- \texttt{loDiff} _g \leq \texttt{src} (x,y)_g \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_g+ \texttt{upDiff} _g$$`
 * and
 * `$$\texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b- \texttt{loDiff} _b \leq \texttt{src} (x,y)_b \leq \texttt{src} ( \texttt{seedPoint} .x, \texttt{seedPoint} .y)_b+ \texttt{upDiff} _b$$`
 *
 *
 * where `$$src(x',y')$$` is the value of one of pixel neighbors that is already known to belong to the
 * component. That is, to be added to the connected component, a color/brightness of the pixel should
 * be close enough to:
 * - Color/brightness of one of its neighbors that already belong to the connected component in case
 * of a floating range.
 * - Color/brightness of the seed point in case of a fixed range.
 *
 * Use these functions to either mark a connected component with the specified color in-place, or build
 * a mask and then extract the contour, or copy the region to another image, and so on.
 *
 * @param image Input/output 1- or 3-channel, 8-bit, or floating-point image. It is modified by the
 * function unless the #FLOODFILL_MASK_ONLY flag is set in the second variant of the function. See
 * the details below.
 * @param mask Operation mask that should be a single-channel 8-bit image, 2 pixels wider and 2 pixels
 * taller than image. Since this is both an input and output parameter, you must take responsibility
 * of initializing it. Flood-filling cannot go across non-zero pixels in the input mask. For example,
 * an edge detector output can be used as a mask to stop filling at edges. On output, pixels in the
 * mask corresponding to filled pixels in the image are set to 1 or to the a value specified in flags
 * as described below. Additionally, the function fills the border of the mask with ones to simplify
 * internal processing. It is therefore possible to use the same mask in multiple calls to the function
 * to make sure the filled areas do not overlap.
 * @param seedPoint Starting point.
 * @param newVal New value of the repainted domain pixels.
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * one of its neighbors belonging to the component, or a seed pixel being added to the component.
 * repainted domain.
 * 4 means that only the four nearest neighbor pixels (those that share an edge) are considered. A
 * connectivity value of 8 means that the eight nearest neighbor pixels (those that share a corner)
 * will be considered. The next 8 bits (8-16) contain a value between 1 and 255 with which to fill
 * the mask (the default value is 1). For example, 4 | ( 255 \<\< 8 ) will consider 4 nearest
 * neighbours and fill the mask with a value of 255. The following additional options occupy higher
 * bits and therefore may be further combined with the connectivity and mask fill values using
 * bit-wise or (|), see #FloodFillFlags.
 *
 * NOTE: Since the mask is larger than the filled image, a pixel `$$(x, y)$$` in image corresponds to the
 * pixel `$$(x+1, y+1)$$` in the mask .
 *
 * @see `+findContours:contours:hierarchy:mode:method:offset:`
 */
+ (int)floodFill:(Mat*)image mask:(Mat*)mask seedPoint:(Point2i*)seedPoint newVal:(Scalar*)newVal NS_SWIFT_NAME(floodFill(image:mask:seedPoint:newVal:));


//
//  void cv::blendLinear(Mat src1, Mat src2, Mat weights1, Mat weights2, Mat& dst)
//
+ (void)blendLinear:(Mat*)src1 src2:(Mat*)src2 weights1:(Mat*)weights1 weights2:(Mat*)weights2 dst:(Mat*)dst NS_SWIFT_NAME(blendLinear(src1:src2:weights1:weights2:dst:));


//
//  void cv::cvtColor(Mat src, Mat& dst, ColorConversionCodes code, int dstCn = 0)
//
/**
 * Converts an image from one color space to another.
 *
 * The function converts an input image from one color space to another. In case of a transformation
 * to-from RGB color space, the order of the channels should be specified explicitly (RGB or BGR). Note
 * that the default color format in OpenCV is often referred to as RGB but it is actually BGR (the
 * bytes are reversed). So the first byte in a standard (24-bit) color image will be an 8-bit Blue
 * component, the second byte will be Green, and the third byte will be Red. The fourth, fifth, and
 * sixth bytes would then be the second pixel (Blue, then Green, then Red), and so on.
 *
 * The conventional ranges for R, G, and B channel values are:
 * -   0 to 255 for CV_8U images
 * -   0 to 65535 for CV_16U images
 * -   0 to 1 for CV_32F images
 *
 * In case of linear transformations, the range does not matter. But in case of a non-linear
 * transformation, an input RGB image should be normalized to the proper value range to get the correct
 * results, for example, for RGB `$$\rightarrow$$` L\*u\*v\* transformation. For example, if you have a
 * 32-bit floating-point image directly converted from an 8-bit image without any scaling, then it will
 * have the 0..255 value range instead of 0..1 assumed by the function. So, before calling #cvtColor ,
 * you need first to scale the image down:
 *
 *     img *= 1./255;
 *     cvtColor(img, img, COLOR_BGR2Luv);
 *
 * If you use #cvtColor with 8-bit images, the conversion will have some information lost. For many
 * applications, this will not be noticeable but it is recommended to use 32-bit images in applications
 * that need the full range of colors or that convert an image before an operation and then convert
 * back.
 *
 * If conversion adds the alpha channel, its value will set to the maximum of corresponding channel
 * range: 255 for CV_8U, 65535 for CV_16U, 1 for CV_32F.
 *
 * @param src input image: 8-bit unsigned, 16-bit unsigned ( CV_16UC... ), or single-precision
 * floating-point.
 * @param dst output image of the same size and depth as src.
 * @param code color space conversion code (see #ColorConversionCodes).
 * @param dstCn number of channels in the destination image; if the parameter is 0, the number of the
 * channels is derived automatically from src and code.
 *
 * @see `REF: imgproc_color_conversions`
 */
+ (void)cvtColor:(Mat*)src dst:(Mat*)dst code:(ColorConversionCodes)code dstCn:(int)dstCn NS_SWIFT_NAME(cvtColor(src:dst:code:dstCn:));

/**
 * Converts an image from one color space to another.
 *
 * The function converts an input image from one color space to another. In case of a transformation
 * to-from RGB color space, the order of the channels should be specified explicitly (RGB or BGR). Note
 * that the default color format in OpenCV is often referred to as RGB but it is actually BGR (the
 * bytes are reversed). So the first byte in a standard (24-bit) color image will be an 8-bit Blue
 * component, the second byte will be Green, and the third byte will be Red. The fourth, fifth, and
 * sixth bytes would then be the second pixel (Blue, then Green, then Red), and so on.
 *
 * The conventional ranges for R, G, and B channel values are:
 * -   0 to 255 for CV_8U images
 * -   0 to 65535 for CV_16U images
 * -   0 to 1 for CV_32F images
 *
 * In case of linear transformations, the range does not matter. But in case of a non-linear
 * transformation, an input RGB image should be normalized to the proper value range to get the correct
 * results, for example, for RGB `$$\rightarrow$$` L\*u\*v\* transformation. For example, if you have a
 * 32-bit floating-point image directly converted from an 8-bit image without any scaling, then it will
 * have the 0..255 value range instead of 0..1 assumed by the function. So, before calling #cvtColor ,
 * you need first to scale the image down:
 *
 *     img *= 1./255;
 *     cvtColor(img, img, COLOR_BGR2Luv);
 *
 * If you use #cvtColor with 8-bit images, the conversion will have some information lost. For many
 * applications, this will not be noticeable but it is recommended to use 32-bit images in applications
 * that need the full range of colors or that convert an image before an operation and then convert
 * back.
 *
 * If conversion adds the alpha channel, its value will set to the maximum of corresponding channel
 * range: 255 for CV_8U, 65535 for CV_16U, 1 for CV_32F.
 *
 * @param src input image: 8-bit unsigned, 16-bit unsigned ( CV_16UC... ), or single-precision
 * floating-point.
 * @param dst output image of the same size and depth as src.
 * @param code color space conversion code (see #ColorConversionCodes).
 * channels is derived automatically from src and code.
 *
 * @see `REF: imgproc_color_conversions`
 */
+ (void)cvtColor:(Mat*)src dst:(Mat*)dst code:(ColorConversionCodes)code NS_SWIFT_NAME(cvtColor(src:dst:code:));


//
//  void cv::cvtColorTwoPlane(Mat src1, Mat src2, Mat& dst, int code)
//
/**
 * Converts an image from one color space to another where the source image is
 * stored in two planes.
 *
 * This function only supports YUV420 to RGB conversion as of now.
 *
 * - #COLOR_YUV2BGR_NV12
 * - #COLOR_YUV2RGB_NV12
 * - #COLOR_YUV2BGRA_NV12
 * - #COLOR_YUV2RGBA_NV12
 * - #COLOR_YUV2BGR_NV21
 * - #COLOR_YUV2RGB_NV21
 * - #COLOR_YUV2BGRA_NV21
 * - #COLOR_YUV2RGBA_NV21
 */
+ (void)cvtColorTwoPlane:(Mat*)src1 src2:(Mat*)src2 dst:(Mat*)dst code:(int)code NS_SWIFT_NAME(cvtColorTwoPlane(src1:src2:dst:code:));


//
//  void cv::demosaicing(Mat src, Mat& dst, int code, int dstCn = 0)
//
/**
 * main function for all demosaicing processes
 *
 * @param src input image: 8-bit unsigned or 16-bit unsigned.
 * @param dst output image of the same size and depth as src.
 * @param code Color space conversion code (see the description below).
 * @param dstCn number of channels in the destination image; if the parameter is 0, the number of the
 * channels is derived automatically from src and code.
 *
 * The function can do the following transformations:
 *
 * -   Demosaicing using bilinear interpolation
 *
 *     #COLOR_BayerBG2BGR , #COLOR_BayerGB2BGR , #COLOR_BayerRG2BGR , #COLOR_BayerGR2BGR
 *
 *     #COLOR_BayerBG2GRAY , #COLOR_BayerGB2GRAY , #COLOR_BayerRG2GRAY , #COLOR_BayerGR2GRAY
 *
 * -   Demosaicing using Variable Number of Gradients.
 *
 *     #COLOR_BayerBG2BGR_VNG , #COLOR_BayerGB2BGR_VNG , #COLOR_BayerRG2BGR_VNG , #COLOR_BayerGR2BGR_VNG
 *
 * -   Edge-Aware Demosaicing.
 *
 *     #COLOR_BayerBG2BGR_EA , #COLOR_BayerGB2BGR_EA , #COLOR_BayerRG2BGR_EA , #COLOR_BayerGR2BGR_EA
 *
 * -   Demosaicing with alpha channel
 *
 *     #COLOR_BayerBG2BGRA , #COLOR_BayerGB2BGRA , #COLOR_BayerRG2BGRA , #COLOR_BayerGR2BGRA
 *
 * @see `+cvtColor:dst:code:dstCn:`
 */
+ (void)demosaicing:(Mat*)src dst:(Mat*)dst code:(int)code dstCn:(int)dstCn NS_SWIFT_NAME(demosaicing(src:dst:code:dstCn:));

/**
 * main function for all demosaicing processes
 *
 * @param src input image: 8-bit unsigned or 16-bit unsigned.
 * @param dst output image of the same size and depth as src.
 * @param code Color space conversion code (see the description below).
 * channels is derived automatically from src and code.
 *
 * The function can do the following transformations:
 *
 * -   Demosaicing using bilinear interpolation
 *
 *     #COLOR_BayerBG2BGR , #COLOR_BayerGB2BGR , #COLOR_BayerRG2BGR , #COLOR_BayerGR2BGR
 *
 *     #COLOR_BayerBG2GRAY , #COLOR_BayerGB2GRAY , #COLOR_BayerRG2GRAY , #COLOR_BayerGR2GRAY
 *
 * -   Demosaicing using Variable Number of Gradients.
 *
 *     #COLOR_BayerBG2BGR_VNG , #COLOR_BayerGB2BGR_VNG , #COLOR_BayerRG2BGR_VNG , #COLOR_BayerGR2BGR_VNG
 *
 * -   Edge-Aware Demosaicing.
 *
 *     #COLOR_BayerBG2BGR_EA , #COLOR_BayerGB2BGR_EA , #COLOR_BayerRG2BGR_EA , #COLOR_BayerGR2BGR_EA
 *
 * -   Demosaicing with alpha channel
 *
 *     #COLOR_BayerBG2BGRA , #COLOR_BayerGB2BGRA , #COLOR_BayerRG2BGRA , #COLOR_BayerGR2BGRA
 *
 * @see `+cvtColor:dst:code:dstCn:`
 */
+ (void)demosaicing:(Mat*)src dst:(Mat*)dst code:(int)code NS_SWIFT_NAME(demosaicing(src:dst:code:));


//
//  Moments cv::moments(Mat array, bool binaryImage = false)
//
/**
 * Calculates all of the moments up to the third order of a polygon or rasterized shape.
 *
 * The function computes moments, up to the 3rd order, of a vector shape or a rasterized shape. The
 * results are returned in the structure cv::Moments.
 *
 * @param array Raster image (single-channel, 8-bit or floating-point 2D array) or an array (
 * `$$1 \times N$$` or `$$N \times 1$$` ) of 2D points (Point or Point2f ).
 * @param binaryImage If it is true, all non-zero image pixels are treated as 1's. The parameter is
 * used for images only.
 * @return moments.
 *
 * NOTE: Only applicable to contour moments calculations from Python bindings: Note that the numpy
 * type for the input array should be either np.int32 or np.float32.
 *
 * @see `+contourArea:oriented:`, `+arcLength:closed:`
 */
+ (Moments*)moments:(Mat*)array binaryImage:(BOOL)binaryImage NS_SWIFT_NAME(moments(array:binaryImage:));

/**
 * Calculates all of the moments up to the third order of a polygon or rasterized shape.
 *
 * The function computes moments, up to the 3rd order, of a vector shape or a rasterized shape. The
 * results are returned in the structure cv::Moments.
 *
 * @param array Raster image (single-channel, 8-bit or floating-point 2D array) or an array (
 * `$$1 \times N$$` or `$$N \times 1$$` ) of 2D points (Point or Point2f ).
 * used for images only.
 * @return moments.
 *
 * NOTE: Only applicable to contour moments calculations from Python bindings: Note that the numpy
 * type for the input array should be either np.int32 or np.float32.
 *
 * @see `+contourArea:oriented:`, `+arcLength:closed:`
 */
+ (Moments*)moments:(Mat*)array NS_SWIFT_NAME(moments(array:));


//
//  void cv::HuMoments(Moments m, Mat& hu)
//
+ (void)HuMoments:(Moments*)m hu:(Mat*)hu NS_SWIFT_NAME(HuMoments(m:hu:));


//
//  void cv::matchTemplate(Mat image, Mat templ, Mat& result, TemplateMatchModes method, Mat mask = Mat())
//
/**
 * Compares a template against overlapped image regions.
 *
 * The function slides through image , compares the overlapped patches of size `$$w \times h$$` against
 * templ using the specified method and stores the comparison results in result . #TemplateMatchModes
 * describes the formulae for the available comparison methods ( `$$I$$` denotes image, `$$T$$`
 * template, `$$R$$` result, `$$M$$` the optional mask ). The summation is done over template and/or
 * the image patch: `$$x' = 0...w-1, y' = 0...h-1$$`
 *
 * After the function finishes the comparison, the best matches can be found as global minimums (when
 * #TM_SQDIFF was used) or maximums (when #TM_CCORR or #TM_CCOEFF was used) using the
 * #minMaxLoc function. In case of a color image, template summation in the numerator and each sum in
 * the denominator is done over all of the channels and separate mean values are used for each channel.
 * That is, the function can take a color template and a color image. The result will still be a
 * single-channel image, which is easier to analyze.
 *
 * @param image Image where the search is running. It must be 8-bit or 32-bit floating-point.
 * @param templ Searched template. It must be not greater than the source image and have the same
 * data type.
 * @param result Map of comparison results. It must be single-channel 32-bit floating-point. If image
 * is `$$W \times H$$` and templ is `$$w \times h$$` , then result is `$$(W-w+1) \times (H-h+1)$$` .
 * @param method Parameter specifying the comparison method, see #TemplateMatchModes
 * @param mask Optional mask. It must have the same size as templ. It must either have the same number
 *             of channels as template or only one channel, which is then used for all template and
 *             image channels. If the data type is #CV_8U, the mask is interpreted as a binary mask,
 *             meaning only elements where mask is nonzero are used and are kept unchanged independent
 *             of the actual mask value (weight equals 1). For data tpye #CV_32F, the mask values are
 *             used as weights. The exact formulas are documented in #TemplateMatchModes.
 */
+ (void)matchTemplate:(Mat*)image templ:(Mat*)templ result:(Mat*)result method:(TemplateMatchModes)method mask:(Mat*)mask NS_SWIFT_NAME(matchTemplate(image:templ:result:method:mask:));

/**
 * Compares a template against overlapped image regions.
 *
 * The function slides through image , compares the overlapped patches of size `$$w \times h$$` against
 * templ using the specified method and stores the comparison results in result . #TemplateMatchModes
 * describes the formulae for the available comparison methods ( `$$I$$` denotes image, `$$T$$`
 * template, `$$R$$` result, `$$M$$` the optional mask ). The summation is done over template and/or
 * the image patch: `$$x' = 0...w-1, y' = 0...h-1$$`
 *
 * After the function finishes the comparison, the best matches can be found as global minimums (when
 * #TM_SQDIFF was used) or maximums (when #TM_CCORR or #TM_CCOEFF was used) using the
 * #minMaxLoc function. In case of a color image, template summation in the numerator and each sum in
 * the denominator is done over all of the channels and separate mean values are used for each channel.
 * That is, the function can take a color template and a color image. The result will still be a
 * single-channel image, which is easier to analyze.
 *
 * @param image Image where the search is running. It must be 8-bit or 32-bit floating-point.
 * @param templ Searched template. It must be not greater than the source image and have the same
 * data type.
 * @param result Map of comparison results. It must be single-channel 32-bit floating-point. If image
 * is `$$W \times H$$` and templ is `$$w \times h$$` , then result is `$$(W-w+1) \times (H-h+1)$$` .
 * @param method Parameter specifying the comparison method, see #TemplateMatchModes
 *             of channels as template or only one channel, which is then used for all template and
 *             image channels. If the data type is #CV_8U, the mask is interpreted as a binary mask,
 *             meaning only elements where mask is nonzero are used and are kept unchanged independent
 *             of the actual mask value (weight equals 1). For data tpye #CV_32F, the mask values are
 *             used as weights. The exact formulas are documented in #TemplateMatchModes.
 */
+ (void)matchTemplate:(Mat*)image templ:(Mat*)templ result:(Mat*)result method:(TemplateMatchModes)method NS_SWIFT_NAME(matchTemplate(image:templ:result:method:));


//
//  int cv::connectedComponents(Mat image, Mat& labels, int connectivity, int ltype, int ccltype)
//
/**
 * computes the connected components labeled image of boolean image
 *
 * image with 4 or 8 way connectivity - returns N, the total number of labels [0, N-1] where 0
 * represents the background label. ltype specifies the output label image type, an important
 * consideration based on the total number of labels or alternatively the total number of pixels in
 * the source image. ccltype specifies the connected components labeling algorithm to use, currently
 * Grana (BBDT) and Wu's (SAUF) CITE: Wu2009 algorithms are supported, see the #ConnectedComponentsAlgorithmsTypes
 * for details. Note that SAUF algorithm forces a row major ordering of labels while BBDT does not.
 * This function uses parallel version of both Grana and Wu's algorithms if at least one allowed
 * parallel framework is enabled and if the rows of the image are at least twice the number returned by #getNumberOfCPUs.
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param connectivity 8 or 4 for 8-way or 4-way connectivity respectively
 * @param ltype output image label type. Currently CV_32S and CV_16U are supported.
 * @param ccltype connected components algorithm type (see the #ConnectedComponentsAlgorithmsTypes).
 */
+ (int)connectedComponentsWithAlgorithm:(Mat*)image labels:(Mat*)labels connectivity:(int)connectivity ltype:(int)ltype ccltype:(int)ccltype NS_SWIFT_NAME(connectedComponents(image:labels:connectivity:ltype:ccltype:));


//
//  int cv::connectedComponents(Mat image, Mat& labels, int connectivity = 8, int ltype = CV_32S)
//
/**
 *
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param connectivity 8 or 4 for 8-way or 4-way connectivity respectively
 * @param ltype output image label type. Currently CV_32S and CV_16U are supported.
 */
+ (int)connectedComponents:(Mat*)image labels:(Mat*)labels connectivity:(int)connectivity ltype:(int)ltype NS_SWIFT_NAME(connectedComponents(image:labels:connectivity:ltype:));

/**
 *
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param connectivity 8 or 4 for 8-way or 4-way connectivity respectively
 */
+ (int)connectedComponents:(Mat*)image labels:(Mat*)labels connectivity:(int)connectivity NS_SWIFT_NAME(connectedComponents(image:labels:connectivity:));

/**
 *
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 */
+ (int)connectedComponents:(Mat*)image labels:(Mat*)labels NS_SWIFT_NAME(connectedComponents(image:labels:));


//
//  int cv::connectedComponentsWithStats(Mat image, Mat& labels, Mat& stats, Mat& centroids, int connectivity, int ltype, ConnectedComponentsAlgorithmsTypes ccltype)
//
/**
 * computes the connected components labeled image of boolean image and also produces a statistics output for each label
 *
 * image with 4 or 8 way connectivity - returns N, the total number of labels [0, N-1] where 0
 * represents the background label. ltype specifies the output label image type, an important
 * consideration based on the total number of labels or alternatively the total number of pixels in
 * the source image. ccltype specifies the connected components labeling algorithm to use, currently
 * Grana's (BBDT) and Wu's (SAUF) CITE: Wu2009 algorithms are supported, see the #ConnectedComponentsAlgorithmsTypes
 * for details. Note that SAUF algorithm forces a row major ordering of labels while BBDT does not.
 * This function uses parallel version of both Grana and Wu's algorithms (statistics included) if at least one allowed
 * parallel framework is enabled and if the rows of the image are at least twice the number returned by #getNumberOfCPUs.
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param stats statistics output for each label, including the background label.
 * Statistics are accessed via stats(label, COLUMN) where COLUMN is one of
 * #ConnectedComponentsTypes, selecting the statistic. The data type is CV_32S.
 * @param centroids centroid output for each label, including the background label. Centroids are
 * accessed via centroids(label, 0) for x and centroids(label, 1) for y. The data type CV_64F.
 * @param connectivity 8 or 4 for 8-way or 4-way connectivity respectively
 * @param ltype output image label type. Currently CV_32S and CV_16U are supported.
 * @param ccltype connected components algorithm type (see #ConnectedComponentsAlgorithmsTypes).
 */
+ (int)connectedComponentsWithStatsWithAlgorithm:(Mat*)image labels:(Mat*)labels stats:(Mat*)stats centroids:(Mat*)centroids connectivity:(int)connectivity ltype:(int)ltype ccltype:(ConnectedComponentsAlgorithmsTypes)ccltype NS_SWIFT_NAME(connectedComponentsWithStats(image:labels:stats:centroids:connectivity:ltype:ccltype:));


//
//  int cv::connectedComponentsWithStats(Mat image, Mat& labels, Mat& stats, Mat& centroids, int connectivity = 8, int ltype = CV_32S)
//
/**
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param stats statistics output for each label, including the background label.
 * Statistics are accessed via stats(label, COLUMN) where COLUMN is one of
 * #ConnectedComponentsTypes, selecting the statistic. The data type is CV_32S.
 * @param centroids centroid output for each label, including the background label. Centroids are
 * accessed via centroids(label, 0) for x and centroids(label, 1) for y. The data type CV_64F.
 * @param connectivity 8 or 4 for 8-way or 4-way connectivity respectively
 * @param ltype output image label type. Currently CV_32S and CV_16U are supported.
 */
+ (int)connectedComponentsWithStats:(Mat*)image labels:(Mat*)labels stats:(Mat*)stats centroids:(Mat*)centroids connectivity:(int)connectivity ltype:(int)ltype NS_SWIFT_NAME(connectedComponentsWithStats(image:labels:stats:centroids:connectivity:ltype:));

/**
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param stats statistics output for each label, including the background label.
 * Statistics are accessed via stats(label, COLUMN) where COLUMN is one of
 * #ConnectedComponentsTypes, selecting the statistic. The data type is CV_32S.
 * @param centroids centroid output for each label, including the background label. Centroids are
 * accessed via centroids(label, 0) for x and centroids(label, 1) for y. The data type CV_64F.
 * @param connectivity 8 or 4 for 8-way or 4-way connectivity respectively
 */
+ (int)connectedComponentsWithStats:(Mat*)image labels:(Mat*)labels stats:(Mat*)stats centroids:(Mat*)centroids connectivity:(int)connectivity NS_SWIFT_NAME(connectedComponentsWithStats(image:labels:stats:centroids:connectivity:));

/**
 *
 * @param image the 8-bit single-channel image to be labeled
 * @param labels destination labeled image
 * @param stats statistics output for each label, including the background label.
 * Statistics are accessed via stats(label, COLUMN) where COLUMN is one of
 * #ConnectedComponentsTypes, selecting the statistic. The data type is CV_32S.
 * @param centroids centroid output for each label, including the background label. Centroids are
 * accessed via centroids(label, 0) for x and centroids(label, 1) for y. The data type CV_64F.
 */
+ (int)connectedComponentsWithStats:(Mat*)image labels:(Mat*)labels stats:(Mat*)stats centroids:(Mat*)centroids NS_SWIFT_NAME(connectedComponentsWithStats(image:labels:stats:centroids:));


//
//  void cv::findContours(Mat image, vector_vector_Point& contours, Mat& hierarchy, RetrievalModes mode, ContourApproximationModes method, Point offset = Point())
//
/**
 * Finds contours in a binary image.
 *
 * The function retrieves contours from the binary image using the algorithm CITE: Suzuki85 . The contours
 * are a useful tool for shape analysis and object detection and recognition. See squares.cpp in the
 * OpenCV sample directory.
 * NOTE: Since opencv 3.2 source image is not modified by this function.
 *
 * @param image Source, an 8-bit single-channel image. Non-zero pixels are treated as 1's. Zero
 * pixels remain 0's, so the image is treated as binary . You can use #compare, #inRange, #threshold ,
 * #adaptiveThreshold, #Canny, and others to create a binary image out of a grayscale or color one.
 * If mode equals to #RETR_CCOMP or #RETR_FLOODFILL, the input can also be a 32-bit integer image of labels (CV_32SC1).
 * @param contours Detected contours. Each contour is stored as a vector of points (e.g.
 * std::vector<std::vector<cv::Point> >).
 * @param hierarchy Optional output vector (e.g. std::vector<cv::Vec4i>), containing information about the image topology. It has
 * as many elements as the number of contours. For each i-th contour contours[i], the elements
 * hierarchy[i][0] , hierarchy[i][1] , hierarchy[i][2] , and hierarchy[i][3] are set to 0-based indices
 * in contours of the next and previous contours at the same hierarchical level, the first child
 * contour and the parent contour, respectively. If for the contour i there are no next, previous,
 * parent, or nested contours, the corresponding elements of hierarchy[i] will be negative.
 * @param mode Contour retrieval mode, see #RetrievalModes
 * @param method Contour approximation method, see #ContourApproximationModes
 * @param offset Optional offset by which every contour point is shifted. This is useful if the
 * contours are extracted from the image ROI and then they should be analyzed in the whole image
 * context.
 */
+ (void)findContours:(Mat*)image contours:(NSMutableArray<NSMutableArray<Point2i*>*>*)contours hierarchy:(Mat*)hierarchy mode:(RetrievalModes)mode method:(ContourApproximationModes)method offset:(Point2i*)offset NS_SWIFT_NAME(findContours(image:contours:hierarchy:mode:method:offset:));

/**
 * Finds contours in a binary image.
 *
 * The function retrieves contours from the binary image using the algorithm CITE: Suzuki85 . The contours
 * are a useful tool for shape analysis and object detection and recognition. See squares.cpp in the
 * OpenCV sample directory.
 * NOTE: Since opencv 3.2 source image is not modified by this function.
 *
 * @param image Source, an 8-bit single-channel image. Non-zero pixels are treated as 1's. Zero
 * pixels remain 0's, so the image is treated as binary . You can use #compare, #inRange, #threshold ,
 * #adaptiveThreshold, #Canny, and others to create a binary image out of a grayscale or color one.
 * If mode equals to #RETR_CCOMP or #RETR_FLOODFILL, the input can also be a 32-bit integer image of labels (CV_32SC1).
 * @param contours Detected contours. Each contour is stored as a vector of points (e.g.
 * std::vector<std::vector<cv::Point> >).
 * @param hierarchy Optional output vector (e.g. std::vector<cv::Vec4i>), containing information about the image topology. It has
 * as many elements as the number of contours. For each i-th contour contours[i], the elements
 * hierarchy[i][0] , hierarchy[i][1] , hierarchy[i][2] , and hierarchy[i][3] are set to 0-based indices
 * in contours of the next and previous contours at the same hierarchical level, the first child
 * contour and the parent contour, respectively. If for the contour i there are no next, previous,
 * parent, or nested contours, the corresponding elements of hierarchy[i] will be negative.
 * @param mode Contour retrieval mode, see #RetrievalModes
 * @param method Contour approximation method, see #ContourApproximationModes
 * contours are extracted from the image ROI and then they should be analyzed in the whole image
 * context.
 */
+ (void)findContours:(Mat*)image contours:(NSMutableArray<NSMutableArray<Point2i*>*>*)contours hierarchy:(Mat*)hierarchy mode:(RetrievalModes)mode method:(ContourApproximationModes)method NS_SWIFT_NAME(findContours(image:contours:hierarchy:mode:method:));


//
//  void cv::approxPolyDP(vector_Point2f curve, vector_Point2f& approxCurve, double epsilon, bool closed)
//
/**
 * Approximates a polygonal curve(s) with the specified precision.
 *
 * The function cv::approxPolyDP approximates a curve or a polygon with another curve/polygon with less
 * vertices so that the distance between them is less or equal to the specified precision. It uses the
 * Douglas-Peucker algorithm <http://en.wikipedia.org/wiki/Ramer-Douglas-Peucker_algorithm>
 *
 * @param curve Input vector of a 2D point stored in std::vector or Mat
 * @param approxCurve Result of the approximation. The type should match the type of the input curve.
 * @param epsilon Parameter specifying the approximation accuracy. This is the maximum distance
 * between the original curve and its approximation.
 * @param closed If true, the approximated curve is closed (its first and last vertices are
 * connected). Otherwise, it is not closed.
 */
+ (void)approxPolyDP:(NSArray<Point2f*>*)curve approxCurve:(NSMutableArray<Point2f*>*)approxCurve epsilon:(double)epsilon closed:(BOOL)closed NS_SWIFT_NAME(approxPolyDP(curve:approxCurve:epsilon:closed:));


//
//  double cv::arcLength(vector_Point2f curve, bool closed)
//
/**
 * Calculates a contour perimeter or a curve length.
 *
 * The function computes a curve length or a closed contour perimeter.
 *
 * @param curve Input vector of 2D points, stored in std::vector or Mat.
 * @param closed Flag indicating whether the curve is closed or not.
 */
+ (double)arcLength:(NSArray<Point2f*>*)curve closed:(BOOL)closed NS_SWIFT_NAME(arcLength(curve:closed:));


//
//  Rect cv::boundingRect(Mat array)
//
/**
 * Calculates the up-right bounding rectangle of a point set or non-zero pixels of gray-scale image.
 *
 * The function calculates and returns the minimal up-right bounding rectangle for the specified point set or
 * non-zero pixels of gray-scale image.
 *
 * @param array Input gray-scale image or 2D point set, stored in std::vector or Mat.
 */
+ (Rect2i*)boundingRect:(Mat*)array NS_SWIFT_NAME(boundingRect(array:));


//
//  double cv::contourArea(Mat contour, bool oriented = false)
//
/**
 * Calculates a contour area.
 *
 * The function computes a contour area. Similarly to moments , the area is computed using the Green
 * formula. Thus, the returned area and the number of non-zero pixels, if you draw the contour using
 * #drawContours or #fillPoly , can be different. Also, the function will most certainly give a wrong
 * results for contours with self-intersections.
 *
 * Example:
 *
 *     vector<Point> contour;
 *     contour.push_back(Point2f(0, 0));
 *     contour.push_back(Point2f(10, 0));
 *     contour.push_back(Point2f(10, 10));
 *     contour.push_back(Point2f(5, 4));
 *
 *     double area0 = contourArea(contour);
 *     vector<Point> approx;
 *     approxPolyDP(contour, approx, 5, true);
 *     double area1 = contourArea(approx);
 *
 *     cout << "area0 =" << area0 << endl <<
 *             "area1 =" << area1 << endl <<
 *             "approx poly vertices" << approx.size() << endl;
 *
 * @param contour Input vector of 2D points (contour vertices), stored in std::vector or Mat.
 * @param oriented Oriented area flag. If it is true, the function returns a signed area value,
 * depending on the contour orientation (clockwise or counter-clockwise). Using this feature you can
 * determine orientation of a contour by taking the sign of an area. By default, the parameter is
 * false, which means that the absolute value is returned.
 */
+ (double)contourArea:(Mat*)contour oriented:(BOOL)oriented NS_SWIFT_NAME(contourArea(contour:oriented:));

/**
 * Calculates a contour area.
 *
 * The function computes a contour area. Similarly to moments , the area is computed using the Green
 * formula. Thus, the returned area and the number of non-zero pixels, if you draw the contour using
 * #drawContours or #fillPoly , can be different. Also, the function will most certainly give a wrong
 * results for contours with self-intersections.
 *
 * Example:
 *
 *     vector<Point> contour;
 *     contour.push_back(Point2f(0, 0));
 *     contour.push_back(Point2f(10, 0));
 *     contour.push_back(Point2f(10, 10));
 *     contour.push_back(Point2f(5, 4));
 *
 *     double area0 = contourArea(contour);
 *     vector<Point> approx;
 *     approxPolyDP(contour, approx, 5, true);
 *     double area1 = contourArea(approx);
 *
 *     cout << "area0 =" << area0 << endl <<
 *             "area1 =" << area1 << endl <<
 *             "approx poly vertices" << approx.size() << endl;
 *
 * @param contour Input vector of 2D points (contour vertices), stored in std::vector or Mat.
 * depending on the contour orientation (clockwise or counter-clockwise). Using this feature you can
 * determine orientation of a contour by taking the sign of an area. By default, the parameter is
 * false, which means that the absolute value is returned.
 */
+ (double)contourArea:(Mat*)contour NS_SWIFT_NAME(contourArea(contour:));


//
//  RotatedRect cv::minAreaRect(vector_Point2f points)
//
/**
 * Finds a rotated rectangle of the minimum area enclosing the input 2D point set.
 *
 * The function calculates and returns the minimum-area bounding rectangle (possibly rotated) for a
 * specified point set. Developer should keep in mind that the returned RotatedRect can contain negative
 * indices when data is close to the containing Mat element boundary.
 *
 * @param points Input vector of 2D points, stored in std::vector\<\> or Mat
 */
+ (RotatedRect*)minAreaRect:(NSArray<Point2f*>*)points NS_SWIFT_NAME(minAreaRect(points:));


//
//  void cv::boxPoints(RotatedRect box, Mat& points)
//
/**
 * Finds the four vertices of a rotated rect. Useful to draw the rotated rectangle.
 *
 * The function finds the four vertices of a rotated rectangle. This function is useful to draw the
 * rectangle. In C++, instead of using this function, you can directly use RotatedRect::points method. Please
 * visit the REF: tutorial_bounding_rotated_ellipses "tutorial on Creating Bounding rotated boxes and ellipses for contours" for more information.
 *
 * @param box The input rotated rectangle. It may be the output of
 * @param points The output array of four vertices of rectangles.
 */
+ (void)boxPoints:(RotatedRect*)box points:(Mat*)points NS_SWIFT_NAME(boxPoints(box:points:));


//
//  void cv::minEnclosingCircle(vector_Point2f points, Point2f& center, float& radius)
//
/**
 * Finds a circle of the minimum area enclosing a 2D point set.
 *
 * The function finds the minimal enclosing circle of a 2D point set using an iterative algorithm.
 *
 * @param points Input vector of 2D points, stored in std::vector\<\> or Mat
 * @param center Output center of the circle.
 * @param radius Output radius of the circle.
 */
+ (void)minEnclosingCircle:(NSArray<Point2f*>*)points center:(Point2f*)center radius:(float*)radius NS_SWIFT_NAME(minEnclosingCircle(points:center:radius:));


//
//  double cv::minEnclosingTriangle(Mat points, Mat& triangle)
//
/**
 * Finds a triangle of minimum area enclosing a 2D point set and returns its area.
 *
 * The function finds a triangle of minimum area enclosing the given set of 2D points and returns its
 * area. The output for a given 2D point set is shown in the image below. 2D points are depicted in
 * red* and the enclosing triangle in *yellow*.
 *
 * ![Sample output of the minimum enclosing triangle function](pics/minenclosingtriangle.png)
 *
 * The implementation of the algorithm is based on O'Rourke's CITE: ORourke86 and Klee and Laskowski's
 * CITE: KleeLaskowski85 papers. O'Rourke provides a `$$\theta(n)$$` algorithm for finding the minimal
 * enclosing triangle of a 2D convex polygon with n vertices. Since the #minEnclosingTriangle function
 * takes a 2D point set as input an additional preprocessing step of computing the convex hull of the
 * 2D point set is required. The complexity of the #convexHull function is `$$O(n log(n))$$` which is higher
 * than `$$\theta(n)$$`. Thus the overall complexity of the function is `$$O(n log(n))$$`.
 *
 * @param points Input vector of 2D points with depth CV_32S or CV_32F, stored in std::vector\<\> or Mat
 * @param triangle Output vector of three 2D points defining the vertices of the triangle. The depth
 * of the OutputArray must be CV_32F.
 */
+ (double)minEnclosingTriangle:(Mat*)points triangle:(Mat*)triangle NS_SWIFT_NAME(minEnclosingTriangle(points:triangle:));


//
//  double cv::matchShapes(Mat contour1, Mat contour2, ShapeMatchModes method, double parameter)
//
/**
 * Compares two shapes.
 *
 * The function compares two shapes. All three implemented methods use the Hu invariants (see #HuMoments)
 *
 * @param contour1 First contour or grayscale image.
 * @param contour2 Second contour or grayscale image.
 * @param method Comparison method, see #ShapeMatchModes
 * @param parameter Method-specific parameter (not supported now).
 */
+ (double)matchShapes:(Mat*)contour1 contour2:(Mat*)contour2 method:(ShapeMatchModes)method parameter:(double)parameter NS_SWIFT_NAME(matchShapes(contour1:contour2:method:parameter:));


//
//  void cv::convexHull(vector_Point points, vector_int& hull, bool clockwise = false,  _hidden_  returnPoints = true)
//
/**
 * Finds the convex hull of a point set.
 *
 * The function cv::convexHull finds the convex hull of a 2D point set using the Sklansky's algorithm CITE: Sklansky82
 * that has *O(N logN)* complexity in the current implementation.
 *
 * @param points Input 2D point set, stored in std::vector or Mat.
 * @param hull Output convex hull. It is either an integer vector of indices or vector of points. In
 * the first case, the hull elements are 0-based indices of the convex hull points in the original
 * array (since the set of convex hull points is a subset of the original point set). In the second
 * case, hull elements are the convex hull points themselves.
 * @param clockwise Orientation flag. If it is true, the output convex hull is oriented clockwise.
 * Otherwise, it is oriented counter-clockwise. The assumed coordinate system has its X axis pointing
 * to the right, and its Y axis pointing upwards.
 * @param returnPoints Operation flag. In case of a matrix, when the flag is true, the function
 * returns convex hull points. Otherwise, it returns indices of the convex hull points. When the
 * output array is std::vector, the flag is ignored, and the output depends on the type of the
 * vector: std::vector\<int\> implies returnPoints=false, std::vector\<Point\> implies
 * returnPoints=true.
 *
 * NOTE: `points` and `hull` should be different arrays, inplace processing isn't supported.
 *
 * Check REF: tutorial_hull "the corresponding tutorial" for more details.
 *
 * useful links:
 *
 * https://www.learnopencv.com/convex-hull-using-opencv-in-python-and-c/
 */
+ (void)convexHull:(NSArray<Point2i*>*)points hull:(IntVector*)hull clockwise:(BOOL)clockwise NS_SWIFT_NAME(convexHull(points:hull:clockwise:));

/**
 * Finds the convex hull of a point set.
 *
 * The function cv::convexHull finds the convex hull of a 2D point set using the Sklansky's algorithm CITE: Sklansky82
 * that has *O(N logN)* complexity in the current implementation.
 *
 * @param points Input 2D point set, stored in std::vector or Mat.
 * @param hull Output convex hull. It is either an integer vector of indices or vector of points. In
 * the first case, the hull elements are 0-based indices of the convex hull points in the original
 * array (since the set of convex hull points is a subset of the original point set). In the second
 * case, hull elements are the convex hull points themselves.
 * Otherwise, it is oriented counter-clockwise. The assumed coordinate system has its X axis pointing
 * to the right, and its Y axis pointing upwards.
 * returns convex hull points. Otherwise, it returns indices of the convex hull points. When the
 * output array is std::vector, the flag is ignored, and the output depends on the type of the
 * vector: std::vector\<int\> implies returnPoints=false, std::vector\<Point\> implies
 * returnPoints=true.
 *
 * NOTE: `points` and `hull` should be different arrays, inplace processing isn't supported.
 *
 * Check REF: tutorial_hull "the corresponding tutorial" for more details.
 *
 * useful links:
 *
 * https://www.learnopencv.com/convex-hull-using-opencv-in-python-and-c/
 */
+ (void)convexHull:(NSArray<Point2i*>*)points hull:(IntVector*)hull NS_SWIFT_NAME(convexHull(points:hull:));


//
//  void cv::convexityDefects(vector_Point contour, vector_int convexhull, vector_Vec4i& convexityDefects)
//
/**
 * Finds the convexity defects of a contour.
 *
 * The figure below displays convexity defects of a hand contour:
 *
 * ![image](pics/defects.png)
 *
 * @param contour Input contour.
 * @param convexhull Convex hull obtained using convexHull that should contain indices of the contour
 * points that make the hull.
 * @param convexityDefects The output vector of convexity defects. In C++ and the new Python/Java
 * interface each convexity defect is represented as 4-element integer vector (a.k.a. #Vec4i):
 * (start_index, end_index, farthest_pt_index, fixpt_depth), where indices are 0-based indices
 * in the original contour of the convexity defect beginning, end and the farthest point, and
 * fixpt_depth is fixed-point approximation (with 8 fractional bits) of the distance between the
 * farthest contour point and the hull. That is, to get the floating-point value of the depth will be
 * fixpt_depth/256.0.
 */
+ (void)convexityDefects:(NSArray<Point2i*>*)contour convexhull:(IntVector*)convexhull convexityDefects:(NSMutableArray<Int4*>*)convexityDefects NS_SWIFT_NAME(convexityDefects(contour:convexhull:convexityDefects:));


//
//  bool cv::isContourConvex(vector_Point contour)
//
/**
 * Tests a contour convexity.
 *
 * The function tests whether the input contour is convex or not. The contour must be simple, that is,
 * without self-intersections. Otherwise, the function output is undefined.
 *
 * @param contour Input vector of 2D points, stored in std::vector\<\> or Mat
 */
+ (BOOL)isContourConvex:(NSArray<Point2i*>*)contour NS_SWIFT_NAME(isContourConvex(contour:));


//
//  float cv::intersectConvexConvex(Mat p1, Mat p2, Mat& p12, bool handleNested = true)
//
/**
 * Finds intersection of two convex polygons
 *
 * @param p1 First polygon
 * @param p2 Second polygon
 * @param p12 Output polygon describing the intersecting area
 * @param handleNested When true, an intersection is found if one of the polygons is fully enclosed in the other.
 * When false, no intersection is found. If the polygons share a side or the vertex of one polygon lies on an edge
 * of the other, they are not considered nested and an intersection will be found regardless of the value of handleNested.
 *
 * @return Absolute value of area of intersecting polygon
 *
 * NOTE: intersectConvexConvex doesn't confirm that both polygons are convex and will return invalid results if they aren't.
 */
+ (float)intersectConvexConvex:(Mat*)p1 p2:(Mat*)p2 p12:(Mat*)p12 handleNested:(BOOL)handleNested NS_SWIFT_NAME(intersectConvexConvex(p1:p2:p12:handleNested:));

/**
 * Finds intersection of two convex polygons
 *
 * @param p1 First polygon
 * @param p2 Second polygon
 * @param p12 Output polygon describing the intersecting area
 * When false, no intersection is found. If the polygons share a side or the vertex of one polygon lies on an edge
 * of the other, they are not considered nested and an intersection will be found regardless of the value of handleNested.
 *
 * @return Absolute value of area of intersecting polygon
 *
 * NOTE: intersectConvexConvex doesn't confirm that both polygons are convex and will return invalid results if they aren't.
 */
+ (float)intersectConvexConvex:(Mat*)p1 p2:(Mat*)p2 p12:(Mat*)p12 NS_SWIFT_NAME(intersectConvexConvex(p1:p2:p12:));


//
//  RotatedRect cv::fitEllipse(vector_Point2f points)
//
/**
 * Fits an ellipse around a set of 2D points.
 *
 * The function calculates the ellipse that fits (in a least-squares sense) a set of 2D points best of
 * all. It returns the rotated rectangle in which the ellipse is inscribed. The first algorithm described by CITE: Fitzgibbon95
 * is used. Developer should keep in mind that it is possible that the returned
 * ellipse/rotatedRect data contains negative indices, due to the data points being close to the
 * border of the containing Mat element.
 *
 * @param points Input 2D point set, stored in std::vector\<\> or Mat
 */
+ (RotatedRect*)fitEllipse:(NSArray<Point2f*>*)points NS_SWIFT_NAME(fitEllipse(points:));


//
//  RotatedRect cv::fitEllipseAMS(Mat points)
//
/**
 * Fits an ellipse around a set of 2D points.
 *
 *  The function calculates the ellipse that fits a set of 2D points.
 *  It returns the rotated rectangle in which the ellipse is inscribed.
 *  The Approximate Mean Square (AMS) proposed by CITE: Taubin1991 is used.
 *
 *  For an ellipse, this basis set is `$$ \chi= \left(x^2, x y, y^2, x, y, 1\right) $$`,
 *  which is a set of six free coefficients `$$ A^T=\left\{A_{\text{xx}},A_{\text{xy}},A_{\text{yy}},A_x,A_y,A_0\right\} $$`.
 *  However, to specify an ellipse, all that is needed is five numbers; the major and minor axes lengths `$$ (a,b) $$`,
 *  the position `$$ (x_0,y_0) $$`, and the orientation `$$ \theta $$`. This is because the basis set includes lines,
 *  quadratics, parabolic and hyperbolic functions as well as elliptical functions as possible fits.
 *  If the fit is found to be a parabolic or hyperbolic function then the standard #fitEllipse method is used.
 *  The AMS method restricts the fit to parabolic, hyperbolic and elliptical curves
 *  by imposing the condition that `$$ A^T ( D_x^T D_x  +   D_y^T D_y) A = 1 $$` where
 *  the matrices `$$ Dx $$` and `$$ Dy $$` are the partial derivatives of the design matrix `$$ D $$` with
 *  respect to x and y. The matrices are formed row by row applying the following to
 *  each of the points in the set:
 *  `$$\begin{aligned} 
 *  D(i,:)&=\left\{x_i^2, x_i y_i, y_i^2, x_i, y_i, 1\right\} &
 *  D_x(i,:)&=\left\{2 x_i,y_i,0,1,0,0\right\} &
 *  D_y(i,:)&=\left\{0,x_i,2 y_i,0,1,0\right\}
 *   \end{aligned}$$`
 *  The AMS method minimizes the cost function
 *  `$$\begin{aligned} 
 *  \epsilon ^2=\frac{ A^T D^T D A }{ A^T (D_x^T D_x +  D_y^T D_y) A^T }
 *   \end{aligned}$$`
 *
 *  The minimum cost is found by solving the generalized eigenvalue problem.
 *
 *  `$$\begin{aligned} 
 *  D^T D A = \lambda  \left( D_x^T D_x +  D_y^T D_y\right) A
 *   \end{aligned}$$`
 *
 * @param points Input 2D point set, stored in std::vector\<\> or Mat
 */
+ (RotatedRect*)fitEllipseAMS:(Mat*)points NS_SWIFT_NAME(fitEllipseAMS(points:));


//
//  RotatedRect cv::fitEllipseDirect(Mat points)
//
/**
 * Fits an ellipse around a set of 2D points.
 *
 *  The function calculates the ellipse that fits a set of 2D points.
 *  It returns the rotated rectangle in which the ellipse is inscribed.
 *  The Direct least square (Direct) method by CITE: Fitzgibbon1999 is used.
 *
 *  For an ellipse, this basis set is `$$ \chi= \left(x^2, x y, y^2, x, y, 1\right) $$`,
 *  which is a set of six free coefficients `$$ A^T=\left\{A_{\text{xx}},A_{\text{xy}},A_{\text{yy}},A_x,A_y,A_0\right\} $$`.
 *  However, to specify an ellipse, all that is needed is five numbers; the major and minor axes lengths `$$ (a,b) $$`,
 *  the position `$$ (x_0,y_0) $$`, and the orientation `$$ \theta $$`. This is because the basis set includes lines,
 *  quadratics, parabolic and hyperbolic functions as well as elliptical functions as possible fits.
 *  The Direct method confines the fit to ellipses by ensuring that `$$ 4 A_{xx} A_{yy}- A_{xy}^2 > 0 $$`.
 *  The condition imposed is that `$$ 4 A_{xx} A_{yy}- A_{xy}^2=1 $$` which satisfies the inequality
 *  and as the coefficients can be arbitrarily scaled is not overly restrictive.
 *
 *  `$$\begin{aligned} 
 *  \epsilon ^2= A^T D^T D A \quad \text{with} \quad A^T C A =1 \quad \text{and} \quad C=\left(\begin{matrix}
 *  0 & 0  & 2  & 0  & 0  &  0  \\
 *  0 & -1  & 0  & 0  & 0  &  0 \\
 *  2 & 0  & 0  & 0  & 0  &  0 \\
 *  0 & 0  & 0  & 0  & 0  &  0 \\
 *  0 & 0  & 0  & 0  & 0  &  0 \\
 *  0 & 0  & 0  & 0  & 0  &  0
 *  \end{matrix} \right)
 *   \end{aligned}$$`
 *
 *  The minimum cost is found by solving the generalized eigenvalue problem.
 *
 *  `$$\begin{aligned} 
 *  D^T D A = \lambda  \left( C\right) A
 *   \end{aligned}$$`
 *
 *  The system produces only one positive eigenvalue `$$ \lambda$$` which is chosen as the solution
 *  with its eigenvector `$$\mathbf{u}$$`. These are used to find the coefficients
 *
 *  `$$\begin{aligned} 
 *  A = \sqrt{\frac{1}{\mathbf{u}^T C \mathbf{u}}}  \mathbf{u}
 *   \end{aligned}$$`
 *  The scaling factor guarantees that  `$$A^T C A =1$$`.
 *
 * @param points Input 2D point set, stored in std::vector\<\> or Mat
 */
+ (RotatedRect*)fitEllipseDirect:(Mat*)points NS_SWIFT_NAME(fitEllipseDirect(points:));


//
//  void cv::fitLine(Mat points, Mat& line, DistanceTypes distType, double param, double reps, double aeps)
//
/**
 * Fits a line to a 2D or 3D point set.
 *
 * The function fitLine fits a line to a 2D or 3D point set by minimizing `$$\sum_i \rho(r_i)$$` where
 * `$$r_i$$` is a distance between the `$$i^{th}$$` point, the line and `$$\rho(r)$$` is a distance function, one
 * of the following:
 * -  DIST_L2
 * `$$\rho (r) = r^2/2  \quad \text{(the simplest and the fastest least-squares method)}$$`
 * - DIST_L1
 * `$$\rho (r) = r$$`
 * - DIST_L12
 * `$$\rho (r) = 2  \cdot ( \sqrt{1 + \frac{r^2}{2}} - 1)$$`
 * - DIST_FAIR
 * `$$\rho \left (r \right ) = C^2  \cdot \left (  \frac{r}{C} -  \log{\left(1 + \frac{r}{C}\right)} \right )  \quad \text{where} \quad C=1.3998$$`
 * - DIST_WELSCH
 * `$$\rho \left (r \right ) =  \frac{C^2}{2} \cdot \left ( 1 -  \exp{\left(-\left(\frac{r}{C}\right)^2\right)} \right )  \quad \text{where} \quad C=2.9846$$`
 * - DIST_HUBER
 * `$$\newcommand{\fork}[4]{ \left\{ \begin{array}{l l} #1 & \text{#2}\\\\ #3 & \text{#4}\\\\ \end{array} \right.} \rho (r) =  \fork{r^2/2}{if \(r < C\)}{C \cdot (r-C/2)}{otherwise} \quad \text{where} \quad C=1.345$$`
 *
 * The algorithm is based on the M-estimator ( <http://en.wikipedia.org/wiki/M-estimator> ) technique
 * that iteratively fits the line using the weighted least-squares algorithm. After each iteration the
 * weights `$$w_i$$` are adjusted to be inversely proportional to `$$\rho(r_i)$$` .
 *
 * @param points Input vector of 2D or 3D points, stored in std::vector\<\> or Mat.
 * @param line Output line parameters. In case of 2D fitting, it should be a vector of 4 elements
 * (like Vec4f) - (vx, vy, x0, y0), where (vx, vy) is a normalized vector collinear to the line and
 * (x0, y0) is a point on the line. In case of 3D fitting, it should be a vector of 6 elements (like
 * Vec6f) - (vx, vy, vz, x0, y0, z0), where (vx, vy, vz) is a normalized vector collinear to the line
 * and (x0, y0, z0) is a point on the line.
 * @param distType Distance used by the M-estimator, see #DistanceTypes
 * @param param Numerical parameter ( C ) for some types of distances. If it is 0, an optimal value
 * is chosen.
 * @param reps Sufficient accuracy for the radius (distance between the coordinate origin and the line).
 * @param aeps Sufficient accuracy for the angle. 0.01 would be a good default value for reps and aeps.
 */
+ (void)fitLine:(Mat*)points line:(Mat*)line distType:(DistanceTypes)distType param:(double)param reps:(double)reps aeps:(double)aeps NS_SWIFT_NAME(fitLine(points:line:distType:param:reps:aeps:));


//
//  double cv::pointPolygonTest(vector_Point2f contour, Point2f pt, bool measureDist)
//
/**
 * Performs a point-in-contour test.
 *
 * The function determines whether the point is inside a contour, outside, or lies on an edge (or
 * coincides with a vertex). It returns positive (inside), negative (outside), or zero (on an edge)
 * value, correspondingly. When measureDist=false , the return value is +1, -1, and 0, respectively.
 * Otherwise, the return value is a signed distance between the point and the nearest contour edge.
 *
 * See below a sample output of the function where each image pixel is tested against the contour:
 *
 * ![sample output](pics/pointpolygon.png)
 *
 * @param contour Input contour.
 * @param pt Point tested against the contour.
 * @param measureDist If true, the function estimates the signed distance from the point to the
 * nearest contour edge. Otherwise, the function only checks if the point is inside a contour or not.
 */
+ (double)pointPolygonTest:(NSArray<Point2f*>*)contour pt:(Point2f*)pt measureDist:(BOOL)measureDist NS_SWIFT_NAME(pointPolygonTest(contour:pt:measureDist:));


//
//  int cv::rotatedRectangleIntersection(RotatedRect rect1, RotatedRect rect2, Mat& intersectingRegion)
//
/**
 * Finds out if there is any intersection between two rotated rectangles.
 *
 * If there is then the vertices of the intersecting region are returned as well.
 *
 * Below are some examples of intersection configurations. The hatched pattern indicates the
 * intersecting region and the red vertices are returned by the function.
 *
 * ![intersection examples](pics/intersection.png)
 *
 * @param rect1 First rectangle
 * @param rect2 Second rectangle
 * @param intersectingRegion The output array of the vertices of the intersecting region. It returns
 * at most 8 vertices. Stored as std::vector\<cv::Point2f\> or cv::Mat as Mx1 of type CV_32FC2.
 * @return One of #RectanglesIntersectTypes
 */
+ (int)rotatedRectangleIntersection:(RotatedRect*)rect1 rect2:(RotatedRect*)rect2 intersectingRegion:(Mat*)intersectingRegion NS_SWIFT_NAME(rotatedRectangleIntersection(rect1:rect2:intersectingRegion:));


//
//  Ptr_GeneralizedHoughBallard cv::createGeneralizedHoughBallard()
//
/**
 * Creates a smart pointer to a cv::GeneralizedHoughBallard class and initializes it.
 */
+ (GeneralizedHoughBallard*)createGeneralizedHoughBallard NS_SWIFT_NAME(createGeneralizedHoughBallard());


//
//  Ptr_GeneralizedHoughGuil cv::createGeneralizedHoughGuil()
//
/**
 * Creates a smart pointer to a cv::GeneralizedHoughGuil class and initializes it.
 */
+ (GeneralizedHoughGuil*)createGeneralizedHoughGuil NS_SWIFT_NAME(createGeneralizedHoughGuil());


//
//  void cv::applyColorMap(Mat src, Mat& dst, ColormapTypes colormap)
//
/**
 * Applies a GNU Octave/MATLAB equivalent colormap on a given image.
 *
 * @param src The source image, grayscale or colored of type CV_8UC1 or CV_8UC3.
 * @param dst The result is the colormapped source image. Note: Mat::create is called on dst.
 * @param colormap The colormap to apply, see #ColormapTypes
 */
+ (void)applyColorMap:(Mat*)src dst:(Mat*)dst colormap:(ColormapTypes)colormap NS_SWIFT_NAME(applyColorMap(src:dst:colormap:));


//
//  void cv::applyColorMap(Mat src, Mat& dst, Mat userColor)
//
/**
 * Applies a user colormap on a given image.
 *
 * @param src The source image, grayscale or colored of type CV_8UC1 or CV_8UC3.
 * @param dst The result is the colormapped source image. Note: Mat::create is called on dst.
 * @param userColor The colormap to apply of type CV_8UC1 or CV_8UC3 and size 256
 */
+ (void)applyColorMap:(Mat*)src dst:(Mat*)dst userColor:(Mat*)userColor NS_SWIFT_NAME(applyColorMap(src:dst:userColor:));


//
//  void cv::line(Mat& img, Point pt1, Point pt2, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 * Draws a line segment connecting two points.
 *
 * The function line draws the line segment between pt1 and pt2 points in the image. The line is
 * clipped by the image boundaries. For non-antialiased lines with integer coordinates, the 8-connected
 * or 4-connected Bresenham algorithm is used. Thick lines are drawn with rounding endings. Antialiased
 * lines are drawn using Gaussian filtering.
 *
 * @param img Image.
 * @param pt1 First point of the line segment.
 * @param pt2 Second point of the line segment.
 * @param color Line color.
 * @param thickness Line thickness.
 * @param lineType Type of the line. See #LineTypes.
 * @param shift Number of fractional bits in the point coordinates.
 */
+ (void)line:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(line(img:pt1:pt2:color:thickness:lineType:shift:));

/**
 * Draws a line segment connecting two points.
 *
 * The function line draws the line segment between pt1 and pt2 points in the image. The line is
 * clipped by the image boundaries. For non-antialiased lines with integer coordinates, the 8-connected
 * or 4-connected Bresenham algorithm is used. Thick lines are drawn with rounding endings. Antialiased
 * lines are drawn using Gaussian filtering.
 *
 * @param img Image.
 * @param pt1 First point of the line segment.
 * @param pt2 Second point of the line segment.
 * @param color Line color.
 * @param thickness Line thickness.
 * @param lineType Type of the line. See #LineTypes.
 */
+ (void)line:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(line(img:pt1:pt2:color:thickness:lineType:));

/**
 * Draws a line segment connecting two points.
 *
 * The function line draws the line segment between pt1 and pt2 points in the image. The line is
 * clipped by the image boundaries. For non-antialiased lines with integer coordinates, the 8-connected
 * or 4-connected Bresenham algorithm is used. Thick lines are drawn with rounding endings. Antialiased
 * lines are drawn using Gaussian filtering.
 *
 * @param img Image.
 * @param pt1 First point of the line segment.
 * @param pt2 Second point of the line segment.
 * @param color Line color.
 * @param thickness Line thickness.
 */
+ (void)line:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(line(img:pt1:pt2:color:thickness:));

/**
 * Draws a line segment connecting two points.
 *
 * The function line draws the line segment between pt1 and pt2 points in the image. The line is
 * clipped by the image boundaries. For non-antialiased lines with integer coordinates, the 8-connected
 * or 4-connected Bresenham algorithm is used. Thick lines are drawn with rounding endings. Antialiased
 * lines are drawn using Gaussian filtering.
 *
 * @param img Image.
 * @param pt1 First point of the line segment.
 * @param pt2 Second point of the line segment.
 * @param color Line color.
 */
+ (void)line:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color NS_SWIFT_NAME(line(img:pt1:pt2:color:));


//
//  void cv::arrowedLine(Mat& img, Point pt1, Point pt2, Scalar color, int thickness = 1, LineTypes line_type = 8, int shift = 0, double tipLength = 0.1)
//
/**
 * Draws a arrow segment pointing from the first point to the second one.
 *
 * The function cv::arrowedLine draws an arrow between pt1 and pt2 points in the image. See also #line.
 *
 * @param img Image.
 * @param pt1 The point the arrow starts from.
 * @param pt2 The point the arrow points to.
 * @param color Line color.
 * @param thickness Line thickness.
 * @param line_type Type of the line. See #LineTypes
 * @param shift Number of fractional bits in the point coordinates.
 * @param tipLength The length of the arrow tip in relation to the arrow length
 */
+ (void)arrowedLine:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness line_type:(LineTypes)line_type shift:(int)shift tipLength:(double)tipLength NS_SWIFT_NAME(arrowedLine(img:pt1:pt2:color:thickness:line_type:shift:tipLength:));

/**
 * Draws a arrow segment pointing from the first point to the second one.
 *
 * The function cv::arrowedLine draws an arrow between pt1 and pt2 points in the image. See also #line.
 *
 * @param img Image.
 * @param pt1 The point the arrow starts from.
 * @param pt2 The point the arrow points to.
 * @param color Line color.
 * @param thickness Line thickness.
 * @param line_type Type of the line. See #LineTypes
 * @param shift Number of fractional bits in the point coordinates.
 */
+ (void)arrowedLine:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness line_type:(LineTypes)line_type shift:(int)shift NS_SWIFT_NAME(arrowedLine(img:pt1:pt2:color:thickness:line_type:shift:));

/**
 * Draws a arrow segment pointing from the first point to the second one.
 *
 * The function cv::arrowedLine draws an arrow between pt1 and pt2 points in the image. See also #line.
 *
 * @param img Image.
 * @param pt1 The point the arrow starts from.
 * @param pt2 The point the arrow points to.
 * @param color Line color.
 * @param thickness Line thickness.
 * @param line_type Type of the line. See #LineTypes
 */
+ (void)arrowedLine:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness line_type:(LineTypes)line_type NS_SWIFT_NAME(arrowedLine(img:pt1:pt2:color:thickness:line_type:));

/**
 * Draws a arrow segment pointing from the first point to the second one.
 *
 * The function cv::arrowedLine draws an arrow between pt1 and pt2 points in the image. See also #line.
 *
 * @param img Image.
 * @param pt1 The point the arrow starts from.
 * @param pt2 The point the arrow points to.
 * @param color Line color.
 * @param thickness Line thickness.
 */
+ (void)arrowedLine:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(arrowedLine(img:pt1:pt2:color:thickness:));

/**
 * Draws a arrow segment pointing from the first point to the second one.
 *
 * The function cv::arrowedLine draws an arrow between pt1 and pt2 points in the image. See also #line.
 *
 * @param img Image.
 * @param pt1 The point the arrow starts from.
 * @param pt2 The point the arrow points to.
 * @param color Line color.
 */
+ (void)arrowedLine:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color NS_SWIFT_NAME(arrowedLine(img:pt1:pt2:color:));


//
//  void cv::rectangle(Mat& img, Point pt1, Point pt2, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 * Draws a simple, thick, or filled up-right rectangle.
 *
 * The function cv::rectangle draws a rectangle outline or a filled rectangle whose two opposite corners
 * are pt1 and pt2.
 *
 * @param img Image.
 * @param pt1 Vertex of the rectangle.
 * @param pt2 Vertex of the rectangle opposite to pt1 .
 * @param color Rectangle color or brightness (grayscale image).
 * @param thickness Thickness of lines that make up the rectangle. Negative values, like #FILLED,
 * mean that the function has to draw a filled rectangle.
 * @param lineType Type of the line. See #LineTypes
 * @param shift Number of fractional bits in the point coordinates.
 */
+ (void)rectangle:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(rectangle(img:pt1:pt2:color:thickness:lineType:shift:));

/**
 * Draws a simple, thick, or filled up-right rectangle.
 *
 * The function cv::rectangle draws a rectangle outline or a filled rectangle whose two opposite corners
 * are pt1 and pt2.
 *
 * @param img Image.
 * @param pt1 Vertex of the rectangle.
 * @param pt2 Vertex of the rectangle opposite to pt1 .
 * @param color Rectangle color or brightness (grayscale image).
 * @param thickness Thickness of lines that make up the rectangle. Negative values, like #FILLED,
 * mean that the function has to draw a filled rectangle.
 * @param lineType Type of the line. See #LineTypes
 */
+ (void)rectangle:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(rectangle(img:pt1:pt2:color:thickness:lineType:));

/**
 * Draws a simple, thick, or filled up-right rectangle.
 *
 * The function cv::rectangle draws a rectangle outline or a filled rectangle whose two opposite corners
 * are pt1 and pt2.
 *
 * @param img Image.
 * @param pt1 Vertex of the rectangle.
 * @param pt2 Vertex of the rectangle opposite to pt1 .
 * @param color Rectangle color or brightness (grayscale image).
 * @param thickness Thickness of lines that make up the rectangle. Negative values, like #FILLED,
 * mean that the function has to draw a filled rectangle.
 */
+ (void)rectangle:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(rectangle(img:pt1:pt2:color:thickness:));

/**
 * Draws a simple, thick, or filled up-right rectangle.
 *
 * The function cv::rectangle draws a rectangle outline or a filled rectangle whose two opposite corners
 * are pt1 and pt2.
 *
 * @param img Image.
 * @param pt1 Vertex of the rectangle.
 * @param pt2 Vertex of the rectangle opposite to pt1 .
 * @param color Rectangle color or brightness (grayscale image).
 * mean that the function has to draw a filled rectangle.
 */
+ (void)rectangle:(Mat*)img pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 color:(Scalar*)color NS_SWIFT_NAME(rectangle(img:pt1:pt2:color:));


//
//  void cv::rectangle(Mat& img, Rect rec, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 *
 *
 * use `rec` parameter as alternative specification of the drawn rectangle: `r.tl() and
 * r.br()-Point(1,1)` are opposite corners
 */
+ (void)rectangle:(Mat*)img rec:(Rect2i*)rec color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(rectangle(img:rec:color:thickness:lineType:shift:));

/**
 *
 *
 * use `rec` parameter as alternative specification of the drawn rectangle: `r.tl() and
 * r.br()-Point(1,1)` are opposite corners
 */
+ (void)rectangle:(Mat*)img rec:(Rect2i*)rec color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(rectangle(img:rec:color:thickness:lineType:));

/**
 *
 *
 * use `rec` parameter as alternative specification of the drawn rectangle: `r.tl() and
 * r.br()-Point(1,1)` are opposite corners
 */
+ (void)rectangle:(Mat*)img rec:(Rect2i*)rec color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(rectangle(img:rec:color:thickness:));

/**
 *
 *
 * use `rec` parameter as alternative specification of the drawn rectangle: `r.tl() and
 * r.br()-Point(1,1)` are opposite corners
 */
+ (void)rectangle:(Mat*)img rec:(Rect2i*)rec color:(Scalar*)color NS_SWIFT_NAME(rectangle(img:rec:color:));


//
//  void cv::circle(Mat& img, Point center, int radius, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 * Draws a circle.
 *
 * The function cv::circle draws a simple or filled circle with a given center and radius.
 * @param img Image where the circle is drawn.
 * @param center Center of the circle.
 * @param radius Radius of the circle.
 * @param color Circle color.
 * @param thickness Thickness of the circle outline, if positive. Negative values, like #FILLED,
 * mean that a filled circle is to be drawn.
 * @param lineType Type of the circle boundary. See #LineTypes
 * @param shift Number of fractional bits in the coordinates of the center and in the radius value.
 */
+ (void)circle:(Mat*)img center:(Point2i*)center radius:(int)radius color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(circle(img:center:radius:color:thickness:lineType:shift:));

/**
 * Draws a circle.
 *
 * The function cv::circle draws a simple or filled circle with a given center and radius.
 * @param img Image where the circle is drawn.
 * @param center Center of the circle.
 * @param radius Radius of the circle.
 * @param color Circle color.
 * @param thickness Thickness of the circle outline, if positive. Negative values, like #FILLED,
 * mean that a filled circle is to be drawn.
 * @param lineType Type of the circle boundary. See #LineTypes
 */
+ (void)circle:(Mat*)img center:(Point2i*)center radius:(int)radius color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(circle(img:center:radius:color:thickness:lineType:));

/**
 * Draws a circle.
 *
 * The function cv::circle draws a simple or filled circle with a given center and radius.
 * @param img Image where the circle is drawn.
 * @param center Center of the circle.
 * @param radius Radius of the circle.
 * @param color Circle color.
 * @param thickness Thickness of the circle outline, if positive. Negative values, like #FILLED,
 * mean that a filled circle is to be drawn.
 */
+ (void)circle:(Mat*)img center:(Point2i*)center radius:(int)radius color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(circle(img:center:radius:color:thickness:));

/**
 * Draws a circle.
 *
 * The function cv::circle draws a simple or filled circle with a given center and radius.
 * @param img Image where the circle is drawn.
 * @param center Center of the circle.
 * @param radius Radius of the circle.
 * @param color Circle color.
 * mean that a filled circle is to be drawn.
 */
+ (void)circle:(Mat*)img center:(Point2i*)center radius:(int)radius color:(Scalar*)color NS_SWIFT_NAME(circle(img:center:radius:color:));


//
//  void cv::ellipse(Mat& img, Point center, Size axes, double angle, double startAngle, double endAngle, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 * Draws a simple or thick elliptic arc or fills an ellipse sector.
 *
 * The function cv::ellipse with more parameters draws an ellipse outline, a filled ellipse, an elliptic
 * arc, or a filled ellipse sector. The drawing code uses general parametric form.
 * A piecewise-linear curve is used to approximate the elliptic arc
 * boundary. If you need more control of the ellipse rendering, you can retrieve the curve using
 * #ellipse2Poly and then render it with #polylines or fill it with #fillPoly. If you use the first
 * variant of the function and want to draw the whole ellipse, not an arc, pass `startAngle=0` and
 * `endAngle=360`. If `startAngle` is greater than `endAngle`, they are swapped. The figure below explains
 * the meaning of the parameters to draw the blue arc.
 *
 * ![Parameters of Elliptic Arc](pics/ellipse.svg)
 *
 * @param img Image.
 * @param center Center of the ellipse.
 * @param axes Half of the size of the ellipse main axes.
 * @param angle Ellipse rotation angle in degrees.
 * @param startAngle Starting angle of the elliptic arc in degrees.
 * @param endAngle Ending angle of the elliptic arc in degrees.
 * @param color Ellipse color.
 * @param thickness Thickness of the ellipse arc outline, if positive. Otherwise, this indicates that
 * a filled ellipse sector is to be drawn.
 * @param lineType Type of the ellipse boundary. See #LineTypes
 * @param shift Number of fractional bits in the coordinates of the center and values of axes.
 */
+ (void)ellipse:(Mat*)img center:(Point2i*)center axes:(Size2i*)axes angle:(double)angle startAngle:(double)startAngle endAngle:(double)endAngle color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(ellipse(img:center:axes:angle:startAngle:endAngle:color:thickness:lineType:shift:));

/**
 * Draws a simple or thick elliptic arc or fills an ellipse sector.
 *
 * The function cv::ellipse with more parameters draws an ellipse outline, a filled ellipse, an elliptic
 * arc, or a filled ellipse sector. The drawing code uses general parametric form.
 * A piecewise-linear curve is used to approximate the elliptic arc
 * boundary. If you need more control of the ellipse rendering, you can retrieve the curve using
 * #ellipse2Poly and then render it with #polylines or fill it with #fillPoly. If you use the first
 * variant of the function and want to draw the whole ellipse, not an arc, pass `startAngle=0` and
 * `endAngle=360`. If `startAngle` is greater than `endAngle`, they are swapped. The figure below explains
 * the meaning of the parameters to draw the blue arc.
 *
 * ![Parameters of Elliptic Arc](pics/ellipse.svg)
 *
 * @param img Image.
 * @param center Center of the ellipse.
 * @param axes Half of the size of the ellipse main axes.
 * @param angle Ellipse rotation angle in degrees.
 * @param startAngle Starting angle of the elliptic arc in degrees.
 * @param endAngle Ending angle of the elliptic arc in degrees.
 * @param color Ellipse color.
 * @param thickness Thickness of the ellipse arc outline, if positive. Otherwise, this indicates that
 * a filled ellipse sector is to be drawn.
 * @param lineType Type of the ellipse boundary. See #LineTypes
 */
+ (void)ellipse:(Mat*)img center:(Point2i*)center axes:(Size2i*)axes angle:(double)angle startAngle:(double)startAngle endAngle:(double)endAngle color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(ellipse(img:center:axes:angle:startAngle:endAngle:color:thickness:lineType:));

/**
 * Draws a simple or thick elliptic arc or fills an ellipse sector.
 *
 * The function cv::ellipse with more parameters draws an ellipse outline, a filled ellipse, an elliptic
 * arc, or a filled ellipse sector. The drawing code uses general parametric form.
 * A piecewise-linear curve is used to approximate the elliptic arc
 * boundary. If you need more control of the ellipse rendering, you can retrieve the curve using
 * #ellipse2Poly and then render it with #polylines or fill it with #fillPoly. If you use the first
 * variant of the function and want to draw the whole ellipse, not an arc, pass `startAngle=0` and
 * `endAngle=360`. If `startAngle` is greater than `endAngle`, they are swapped. The figure below explains
 * the meaning of the parameters to draw the blue arc.
 *
 * ![Parameters of Elliptic Arc](pics/ellipse.svg)
 *
 * @param img Image.
 * @param center Center of the ellipse.
 * @param axes Half of the size of the ellipse main axes.
 * @param angle Ellipse rotation angle in degrees.
 * @param startAngle Starting angle of the elliptic arc in degrees.
 * @param endAngle Ending angle of the elliptic arc in degrees.
 * @param color Ellipse color.
 * @param thickness Thickness of the ellipse arc outline, if positive. Otherwise, this indicates that
 * a filled ellipse sector is to be drawn.
 */
+ (void)ellipse:(Mat*)img center:(Point2i*)center axes:(Size2i*)axes angle:(double)angle startAngle:(double)startAngle endAngle:(double)endAngle color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(ellipse(img:center:axes:angle:startAngle:endAngle:color:thickness:));

/**
 * Draws a simple or thick elliptic arc or fills an ellipse sector.
 *
 * The function cv::ellipse with more parameters draws an ellipse outline, a filled ellipse, an elliptic
 * arc, or a filled ellipse sector. The drawing code uses general parametric form.
 * A piecewise-linear curve is used to approximate the elliptic arc
 * boundary. If you need more control of the ellipse rendering, you can retrieve the curve using
 * #ellipse2Poly and then render it with #polylines or fill it with #fillPoly. If you use the first
 * variant of the function and want to draw the whole ellipse, not an arc, pass `startAngle=0` and
 * `endAngle=360`. If `startAngle` is greater than `endAngle`, they are swapped. The figure below explains
 * the meaning of the parameters to draw the blue arc.
 *
 * ![Parameters of Elliptic Arc](pics/ellipse.svg)
 *
 * @param img Image.
 * @param center Center of the ellipse.
 * @param axes Half of the size of the ellipse main axes.
 * @param angle Ellipse rotation angle in degrees.
 * @param startAngle Starting angle of the elliptic arc in degrees.
 * @param endAngle Ending angle of the elliptic arc in degrees.
 * @param color Ellipse color.
 * a filled ellipse sector is to be drawn.
 */
+ (void)ellipse:(Mat*)img center:(Point2i*)center axes:(Size2i*)axes angle:(double)angle startAngle:(double)startAngle endAngle:(double)endAngle color:(Scalar*)color NS_SWIFT_NAME(ellipse(img:center:axes:angle:startAngle:endAngle:color:));


//
//  void cv::ellipse(Mat& img, RotatedRect box, Scalar color, int thickness = 1, LineTypes lineType = LINE_8)
//
/**
 *
 * @param img Image.
 * @param box Alternative ellipse representation via RotatedRect. This means that the function draws
 * an ellipse inscribed in the rotated rectangle.
 * @param color Ellipse color.
 * @param thickness Thickness of the ellipse arc outline, if positive. Otherwise, this indicates that
 * a filled ellipse sector is to be drawn.
 * @param lineType Type of the ellipse boundary. See #LineTypes
 */
+ (void)ellipse:(Mat*)img box:(RotatedRect*)box color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(ellipse(img:box:color:thickness:lineType:));

/**
 *
 * @param img Image.
 * @param box Alternative ellipse representation via RotatedRect. This means that the function draws
 * an ellipse inscribed in the rotated rectangle.
 * @param color Ellipse color.
 * @param thickness Thickness of the ellipse arc outline, if positive. Otherwise, this indicates that
 * a filled ellipse sector is to be drawn.
 */
+ (void)ellipse:(Mat*)img box:(RotatedRect*)box color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(ellipse(img:box:color:thickness:));

/**
 *
 * @param img Image.
 * @param box Alternative ellipse representation via RotatedRect. This means that the function draws
 * an ellipse inscribed in the rotated rectangle.
 * @param color Ellipse color.
 * a filled ellipse sector is to be drawn.
 */
+ (void)ellipse:(Mat*)img box:(RotatedRect*)box color:(Scalar*)color NS_SWIFT_NAME(ellipse(img:box:color:));


//
//  void cv::drawMarker(Mat& img, Point position, Scalar color, MarkerTypes markerType = MARKER_CROSS, int markerSize = 20, int thickness = 1, LineTypes line_type = 8)
//
/**
 * Draws a marker on a predefined position in an image.
 *
 * The function cv::drawMarker draws a marker on a given position in the image. For the moment several
 * marker types are supported, see #MarkerTypes for more information.
 *
 * @param img Image.
 * @param position The point where the crosshair is positioned.
 * @param color Line color.
 * @param markerType The specific type of marker you want to use, see #MarkerTypes
 * @param thickness Line thickness.
 * @param line_type Type of the line, See #LineTypes
 * @param markerSize The length of the marker axis [default = 20 pixels]
 */
+ (void)drawMarker:(Mat*)img position:(Point2i*)position color:(Scalar*)color markerType:(MarkerTypes)markerType markerSize:(int)markerSize thickness:(int)thickness line_type:(LineTypes)line_type NS_SWIFT_NAME(drawMarker(img:position:color:markerType:markerSize:thickness:line_type:));

/**
 * Draws a marker on a predefined position in an image.
 *
 * The function cv::drawMarker draws a marker on a given position in the image. For the moment several
 * marker types are supported, see #MarkerTypes for more information.
 *
 * @param img Image.
 * @param position The point where the crosshair is positioned.
 * @param color Line color.
 * @param markerType The specific type of marker you want to use, see #MarkerTypes
 * @param thickness Line thickness.
 * @param markerSize The length of the marker axis [default = 20 pixels]
 */
+ (void)drawMarker:(Mat*)img position:(Point2i*)position color:(Scalar*)color markerType:(MarkerTypes)markerType markerSize:(int)markerSize thickness:(int)thickness NS_SWIFT_NAME(drawMarker(img:position:color:markerType:markerSize:thickness:));

/**
 * Draws a marker on a predefined position in an image.
 *
 * The function cv::drawMarker draws a marker on a given position in the image. For the moment several
 * marker types are supported, see #MarkerTypes for more information.
 *
 * @param img Image.
 * @param position The point where the crosshair is positioned.
 * @param color Line color.
 * @param markerType The specific type of marker you want to use, see #MarkerTypes
 * @param markerSize The length of the marker axis [default = 20 pixels]
 */
+ (void)drawMarker:(Mat*)img position:(Point2i*)position color:(Scalar*)color markerType:(MarkerTypes)markerType markerSize:(int)markerSize NS_SWIFT_NAME(drawMarker(img:position:color:markerType:markerSize:));

/**
 * Draws a marker on a predefined position in an image.
 *
 * The function cv::drawMarker draws a marker on a given position in the image. For the moment several
 * marker types are supported, see #MarkerTypes for more information.
 *
 * @param img Image.
 * @param position The point where the crosshair is positioned.
 * @param color Line color.
 * @param markerType The specific type of marker you want to use, see #MarkerTypes
 */
+ (void)drawMarker:(Mat*)img position:(Point2i*)position color:(Scalar*)color markerType:(MarkerTypes)markerType NS_SWIFT_NAME(drawMarker(img:position:color:markerType:));

/**
 * Draws a marker on a predefined position in an image.
 *
 * The function cv::drawMarker draws a marker on a given position in the image. For the moment several
 * marker types are supported, see #MarkerTypes for more information.
 *
 * @param img Image.
 * @param position The point where the crosshair is positioned.
 * @param color Line color.
 */
+ (void)drawMarker:(Mat*)img position:(Point2i*)position color:(Scalar*)color NS_SWIFT_NAME(drawMarker(img:position:color:));


//
//  void cv::fillConvexPoly(Mat& img, vector_Point points, Scalar color, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 * Fills a convex polygon.
 *
 * The function cv::fillConvexPoly draws a filled convex polygon. This function is much faster than the
 * function #fillPoly . It can fill not only convex polygons but any monotonic polygon without
 * self-intersections, that is, a polygon whose contour intersects every horizontal line (scan line)
 * twice at the most (though, its top-most and/or the bottom edge could be horizontal).
 *
 * @param img Image.
 * @param points Polygon vertices.
 * @param color Polygon color.
 * @param lineType Type of the polygon boundaries. See #LineTypes
 * @param shift Number of fractional bits in the vertex coordinates.
 */
+ (void)fillConvexPoly:(Mat*)img points:(NSArray<Point2i*>*)points color:(Scalar*)color lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(fillConvexPoly(img:points:color:lineType:shift:));

/**
 * Fills a convex polygon.
 *
 * The function cv::fillConvexPoly draws a filled convex polygon. This function is much faster than the
 * function #fillPoly . It can fill not only convex polygons but any monotonic polygon without
 * self-intersections, that is, a polygon whose contour intersects every horizontal line (scan line)
 * twice at the most (though, its top-most and/or the bottom edge could be horizontal).
 *
 * @param img Image.
 * @param points Polygon vertices.
 * @param color Polygon color.
 * @param lineType Type of the polygon boundaries. See #LineTypes
 */
+ (void)fillConvexPoly:(Mat*)img points:(NSArray<Point2i*>*)points color:(Scalar*)color lineType:(LineTypes)lineType NS_SWIFT_NAME(fillConvexPoly(img:points:color:lineType:));

/**
 * Fills a convex polygon.
 *
 * The function cv::fillConvexPoly draws a filled convex polygon. This function is much faster than the
 * function #fillPoly . It can fill not only convex polygons but any monotonic polygon without
 * self-intersections, that is, a polygon whose contour intersects every horizontal line (scan line)
 * twice at the most (though, its top-most and/or the bottom edge could be horizontal).
 *
 * @param img Image.
 * @param points Polygon vertices.
 * @param color Polygon color.
 */
+ (void)fillConvexPoly:(Mat*)img points:(NSArray<Point2i*>*)points color:(Scalar*)color NS_SWIFT_NAME(fillConvexPoly(img:points:color:));


//
//  void cv::fillPoly(Mat& img, vector_vector_Point pts, Scalar color, LineTypes lineType = LINE_8, int shift = 0, Point offset = Point())
//
/**
 * Fills the area bounded by one or more polygons.
 *
 * The function cv::fillPoly fills an area bounded by several polygonal contours. The function can fill
 * complex areas, for example, areas with holes, contours with self-intersections (some of their
 * parts), and so forth.
 *
 * @param img Image.
 * @param pts Array of polygons where each polygon is represented as an array of points.
 * @param color Polygon color.
 * @param lineType Type of the polygon boundaries. See #LineTypes
 * @param shift Number of fractional bits in the vertex coordinates.
 * @param offset Optional offset of all points of the contours.
 */
+ (void)fillPoly:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts color:(Scalar*)color lineType:(LineTypes)lineType shift:(int)shift offset:(Point2i*)offset NS_SWIFT_NAME(fillPoly(img:pts:color:lineType:shift:offset:));

/**
 * Fills the area bounded by one or more polygons.
 *
 * The function cv::fillPoly fills an area bounded by several polygonal contours. The function can fill
 * complex areas, for example, areas with holes, contours with self-intersections (some of their
 * parts), and so forth.
 *
 * @param img Image.
 * @param pts Array of polygons where each polygon is represented as an array of points.
 * @param color Polygon color.
 * @param lineType Type of the polygon boundaries. See #LineTypes
 * @param shift Number of fractional bits in the vertex coordinates.
 */
+ (void)fillPoly:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts color:(Scalar*)color lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(fillPoly(img:pts:color:lineType:shift:));

/**
 * Fills the area bounded by one or more polygons.
 *
 * The function cv::fillPoly fills an area bounded by several polygonal contours. The function can fill
 * complex areas, for example, areas with holes, contours with self-intersections (some of their
 * parts), and so forth.
 *
 * @param img Image.
 * @param pts Array of polygons where each polygon is represented as an array of points.
 * @param color Polygon color.
 * @param lineType Type of the polygon boundaries. See #LineTypes
 */
+ (void)fillPoly:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts color:(Scalar*)color lineType:(LineTypes)lineType NS_SWIFT_NAME(fillPoly(img:pts:color:lineType:));

/**
 * Fills the area bounded by one or more polygons.
 *
 * The function cv::fillPoly fills an area bounded by several polygonal contours. The function can fill
 * complex areas, for example, areas with holes, contours with self-intersections (some of their
 * parts), and so forth.
 *
 * @param img Image.
 * @param pts Array of polygons where each polygon is represented as an array of points.
 * @param color Polygon color.
 */
+ (void)fillPoly:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts color:(Scalar*)color NS_SWIFT_NAME(fillPoly(img:pts:color:));


//
//  void cv::polylines(Mat& img, vector_vector_Point pts, bool isClosed, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, int shift = 0)
//
/**
 * Draws several polygonal curves.
 *
 * @param img Image.
 * @param pts Array of polygonal curves.
 * @param isClosed Flag indicating whether the drawn polylines are closed or not. If they are closed,
 * the function draws a line from the last vertex of each curve to its first vertex.
 * @param color Polyline color.
 * @param thickness Thickness of the polyline edges.
 * @param lineType Type of the line segments. See #LineTypes
 * @param shift Number of fractional bits in the vertex coordinates.
 *
 * The function cv::polylines draws one or more polygonal curves.
 */
+ (void)polylines:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts isClosed:(BOOL)isClosed color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType shift:(int)shift NS_SWIFT_NAME(polylines(img:pts:isClosed:color:thickness:lineType:shift:));

/**
 * Draws several polygonal curves.
 *
 * @param img Image.
 * @param pts Array of polygonal curves.
 * @param isClosed Flag indicating whether the drawn polylines are closed or not. If they are closed,
 * the function draws a line from the last vertex of each curve to its first vertex.
 * @param color Polyline color.
 * @param thickness Thickness of the polyline edges.
 * @param lineType Type of the line segments. See #LineTypes
 *
 * The function cv::polylines draws one or more polygonal curves.
 */
+ (void)polylines:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts isClosed:(BOOL)isClosed color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(polylines(img:pts:isClosed:color:thickness:lineType:));

/**
 * Draws several polygonal curves.
 *
 * @param img Image.
 * @param pts Array of polygonal curves.
 * @param isClosed Flag indicating whether the drawn polylines are closed or not. If they are closed,
 * the function draws a line from the last vertex of each curve to its first vertex.
 * @param color Polyline color.
 * @param thickness Thickness of the polyline edges.
 *
 * The function cv::polylines draws one or more polygonal curves.
 */
+ (void)polylines:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts isClosed:(BOOL)isClosed color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(polylines(img:pts:isClosed:color:thickness:));

/**
 * Draws several polygonal curves.
 *
 * @param img Image.
 * @param pts Array of polygonal curves.
 * @param isClosed Flag indicating whether the drawn polylines are closed or not. If they are closed,
 * the function draws a line from the last vertex of each curve to its first vertex.
 * @param color Polyline color.
 *
 * The function cv::polylines draws one or more polygonal curves.
 */
+ (void)polylines:(Mat*)img pts:(NSArray<NSArray<Point2i*>*>*)pts isClosed:(BOOL)isClosed color:(Scalar*)color NS_SWIFT_NAME(polylines(img:pts:isClosed:color:));


//
//  void cv::drawContours(Mat& image, vector_vector_Point contours, int contourIdx, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, Mat hierarchy = Mat(), int maxLevel = INT_MAX, Point offset = Point())
//
/**
 * Draws contours outlines or filled contours.
 *
 * The function draws contour outlines in the image if `$$\texttt{thickness} \ge 0$$` or fills the area
 * bounded by the contours if `$$\texttt{thickness}<0$$` . The example below shows how to retrieve
 * connected components from the binary image and label them: :
 * INCLUDE: snippets/imgproc_drawContours.cpp
 *
 * @param image Destination image.
 * @param contours All the input contours. Each contour is stored as a point vector.
 * @param contourIdx Parameter indicating a contour to draw. If it is negative, all the contours are drawn.
 * @param color Color of the contours.
 * @param thickness Thickness of lines the contours are drawn with. If it is negative (for example,
 * thickness=#FILLED ), the contour interiors are drawn.
 * @param lineType Line connectivity. See #LineTypes
 * @param hierarchy Optional information about hierarchy. It is only needed if you want to draw only
 * some of the contours (see maxLevel ).
 * @param maxLevel Maximal level for drawn contours. If it is 0, only the specified contour is drawn.
 * If it is 1, the function draws the contour(s) and all the nested contours. If it is 2, the function
 * draws the contours, all the nested contours, all the nested-to-nested contours, and so on. This
 * parameter is only taken into account when there is hierarchy available.
 * @param offset Optional contour shift parameter. Shift all the drawn contours by the specified
 * `$$\texttt{offset}=(dx,dy)$$` .
 * NOTE: When thickness=#FILLED, the function is designed to handle connected components with holes correctly
 * even when no hierarchy date is provided. This is done by analyzing all the outlines together
 * using even-odd rule. This may give incorrect results if you have a joint collection of separately retrieved
 * contours. In order to solve this problem, you need to call #drawContours separately for each sub-group
 * of contours, or iterate over the collection using contourIdx parameter.
 */
+ (void)drawContours:(Mat*)image contours:(NSArray<NSArray<Point2i*>*>*)contours contourIdx:(int)contourIdx color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType hierarchy:(Mat*)hierarchy maxLevel:(int)maxLevel offset:(Point2i*)offset NS_SWIFT_NAME(drawContours(image:contours:contourIdx:color:thickness:lineType:hierarchy:maxLevel:offset:));

/**
 * Draws contours outlines or filled contours.
 *
 * The function draws contour outlines in the image if `$$\texttt{thickness} \ge 0$$` or fills the area
 * bounded by the contours if `$$\texttt{thickness}<0$$` . The example below shows how to retrieve
 * connected components from the binary image and label them: :
 * INCLUDE: snippets/imgproc_drawContours.cpp
 *
 * @param image Destination image.
 * @param contours All the input contours. Each contour is stored as a point vector.
 * @param contourIdx Parameter indicating a contour to draw. If it is negative, all the contours are drawn.
 * @param color Color of the contours.
 * @param thickness Thickness of lines the contours are drawn with. If it is negative (for example,
 * thickness=#FILLED ), the contour interiors are drawn.
 * @param lineType Line connectivity. See #LineTypes
 * @param hierarchy Optional information about hierarchy. It is only needed if you want to draw only
 * some of the contours (see maxLevel ).
 * @param maxLevel Maximal level for drawn contours. If it is 0, only the specified contour is drawn.
 * If it is 1, the function draws the contour(s) and all the nested contours. If it is 2, the function
 * draws the contours, all the nested contours, all the nested-to-nested contours, and so on. This
 * parameter is only taken into account when there is hierarchy available.
 * `$$\texttt{offset}=(dx,dy)$$` .
 * NOTE: When thickness=#FILLED, the function is designed to handle connected components with holes correctly
 * even when no hierarchy date is provided. This is done by analyzing all the outlines together
 * using even-odd rule. This may give incorrect results if you have a joint collection of separately retrieved
 * contours. In order to solve this problem, you need to call #drawContours separately for each sub-group
 * of contours, or iterate over the collection using contourIdx parameter.
 */
+ (void)drawContours:(Mat*)image contours:(NSArray<NSArray<Point2i*>*>*)contours contourIdx:(int)contourIdx color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType hierarchy:(Mat*)hierarchy maxLevel:(int)maxLevel NS_SWIFT_NAME(drawContours(image:contours:contourIdx:color:thickness:lineType:hierarchy:maxLevel:));

/**
 * Draws contours outlines or filled contours.
 *
 * The function draws contour outlines in the image if `$$\texttt{thickness} \ge 0$$` or fills the area
 * bounded by the contours if `$$\texttt{thickness}<0$$` . The example below shows how to retrieve
 * connected components from the binary image and label them: :
 * INCLUDE: snippets/imgproc_drawContours.cpp
 *
 * @param image Destination image.
 * @param contours All the input contours. Each contour is stored as a point vector.
 * @param contourIdx Parameter indicating a contour to draw. If it is negative, all the contours are drawn.
 * @param color Color of the contours.
 * @param thickness Thickness of lines the contours are drawn with. If it is negative (for example,
 * thickness=#FILLED ), the contour interiors are drawn.
 * @param lineType Line connectivity. See #LineTypes
 * @param hierarchy Optional information about hierarchy. It is only needed if you want to draw only
 * some of the contours (see maxLevel ).
 * If it is 1, the function draws the contour(s) and all the nested contours. If it is 2, the function
 * draws the contours, all the nested contours, all the nested-to-nested contours, and so on. This
 * parameter is only taken into account when there is hierarchy available.
 * `$$\texttt{offset}=(dx,dy)$$` .
 * NOTE: When thickness=#FILLED, the function is designed to handle connected components with holes correctly
 * even when no hierarchy date is provided. This is done by analyzing all the outlines together
 * using even-odd rule. This may give incorrect results if you have a joint collection of separately retrieved
 * contours. In order to solve this problem, you need to call #drawContours separately for each sub-group
 * of contours, or iterate over the collection using contourIdx parameter.
 */
+ (void)drawContours:(Mat*)image contours:(NSArray<NSArray<Point2i*>*>*)contours contourIdx:(int)contourIdx color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType hierarchy:(Mat*)hierarchy NS_SWIFT_NAME(drawContours(image:contours:contourIdx:color:thickness:lineType:hierarchy:));

/**
 * Draws contours outlines or filled contours.
 *
 * The function draws contour outlines in the image if `$$\texttt{thickness} \ge 0$$` or fills the area
 * bounded by the contours if `$$\texttt{thickness}<0$$` . The example below shows how to retrieve
 * connected components from the binary image and label them: :
 * INCLUDE: snippets/imgproc_drawContours.cpp
 *
 * @param image Destination image.
 * @param contours All the input contours. Each contour is stored as a point vector.
 * @param contourIdx Parameter indicating a contour to draw. If it is negative, all the contours are drawn.
 * @param color Color of the contours.
 * @param thickness Thickness of lines the contours are drawn with. If it is negative (for example,
 * thickness=#FILLED ), the contour interiors are drawn.
 * @param lineType Line connectivity. See #LineTypes
 * some of the contours (see maxLevel ).
 * If it is 1, the function draws the contour(s) and all the nested contours. If it is 2, the function
 * draws the contours, all the nested contours, all the nested-to-nested contours, and so on. This
 * parameter is only taken into account when there is hierarchy available.
 * `$$\texttt{offset}=(dx,dy)$$` .
 * NOTE: When thickness=#FILLED, the function is designed to handle connected components with holes correctly
 * even when no hierarchy date is provided. This is done by analyzing all the outlines together
 * using even-odd rule. This may give incorrect results if you have a joint collection of separately retrieved
 * contours. In order to solve this problem, you need to call #drawContours separately for each sub-group
 * of contours, or iterate over the collection using contourIdx parameter.
 */
+ (void)drawContours:(Mat*)image contours:(NSArray<NSArray<Point2i*>*>*)contours contourIdx:(int)contourIdx color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(drawContours(image:contours:contourIdx:color:thickness:lineType:));

/**
 * Draws contours outlines or filled contours.
 *
 * The function draws contour outlines in the image if `$$\texttt{thickness} \ge 0$$` or fills the area
 * bounded by the contours if `$$\texttt{thickness}<0$$` . The example below shows how to retrieve
 * connected components from the binary image and label them: :
 * INCLUDE: snippets/imgproc_drawContours.cpp
 *
 * @param image Destination image.
 * @param contours All the input contours. Each contour is stored as a point vector.
 * @param contourIdx Parameter indicating a contour to draw. If it is negative, all the contours are drawn.
 * @param color Color of the contours.
 * @param thickness Thickness of lines the contours are drawn with. If it is negative (for example,
 * thickness=#FILLED ), the contour interiors are drawn.
 * some of the contours (see maxLevel ).
 * If it is 1, the function draws the contour(s) and all the nested contours. If it is 2, the function
 * draws the contours, all the nested contours, all the nested-to-nested contours, and so on. This
 * parameter is only taken into account when there is hierarchy available.
 * `$$\texttt{offset}=(dx,dy)$$` .
 * NOTE: When thickness=#FILLED, the function is designed to handle connected components with holes correctly
 * even when no hierarchy date is provided. This is done by analyzing all the outlines together
 * using even-odd rule. This may give incorrect results if you have a joint collection of separately retrieved
 * contours. In order to solve this problem, you need to call #drawContours separately for each sub-group
 * of contours, or iterate over the collection using contourIdx parameter.
 */
+ (void)drawContours:(Mat*)image contours:(NSArray<NSArray<Point2i*>*>*)contours contourIdx:(int)contourIdx color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(drawContours(image:contours:contourIdx:color:thickness:));

/**
 * Draws contours outlines or filled contours.
 *
 * The function draws contour outlines in the image if `$$\texttt{thickness} \ge 0$$` or fills the area
 * bounded by the contours if `$$\texttt{thickness}<0$$` . The example below shows how to retrieve
 * connected components from the binary image and label them: :
 * INCLUDE: snippets/imgproc_drawContours.cpp
 *
 * @param image Destination image.
 * @param contours All the input contours. Each contour is stored as a point vector.
 * @param contourIdx Parameter indicating a contour to draw. If it is negative, all the contours are drawn.
 * @param color Color of the contours.
 * thickness=#FILLED ), the contour interiors are drawn.
 * some of the contours (see maxLevel ).
 * If it is 1, the function draws the contour(s) and all the nested contours. If it is 2, the function
 * draws the contours, all the nested contours, all the nested-to-nested contours, and so on. This
 * parameter is only taken into account when there is hierarchy available.
 * `$$\texttt{offset}=(dx,dy)$$` .
 * NOTE: When thickness=#FILLED, the function is designed to handle connected components with holes correctly
 * even when no hierarchy date is provided. This is done by analyzing all the outlines together
 * using even-odd rule. This may give incorrect results if you have a joint collection of separately retrieved
 * contours. In order to solve this problem, you need to call #drawContours separately for each sub-group
 * of contours, or iterate over the collection using contourIdx parameter.
 */
+ (void)drawContours:(Mat*)image contours:(NSArray<NSArray<Point2i*>*>*)contours contourIdx:(int)contourIdx color:(Scalar*)color NS_SWIFT_NAME(drawContours(image:contours:contourIdx:color:));


//
//  bool cv::clipLine(Rect imgRect, Point& pt1, Point& pt2)
//
/**
 *
 * @param imgRect Image rectangle.
 * @param pt1 First line point.
 * @param pt2 Second line point.
 */
+ (BOOL)clipLine:(Rect2i*)imgRect pt1:(Point2i*)pt1 pt2:(Point2i*)pt2 NS_SWIFT_NAME(clipLine(imgRect:pt1:pt2:));


//
//  void cv::ellipse2Poly(Point center, Size axes, int angle, int arcStart, int arcEnd, int delta, vector_Point& pts)
//
/**
 * Approximates an elliptic arc with a polyline.
 *
 * The function ellipse2Poly computes the vertices of a polyline that approximates the specified
 * elliptic arc. It is used by #ellipse. If `arcStart` is greater than `arcEnd`, they are swapped.
 *
 * @param center Center of the arc.
 * @param axes Half of the size of the ellipse main axes. See #ellipse for details.
 * @param angle Rotation angle of the ellipse in degrees. See #ellipse for details.
 * @param arcStart Starting angle of the elliptic arc in degrees.
 * @param arcEnd Ending angle of the elliptic arc in degrees.
 * @param delta Angle between the subsequent polyline vertices. It defines the approximation
 * accuracy.
 * @param pts Output vector of polyline vertices.
 */
+ (void)ellipse2Poly:(Point2i*)center axes:(Size2i*)axes angle:(int)angle arcStart:(int)arcStart arcEnd:(int)arcEnd delta:(int)delta pts:(NSMutableArray<Point2i*>*)pts NS_SWIFT_NAME(ellipse2Poly(center:axes:angle:arcStart:arcEnd:delta:pts:));


//
//  void cv::putText(Mat& img, String text, Point org, HersheyFonts fontFace, double fontScale, Scalar color, int thickness = 1, LineTypes lineType = LINE_8, bool bottomLeftOrigin = false)
//
/**
 * Draws a text string.
 *
 * The function cv::putText renders the specified text string in the image. Symbols that cannot be rendered
 * using the specified font are replaced by question marks. See #getTextSize for a text rendering code
 * example.
 *
 * @param img Image.
 * @param text Text string to be drawn.
 * @param org Bottom-left corner of the text string in the image.
 * @param fontFace Font type, see #HersheyFonts.
 * @param fontScale Font scale factor that is multiplied by the font-specific base size.
 * @param color Text color.
 * @param thickness Thickness of the lines used to draw a text.
 * @param lineType Line type. See #LineTypes
 * @param bottomLeftOrigin When true, the image data origin is at the bottom-left corner. Otherwise,
 * it is at the top-left corner.
 */
+ (void)putText:(Mat*)img text:(NSString*)text org:(Point2i*)org fontFace:(HersheyFonts)fontFace fontScale:(double)fontScale color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType bottomLeftOrigin:(BOOL)bottomLeftOrigin NS_SWIFT_NAME(putText(img:text:org:fontFace:fontScale:color:thickness:lineType:bottomLeftOrigin:));

/**
 * Draws a text string.
 *
 * The function cv::putText renders the specified text string in the image. Symbols that cannot be rendered
 * using the specified font are replaced by question marks. See #getTextSize for a text rendering code
 * example.
 *
 * @param img Image.
 * @param text Text string to be drawn.
 * @param org Bottom-left corner of the text string in the image.
 * @param fontFace Font type, see #HersheyFonts.
 * @param fontScale Font scale factor that is multiplied by the font-specific base size.
 * @param color Text color.
 * @param thickness Thickness of the lines used to draw a text.
 * @param lineType Line type. See #LineTypes
 * it is at the top-left corner.
 */
+ (void)putText:(Mat*)img text:(NSString*)text org:(Point2i*)org fontFace:(HersheyFonts)fontFace fontScale:(double)fontScale color:(Scalar*)color thickness:(int)thickness lineType:(LineTypes)lineType NS_SWIFT_NAME(putText(img:text:org:fontFace:fontScale:color:thickness:lineType:));

/**
 * Draws a text string.
 *
 * The function cv::putText renders the specified text string in the image. Symbols that cannot be rendered
 * using the specified font are replaced by question marks. See #getTextSize for a text rendering code
 * example.
 *
 * @param img Image.
 * @param text Text string to be drawn.
 * @param org Bottom-left corner of the text string in the image.
 * @param fontFace Font type, see #HersheyFonts.
 * @param fontScale Font scale factor that is multiplied by the font-specific base size.
 * @param color Text color.
 * @param thickness Thickness of the lines used to draw a text.
 * it is at the top-left corner.
 */
+ (void)putText:(Mat*)img text:(NSString*)text org:(Point2i*)org fontFace:(HersheyFonts)fontFace fontScale:(double)fontScale color:(Scalar*)color thickness:(int)thickness NS_SWIFT_NAME(putText(img:text:org:fontFace:fontScale:color:thickness:));

/**
 * Draws a text string.
 *
 * The function cv::putText renders the specified text string in the image. Symbols that cannot be rendered
 * using the specified font are replaced by question marks. See #getTextSize for a text rendering code
 * example.
 *
 * @param img Image.
 * @param text Text string to be drawn.
 * @param org Bottom-left corner of the text string in the image.
 * @param fontFace Font type, see #HersheyFonts.
 * @param fontScale Font scale factor that is multiplied by the font-specific base size.
 * @param color Text color.
 * it is at the top-left corner.
 */
+ (void)putText:(Mat*)img text:(NSString*)text org:(Point2i*)org fontFace:(HersheyFonts)fontFace fontScale:(double)fontScale color:(Scalar*)color NS_SWIFT_NAME(putText(img:text:org:fontFace:fontScale:color:));


//
//  Size cv::getTextSize(String text, HersheyFonts fontFace, double fontScale, int thickness, int* baseLine)
//
/**
 * Calculates the width and height of a text string.
 *
 * The function cv::getTextSize calculates and returns the size of a box that contains the specified text.
 * That is, the following code renders some text, the tight box surrounding it, and the baseline: :
 *
 *     String text = "Funny text inside the box";
 *     int fontFace = FONT_HERSHEY_SCRIPT_SIMPLEX;
 *     double fontScale = 2;
 *     int thickness = 3;
 *
 *     Mat img(600, 800, CV_8UC3, Scalar::all(0));
 *
 *     int baseline=0;
 *     Size textSize = getTextSize(text, fontFace,
 *                                 fontScale, thickness, &baseline);
 *     baseline += thickness;
 *
 *     // center the text
 *     Point textOrg((img.cols - textSize.width)/2,
 *                   (img.rows + textSize.height)/2);
 *
 *     // draw the box
 *     rectangle(img, textOrg + Point(0, baseline),
 *               textOrg + Point(textSize.width, -textSize.height),
 *               Scalar(0,0,255));
 *     // ... and the baseline first
 *     line(img, textOrg + Point(0, thickness),
 *          textOrg + Point(textSize.width, thickness),
 *          Scalar(0, 0, 255));
 *
 *     // then put the text itself
 *     putText(img, text, textOrg, fontFace, fontScale,
 *             Scalar::all(255), thickness, 8);
 *
 *
 * @param text Input text string.
 * @param fontFace Font to use, see #HersheyFonts.
 * @param fontScale Font scale factor that is multiplied by the font-specific base size.
 * @param thickness Thickness of lines used to render the text. See #putText for details.
 * @param baseLine y-coordinate of the baseline relative to the bottom-most text
 * point.
 * @return The size of a box that contains the specified text.
 *
 * @see `+putText:text:org:fontFace:fontScale:color:thickness:lineType:bottomLeftOrigin:`
 */
+ (Size2i*)getTextSize:(NSString*)text fontFace:(HersheyFonts)fontFace fontScale:(double)fontScale thickness:(int)thickness baseLine:(int*)baseLine NS_SWIFT_NAME(getTextSize(text:fontFace:fontScale:thickness:baseLine:));


//
//  double cv::getFontScaleFromHeight(int fontFace, int pixelHeight, int thickness = 1)
//
/**
 * Calculates the font-specific size to use to achieve a given height in pixels.
 *
 * @param fontFace Font to use, see cv::HersheyFonts.
 * @param pixelHeight Pixel height to compute the fontScale for
 * @param thickness Thickness of lines used to render the text.See putText for details.
 * @return The fontSize to use for cv::putText
 *
 * @see `cv::putText`
 */
+ (double)getFontScaleFromHeight:(int)fontFace pixelHeight:(int)pixelHeight thickness:(int)thickness NS_SWIFT_NAME(getFontScaleFromHeight(fontFace:pixelHeight:thickness:));

/**
 * Calculates the font-specific size to use to achieve a given height in pixels.
 *
 * @param fontFace Font to use, see cv::HersheyFonts.
 * @param pixelHeight Pixel height to compute the fontScale for
 * @return The fontSize to use for cv::putText
 *
 * @see `cv::putText`
 */
+ (double)getFontScaleFromHeight:(int)fontFace pixelHeight:(int)pixelHeight NS_SWIFT_NAME(getFontScaleFromHeight(fontFace:pixelHeight:));


//
//  void cv::HoughLinesWithAccumulator(Mat image, Mat& lines, double rho, double theta, int threshold, double srn = 0, double stn = 0, double min_theta = 0, double max_theta = CV_PI)
//
/**
 * Finds lines in a binary image using the standard Hough transform and get accumulator.
 *
 * NOTE: This function is for bindings use only. Use original function in C++ code
 *
 * @see `+HoughLines:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:`
 */
+ (void)HoughLinesWithAccumulator:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn stn:(double)stn min_theta:(double)min_theta max_theta:(double)max_theta NS_SWIFT_NAME(HoughLinesWithAccumulator(image:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:));

/**
 * Finds lines in a binary image using the standard Hough transform and get accumulator.
 *
 * NOTE: This function is for bindings use only. Use original function in C++ code
 *
 * @see `+HoughLines:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:`
 */
+ (void)HoughLinesWithAccumulator:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn stn:(double)stn min_theta:(double)min_theta NS_SWIFT_NAME(HoughLinesWithAccumulator(image:lines:rho:theta:threshold:srn:stn:min_theta:));

/**
 * Finds lines in a binary image using the standard Hough transform and get accumulator.
 *
 * NOTE: This function is for bindings use only. Use original function in C++ code
 *
 * @see `+HoughLines:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:`
 */
+ (void)HoughLinesWithAccumulator:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn stn:(double)stn NS_SWIFT_NAME(HoughLinesWithAccumulator(image:lines:rho:theta:threshold:srn:stn:));

/**
 * Finds lines in a binary image using the standard Hough transform and get accumulator.
 *
 * NOTE: This function is for bindings use only. Use original function in C++ code
 *
 * @see `+HoughLines:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:`
 */
+ (void)HoughLinesWithAccumulator:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold srn:(double)srn NS_SWIFT_NAME(HoughLinesWithAccumulator(image:lines:rho:theta:threshold:srn:));

/**
 * Finds lines in a binary image using the standard Hough transform and get accumulator.
 *
 * NOTE: This function is for bindings use only. Use original function in C++ code
 *
 * @see `+HoughLines:lines:rho:theta:threshold:srn:stn:min_theta:max_theta:`
 */
+ (void)HoughLinesWithAccumulator:(Mat*)image lines:(Mat*)lines rho:(double)rho theta:(double)theta threshold:(int)threshold NS_SWIFT_NAME(HoughLinesWithAccumulator(image:lines:rho:theta:threshold:));



@end

NS_ASSUME_NONNULL_END


