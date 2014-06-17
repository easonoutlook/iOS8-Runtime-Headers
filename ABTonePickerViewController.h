/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class TKTonePickerViewController;

@interface ABTonePickerViewController : ABPickerViewController  {
    TKTonePickerViewController *_tonePickerViewController;
}

@property(retain,readonly) TKTonePickerViewController * tonePickerViewController;


- (void)cancelButtonClicked:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)loadView;
- (id)init;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (id)tonePickerViewController;
- (id)initWithAlertType:(int)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;

@end
