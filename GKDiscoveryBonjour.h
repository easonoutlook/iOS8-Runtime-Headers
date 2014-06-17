/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableDictionary;

@interface GKDiscoveryBonjour : NSObject  {
    NSString *_serviceType;
    NSString *_serviceDomain;
    struct _DNSServiceRef_t { } *_browseRef;
    struct _DNSServiceRef_t { } *_advertiseRef;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _browseCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectionCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _serviceNameCollisionCallback;

    BOOL _checkedInWithLaunchd;
    NSMutableArray *_launchdSources;
    int _listeningPort;
    NSMutableDictionary *_resolveContainers;
    NSObject<OS_dispatch_queue> *_resolveContainersSyncQueue;
}

@property(copy) id connectionCallback;
@property(copy) id serviceNameCollisionCallback;
@property(copy) NSString * serviceType;
@property(copy) NSString * serviceDomain;
@property struct _DNSServiceRef_t { }* browseRef;
@property struct _DNSServiceRef_t { }* advertiseRef;
@property(retain) NSMutableArray * launchdSources;
@property(retain) NSMutableDictionary * resolveContainers;
@property NSObject<OS_dispatch_queue> * resolveContainersSyncQueue;
@property(copy) id browseCallback;


- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void)setResolveContainersSyncQueue:(id)arg1;
- (id)resolveContainersSyncQueue;
- (id)browseCallback;
- (void)setResolveContainers:(id)arg1;
- (void)setLaunchdSources:(id)arg1;
- (void)setAdvertiseRef:(struct _DNSServiceRef_t { }*)arg1;
- (struct _DNSServiceRef_t { }*)advertiseRef;
- (void)setBrowseRef:(struct _DNSServiceRef_t { }*)arg1;
- (struct _DNSServiceRef_t { }*)browseRef;
- (void)setServiceDomain:(id)arg1;
- (id)serviceDomain;
- (void)setupListeningSockets;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (id)serviceNameCollisionCallback;
- (void)setupBothListeningSockets;
- (void)createDispatchEventWithSocket:(int)arg1;
- (int)ipV6Socket;
- (int)ipV4Socket;
- (id)launchdSources;
- (id)connectionCallback;
- (id)resolveContainers;
- (void)setBrowseCallback:(id)arg1;
- (void)closeListeningSockets;
- (int)startBrowsing:(id)arg1;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (void)setServiceNameCollisionCallback:(id)arg1;
- (void)setConnectionCallback:(id)arg1;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(id)arg3;
- (void)stopResolve:(id)arg1;
- (void)stopBrowsing;
- (void)stopAdvertising;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (void)dealloc;
- (id)init;

@end
