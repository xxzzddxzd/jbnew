//
//  NSObject+imageMatch.h
//  jbnew
//
//  Created by zd on 2021/7/7.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface imageMatch : NSObject
+(instancetype)managerCenter;
-(void)startLoopForScreenShot;
-(void)execImgFindInArea:(const char *)para1 startX:(int)startX startY:(int)startY searchWidth:(int)searchWidth searchHeight:(int)searchHeight rev:(int*)rev rev1:(int*)rev1 rev2:(int*)rev2;
@end


@interface screenshotManager : NSObject
@property (nonatomic, retain) UIImage *screenImage;
+ (screenshotManager *)defaultCenter;
@end

NS_ASSUME_NONNULL_END
