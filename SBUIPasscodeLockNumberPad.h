/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSArray, SBNumberPadWithDelegate, UIControl<SBUIPasscodeNumberPadButton>, <SBUIPasscodeLockNumberPadDelegate>, UIView, SBUIButton, UIColor;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {
    SBNumberPadWithDelegate *_numberPad;
    <SBUIPasscodeLockNumberPadDelegate> *_delegate;
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_bottomPaddingView;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_backspaceButton;
    SBUIButton *_cancelButton;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    BOOL _showsBackspaceButton;
    BOOL _showsEmergencyCallButton;
    BOOL _showsCancelButton;
    UIColor *_customBackgroundColor;
    BOOL _useLightStyle;
}

@property <SBUIPasscodeLockNumberPadDelegate> * delegate;
@property BOOL showsBackspaceButton;
@property BOOL showsEmergencyCallButton;
@property BOOL showsCancelButton;
@property(readonly) NSArray * buttons;
@property(retain) UIControl<SBUIPasscodeNumberPadButton> * downButton;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_inputButtonCircleSpacing;
+ (struct CGSize { float x1; float x2; })_inputButtonCircleSize;
+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(BOOL)arg2;

- (id)downButton;
- (BOOL)showsBackspaceButton;
- (float)_distanceToTopOfFirstButton;
- (void)setShowsBackspaceButton:(BOOL)arg1;
- (void)setDownButton:(id)arg1;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_configureAdditionalButtons;
- (void)_emergencyCallButtonHit;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (id)_fontForAncillaryButton;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (void)_setLuminosityBoost:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (id)buttons;
- (void)setBackgroundAlpha:(float)arg1;
- (BOOL)showsCancelButton;
- (void)setShowsCancelButton:(BOOL)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
