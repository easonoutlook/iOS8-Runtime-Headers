/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCAVWaveformViewController, RCUIConfiguration, UILabel, UIButton, UIView, RCFileInputWaveformDataSource, AVPlayerItem, NSURL, RCPreviewController;

@interface RCAudioTrimmingModalItemViewController : UIViewController <RCAVWaveformViewControllerDelegate> {
    UIView *_nonWaveformContentView;
    RCAVWaveformViewController *_waveformViewController;
    RCFileInputWaveformDataSource *_waveformDataSource;
    UILabel *_timeDisplayLabel;
    UIButton *_playPauseButton;
    AVPlayerItem *_playerItem;
    RCUIConfiguration *_defaultUIConfiguration;
    RCUIConfiguration *_disabledUIConfiguration;
    RCUIConfiguration *_progressUIConfiguration;
    BOOL _showsProgress;
    BOOL _enabled;
    NSURL *_audioURL;
    RCPreviewController *_previewController;
    float _progress;
    double _maximumDuration;
}

@property(copy,readonly) NSURL * audioURL;
@property(readonly) double maximumDuration;
@property(readonly) struct { double x1; double x2; } selectedTimeRange;
@property(readonly) RCPreviewController * previewController;
@property BOOL showsProgress;
@property float progress;
@property(getter=isEnabled) BOOL enabled;


- (BOOL)showsProgress;
- (id)audioURL;
- (void)setShowsProgress:(BOOL)arg1;
- (id)initWithAudioURL:(id)arg1 maximumDuration:(double)arg2;
- (void)_beginOrResumePreviewing;
- (void)_pausePreviewing;
- (void)_updateAudioStateInterface;
- (id)_playStateImageForAVPreviewState:(int)arg1;
- (void)_playPauseAction;
- (void)_updateProgressView;
- (id)_currentUIConfiguration;
- (void)audioWaveformControllerDidChangeAVState:(id)arg1;
- (void)audioWaveformControllerDidChangeAVTimes:(id)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1;
- (struct { double x1; double x2; })selectedTimeRange;
- (id)previewController;
- (void).cxx_destruct;
- (double)maximumDuration;
- (float)progress;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setProgress:(float)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;

@end
