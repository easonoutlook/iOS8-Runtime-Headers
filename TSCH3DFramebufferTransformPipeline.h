/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCH3DPipelineLinkable>, TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline  {
    <TSCH3DPipelineLinkable> *mSource;
    TSCH3DGLFramebuffer *mTarget;
    TSCH3DGLFramebuffer *mInput;
}

@property(retain) <TSCH3DPipelineLinkable> * source;
@property(retain) TSCH3DGLFramebuffer * target;


- (void)setSource:(id)arg1;
- (id)source;
- (BOOL)run;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (BOOL)prepareFramebuffer;
- (void)loadSource;

@end