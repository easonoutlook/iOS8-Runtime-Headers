/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@class NSMutableArray, UIView;

@interface CHQuadCurvePointFIFO : CHPointFIFO  {
    NSMutableArray *_prevPoints;
    struct CGPath { } *_path;
    float _lineWidth;
    UIView *_view;
}

@property(retain) NSMutableArray * prevPoints;
@property struct CGPath { }* path;
@property float lineWidth;
@property(retain) UIView * view;


- (id)prevPoints;
- (void)setPrevPoints:(id)arg1;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (void)setView:(id)arg1;
- (id)view;
- (struct CGPath { }*)path;
- (void)clear;
- (void)flush;
- (void)dealloc;

@end