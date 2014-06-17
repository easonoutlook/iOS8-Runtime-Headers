/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSDictionary, CALayer;

@interface CAContext : NSObject  {
}

@property(readonly) unsigned int contextId;
@property(retain) CALayer * layer;
@property struct CGColorSpace { }* colorSpace;
@property(readonly) NSDictionary * options;
@property float level;
@property(getter=isSecure) BOOL secure;
@property(readonly) BOOL valid;

+ (id)localContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;
+ (id)remoteContextWithOptions:(id)arg1;
+ (id)currentContext;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)remoteContext;
+ (id)localContext;
+ (id)allContexts;

- (unsigned int)createImageSlot:(struct CGSize { float x1; float x2; })arg1 hasAlpha:(BOOL)arg2;
- (unsigned int)createFencePort;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)invalidate;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (id)_associatedScreen;
- (void)_setAssociatedScreen:(id)arg1;

@end
