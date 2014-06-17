/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableDictionary;

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {
    NSMutableArray *_vertexAttributes;
    unsigned int mVertexCount;
    unsigned long _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    int *mNeedsUpdateFirstIndex;
    int *mNeedsUpdateLastIndex;
    char *mGLData;
    BOOL mGLDataBufferHasBeenSetup;
    unsigned int *mGLDataBuffers;
    NSMutableDictionary *mAttributeOffsetsDictionary;
    unsigned int _GLDataBufferEntrySize;
    unsigned int _bufferCount;
    unsigned int _currentBufferIndex;
}

@property(readonly) BOOL hasUpdatedData;
@property(readonly) unsigned int GLDataBufferEntrySize;
@property(readonly) unsigned int bufferCount;
@property unsigned int currentBufferIndex;


- (unsigned int)vertexCount;
- (id)description;
- (void)dealloc;
- (char *)GLDataPointer;
- (void)swapGLDataBuffers;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)addAllIndexesNeedUpdate;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned int)arg2 bufferCount:(unsigned int)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setCGFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (unsigned int)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned int)arg2 component:(unsigned int)arg3;
- (void)setCurrentBufferIndex:(unsigned int)arg1;
- (void)updateDataBufferIfNecessary;
- (void)addIndexNeedsUpdate:(int)arg1;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)currentBufferIndex;
- (BOOL)hasUpdatedData;
- (void)p_setupGLDataBufferIfNecessary;
- (unsigned int)GLDataBufferEntrySize;
- (unsigned int)bufferCount;

@end
