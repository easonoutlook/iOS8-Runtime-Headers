/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, NSString;

@interface MTLToolsComputeCommandEncoder : MTLToolsCommandEncoder <MTLComputeCommandEncoder> {
}

@property(readonly) <MTLDevice> * device;
@property(copy) NSString * label;


- (void)executeBarrier;
- (void)executeKernelWithWorkGroupSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1 workGroupCount:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg2;
- (void)setLocalMemorySize:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)acceptVisitor:(id)arg1;

@end
