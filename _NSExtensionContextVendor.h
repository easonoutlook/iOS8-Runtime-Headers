/* Generated by RuntimeBrowser.
   Image: /usr/lib/libextension.dylib
 */

@class NSMutableDictionary;

@interface _NSExtensionContextVendor : NSObject <NSXPCListenerDelegate, _NSExtensionContextVending> {
    NSMutableDictionary *__extensionServiceConnections;
    NSMutableDictionary *__extensionContexts;
    NSMutableDictionary *__extensionPrincipalObjects;
    NSMutableDictionary *__extensionExpirationHandlers;
}

@property(setter=_setExtensionServiceConnections:,retain) NSMutableDictionary * _extensionServiceConnections;
@property(setter=_setExtensionContexts:,retain) NSMutableDictionary * _extensionContexts;
@property(setter=_setExtensionPrincipalObjects:,retain) NSMutableDictionary * _extensionPrincipalObjects;
@property(setter=_setExtensionExpirationHandlers:,retain) NSMutableDictionary * _extensionExpirationHandlers;

+ (id)_completionConcurrentQueue;
+ (id)_expirationConcurrentQueue;
+ (Class)_extensionContextClass;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionMainStoryboard;
+ (id)_extensionDictionary;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening;

- (void)_setExtensionExpirationHandlers:(id)arg1;
- (id)_extensionExpirationHandlers;
- (void)_setExtensionPrincipalObjects:(id)arg1;
- (id)_extensionPrincipalObjects;
- (void)_setExtensionContexts:(id)arg1;
- (id)_extensionContexts;
- (void)_setExtensionServiceConnections:(id)arg1;
- (id)_extensionServiceConnections;
- (id)_registerExpirationForContextWithUUID:(id)arg1 handler:(id)arg2;
- (void)_executeExpirationHandlerWithUUID:(id)arg1 completion:(id)arg2;
- (void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(id)arg4;
- (void)_unregisterExpirationHandlerWithUUID:(id)arg1;
- (BOOL)_shouldCreatePrincipalObject;
- (void)_tearDownContextWithUUID:(id)arg1;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_extensionContextForUUID:(id)arg1;
- (void)dealloc;

@end