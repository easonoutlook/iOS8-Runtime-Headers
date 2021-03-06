/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLegacyWell, UIImageView, NSTimer, UIView, TPLegacyLockTextView, TPLegacyLockKnobView, NSArray;

@interface TPLegacyBottomLockBar : TPLegacyBottomBar  {
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLegacyLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLegacyLockTextView *_labelView;
    TPLegacyWell *_well;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
    UIImageView *_backgroundView;
}

+ (float)defaultLabelFontSize;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (id)labels;
- (void)setTextAlpha:(float)arg1;
- (void)setKnobWellWidthToDefault;
- (void)setKnobWellWidth:(float)arg1;
- (id)well;
- (void)freezeKnobInUnlockedPosition;
- (void)relock;
- (int)currentLabelIndex;
- (id)knob;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKnobColor:(int)arg1;
- (void)finishedCyclingLabelOut;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)cycleToNextLabel;
- (void)_adjustLabelOrigin;
- (float)_calcKnobYOffset;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (void)stopCyclingLabels;
- (void)startCyclingLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(int)arg2;
- (void)_adjustKnobOrigin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (id)_knobImageForColor:(int)arg1;
- (float)defaultWellWidth;
- (id)wellImageName;
- (BOOL)usesBackgroundImage;
- (void)slideBack:(BOOL)arg1;
- (void)upInKnob;
- (void)knobDragged:(float)arg1;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (float)knobTrackInsetRight;
- (float)knobTrackInsetLeft;
- (void)downInKnob;
- (void)setWellAlpha:(float)arg1;
- (void)setSuppressDrawingBackground:(BOOL)arg1;
- (void)setLabels:(id)arg1;
- (float)fontSize;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setKnobImage:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (BOOL)_canDrawContent;
- (void)unlock;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setLabel:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)labelView;

@end
