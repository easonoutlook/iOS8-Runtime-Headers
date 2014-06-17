/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKMemoryObserver, NSArray, <MDRenderTarget>, VKDispatch, VKLayoutContext, NSMutableArray, VKWorld, <MDMapControllerDelegate>, VKCamera, VKScene;

@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate> {
    VKDispatch *_dispatch;
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    VKLayoutContext *_layoutContext;
    <MDRenderTarget> *_displayTarget;
    BOOL _needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    BOOL _userIsGesturing;
    BOOL _iconsShouldAlignToPixels;
    NSMutableArray *_cameraControllers;
    float _debugFramesPerSecond;
    BOOL _rendersInBackground;
    NSMutableArray *_animations[2];
    VKMemoryObserver *_memoryObserver;
    BOOL _isInBackground;
    BOOL _isHidden;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _fullyOccludedEdgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _labelEdgeInsets;
    BOOL _deallocing;
    BOOL _needsInitialization;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    } _renderQueue;
    struct MapCamera { struct View {} *x1; struct Viewport {} *x2; void *x3; } *_mapCamera;
    struct RenderTree { int (**x1)(); id x2; } *_mapScene;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _bgColor;
    <MDMapControllerDelegate> *_mapDelegate;
}

@property(readonly) VKWorld * world;
@property(readonly) NSArray * cameraControllers;
@property(readonly) VKCamera * camera;
@property float debugFramesPerSecond;
@property int targetDisplay;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property <MDMapControllerDelegate> * mapDelegate;
@property(readonly) BOOL needsInitialization;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  bgColor; /* unknown property attribute:  1>=[4f]} */
@property BOOL rendersInBackground;
@property(getter=isGesturing) BOOL gesturing;
@property BOOL iconsShouldAlignToPixels;


- (id)cameraControllers;
- (BOOL)needsInitialization;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)removeCameraController:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (void)_queueUpdateDisplayLinkStatus;
- (void)animateWithTimestamp:(double)arg1;
- (BOOL)wantsRender;
- (void)adoptAnimation:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)animationDidResume:(id)arg1;
- (id)world;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)gglWillDrawWithTimestamp;
- (void)addCameraController:(id)arg1;
- (id)mapDelegate;
- (void)didPresent;
- (void)layoutRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)resetRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (BOOL)wantsTimerTick;
- (BOOL)currentSceneRequiresMSAA;
- (void)updateWithTimestamp:(double)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)edgeInsetsWillBeginAnimating;
- (void)edgeInsetsDidEndAnimating;
- (void)runAnimation:(id)arg1;
- (BOOL)canRender;
- (struct Matrix<float, 4, 1> { float x1[4]; })bgColor;
- (void)transferAnimationsTo:(id)arg1;
- (id)camera;
- (void)initializeWithRenderer:(struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; boolx5; float x6; boolx7; id x8; struct RenderState {} *x9; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_10_1_1; } x10; struct RenderTarget {} *x11; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_13_1_1; } x13; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_14_1_3; } x14; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_15_1_1; unsigned int x_15_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long x_3_2_1; } x_15_1_3; } x15; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_16_1_1; } x16; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_17_1_1; struct BufferLoadItem {} *x_17_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_18_1_1; struct Texture2DLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_18_1_3; } x18; unsigned int x19; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_20_1_1; } x20; }*)arg1;
- (void)setRendersInBackground:(BOOL)arg1;
- (BOOL)rendersInBackground;
- (void)setMapDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 device:(const struct shared_ptr<ggl::Device> { }*)arg2 inBackground:(BOOL)arg3;
- (void)setIconsShouldAlignToPixels:(BOOL)arg1;
- (BOOL)iconsShouldAlignToPixels;
- (void)setGesturing:(BOOL)arg1;
- (BOOL)isGesturing;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (float)debugFramesPerSecond;
- (void)didEnterBackground;
- (BOOL)updateDisplayLinkStatus;
- (void)updateCameraForFrameResize;
- (void)setTargetDisplay:(int)arg1;
- (int)targetDisplay;
- (void)cameraDidChange:(id)arg1;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id).cxx_construct;
- (void)forceLayout;
- (void)animationDidStop:(id)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)setContentsScale:(float)arg1;

@end
