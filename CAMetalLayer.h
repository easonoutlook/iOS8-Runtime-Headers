/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class <MTLDevice>;

@interface CAMetalLayer : CALayer  {
    struct _CAMetalLayerPrivate { struct x_list_struct {} *x1; struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Atomic { struct { int x_1_2_1; } x_3_1_1; } x3; struct SpinLock { struct { int x_1_2_1; } x_4_1_1; } x4; struct _CAImageQueue {} *x5; id x6; struct x_list_struct {} *x7; unsigned int x8; struct _CAMetalDrawablePrivate {} *x9; id x10; unsigned int x11; struct CGSize { float x_12_1_1; float x_12_1_2; } x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; } *_priv;
    BOOL _presentsWithTransaction;
}

@property unsigned long maximumDrawableCount;
@property(retain) <MTLDevice> * device;
@property unsigned int pixelFormat;
@property BOOL framebufferOnly;
@property struct CGSize { float x1; float x2; } drawableSize;
@property(getter=presentsWithTransaction) BOOL presentsWithTransaction;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setDevice:(id)arg1;
- (id)device;
- (void)setPixelFormat:(unsigned int)arg1;
- (unsigned int)pixelFormat;
- (void)_display;
- (void)didChangeValueForKey:(id)arg1;
- (void)setMaximumDrawableCount:(unsigned long)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (id)newDrawable;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })drawableSize;
- (void)setDrawableSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned long)maximumDrawableCount;
- (BOOL)presentsWithTransaction;
- (BOOL)presentsWithTransaction;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end