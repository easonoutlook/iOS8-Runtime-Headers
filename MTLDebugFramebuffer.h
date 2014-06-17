/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLFramebufferDescriptor;

@interface MTLDebugFramebuffer : MTLToolsFramebuffer  {
    MTLFramebufferDescriptor *_descriptor;
}

@property(copy,readonly) MTLFramebufferDescriptor * descriptor;


- (void).cxx_destruct;
- (id)initWithFramebuffer:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (id)descriptor;

@end
