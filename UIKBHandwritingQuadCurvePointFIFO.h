/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UIKBHandwritingStrokeEnabled>, NSMutableArray, UIBezierPath;

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO  {
    NSMutableArray *_prevPoints;
    UIBezierPath *_path;
    UIView<UIKBHandwritingStrokeEnabled> *_strokeView;
}

@property(retain) NSMutableArray * prevPoints;
@property(retain) UIBezierPath * path;
@property(retain) UIView<UIKBHandwritingStrokeEnabled> * strokeView;


- (id)prevPoints;
- (void)setPrevPoints:(id)arg1;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (id)strokeView;
- (void)setStrokeView:(id)arg1;
- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (void)clear;
- (void)flush;
- (void)dealloc;

@end
