/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class UISwitch, NSString, UILabel, NSArray, _UISettings;

@interface PTSSwitch : UIView <PTSHUDControl, _UISettingsKeyPathObserver> {
    BOOL _enabled;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
    float _height;
    id _target;
    SEL _action;
    UISwitch *_switchControl;
    UILabel *_titleLabel;
    NSArray *_subviewConstraints;
}

@property _UISettings * settings;
@property(copy) NSString * valueKeyPath;
@property int alignment;
@property(readonly) float height;
@property BOOL enabled;
@property id target;
@property SEL action;
@property(retain) UISwitch * switchControl;
@property(retain) UILabel * titleLabel;
@property(retain) NSArray * subviewConstraints;

+ (id)switch;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (id)switchForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;

- (void)setSubviewConstraints:(id)arg1;
- (id)subviewConstraints;
- (void)pressed:(id)arg1;
- (id)valueKeyPath;
- (void)setValueKeyPath:(id)arg1;
- (id)switchControl;
- (id)makeTitleLabel;
- (void)setSwitchControl:(id)arg1;
- (id)makeSwitch;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void).cxx_destruct;
- (void)setSettings:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (int)alignment;
- (float)height;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setAction:(SEL)arg1;
- (id)titleLabel;
- (void)setEnabled:(BOOL)arg1;
- (id)target;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)settings;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignment:(int)arg1;
- (BOOL)enabled;
- (void)dealloc;

@end
