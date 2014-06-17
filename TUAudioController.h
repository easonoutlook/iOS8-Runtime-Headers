/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_group>;

@interface TUAudioController : NSObject  {
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;
    NSObject<OS_dispatch_group> *_outstandingRequestsGroup;
}


- (void)_requestUpdatedValueWithBlock:(id)arg1 object:(id*)arg2 isRequestingPointer:(BOOL*)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7;
- (void)_leaveOutstandingRequestsGroup;
- (void)_enterOutstandingRequestsGroup;
- (void)_releaseLock;
- (void)_acquireLock;
- (void)blockUntilOutstandingRequestsComplete;
- (void)dealloc;
- (id)init;

@end