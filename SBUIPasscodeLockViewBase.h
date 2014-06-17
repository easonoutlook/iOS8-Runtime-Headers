/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBFLegibilitySettingsProvider>, _UILegibilitySettings, SBUIPasscodeEntryField, NSString, <SBUIPasscodeLockViewDelegate>, <SBUIPasscodeLockViewDelegate_Internal>, UIColor;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricEventObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView> {
    <SBUIPasscodeLockViewDelegate_Internal> *_delegate;
    int _style;
    NSString *_passcode;
    BOOL _playsKeypadSounds;
    BOOL _showsEmergencyCallButton;
    BOOL _showsStatusField;
    BOOL _becameVisible;
    float _backgroundAlpha;
    UIColor *_customBackgroundColor;
    SBUIPasscodeEntryField *_entryField;
    <SBFLegibilitySettingsProvider> *_backgroundLegibilitySettingsProvider;
    float _luminanceBoost;
    float _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
    BOOL _mesaLockedOut;
    unsigned int _biometricMatchMode;
    BOOL _shouldResetForFailedPasscodeAttempt;
}

@property int style;
@property(getter=_luminosityBoost,setter=_setLuminosityBoost:) float luminosityBoost;
@property(getter=_entryField,setter=_setEntryField:,retain) SBUIPasscodeEntryField * _entryField;
@property BOOL shouldResetForFailedPasscodeAttempt;
@property <SBUIPasscodeLockViewDelegate> * delegate;
@property(readonly) NSString * passcode;
@property BOOL playsKeypadSounds;
@property BOOL showsStatusField;
@property BOOL showsEmergencyCallButton;
@property float backgroundAlpha;
@property(retain) UIColor * customBackgroundColor;
@property(retain) <SBFLegibilitySettingsProvider> * backgroundLegibilitySettingsProvider;
@property unsigned int biometricMatchMode;


- (void)setShouldResetForFailedPasscodeAttempt:(BOOL)arg1;
- (BOOL)shouldResetForFailedPasscodeAttempt;
- (void)_setEntryField:(id)arg1;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (BOOL)_isBoundsPortraitOriented;
- (void)setBiometricMatchMode:(unsigned int)arg1;
- (id)backgroundLegibilitySettingsProvider;
- (float)backgroundAlpha;
- (BOOL)showsEmergencyCallButton;
- (BOOL)showsStatusField;
- (BOOL)playsKeypadSounds;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(id)arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (void)_handleBiometricEvent:(unsigned int)arg1;
- (void)updateStatusTextForBioEvent:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (float)_luminanceBoostFromDisplayBrightness;
- (float)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (unsigned int)biometricMatchMode;
- (void)_setLuminosityBoost:(float)arg1;
- (float)_luminosityBoost;
- (void)_evaluateLuminance;
- (void)_luminanceBoostDidChange;
- (void)_resetStatusText;
- (id)_entryField;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (void)_resetForFailedMesaAttempt;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)_clearBrightnessChangeTimer;
- (void)_noteScreenBrightnessDidChange;
- (BOOL)_wantsBiometricAuthentication;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setPlaysKeypadSounds:(BOOL)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)customBackgroundColor;
- (void)resetForFailedPasscode;
- (id)passcode;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)reset;
- (void)_setLegibilitySettings:(id)arg1;
- (BOOL)canResignFirstResponder;
- (void)setStyle:(int)arg1;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (int)style;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (int)_orientation;

@end