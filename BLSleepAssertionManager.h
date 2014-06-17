/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class NSObject<OS_dispatch_semaphore>;

@interface BLSleepAssertionManager : NSObject  {
    NSObject<OS_dispatch_semaphore> *m_assertionSemaphore;
    int m_assertionCount;
    BOOL m_waiting;
    int m_assertionLock;
    int m_idleCount;
    int m_idleLock;
}

+ (id)sharedInstance;

- (id)hidden;
- (void)releaseIdleAssertion;
- (void)takeIdleAssertion;
- (void)waitForOutstandingSleepAssertions;
- (void)releaseSleepAssertion;
- (void)takeSleepAssertion;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;

@end
