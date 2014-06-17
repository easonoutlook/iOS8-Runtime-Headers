/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSObject<OS_dispatch_queue>;

@interface CoreDAVLogging : NSObject  {
    struct __CFDictionary { } *_logDelegates;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}

+ (id)sharedLogging;

- (void)logDiagnosticForProvider:(id)arg1 withLevel:(int)arg2 format:(id)arg3 args:(void*)arg4;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (BOOL)_shouldOutputAtLevel:(int)arg1 forAccountInfoProvider:(id)arg2;
- (BOOL)shouldLogAtLevel:(int)arg1 forAccountInfoProvider:(id)arg2;
- (id)_delegatesToLogForProvider:(id)arg1;
- (void)dealloc;
- (id)init;

@end
