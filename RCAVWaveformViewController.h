/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCGLWaveformViewController, RCWaveformDataSource, RCCaptureSession, RCUIConfiguration, RCLayoutMetrics, RCPreviewController, RCCompositionController, RCAVState, <RCAVWaveformViewControllerDelegate>;

@interface RCAVWaveformViewController : UIViewController <RCGLWaveformViewDelegate, RCPreviewControllerObserver, RCCaptureSessionObserver> {
    double _defaultVisibleDuration;
    int _batchUpdatingDisplayableTimesCount;
    BOOL _needsUpdateDisplayableTime;
    BOOL _showingSelectionOverlayEnabled;
    BOOL _screenUpdatesDisabled;
    RCPreviewController *_activePreviewController;
    RCCaptureSession *_activeCaptureSession;
    RCCompositionController *_activeCaptureCompositionController;
    BOOL _currentTimeTracksCapturedEndPoint;
    BOOL _autocenterCurrentTimeIndicatorAlways;
    BOOL _clipsTimeMarkersToDuration;
    BOOL _userInteractionEnabled;
    BOOL _selectionOverlayVisible;
    RCWaveformDataSource *_waveformDataSource;
    <RCAVWaveformViewControllerDelegate> *_delegate;
    RCAVState *_AVState;
    RCUIConfiguration *_UIConfiguration;
    RCLayoutMetrics *_layoutMetrics;
    RCGLWaveformViewController *_waveformViewController;
    double _nextPreviewStartTime;
    double _currentTime;
    double _duration;
    double _maximumSelectionDuration;
    struct { 
        double beginTime; 
        double endTime; 
    } _highlightTimeRange;
}

@property(retain) RCWaveformDataSource * waveformDataSource;
@property <RCAVWaveformViewControllerDelegate> * delegate;
@property(retain) RCCaptureSession * activeCaptureSession;
@property(retain) RCPreviewController * activePreviewController;
@property(readonly) RCAVState * AVState;
@property(readonly) double nextPreviewStartTime;
@property(readonly) struct { double x1; double x2; } nextPreviewTimeRange;
@property struct { double x1; double x2; } visibleTimeRange;
@property struct { double x1; double x2; } highlightTimeRange;
@property double currentTime;
@property BOOL currentTimeTracksCapturedEndPoint;
@property double duration;
@property(readonly) float waveformBottomLineInset;
@property(readonly) float currentTimeIndicatorCoordinate;
@property(copy) RCUIConfiguration * UIConfiguration;
@property(retain) RCLayoutMetrics * layoutMetrics;
@property BOOL screenUpdatesDisabled;
@property BOOL autocenterCurrentTimeIndicatorAlways;
@property BOOL clipsTimeMarkersToDuration;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(getter=isSelectionOverlayVisible,readonly) BOOL selectionOverlayVisible;
@property(readonly) struct { double x1; double x2; } selectedTimeRange;
@property double maximumSelectionDuration;
@property(retain) RCGLWaveformViewController * waveformViewController;


- (void)setWaveformViewController:(id)arg1;
- (BOOL)isSelectionOverlayVisible;
- (BOOL)clipsTimeMarkersToDuration;
- (BOOL)autocenterCurrentTimeIndicatorAlways;
- (id)layoutMetrics;
- (id)UIConfiguration;
- (void)setCurrentTimeTracksCapturedEndPoint:(BOOL)arg1;
- (BOOL)currentTimeTracksCapturedEndPoint;
- (void)setWaveformDataSource:(id)arg1;
- (void)hidSelectionOverlayWithCompletionBlock:(id)arg1;
- (void)showSelectionOverlay;
- (void)setClipsTimeMarkersToDuration:(BOOL)arg1;
- (void)setAutocenterCurrentTimeIndicatorAlways:(BOOL)arg1;
- (float)waveformBottomLineInset;
- (struct { double x1; double x2; })setHighlightTimeRange;
- (struct { double x1; double x2; })nextPreviewTimeRange;
- (void)setActivePreviewController:(id)arg1;
- (id)initWithWaveformDataSource:(id)arg1 delegate:(id)arg2;
- (void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;
- (void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(struct { double x1; double x2; })arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3;
- (double)nextPreviewStartTime;
- (double)maximumSelectionDuration;
- (void)_setSelectionOverlayEnabled:(BOOL)arg1;
- (void)setActiveCaptureSession:(id)arg1;
- (BOOL)screenUpdatesDisabled;
- (id)activePreviewController;
- (void)setMaximumSelectionDuration:(double)arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)_endShowingSelectionOverlayWithCompletionBlock:(id)arg1;
- (void)_beginShowingSelectionOverlay;
- (unsigned int)_currentTimeDisplayOptions;
- (void)setLayoutMetrics:(id)arg1;
- (void)setUIConfiguration:(id)arg1;
- (float)currentTimeIndicatorCoordinate;
- (unsigned int)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })waveformRectForLayoutBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateCurrentTimeForCapturedInput;
- (void)_didUpdateDisplayableTime;
- (struct { double x1; double x2; })highlightTimeRange;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })visibleTimeRange;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })selectedTimeRange;
- (void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (void)_updateInterfaceForAVState;
- (void)_updateDisplayableTimesWithBlock:(id)arg1;
- (id)waveformDataSource;
- (void)setScreenUpdatesDisabled:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotatedWaveformRectForLayoutBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)waveformViewController;
- (void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (id)activeCaptureSession;
- (void)setAVState:(id)arg1;
- (void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;
- (void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
- (void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
- (id)AVState;
- (void)captureSession:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (BOOL)isUserInteractionEnabled;
- (id)delegate;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

@end
