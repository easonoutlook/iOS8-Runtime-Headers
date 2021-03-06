/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying> {
    MKMapCamera *_camera;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _mapRect;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _region;
    unsigned int _mapType;
    int _mode;
    BOOL _showsPointsOfInterest;
    BOOL _showsBuildings;
    BOOL _rendersInBackground;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    float _scale;
    BOOL _usingRect;
}

@property(copy) MKMapCamera * camera;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property unsigned int mapType;
@property BOOL showsPointsOfInterest;
@property BOOL showsBuildings;
@property struct CGSize { float x1; float x2; } size;
@property float scale;
@property(getter=_rendersInBackground,setter=_setRendersInBackground:) BOOL rendersInBackground;
@property(readonly) BOOL usingRect;


- (void)setCamera:(id)arg1;
- (id)camera;
- (void)setShowsBuildings:(BOOL)arg1;
- (BOOL)showsBuildings;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsPointsOfInterest;
- (void)setMapType:(unsigned int)arg1;
- (unsigned int)mapType;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRendersInBackground:(BOOL)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setScale:(float)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;
- (id)init;
- (BOOL)_rendersInBackground;
- (BOOL)usingRect;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;

@end
