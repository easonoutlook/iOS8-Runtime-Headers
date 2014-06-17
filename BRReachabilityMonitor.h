/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSObject<OS_dispatch_queue>, NSHashTable;

@interface BRReachabilityMonitor : NSObject  {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isNetworkReachable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL isNetworkReachable;

+ (id)sharedReachabilityMonitor;

- (void)setIsNetworkReachable:(BOOL)arg1;
- (BOOL)isNetworkReachable;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
