/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class UIImageView, UILabel, UIActivityIndicatorView, AXRemoteHearingAidDevice, NSNumberFormatter;

@interface AXHearingAidDetailCell : PSTableCell  {
    AXRemoteHearingAidDevice *_device;
    UILabel *_leftLabel;
    UIImageView *_leftBattery;
    UILabel *_rightLabel;
    UIImageView *_rightBattery;
    UIActivityIndicatorView *_loadingIndicator;
    NSNumberFormatter *_numberFormatter;
    BOOL _bluetoothAvailable;
}

@property(retain) AXRemoteHearingAidDevice * device;


- (void)setDevice:(id)arg1;
- (id)device;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)imageForBatteryLevel:(float)arg1;
- (void)updateAvailability;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
