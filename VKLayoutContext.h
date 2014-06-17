/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKCamera, <MDRenderTarget>, VKAnchorContext, VKViewTransform;

@interface VKLayoutContext : NSObject  {
    VKCamera *_camera;
    VKCamera *_defaultTrackingCamera;
    <MDRenderTarget> *_canvas;
    BOOL _forceLayout;
    BOOL _iconsShouldAlignToPixels;
    float _styleZAdjust;
    BOOL _preloadOnly;
    VKCamera *_transitionCamera;
    int _transitionMapMode;
    double _timestamp;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _labelEdgeInsets;
    int _styleZ;
    float _z;
    VKViewTransform *_viewTransform;
    VKAnchorContext *_anchorContext;
    struct shared_ptr<ggl::PolygonBase::MeshMesh> { 
        struct MeshMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _unitMesh;
    struct shared_ptr<ggl::TextureMesh::MeshMesh> { 
        struct MeshMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _unitTextureMesh;
    struct StencilManager { 
        unsigned char _stencilStart; 
        unsigned char _stencilEnd; 
        struct ClearItem { 
            unsigned char colorMask; 
            struct Matrix<float, 4, 1> { 
                float _e[4]; 
            } color; 
            boolclearDepthBuffer; 
            float depth; 
            unsigned char clearStencilBuffer; 
            int stencil; 
            unsigned char scissorRegion; 
            struct Box<unsigned int, 2> { 
                struct Matrix<unsigned int, 2, 1> { 
                    unsigned int _e[2]; 
                } _minimum; 
                struct Matrix<unsigned int, 2, 1> { 
                    unsigned int _e[2]; 
                } _maximum; 
            } scissorRect; 
        } _stencilResetItem; 
    } _stencilManager;
    struct shared_ptr<ggl::Device> { 
        struct Device {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _device;
    struct Loader { 
        struct unique_ptr<ggl::LoaderImpl, std::__1::default_delete<ggl::LoaderImpl> > { 
            struct __compressed_pair<ggl::LoaderImpl *, std::__1::default_delete<ggl::LoaderImpl> > { 
                struct LoaderImpl {} *__first_; 
            } __ptr_; 
        } _loaderImpl; 
    } _loader;
}

@property(retain) VKCamera * defaultTrackingCamera;
@property(retain) VKViewTransform * viewTransform;
@property(retain) VKAnchorContext * anchorContext;
@property(retain) VKCamera * transitionCamera;
@property int transitionMapMode;
@property double timestamp;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;


- (id)transitionCamera;
- (void)markStencilAsDirty;
- (struct shared_ptr<ggl::TextureMesh::MeshMesh> { struct MeshMesh {} *x1; struct __shared_weak_count {} *x2; })unitTextureMesh;
- (struct Loader { struct unique_ptr<ggl::LoaderImpl, std::__1::default_delete<ggl::LoaderImpl> > { struct __compressed_pair<ggl::LoaderImpl *, std::__1::default_delete<ggl::LoaderImpl> > { struct LoaderImpl {} *x_1_2_1; } x_1_1_1; } x1; }*)loader;
- (struct DebugConsole { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; struct Matrix<float, 2, 1> { float x_3_1_1[2]; } x3; struct Matrix<float, 2, 1> { float x_4_1_1[2]; } x4; unsigned int x5; struct RenderItem {} *x6; struct unique_ptr<ggl::DataWrite<ggl::ColoredText::MyVertexElement>, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::MyVertexElement> > > { struct __compressed_pair<ggl::DataWrite<ggl::ColoredText::MyVertexElement> *, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::MyVertexElement> > > { struct DataWrite<ggl::ColoredText::MyVertexElement> {} *x_1_2_1; } x_7_1_1; } x7; unsigned int x8; struct Matrix<float, 2, 1> {} *x9; struct Matrix<unsigned char, 4, 1> { unsigned char x_10_1_1[4]; } x10; struct Matrix<unsigned char, 4, 1> { unsigned char x_11_1_1[4]; } x11; float x12; }*)debugConsoleForId:(int)arg1;
- (void)startFrameWithTimeStamp:(double)arg1;
- (void)clearCanvas;
- (void)setAnchorContext:(id)arg1;
- (id)initWithCanvas:(id)arg1 camera:(id)arg2 device:(const struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x1; struct __shared_weak_count {} *x2; })unitMesh;
- (unsigned char)reserveStencilValues:(unsigned char)arg1 clearItem:(struct ClearItem {}**)arg2;
- (id)defaultTrackingCamera;
- (int)transitionMapMode;
- (void)setTransitionCamera:(id)arg1;
- (void)setTransitionMapMode:(int)arg1;
- (void)setDefaultTrackingCamera:(id)arg1;
- (void)canvasDidChange;
- (id)viewTransform;
- (void)setViewTransform:(id)arg1;
- (id)anchorContext;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; })device;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)dealloc;

@end