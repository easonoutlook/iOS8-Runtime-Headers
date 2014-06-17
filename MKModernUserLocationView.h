/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImage, CALayer;

@interface MKModernUserLocationView : MKUserLocationView  {
    CALayer *_innerCircleLayer;
    BOOL _shouldInnerPulse;
    struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; } *_innerImageMask;
    BOOL _rotateInnerImageToMatchCourse;
    CALayer *_baseLayer;
    CALayer *_baseDimmingLayer;
}

@property BOOL shouldInnerPulse;
@property(retain) UIImage * innerImageMask;
@property BOOL rotateInnerImageToMatchCourse;

+ (float)innerDiameter;
+ (float)baseDiameter;

- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)_dealloc;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (BOOL)rotateInnerImageToMatchCourse;
- (id)innerImageMask;
- (BOOL)shouldInnerPulse;
- (void)setRotateInnerImageToMatchCourse:(BOOL)arg1;
- (void)setInnerImageMask:(struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)arg1;
- (void)_updateInnerCourseRotation;
- (struct CGColor { }*)_accuracyFillColor;
- (id)_baseDimmingLayer;
- (void)_updatePulseColor;
- (void)_updateInnerImage;
- (void)_updateBaseImage;
- (void)_updatePulseAnimation;
- (id)_innerPulseAnimation;
- (void)_updateAccuracyColors;
- (void)setShouldInnerPulse:(BOOL)arg1;
- (void)_updateInnerMaskLayer;
- (void)_setupLayers;
- (void)_updateLayers;
- (id)_baseLayer;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)_setMapDisplayStyle:(unsigned int)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;

@end
