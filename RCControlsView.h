/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCLayoutMetrics, NSLayoutConstraint, UIAlertView, UIButton, RCRecorderStateButton, RCAVState, <RCControlsViewDelegate>, UIColor;

@interface RCControlsView : UIView  {
    BOOL _showsBottomSeparatorLine;
    BOOL _canEnableCaptureButton;
    BOOL _canEnablePreviewButton;
    BOOL _canEnableDoneButton;
    BOOL _canRecord;
    <RCControlsViewDelegate> *_delegate;
    int _controlsConfiguration;
    RCAVState *_AVState;
    RCLayoutMetrics *_layoutMetrics;
    float _topPadding;
    NSLayoutConstraint *_topPaddingCn;
    UIButton *_leftPlayStateButton;
    UIButton *_doneButton;
    RCRecorderStateButton *_recordingStateButton;
    UIAlertView *_noMicAlertView;
    UIColor *_bottomSeparatorLineColor;
}

@property <RCControlsViewDelegate> * delegate;
@property int controlsConfiguration;
@property(copy) RCAVState * AVState;
@property(retain) RCLayoutMetrics * layoutMetrics;
@property float topPadding;
@property BOOL showsBottomSeparatorLine;
@property BOOL canEnableCaptureButton;
@property BOOL canEnablePreviewButton;
@property BOOL canEnableDoneButton;
@property(readonly) NSLayoutConstraint * topPaddingCn;
@property(readonly) UIButton * leftPlayStateButton;
@property(readonly) UIButton * doneButton;
@property(readonly) RCRecorderStateButton * recordingStateButton;
@property(readonly) UIAlertView * noMicAlertView;
@property(readonly) UIColor * bottomSeparatorLineColor;
@property BOOL canRecord;


- (id)bottomSeparatorLineColor;
- (id)noMicAlertView;
- (id)topPaddingCn;
- (BOOL)canEnableDoneButton;
- (BOOL)canEnablePreviewButton;
- (BOOL)canEnableCaptureButton;
- (BOOL)showsBottomSeparatorLine;
- (int)controlsConfiguration;
- (void)performFailedToStartRecordingActions;
- (void)performRecordButtonPress;
- (id)_recordButton;
- (void)setCanEnableDoneButton:(BOOL)arg1;
- (void)setCanEnableCaptureButton:(BOOL)arg1;
- (void)setCanEnablePreviewButton:(BOOL)arg1;
- (void)setShowsBottomSeparatorLine:(BOOL)arg1;
- (BOOL)canRecord;
- (BOOL)_isRecordingOrPausedRecording;
- (BOOL)_isCaptureButtonEnabled;
- (BOOL)_isPreviewButtonEnabled;
- (int)_AVPreviewState;
- (void)setControlsConfiguration:(int)arg1 animate:(BOOL)arg2;
- (void)_updateButtonsAnimated:(BOOL)arg1;
- (id)recordingStateButton;
- (id)leftPlayStateButton;
- (void)_inputAvailabilityDidChangeNotification:(id)arg1;
- (void)setControlsConfiguration:(int)arg1;
- (void)setCanRecord:(BOOL)arg1;
- (void)_playStateButtonPressed:(id)arg1;
- (id)_leftPlayStateImageForAVPreviewState:(int)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_recordingStateButtonPressed:(id)arg1;
- (id)layoutMetrics;
- (void)setLayoutMetrics:(id)arg1;
- (int)_AVCaptureState;
- (void)setAVState:(id)arg1;
- (id)AVState;
- (id)doneButton;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setTopPadding:(float)arg1;
- (float)topPadding;

@end
