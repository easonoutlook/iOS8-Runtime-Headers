/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIColor, NSArray;

@interface MKOverlayPathView : MKOverlayView  {
    UIColor *_fillColor;
    UIColor *_strokeColor;
    float _lineWidth;
    int _lineJoin;
    int _lineCap;
    float _miterLimit;
    float _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath { } *_path;
}

@property(retain) UIColor * fillColor;
@property(retain) UIColor * strokeColor;
@property float lineWidth;
@property int lineJoin;
@property int lineCap;
@property float miterLimit;
@property float lineDashPhase;
@property(copy) NSArray * lineDashPattern;
@property struct CGPath { }* path;


- (int)lineCap;
- (id)initWithOverlay:(id)arg1;
- (int)lineJoin;
- (void)createPath;
- (void).cxx_destruct;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineCap:(int)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (id)strokeColor;
- (id)fillColor;
- (void)setStrokeColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (struct CGPath { }*)path;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (void)invalidatePath;
- (void)setLineDashPhase:(float)arg1;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(float)arg2;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(float)arg2;
- (id)lineDashPattern;
- (float)lineDashPhase;

@end
