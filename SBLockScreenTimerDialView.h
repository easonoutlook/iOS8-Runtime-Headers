/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class _UILegibilityView;

@interface SBLockScreenTimerDialView : UIView <SBLegibility> {
    _UILegibilityView *_dialView;
    float _strength;
}

@property float strength;


- (id)_imageNameForCurrentContentSize:(id)arg1;
- (id)_newDialViewForSettings:(id)arg1;
- (void)updateForChangedSettings:(id)arg1;
- (void)setStrength:(float)arg1;
- (float)strength;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
