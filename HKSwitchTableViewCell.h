/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class UIImageView, UISwitch, UILabel, <HKSwitchTableViewCellDelegate>;

@interface HKSwitchTableViewCell : UITableViewCell  {
    UILabel *_displayLabel;
    UIImageView *_iconImageView;
    UISwitch *_switch;
    <HKSwitchTableViewCellDelegate> *_delegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _marginInsets;
}

@property <HKSwitchTableViewCellDelegate> * delegate;
@property(getter=isOn) BOOL on;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } marginInsets;


- (void)_setupUI;
- (void)switchValueChanged:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })marginInsets;
- (void).cxx_destruct;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setIconImage:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
