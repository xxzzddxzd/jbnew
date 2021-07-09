//
//  threadAndAlert.h
//  jbnew
//
//  Created by zd on 2021/7/6.
//

#ifndef threadAndAlert_h
#define threadAndAlert_h
#import <UIKit/UIKit.h>
typedef void (^_x5ThreadBlock)(void);
@interface threadAndAlert : NSObject <UIAlertViewDelegate>
-(void)x5ThreadDetach:(_x5ThreadBlock) block;
-(void)showAlertBegin:(NSString *)title msg:(NSString *)message;
-(void)showAlertMsg:(NSString *)title ;
+ (instancetype)managerCenter;
@end
#endif /* threadAndAlert_h */
