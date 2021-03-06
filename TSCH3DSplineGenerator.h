/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSplineGenerator : NSObject  {
    float mDetail;
    float mTension;
    float mAdaptiveThreshold;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    } mControlPts;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    } mSplineExclude;
}

@property float detail;
@property float tension;
@property float adaptiveThreshold;

+ (id)generator;

- (float)detail;
- (BOOL)isClosed;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setDetail:(float)arg1;
- (id)init;
- (float)adaptiveThreshold;
- (float)tension;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; }*)splineExclude;
- (void)calcControlMatrix:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1 pointNum:(int)arg2;
- (void)generatePoints:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (void)setAdaptiveThreshold:(float)arg1;
- (void)setTension:(float)arg1;
- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)controlPts;

@end
