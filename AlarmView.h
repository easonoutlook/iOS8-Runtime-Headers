/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class DigitalClockLabel, UILabel, NSString, UISwitch, UIFont;

@interface AlarmView : UIView  {
    int _style;
    DigitalClockLabel *_timeLabel;
    NSString *_name;
    NSString *_repeatText;
    UILabel *_detailLabel;
    UIFont *_nameFont;
    UIFont *_repeatFont;
    UILabel *_secondaryDesignatorLabel;
    UISwitch *_enabledSwitch;
}

@property int style;
@property(readonly) DigitalClockLabel * timeLabel;
@property(copy) NSString * name;
@property(copy) NSString * repeatText;
@property(retain) UILabel * detailLabel;
@property(retain) UIFont * nameFont;
@property(retain) UIFont * repeatFont;
@property(retain,readonly) UILabel * secondaryDesignatorLabel;
@property(readonly) UISwitch * enabledSwitch;


- (id)enabledSwitch;
- (id)secondaryDesignatorLabel;
- (void)setRepeatFont:(id)arg1;
- (id)repeatFont;
- (void)setNameFont:(id)arg1;
- (id)nameFont;
- (id)repeatText;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)setRepeatText:(id)arg1;
- (id)timeLabel;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDetailLabel:(id)arg1;
- (id)detailLabel;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;

@end
