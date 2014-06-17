/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DOrderedDictionary;

@interface TSCH3DGeometryElementArrays : NSObject  {
    TSCH3DOrderedDictionary *mArrays;
    unsigned int mVertexCount;
    BOOL mBackfacesCulled;
}

@property(readonly) unsigned int vertexCount;
@property(readonly) BOOL backfacesCulled;

+ (id)arrays;

- (unsigned int)vertexCount;
- (void)dealloc;
- (id)init;
- (BOOL)backfacesCulled;
- (void)setElementsInFormat:(id)arg1;
- (id)p_makeDictionary;
- (id)cullBackfacesWithTransform:(const struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1 keepIndices:(id)arg2;
- (void)setBuffer:(id)arg1 forName:(id)arg2;
- (id)bufferForName:(id)arg1;

@end
