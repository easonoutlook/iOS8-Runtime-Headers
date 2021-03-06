/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIActivityIndicatorView, UIImageView, UIView;

@interface CAMShutterButton : UIButton  {
    BOOL _pulsing;
    BOOL _spinning;
    int _mode;
    UIView *__outerView;
    UIImageView *__outerImageView;
    UIView *__innerView;
    UIActivityIndicatorView *__progressActivityIndicatorView;
    struct CAMShutterButtonSpec { 
        float outerRingDiameter; 
        float outerRingStrokeWidth; 
        float stopSquareSideLength; 
        float stopSquareCornerRadius; 
    } _spec;
}

@property int mode;
@property struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; } spec;
@property(getter=isPulsing) BOOL pulsing;
@property(getter=isSpinning) BOOL spinning;
@property(readonly) UIView * _outerView;
@property(readonly) UIImageView * _outerImageView;
@property(readonly) UIView * _innerView;
@property(readonly) UIActivityIndicatorView * _progressActivityIndicatorView;

+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; })arg1;
+ (id)shutterButton;
+ (id)tinyShutterButton;
+ (id)smallShutterButton;

- (BOOL)isSpinning;
- (void)setMode:(int)arg1 animated:(BOOL)arg2;
- (id)_progressActivityIndicatorView;
- (id)_outerImageView;
- (BOOL)isPulsing;
- (void)setPulsing:(BOOL)arg1;
- (BOOL)_isStopMode:(int)arg1;
- (id)_colorForMode:(int)arg1;
- (id)_innerView;
- (float)_borderWidthForMode:(int)arg1;
- (id)_outerView;
- (id)_outerImageForMode:(int)arg1;
- (BOOL)_shouldUseImageViewForMode:(int)arg1;
- (float)_innerCircleDiameter;
- (void)_updateSpinningAnimations;
- (void)_performModeSwitchAnimationFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (void)_performHighlightAnimation;
- (float)_cornerRadiusForMode:(int)arg1;
- (struct CGSize { float x1; float x2; })_sizeForMode:(int)arg1;
- (void)_commonCAMShutterButtonInitialization;
- (void)_updateOuterAndInnerLayers;
- (void).cxx_destruct;
- (void)setSpinning:(BOOL)arg1;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setSpec:(struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; })arg1;
- (struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; })spec;
- (id)initWithCoder:(id)arg1;

@end
