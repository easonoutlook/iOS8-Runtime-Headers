/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DLayerCacheLogic;

@interface TSCH3DGLESLayer : CAEAGLLayer <TSCH3DGLLayer> {
    TSCH3DLayerCacheLogic *mCacheLogic;
}


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)contentsScale;
- (void)dealloc;
- (void)setContentsScale:(float)arg1;
- (Class)layerDelegateClass;
- (void)presentLayerWithPresenterInfo:(const struct PresenterInfo { id x1; struct CGContext {} *x2; float x3; id x4; BOOL x5; }*)arg1;
- (void)willDestroyFramebuffer:(id)arg1 session:(id)arg2;
- (id)initWithLayerCacheLogicClass:(Class)arg1;
- (id)framebufferFromContext:(id)arg1 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg2;
- (id)cacheLogic;

@end
