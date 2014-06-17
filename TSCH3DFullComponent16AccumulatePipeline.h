/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGLFramebuffer, TSCH3DFullComponent16AdditionShaderEffect;

@interface TSCH3DFullComponent16AccumulatePipeline : TSCH3DComponent16AccumulatePipeline  {
    TSCH3DGLFramebuffer *mBuffer;
    TSCH3DFullComponent16AdditionShaderEffect *mAdd;
}

@property(retain) TSCH3DGLFramebuffer * buffer;


- (void)setBuffer:(id)arg1;
- (id)buffer;
- (void)dealloc;
- (id)bufferFBOResource;
- (void)allocateFramebuffersWithSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)runAccumulation;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;

@end
