/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable> {
    unsigned int mTexture;
}

+ (BOOL)isEqual:(id)arg1;
+ (id)bufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1 internalFormat:(unsigned int)arg2 format:(unsigned int)arg3 attachment:(unsigned int)arg4;
+ (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
+ (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
+ (BOOL)isTexturable;

- (BOOL)valid;
- (void)dealloc;
- (id)initWithGLTexture:(unsigned int)arg1;
- (void)bindInSession:(id)arg1;
- (void)deactivateInContext:(id)arg1;
- (void)destroyResourcesInContext:(id)arg1;

@end
