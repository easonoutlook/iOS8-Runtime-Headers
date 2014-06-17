/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface VKDebugModel : VKModelObject <VKMapLayer> {
    BOOL _geocentric;
    float _fontSize;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Debug::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
            struct FragmentedPool<ggl::Debug::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _debugShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> > > { 
            struct FragmentedPool<ggl::DebugPoints::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _debugPointsShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _debugRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugLinesRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugPointsRenderState;
    struct shared_ptr<ggl::Debug::BaseMesh> { 
        struct BaseMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _unitRectMesh;
}

@property BOOL geocentric;


- (void)setGeocentric:(BOOL)arg1;
- (BOOL)geocentric;
- (void)appendDebugTileCommandsToBuffer:(struct CommandBuffer { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 forMapTile:(id)arg2 fromLayer:(unsigned long long)arg3 withContext:(id)arg4 withConsole:(struct DebugConsole { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; struct Matrix<float, 2, 1> { float x_3_1_1[2]; } x3; struct Matrix<float, 2, 1> { float x_4_1_1[2]; } x4; unsigned int x5; struct RenderItem {} *x6; struct unique_ptr<ggl::DataWrite<ggl::ColoredText::MyVertexElement>, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::MyVertexElement> > > { struct __compressed_pair<ggl::DataWrite<ggl::ColoredText::MyVertexElement> *, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::MyVertexElement> > > { struct DataWrite<ggl::ColoredText::MyVertexElement> {} *x_1_2_1; } x_7_1_1; } x7; unsigned int x8; struct Matrix<float, 2, 1> {} *x9; struct Matrix<unsigned char, 4, 1> { unsigned char x_10_1_1[4]; } x10; struct Matrix<unsigned char, 4, 1> { unsigned char x_11_1_1[4]; } x11; float x12; }*)arg5;
- (struct shared_ptr<ggl::Debug::BaseMesh> { struct BaseMesh {} *x1; struct __shared_weak_count {} *x2; })unitRectMesh;
- (void)resetPools;
- (void)flushPools;
- (unsigned long long)mapLayerPosition;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end
