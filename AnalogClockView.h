/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class UIImageView, UIImage, UIView<HandView>, NSCalendar, NSDate, NSTimeZone;

@interface AnalogClockView : UIView <Clock> {
    int _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView<HandView> *_dayHands[3];
    UIView<HandView> *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    BOOL _nighttime;
    double _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}

@property int runMode;
@property(readonly) int style;
@property(readonly) UIImageView * faceView;
@property(readonly) int hour;
@property(readonly) int minute;
@property(retain) NSDate * time;
@property(retain) NSTimeZone * timeZone;
@property(getter=isNighttime,readonly) BOOL nighttime;
@property(getter=isStarted,readonly) BOOL started;

+ (struct CGPoint { float x1; float x2; })shadowRotationalCenterForHand:(int)arg1;
+ (id)overSecondHandDotColor;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insetsForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })sizeForStyle:(int)arg1;
+ (BOOL)isClockRegistered:(id)arg1;
+ (id)overSecondHandDotImage;
+ (BOOL)hasOverSecondHandDot;
+ (id)overHourHandDotForDayTime:(BOOL)arg1;
+ (BOOL)hasOverHourHandDot;
+ (id)clockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)clockFaceForDaytime:(BOOL)arg1;
+ (float)overSecondHandDotSize;
+ (id)makeDotImageSize:(float)arg1 color:(id)arg2;
+ (id)nightTimeOverHourHandDotColor;
+ (id)dayTimeOverHourHandDotColor;
+ (float)overHourHandDotSize;
+ (id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(id)arg3;
+ (void)adjustNumberalCenter:(struct CGPoint { float x1; float x2; }*)arg1 forNumeralIndex:(int)arg2;
+ (id)numeralFont;
+ (struct ShadowInfo { id x1; float x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; float x4; })shadowInfoAtIndex:(unsigned int)arg1;
+ (id)nightTimeTextColor;
+ (id)nightTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)dayTimeFaceColor;
+ (id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2;
+ (id)cacheVersionedPath;
+ (float)secondHandLength;
+ (float)minuteHandLength;
+ (float)minuteHandWidth;
+ (float)hourHandLength;
+ (float)secondHandWidth;
+ (float)hourHandWidth;
+ (struct CGSize { float x1; float x2; })clockSize;
+ (Class)classForStyle:(int)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateTimeForAllTicking;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)updateFlutterForAllTicking;
+ (id)cacheVersionHash;
+ (id)cacheTopLevelPath;
+ (void)unregisterClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (id)analogClockWithStyle:(int)arg1;
+ (float)numeralInset;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(BOOL)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)makeClockFaceForDaytime:(BOOL)arg1;
+ (BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2;
+ (struct CGPoint { float x1; float x2; })handRotationalCenterForHand:(int)arg1;
+ (BOOL)doesFaceHaveShadow;
+ (float)faceRadius;
+ (id)imageInBundleForName:(id)arg1;
+ (id)resourcePath;
+ (int)style;
+ (void)initialize;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })shadowInsets;

- (void)updateTime;
- (BOOL)isNighttime;
- (id)faceView;
- (void)setNighttime:(BOOL)arg1;
- (void)setTime:(id)arg1 animated:(BOOL)arg2;
- (void)updateTimeAnimated:(BOOL)arg1;
- (void)setHandAngle:(float)arg1 forHandIndex:(int)arg2;
- (void)setHandTransformForHandIndex:(int)arg1;
- (int)runMode;
- (void)updateTimeContinuously:(int)arg1;
- (void)updateFlutter;
- (void)setRunMode:(int)arg1;
- (double)coarseUpdateInterval;
- (BOOL)isStarted;
- (int)minute;
- (id)timeZone;
- (double)updateInterval;
- (id)time;
- (void)setTime:(id)arg1;
- (int)hour;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (int)style;
- (void)setTimeZone:(id)arg1;
- (void)start;
- (void)stop;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)init;

@end
