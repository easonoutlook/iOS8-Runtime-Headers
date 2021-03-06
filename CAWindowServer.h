/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSArray;

@interface CAWindowServer : NSObject  {
    struct CAWindowServerImpl { struct __CFArray {} *x1; unsigned int x2; boolx3; } *_impl;
}

@property(readonly) NSArray * displays;
@property(getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property(getter=isSecure) BOOL secure;

+ (id)server;
+ (id)serverIfRunning;
+ (id)context;
+ (id)contextWithOptions:(id)arg1;

- (void)setMirroringEnabled:(BOOL)arg1;
- (BOOL)isSecure;
- (void)setSecure:(BOOL)arg1;
- (void)setRendererFlags:(unsigned int)arg1;
- (id)_init;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (id)insecureProcessIds;
- (unsigned int)rendererFlags;
- (BOOL)isMirroringEnabled;
- (void)_detectDisplays;
- (id)displayWithUniqueId:(id)arg1;
- (id)displayWithDisplayId:(unsigned int)arg1;
- (id)displayWithName:(id)arg1;
- (void)removeAllDisplays;
- (void)removeDisplay:(id)arg1;
- (void)addDisplay:(id)arg1;
- (id)displays;
- (id)description;
- (void)dealloc;
- (id)init;

@end
