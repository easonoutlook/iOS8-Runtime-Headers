/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString, NSPointerArray;

@interface MTLToolsDevice : MTLToolsObject <MTLDeviceSPI> {
    int _pipelineStateLock;
    int _computePipelineStateLock;
    int _libraryLock;
    NSPointerArray *_buffers;
    NSPointerArray *_depthStencilStates;
    NSPointerArray *_textures;
    NSPointerArray *_samplers;
    NSPointerArray *_commandQueues;
    NSPointerArray *_libraries;
    NSPointerArray *_pipelineStates;
    NSPointerArray *_computePipelineStates;
    NSPointerArray *_framebuffers;
}

@property(readonly) NSPointerArray * buffers;
@property(readonly) NSPointerArray * depthStencilStates;
@property(readonly) NSPointerArray * textures;
@property(readonly) NSPointerArray * samplers;
@property(readonly) NSPointerArray * commandQueues;
@property(readonly) NSPointerArray * libraries;
@property(readonly) NSPointerArray * pipelineStates;
@property(readonly) NSPointerArray * computePipelineStates;
@property(readonly) NSPointerArray * framebuffers;
@property(readonly) NSString * name;
@property BOOL shaderDebugInfoCaching;
@property(readonly) unsigned int halfFPConfig;
@property(readonly) unsigned int singleFPConfig;
@property(readonly) unsigned int doubleFPConfig;
@property BOOL metalAssertionsEnabled;

+ (void)registerDevices;

- (id)textures;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned int)arg3;
- (id)computePipelineStates;
- (id)pipelineStates;
- (void)addLibrary:(id)arg1;
- (id)framebuffers;
- (id)unwrapMTLFramebufferDescriptor:(id)arg1;
- (void)addComputePipelineState:(id)arg1;
- (id)unwrapMTLComputePipelineDescriptor:(id)arg1;
- (void)addPipelineState:(id)arg1;
- (id)unwrapMTLRenderPipelineDescriptor:(id)arg1;
- (id)libraries;
- (id)samplers;
- (id)depthStencilStates;
- (id)buffers;
- (id)commandQueues;
- (void)setMetalAssertionsEnabled:(BOOL)arg1;
- (BOOL)metalAssertionsEnabled;
- (unsigned int)doubleFPConfig;
- (unsigned int)singleFPConfig;
- (unsigned int)halfFPConfig;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newFramebufferWithDescriptor:(id)arg1;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (id)newDefaultLibrary;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 deallocator:(id)arg4;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)newBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned int)arg1;
- (id)newCommandQueue;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)name;

@end
