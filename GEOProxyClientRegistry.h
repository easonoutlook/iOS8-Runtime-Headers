/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOProxyClient, NSMutableSet, NSLock;

@interface GEOProxyClientRegistry : NSObject  {
    NSLock *_lock;
    GEOProxyClient *_currentComposite;
    NSMutableSet *_currentSet;
}

+ (id)sharedRegistry;

- (id)compositeClient;
- (void)enableRegistry;
- (void)_updateComposite;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)dealloc;

@end
