/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, NSString, NSPointerArray;

@interface MTLToolsParallelRenderPassEncoder : MTLToolsObject <MTLParallelRenderPassEncoder> {
    NSPointerArray *_renderCommandEncoders;
}

@property(readonly) NSPointerArray * renderCommandEncoders;
@property(readonly) <MTLDevice> * device;
@property(copy) NSString * label;


- (id)device;
- (void).cxx_destruct;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)renderCommandEncoders;
- (id)renderCommandEncoder;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (void)endEncoding;

@end