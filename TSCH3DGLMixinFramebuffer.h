/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGLFramebuffer;

@interface TSCH3DGLMixinFramebuffer : TSCH3DGLFramebuffer  {
    TSCH3DGLFramebuffer *mOriginal;
}

@property(retain) TSCH3DGLFramebuffer * original;


- (void)setClearColor:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;
- (id)output;
- (void)clear:(unsigned int)arg1;
- (unsigned int)type;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (id)context;
- (id)description;
- (void)dealloc;
- (void)discardBuffers;
- (id)GLHandleForSession:(id)arg1;
- (BOOL)isProtectedInSession:(id)arg1;
- (void)setDepthMask:(unsigned char)arg1;
- (void)setColorMask:(const struct tvec4<bool> { union { boolx_1_1_1; boolx_1_1_2; boolx_1_1_3; } x1; union { boolx_2_1_1; boolx_2_1_2; boolx_2_1_3; } x2; union { boolx_3_1_1; boolx_3_1_2; boolx_3_1_3; } x3; union { boolx_4_1_1; boolx_4_1_2; boolx_4_1_3; } x4; }*)arg1;
- (void)setClearDepth:(float)arg1;
- (void)setDepthFunction:(int)arg1;
- (id)initWithContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg3;
- (unsigned int)estimatedMemroyInBytes;
- (void)discardColorBuffer;
- (void)destroyResourcesInSession:(id)arg1;
- (BOOL)bindInSession:(id)arg1;
- (BOOL)validForSession:(id)arg1;
- (void)clean;
- (void)disableSamplingInSession:(id)arg1;
- (void)discardDepthBuffer;
- (void)wipe:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;
- (BOOL)activateInsideSession:(id)arg1;
- (void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2;
- (const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)framebufferAttributes;
- (void)bindColorbufferInSession:(id)arg1;
- (BOOL)isTexturable;
- (id)original;
- (void)setOriginal:(id)arg1;

@end
