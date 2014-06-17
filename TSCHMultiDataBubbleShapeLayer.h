/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDFill, CALayer, CAShapeLayer;

@interface TSCHMultiDataBubbleShapeLayer : CATransformLayer <TSCHMultiDataElementShapeLayer> {
    TSDFill *mFill;
    float mViewScale;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mImageLayer;
    float _viewScale;
}

@property(retain) TSDFill * fill;
@property float viewScale;


- (void)setViewScale:(float)arg1;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setContentsScale:(float)arg1;
- (id)init;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_renderingSymbolElementTransform;
- (void)p_addAnimationsForUpdatingPath:(struct CGPath { }*)arg1 position:(struct CGPoint { float x1; float x2; })arg2 toAnimationInfo:(id)arg3 onLayer:(id)arg4;
- (void)p_addLayerAnimationsForUpdatingImage:(struct CGImage { }*)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 position:(struct CGPoint { float x1; float x2; })arg3 toAnimationInfo:(id)arg4;
- (id)p_bubbleElementsRenderer;
- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(float)arg3;
- (id)currentValueLayer;
- (BOOL)aboveIntercept;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;
- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;
- (id)chartRep;
- (float)viewScale;

@end
