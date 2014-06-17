/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLFramebuffer>, <MTLCommandQueue>, NSString, <MTLDevice>, MTLCommandBuffer<MTLCommandBuffer>;

@interface MTLParallelRenderPassEncoder : NSObject <MTLParallelRenderPassEncoder> {
    <MTLDevice> *_device;
    <MTLCommandQueue> *_queue;
    NSString *_label;
    MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    <MTLFramebuffer> *_framebuffer;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    unsigned long _commandBuffersSize;
    unsigned long _commandBuffersCount;
    id *_commandBuffers;
    BOOL _retainedReferences;
}

@property(readonly) <MTLDevice> * device;
@property(copy) NSString * label;


- (id)device;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)initWithCommandBuffer:(id)arg1 framebuffer:(id)arg2;
- (id)renderCommandEncoder;
- (id)commandBuffer;
- (void)endEncoding;
- (void)dealloc;

@end