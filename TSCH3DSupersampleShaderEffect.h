/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DShaderVariable;

@interface TSCH3DSupersampleShaderEffect : TSCH3DShaderEffect  {
    unsigned int mSize;
    unsigned int mSamples;
    TSCH3DShaderVariable *mSupersampleTexcoords;
}

+ (id)effectWithSize:(unsigned int)arg1 samples:(unsigned int)arg2;
+ (id)variableAccum;

- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)p_addSampleAtX:(float)arg1 y:(float)arg2 weight:(double)arg3 program:(id)arg4 accumVariable:(id)arg5 variableIndex:(unsigned int)arg6;
- (id)initWithSize:(unsigned int)arg1 samples:(unsigned int)arg2;
- (id)variableAccum;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;

@end
