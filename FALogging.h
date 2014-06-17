/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@class NSObject<OS_dispatch_queue>;

@interface FALogging : NSObject  {
    NSObject<OS_dispatch_queue> *_logQueue;
    BOOL _logToFile;
    BOOL _logToSyslog;
}

+ (id)sharedLogger;

- (void)_reloadLogPreferences;
- (void)logMessageWithFormat:(id)arg1 args:(void*)arg2;
- (void).cxx_destruct;
- (id)init;

@end
