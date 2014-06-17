/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay> {
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * subtitle;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;

+ (id)polylineWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
+ (id)polylineWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;

- (struct { double x1; double x2; })coordinate;
- (void)_calculateBounds;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;

@end
