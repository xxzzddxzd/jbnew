//
//  NSObject+imageMatch.m
//  jbnew
//
//  Created by zd on 2021/7/7.
//

#import "imageMatch.h"
#import "threadAndAlert.h"
#import "luafunc.h"
#import "p_inc.h"
#import <opencv2/opencv2.h>

#import "logCenter.h"
#define x5Logt(FORMAT, ...) x5LogPrint(X5_LOG_TYPE_OPENCV , [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]);

OBJC_EXTERN UIImage *_UICreateScreenUIImage() NS_RETURNS_RETAINED;

@implementation imageMatch
static imageMatch *center = nil;

-(UIImage *)UIImgCut:(UIImage *)inImg rect:(CGRect)rect{
    CGImageRef subImageRef = CGImageCreateWithImageInRect(inImg.CGImage, rect);
    CGRect smallBounds = CGRectMake(0, 0, CGImageGetWidth(subImageRef), CGImageGetHeight(subImageRef));
    
    UIGraphicsBeginImageContext(smallBounds.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextDrawImage(context, smallBounds, subImageRef);
    UIImage* smallImage = [UIImage imageWithCGImage:subImageRef];
    UIGraphicsEndImageContext();
    CGImageRelease(subImageRef);
    return smallImage;
}

-(BOOL)UIImgCmp:(UIImage *) img1 img2:(UIImage *)img2 method:(int)method x:(double *)x y:(double *)y min:(double *) min max:(double *) max{
    BOOL rev;
    rev = [self matchImages:img1 Image2:img2 Method:method MinRev:min MaxRev:max xRev:x yRev:y];
    x5Logt(@"****************** UIImgCmp rev %d", rev);
    return rev;
}

-(cv::Mat)CVMat:(UIImage *)image
{
    
    CGColorSpaceRef colorSpace = CGImageGetColorSpace(image.CGImage);
    CGFloat cols = image.size.width;
    CGFloat rows = image.size.height;
    
    cv::Mat cvMat(rows, cols, CV_8UC4); // 8 bits per component, 4 channels
    
    CGContextRef contextRef = CGBitmapContextCreate(cvMat.data,                 // Pointer to backing data
                                                    cols,                      // Width of bitmap
                                                    rows,                     // Height of bitmap
                                                    8,                          // Bits per component
                                                    cvMat.step[0],              // Bytes per row
                                                    colorSpace,                 // Colorspace
                                                    kCGImageAlphaNoneSkipLast |
                                                    kCGBitmapByteOrderDefault); // Bitmap info flags
    
    CGContextDrawImage(contextRef, CGRectMake(0, 0, cols, rows), image.CGImage);
    CGContextRelease(contextRef);
    
    return cvMat;
}


-(BOOL) matchImages:(UIImage*)largerImage Image2:(UIImage*)subImage Method:(int)match_method MinRev:(double*)minf MaxRev:(double*)maxf xRev:(double*)xr yRev:(double*)yr
{
#if 1
    //    x5Logtt(@"largerImage = %@, subImage = %@", largerImage, subImage);
    
    //    x5Logtt(@"matchImages");
    if (largerImage == nil) {
        x5Logt(@"large nil");
        return NO;
    }
    
    if (subImage == nil) {
        x5Logt(@"sub nil");
        return NO;
    }
    cv::Mat tempMat1 = [self CVMat:largerImage];
    cv::Mat tempMat2 = [self CVMat:subImage];
    
    cv::Mat result;
    
    
    //    int match_method = CV_TM_SQDIFF_NORMED;
    //cv::cvtColor(tempMat1, debug, CV_GRAY2BGR);
    //cv::cvtColor(tempMat1, tempMat1, cv::COLOR_RGB2GRAY);
    //cv::cvtColor(tempMat2, tempMat2, cv::COLOR_RGB2GRAY);
    
    int result_cols =  tempMat1.cols - tempMat2.cols + 1;
    int result_rows = tempMat1.rows - tempMat2.rows + 1;
    
    result.create( result_cols, result_rows, CV_32FC1 );
    //    [UIImage report_memory];
    //    report_memory();
    
    //    cv::findHomography;
    /// Do the Matching and Normalize
    cv::matchTemplate( tempMat1,tempMat2 ,result,match_method);
    //    [UIImage report_memory];
    //    report_memory();
    //    double minVal; double maxVal;
    cv::Point minLoc, maxLoc, matchLoc;
    cv::minMaxLoc(result, minf, maxf, &minLoc, &maxLoc, cv::Mat() );
    //    {
    //        CV_TM_SQDIFF        =0,
    //        CV_TM_SQDIFF_NORMED =1,
    //        CV_TM_CCORR         =2,
    //        CV_TM_CCORR_NORMED  =3,
    //        CV_TM_CCOEFF        =4,
    //        CV_TM_CCOEFF_NORMED =5
    //    };
    
    if( match_method == 0 || match_method == 1 ) matchLoc = minLoc;
    else matchLoc = maxLoc;
    
    *xr = matchLoc.x;
    *yr = matchLoc.y;

    tempMat1.release();
    tempMat2.release();
    result.release();
    tempMat1.deallocate();
    tempMat2.deallocate();
    result.deallocate();
        x5Logt(@"match_method%d tempMat1 = %p, tempMat2 = %p, result = %p", match_method,&tempMat1, &tempMat2, &result);
    
    x5Logt(@"minf %f",*minf)
    switch (match_method) {
        case 1:
            
            if (*minf < 0.01) {
                return YES;
            }
            else {
                return NO;
            }
            break;
        case 3:
            if (*maxf > 0.99) {
                return YES;
            }
            else {
                return NO;
            }
            break;
            
        default:
            break;
    }
    #endif
    
    return NO;
    
}

/**
 *    @??????    ??????????????????
 *
 *    @??????     para1     ????????????????????????
 *    @??????     startX     ?????????x
 *    @??????     startY     ?????????y
 *    @??????     searchWidth     ?????????
 *    @??????     searchHeight     ?????????
 *    @??????     rev     ????????????????????????
 *    @??????     rev1     ?????????????????????x
 *    @??????     rev2     ?????????????????????y
 */
-(void)execImgFindInArea:(const char *)para1 startX:(int)startX startY:(int)startY searchWidth:(int)searchWidth searchHeight:(int)searchHeight rev:(int*)rev rev1:(int*)rev1 rev2:(int*)rev2{
    @autoreleasepool
    {
        @synchronized([screenshotManager defaultCenter].screenImage){
            UIImage * now, * imgToFind, * nowPart;
            int targetWidth, targetHeight;
            double revX, revY, revMin, revMax;
            
            *rev = 0;
            *rev1 = 0;
            *rev2 = 0;
            
            
            now = [screenshotManager defaultCenter].screenImage;
            imgToFind = [UIImage imageWithContentsOfFile:[NSString stringWithFormat:@"%s",para1]];
            x5Logt(@"%s", para1);
            
            if (now == nil ) {
                x5Logt(@"now = nil");
                return;
            }
            
            if (imgToFind == nil) {
                x5Logt(@"imgToFind = nil");
                return;
            }
            
            targetWidth = imgToFind.size.width;
            targetHeight = imgToFind.size.height;
            
            if(searchWidth==0 || (searchWidth+startX)>[[luaManager managerCenter] screenWidth] ){
                searchWidth = now.size.width;
            }
            
            if (searchHeight==0 || (searchHeight+startY)>[[luaManager managerCenter] screenHeight] ) {
                searchHeight = now.size.height;
            }
            
            if (searchWidth<imgToFind.size.width || searchHeight<imgToFind.size.height) {
                x5Logt(@"size error sw:%d - itfw:%f, sh:%d - itfh:%f",
                      searchWidth,imgToFind.size.width,
                      searchHeight,imgToFind.size.height);
                return;
            }
            
            nowPart = [self UIImgCut:now rect:CGRectMake(startX, startY, searchWidth, searchHeight)];
            if (nil == nowPart){
                x5Logt(@"UIImgCut return nil, maybe exception");
                return;
            }

            x5Logt(@"####### %f-%f, %f-%f",nowPart.size.width, imgToFind.size.width, nowPart.size.height, imgToFind.size.height);
            
            if (nowPart.size.width<imgToFind.size.width ||
                nowPart.size.height<imgToFind.size.height) {
                x5Logt(@"?????????????????????????????????????????????");
                return;
            }
            
            *rev = [self UIImgCmp:nowPart img2:imgToFind method:1 x:&revX y:&revY min:&revMin max:&revMax];
            x5Logt(@"Finish cmp res = %d",*rev);
            
            if(*rev==1)
            {
                x5Logt(@"------sx:%d,rx:%d,tw:%d",startX , (int)revX , targetWidth/2);
                *rev1 = startX + (int)revX + targetWidth/2;
                x5Logt(@"------sy:%d,ry:%d,th:%d",startY , (int)revY , targetHeight/2);
                *rev2 = startY + (int)revY + targetHeight/2;
            }
            
            now = nil;
            imgToFind = nil;
            nowPart = nil;
        }
        
    }
}


-(void)startLoopForScreenShot{
    x5Logt(@"startLoopForScreenShot")
    [[threadAndAlert managerCenter] x5ThreadDetach:^{
        @autoreleasepool {
            x5Logt(@"start screenshot thread");
            while([[luaManager managerCenter] isLuaRunning]){
                x5Logt(@"waiting screenshot");
                if([[luaManager managerCenter] isAutoSnapShot]){
                    x5Logt(@"????????????");
                    [self snapShotOne];
                    [[luaManager managerCenter] setIsAutoSnapShot:false];
                    usleep(500*1000);
                }
                else{
                    usleep(100*1000);
                }
            }
            x5Logt(@"****??????????????????****");
        }
    }];
}

+ (instancetype)managerCenter {
    if (!center){
        center = [[imageMatch alloc] init];
    }
    return center;
}

-(void)snapShotOne
{
    UIImage* img = _UICreateScreenUIImage();
    @synchronized([screenshotManager defaultCenter].screenImage){
        [screenshotManager defaultCenter].screenImage = img;
    }
    [img release];
}
@end

@implementation screenshotManager
+ (screenshotManager *)defaultCenter{
    static screenshotManager *center = nil;
    @synchronized(self){
        if (!center) {
            center = [[screenshotManager alloc] init];
        }
    }
    return center;
}
@end
