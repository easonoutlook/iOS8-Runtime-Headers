/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<OS_dispatch_queue>, TURemoteAppender;

@interface TUPhoneLogger : NSObject <TULogger> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    TURemoteAppender *_remoteAppender;
    BOOL _loggingEnabled;
    BOOL _loggingConfigurationCached;
    NSObject<OS_dispatch_queue> *_appenderQueue;
    long _createAppenderOnce;
    BOOL _backtracesEnabled;
    BOOL _symbolicationEnabled;
}

@property(readonly) BOOL loggingEnabled;
@property(readonly) TURemoteAppender * appender;
@property BOOL backtracesEnabled;
@property BOOL symbolicationEnabled;

+ (id)sharedPhoneLogger;

- (BOOL)loggingEnabled;
- (void)setSymbolicationEnabled:(BOOL)arg1;
- (BOOL)symbolicationEnabled;
- (void)_loggingChanged;
- (void)setBacktracesEnabled:(BOOL)arg1;
- (id)appender;
- (BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (BOOL)shouldLog;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(void*)arg5;
- (BOOL)backtracesEnabled;
- (BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4;
- (id)identifier;
- (void)dealloc;
- (id)init;

@end