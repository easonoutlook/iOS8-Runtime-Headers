/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {
    struct { 
        double latitude; 
        double longitude; 
    } _centerCoordinate;
    double _heading;
    double _pitch;
    double _altitude;
    MKMapView *_mapView;
}

@property struct { double x1; double x2; } centerCoordinate;
@property double heading;
@property float pitch;
@property double altitude;
@property(getter=_precisePitch,setter=_setPrecisePitch:) double precisePitch;

+ (id)camera;
+ (BOOL)supportsSecureCoding;
+ (id)_cameraLookingAtMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)cameraLookingAtCenterCoordinate:(struct { double x1; double x2; })arg1 fromEyeCoordinate:(struct { double x1; double x2; })arg2 eyeAltitude:(double)arg3;
+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 aspectRatio:(float)arg2;

- (double)heading;
- (void)setPitch:(float)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (double)altitude;
- (float)pitch;
- (void)setHeading:(double)arg1;
- (void)setAltitude:(double)arg1;
- (BOOL)_validate;
- (void).cxx_destruct;
- (void)_updateState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)_precisePitch;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_enclosingGEOMapRectForAspectRatio:(float)arg1;
- (void)_setPrecisePitch:(double)arg1;
- (id)_mapView;
- (void)_setMapView:(id)arg1;

@end
