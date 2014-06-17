/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject  {
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    } mInputSpinePoints;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    } mSpinePoints;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    } mScaleValues;
    float mBevelHeight;
    int mBevelSlices;
    BOOL mEnableBevelEdges;
}

@property float bevelHeight;
@property int bevelSlices;
@property BOOL enableBevelEdges;
@property(readonly) int bottomNonBevelStartIndex;
@property(readonly) int bottomBevelStartIndex;

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (BOOL)enableBevelEdges;
- (int)bevelSlices;
- (float)bevelHeight;
- (float)scaleUValueAtIndex:(int)arg1;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })bottomDirection;
- (int)bottomBevelStartIndex;
- (float)spineUValueAtIndex:(int)arg1;
- (int)topBevelStartIndex;
- (int)topSlices;
- (int)bottomSlices;
- (void)adjustBottomScales;
- (void)adjustTopScales;
- (void)resetAllScales;
- (void)adjustBottomOffset;
- (void)generateBottom;
- (void)generateTop;
- (void)createSpinePointArray;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)scaleValues;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)spinePoints;
- (void)generate;
- (void)setEnableBevelEdges:(BOOL)arg1;
- (void)setBevelSlices:(int)arg1;
- (void)setBevelHeight:(float)arg1;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)inputSpinePoints;
- (int)bottomNonBevelStartIndex;

@end
