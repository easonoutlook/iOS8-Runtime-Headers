/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CALayer, CLLocation, VKAnnotationMarker;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {
    VKAnnotationMarker *_marker;
    int _zoomDirection;
    CALayer *_pulseLayer;
    CALayer *_accuracyLayer;
    BOOL _allowsPulse;
    BOOL _shouldPulse;
    BOOL _allowsHeadingIndicator;
    BOOL _shouldDisplayHeading;
    double _headingAccuracy;
    CALayer *_headingLayer;
    BOOL _allowsAccuracyRing;
    BOOL _stale;
    BOOL _effectsEnabled;
    double _presentationCourse;
    double _locationAccuracy;
    CLLocation *_lastLocation;
}

@property(getter=isStale,readonly) BOOL stale;
@property BOOL allowsPulse;
@property BOOL allowsAccuracyRing;
@property BOOL allowsHeadingIndicator;
@property BOOL shouldDisplayHeading;
@property double headingAccuracy;
@property(readonly) double locationAccuracy;
@property float opacity;
@property(getter=isEffectsEnabled) BOOL effectsEnabled;
@property int zoomDirection;
@property double presentationCourse;

+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (float)accuracyDiameter:(float)arg1;

- (double)headingAccuracy;
- (BOOL)isStale;
- (void)setPresentationCourse:(double)arg1;
- (double)presentationCourse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_setTracking:(BOOL)arg1;
- (id)init;
- (double)locationAccuracy;
- (BOOL)allowsAccuracyRing;
- (BOOL)shouldDisplayHeading;
- (BOOL)allowsHeadingIndicator;
- (BOOL)allowsPulse;
- (int)zoomDirection;
- (id)_accuracyAnimation:(float)arg1;
- (void)setAllowsHeadingIndicator:(BOOL)arg1;
- (void)setAllowsAccuracyRing:(BOOL)arg1;
- (void)setAllowsPulse:(BOOL)arg1;
- (id)_pulseTintColor;
- (void)_updateLayers;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (id)_baseLayer;
- (void)_updateHeadingLayer;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)_updatePulse;
- (void)_resumePulse;
- (void)_pausePulse;
- (BOOL)isEffectsEnabled;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (BOOL)_tracking;
- (void)_setMapPitchRadians:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mapkit_visibleRect;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (void)_setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)_updateFromMap;
- (void)setHeadingAccuracy:(double)arg1;
- (void)locationManagerFailedToUpdateLocation;
- (id)_vkMarker;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (void)setZoomDirection:(int)arg1 deltaScale:(float)arg2;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)setZoomDirection:(int)arg1;
- (void)setShouldDisplayHeading:(BOOL)arg1;

@end
