/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class PCDispatchTimer, NSString, NSObject<OS_dispatch_queue>, NSDate, NSRunLoop;

@interface PCSimpleTimer : NSObject <PCLoggingDelegate> {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL disableSystemWaking;
@property(readonly) NSString * loggingIdentifier;

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (void)_powerNotificationSleepIsImminent;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_performBlockOnQueue:(id)arg1;
- (id)_getTimerMode;
- (id)_getTimerRunLoop;
- (void)_significantTimeChange;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)arg1;
- (void)_setPowerMonitoringEnabled:(BOOL)arg1;
- (void)_preventSleepFired;
- (void)_scheduleTimer;
- (BOOL)disableSystemWaking;
- (void)updateFireTime:(double)arg1 triggerOnGMTChange:(BOOL)arg2;
- (BOOL)firingIsImminent;
- (id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6;
- (void)_fireTimerFired;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)_updateTimers;
- (void)setDisableSystemWaking:(BOOL)arg1;
- (id)loggingIdentifier;
- (void)scheduleInRunLoop:(id)arg1;
- (id)userInfo;
- (BOOL)isValid;
- (id)debugDescription;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)scheduleInQueue:(id)arg1;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

@end
