/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, NSString, NSPointerArray;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer> {
    NSPointerArray *_textures;
}

@property(readonly) NSPointerArray * textures;
@property(copy) NSString * label;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned int cpuCacheMode;
@property(readonly) unsigned int length;


- (id)textures;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (unsigned int)length;
- (void*)contents;

@end
