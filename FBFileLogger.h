/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBFileLoggerDelegate>, NSString, NSObject<OS_dispatch_queue>;

@interface FBFileLogger : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    <FBFileLoggerDelegate> *_delegate;
    int _logLevel;
}

@property(readonly) NSString * name;
@property(getter=isEnabled,readonly) BOOL enabled;
@property <FBFileLoggerDelegate> * delegate;
@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) NSString * logPath;
@property(readonly) BOOL includeConsole;
@property(readonly) int maxLogCount;
@property(readonly) int maxLogSize;
@property(readonly) int logLevel;


- (void)appendLogWithFormat:(id)arg1 arguments:(void*)arg2;
- (void)willBeginLoggingToPath:(id)arg1;
- (int)maxLogSize;
- (int)maxLogCount;
- (id)logPath;
- (id)consoleFormat:(id)arg1 withArguments:(void*)arg2;
- (BOOL)includeConsole;
- (id)fileFormat:(id)arg1 withArguments:(void*)arg2;
- (void)_queue_appendLogWithFormat:(id)arg1 arguments:(void*)arg2;
- (void)reloadFromDefaults;
- (int)logLevel;
- (id)queue;
- (BOOL)isEnabled;
- (id)delegate;
- (id)name;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
