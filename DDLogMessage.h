/* Generated by RuntimeBrowser.
   Image: /private/var/mobile/Containers/Bundle/Application/DDE3370B-7D9E-43B6-9A8A-C891DDE1C4A0/OCRuntime.app/OCRuntime
 */

@class NSDate, NSString;

@interface DDLogMessage : NSObject  {
    int logLevel;
    int logFlag;
    int logContext;
    NSString *logMsg;
    NSDate *timestamp;
    const char *file;
    const char *function;
    int lineNumber;
    unsigned int machThreadID;
    NSString *threadID;
    NSString *fileName;
    NSString *methodName;
}


- (id)fileName;
- (void)dealloc;
- (id)methodName;
- (id)threadID;
- (id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7;

@end
