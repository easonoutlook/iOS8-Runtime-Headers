/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSCalendar, NSDate;

@interface DigitalClockLabel : ShrinkableDateLabel  {
    NSCalendar *_calendar;
    NSDate *_baseDate;
    int _hour;
    int _minute;
}


- (BOOL)setHour:(int)arg1 minute:(int)arg2;
- (void)forceSetHour:(int)arg1 minute:(int)arg2;
- (void)refreshUI;
- (void)significantTimeChange:(id)arg1;
- (void)resetFontSizes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end