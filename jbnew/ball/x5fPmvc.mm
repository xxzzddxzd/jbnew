#import "x5fPmvc.h"
//#import "x5fPmgd.h"
#import "HBView.h"
#import "x5fPdb.h"
//#import "x5fPsvc.h"
#import "p_inc.h"
#import "luafunc.h"

@interface x5fPmvc ()
//<
//UIGestureRecognizerDelegate
////x5fPsuicd
//>
@property (retain, nonatomic) HBView *customView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) x5fPdb *avatar;
@end
extern void getTouchFromBall();
@implementation x5fPmvc

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}
-(void)refreshIcon{
    XLog(@"refresh icon 1  %@",self.avatar)
//    UIImage * img =[self avatarGBImage];
    XLog(@"refresh icon 2")
//    [self.avatar setImage:img forState:UIControlStateNormal];
    XLog(@"refresh icon done")
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    CGRect bounds = [UIScreen mainScreen].bounds;

    self.view = [[HBView alloc] initWithFrame:self.view.frame];

    self.customView = [[HBView alloc] initWithFrame:bounds];
    self.customView.backgroundColor = [UIColor clearColor];
    self.customView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin
    | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
    [self.view addSubview:self.customView];
    XLog(@"1")
//    id<UIApplicationDelegate> app = [[UIApplication sharedApplication] delegate];
//    [app.window addSubview:self.customView];
    XLog(@"2")
    self.panelView = [[UIView alloc] initWithFrame:bounds];
    self.panelView.backgroundColor = [UIColor clearColor];
    self.panelView.hidden = YES;
    self.panelView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin
    | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
    [self.view addSubview:self.panelView];
//    [app.window addSubview:self.panelView];
//    [app.window addSubview:self.settingsVC.navigationController.view];
//    [self.panelView addSubview:self.settingsVC.navigationController.view];
XLog(@"3")
//    UITapGestureRecognizer *backgroundTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handlePanelViewBackgroundTapEvent:)];
//    backgroundTap.numberOfTouchesRequired = 1;
//    backgroundTap.numberOfTapsRequired = 1;
//    backgroundTap.delegate = self;
//    [self.panelView addGestureRecognizer:backgroundTap];
//    [backgroundTap release];

    // 悬浮按钮
    
    self.avatar = [[x5fPdb alloc] initInView:self.customView WithFrame:CGRectMake(CGRectGetWidth(self.customView.frame) - 45.0f, CGRectGetHeight(self.customView.frame) / 2 - 150.0f, 50, 60.0f)];
    [self.avatar setImage:[self avatarGBImage] forState:UIControlStateNormal];
    self.avatar.autoDocking = NO;
    [self.avatar addTarget:self action:@selector(toggleAppearPanel:) forControlEvents:UIControlEventTouchUpInside];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    if (UIInterfaceOrientationIsPortrait([UIApplication sharedApplication].statusBarOrientation)) {
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
            return (UIInterfaceOrientationPortrait == toInterfaceOrientation);
        }
        return (UIInterfaceOrientationPortrait == toInterfaceOrientation) | (UIInterfaceOrientationPortraitUpsideDown == toInterfaceOrientation);
    }
    else {
        return (UIInterfaceOrientationLandscapeLeft == toInterfaceOrientation) | (UIInterfaceOrientationLandscapeRight == toInterfaceOrientation);
    }
    return YES;
}

- (BOOL)shouldAutorotate
{
    return YES;
}

- (NSUInteger)supportedInterfaceOrientations
{
    if (UIInterfaceOrientationIsPortrait([UIApplication sharedApplication].statusBarOrientation)) {
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
            return UIInterfaceOrientationMaskPortrait;
        }
        return UIInterfaceOrientationMaskPortrait | UIInterfaceOrientationMaskPortraitUpsideDown;
    }
    else {
        return UIInterfaceOrientationMaskLandscape;
    }
}


static CFTimeInterval startTime = 0;
#pragma mark - Action Handler
//点击事件
- (void)toggleAppearPanel:(id)sender
{
    if (self.avatar.isDragging) {
        return;
    }
    CFTimeInterval currentTime = CACurrentMediaTime();
    if (currentTime - startTime > 0.4){
//        单击
        startTime = CACurrentMediaTime();
        getTouchFromBall();
        UIImage * img =[self avatarGBImage];
        XLog(@"setimg %@",img)
        [self.avatar setImage:img forState:UIControlStateNormal];
    }else{
//        双击
        self.avatar.hidden = YES;
    }
}
//- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
//{
//    XLog(@"%ld", (long)buttonIndex);
//    if (buttonIndex ==1 ){
//
//        XLog(@"点击了取消")
//    }
//    else{
//        XLog(@"开始执行注入")
//        startSearchAndInject();
//    }
//
//}
//- (void)handlePanelViewBackgroundTapEvent:(UITapGestureRecognizer *)sender
//{
//    CGPoint touch = [sender locationInView:self.panelView];
//
//    CGRect validRect = self.settingsVC.navigationController.view.frame;
//    if (!CGRectContainsPoint(validRect, touch)) {
//        [self toggleAppearPanel:nil];
//    }
//}

#pragma mark - XXSetting Delegate
- (void)dismissSettingsViewControllerAction
{
    [self toggleAppearPanel:nil];
}

- (void)hideModeAction
{
//    [self toggleAppearPanel:nil];
    self.avatar.hidden = YES;
}
- (void)showavatar
{
    self.avatar.hidden = NO;
}

#pragma mark - Gesture Recognizer Delegate
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch
{
    return ! ([touch.view isKindOfClass:[UIControl class]] || [NSStringFromClass([touch.view class]) isEqualToString:@"UITableViewCellContentView"] || [touch.view.superview isKindOfClass:[UIControl class]]);
}

#pragma mark - Image
- (UIImage *)avatarGBImage{
    XLog(@"avatarGBImage")
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(46,46), NO, 0);


    //// General Declarations
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    //// Color Declarations
    UIColor* color = [UIColor colorWithCGColor:[UIColor yellowColor].CGColor];
    UIColor* color2 = [UIColor colorWithRed: 0 green: 0 blue: 0 alpha: 0];
    
    //// Shadow Declarations
    UIColor* shadow = [UIColor.blackColor colorWithAlphaComponent: 0.53];
    CGSize shadowOffset = CGSizeMake(1.1, 4.1);
    CGFloat shadowBlurRadius = 2;
    
    //// Oval Drawing
    UIBezierPath* ovalPath = [UIBezierPath bezierPathWithOvalInRect: CGRectMake(2, 1, 40, 40)];
    CGContextSaveGState(context);
    CGContextSetShadowWithColor(context, shadowOffset, shadowBlurRadius, [shadow CGColor]);
    [color2 setFill];
    [ovalPath fill];
    CGContextRestoreGState(context);
    
    [color setStroke];
    ovalPath.lineWidth = 2;
    [ovalPath stroke];
    
    
    //// Text Drawing
    CGRect textRect = CGRectMake(8, 14, 30, 17);
    [color setFill];
    XLog(@"avatarGBImage check isluarunning")
    if([[luaManager managerCenter] isLuaRunning]){
        XLog(@"avatarGBImage set text go")
        [@">"  drawInRect: textRect withFont: [UIFont fontWithName: @"Helvetica-Bold" size: 10] lineBreakMode: NSLineBreakByWordWrapping alignment: NSTextAlignmentCenter];
    }else{
        XLog(@"avatarGBImage set text stop")
        [@"||"  drawInRect: textRect withFont: [UIFont fontWithName: @"Helvetica-Bold" size: 10] lineBreakMode: NSLineBreakByWordWrapping alignment: NSTextAlignmentCenter];
    }
//    [@"script"  drawInRect: textRect withFont: [UIFont fontWithName: @"Helvetica-Bold" size: 10] lineBreakMode: NSLineBreakByWordWrapping alignment: NSTextAlignmentCenter];

    UIImage* im = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    XLog(@"avatarGBImage end")
    return im;
}





- (BOOL)prefersStatusBarHidden
{
//    NSLog(@"********HIDDEN*********");
    return YES; //返回NO表示要显示，返回YES将hiden
}

@end
