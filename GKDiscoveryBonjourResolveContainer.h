/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscoveryBonjour, NSMutableArray;

@interface GKDiscoveryBonjourResolveContainer : NSObject  {
    NSMutableArray *_serviceRefList;
    GKDiscoveryBonjour *_context;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resolveCompletionHandler;

}

@property(retain) NSMutableArray * serviceRefList;
@property GKDiscoveryBonjour * context;
@property(copy) id resolveCompletionHandler;


- (void)setResolveCompletionHandler:(id)arg1;
- (id)resolveCompletionHandler;
- (void)setServiceRefList:(id)arg1;
- (id)serviceRefList;
- (void)setContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)init;

@end
