/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFActivityMonitor;

@interface MFMonitoredInvocation : NSInvocation  {
    MFActivityMonitor *_monitor;
    BOOL _shouldLogInvocation;
    BOOL _isLowPriority;
}

@property(readonly) MFActivityMonitor * monitor;
@property BOOL isLowPriority;

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(BOOL)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5;
+ (id)invocationWithMethodSignature:(id)arg1;

- (void)setIsLowPriority:(BOOL)arg1;
- (BOOL)isLowPriority;
- (void)setShouldLogInvocation:(BOOL)arg1;
- (BOOL)mf_shouldLogInvocation;
- (void)invoke;
- (id)description;
- (void)dealloc;
- (id)monitor;

@end