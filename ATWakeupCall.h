/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSThread, NSMutableArray, NSNetServiceBrowser;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMutableArray *_hostLibraryIdentifiers;
    NSMutableArray *_resolvingHosts;
    NSMutableArray *_resolvedLibraryIdentifiers;
    NSMutableArray *_resolvedLibraryServices;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    NSNetServiceBrowser *_browser;
    NSThread *_wakeThread;
    BOOL _searching;
    int _resolving;
    unsigned int _hostsToResolve;
}

+ (id)wakeableHostsWithCompletion:(id)arg1;
+ (void)sendWakeupCallToAllSyncHosts;
+ (void)sendWakeupCall:(id)arg1;

- (void)wake;
- (void).cxx_destruct;
- (void)stop;
- (void)dealloc;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;

@end
