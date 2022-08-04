#import "x5fPmc.h"
#import "HBWindow.h"
#import "p_inc.h"
#import "x5fPmvc.h"

//extern struct callrel_sb * callrel_s;
//extern struct callrel_ga * callrel_g;
@interface x5fPmc ()
//<
//x5fPsd
//>
@property (retain, nonatomic) HBWindow *centerWindow;
@property (retain, nonatomic) x5fPmvc *modRootVC;

@end

@implementation x5fPmc
+ (x5fPmc *)defaultCenter
{
    static x5fPmc * sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSLog(@"defaultCenter 1");
        sharedInstance = [[self alloc] init];
        
    });
    return sharedInstance;
}

+(void)refreshBall{
    XLog(@"refresh ball");
    static x5fPmc * mc = [self defaultCenter];
    [mc.modRootVC refreshIcon];
}

- (id)init
{
    NSLog(@"fpmc init");
    self = [super init];
    if (self) {
        [self defaultSetting];
    }
    return self;
}


+ (void)showIcon
{
    NSLog(@"set show");
    static x5fPmc * mc = [self defaultCenter];
    mc.centerWindow.hidden = NO;
    
}

+ (void)hiddenIcon
{
    NSLog(@"set hidden");
    static x5fPmc * mc = [self defaultCenter];
    mc.centerWindow.hidden = YES;
}



- (void)defaultSetting
{
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(windowDidBecomeKeyNotification:) name:@"UIWindowDidBecomeKeyNotification" object:nil];
}

- (void)windowDidBecomeKeyNotification:(NSNotification *)notification
{
    if (!self.centerWindow) {
        
        self.centerWindow = [[HBWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
        self.centerWindow.backgroundColor = [UIColor clearColor];
        self.modRootVC = [[x5fPmvc alloc] init];

        
        self.centerWindow.rootViewController = self.modRootVC;
        self.centerWindow.windowLevel = UIWindowLevelStatusBar;
//        if (gb_state == SP_INIT_DONE)
        {
            self.centerWindow.hidden = NO;
        }
        
    }
}

- (void)dealloc
{
    [self.centerWindow release];
    
    
    [super dealloc];
}

#pragma mark - Settings Delegate

- (NSString *)titleForHeaderInSection:(NSInteger)section
{
    return nil;
}

- (NSString *)titleForFooterInSection:(NSInteger)section
{
    return nil;
}





@end
