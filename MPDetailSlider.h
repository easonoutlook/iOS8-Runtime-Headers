/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSLayoutConstraint, UIImageView, UILabel, NSTimer, UIView, <MPDetailSliderDelegate>, NSString, MPDetailScrubController;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate> {
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    MPDetailScrubController *_scrubController;
    BOOL _allowsScrubbing;
    BOOL _autoscrubActive;
    NSTimer *_autoscrubTimer;
    BOOL _canCommit;
    double _currentTime;
    UIView *_downloadingTrackOverlay;
    UIImageView *_glowDetailScrubImageView;
    BOOL _isTracking;
    float _maxTrackWidth;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInView;
    int _style;
    UIImageView *_thumbImageView;
    float _trackInset;
    UIView *_trackLayoutGuide;
    NSLayoutConstraint *_trackLeftConstraint;
    NSLayoutConstraint *_trackRightConstraint;
    <MPDetailSliderDelegate> *_delegate;
    float _detailScrubbingVerticalRange;
    int _timeLabelStyle;
    float _minTimeLabelWidth;
    double _duration;
    double _availableDuration;
}

@property <MPDetailSliderDelegate> * delegate;
@property BOOL allowsScrubbing;
@property BOOL allowsDetailScrubbing;
@property float detailScrubbingVerticalRange;
@property double duration;
@property double availableDuration;
@property(readonly) BOOL detailScrubbingAvailableForCurrentDuration;
@property int timeLabelStyle;
@property float minTimeLabelWidth;
@property(readonly) NSString * localizedScrubSpeedText;

+ (Class)labelClass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_thumbHitEdgeInsets;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (id)currentThumbImage;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)viewForBaselineLayout;
- (void)updateConstraints;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)tintColorDidChange;
- (BOOL)isTracking;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (float)minTimeLabelWidth;
- (int)timeLabelStyle;
- (double)availableDuration;
- (void)setDetailScrubbingVerticalRange:(float)arg1;
- (float)detailScrubbingVerticalRange;
- (void)setMinTimeLabelWidth:(float)arg1;
- (void)setAllowsScrubbing:(BOOL)arg1;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (id)_stringForTime:(double)arg1;
- (id)_colorSliceImageWithColor:(id)arg1 height:(float)arg2;
- (id)_modernThumbImageWithColor:(id)arg1 height:(float)arg2 includeShadow:(BOOL)arg3;
- (BOOL)allowsScrubbing;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2;
- (void)_resetScrubInfo;
- (void)_autoscrubTick:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbHitRect;
- (void)_commitValue;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateForAvailableDuraton;
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;
- (void)_updateTrackInset;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForCurrentTime:(double)arg1;
- (id)timeLabelTextColorForStyle:(int)arg1;
- (id)timeLabelFontForStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 maxTrackWidth:(float)arg3;
- (void)_setupControlsForStyle;
- (void)setValue:(float)arg1 duration:(double)arg2;
- (void)cancelTracking;
- (void)setTimeLabelStyle:(int)arg1;
- (void)setAvailableDuration:(double)arg1;
- (BOOL)detailScrubbingAvailableForCurrentDuration;
- (id)localizedScrubSpeedText;
- (BOOL)allowsDetailScrubbing;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;

@end
