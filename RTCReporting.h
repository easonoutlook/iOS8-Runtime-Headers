/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_source>, NSDictionary, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface RTCReporting : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _logMsgHandler;

    NSObject<OS_dispatch_queue> *_reportingQueue;
    int _counter;
    int _intervalMultiplier;
    NSObject<OS_dispatch_source> *_timer;
    NSDictionary *_sessionInfoDict;
    NSDictionary *_userInfoDict;
    unsigned char _udid[41];
    NSArray *_frameworkList;
    NSMutableDictionary *_backendDict;
    NSMutableDictionary *_periodicServiceDict;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    } _startTimestamp;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(copy) id logMsgHandler;

+ (BOOL)sendMsgToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 componentType:(int)arg5 version:(unsigned short)arg6 sessionID:(unsigned int)arg7 eventID:(unsigned short)arg8 method:(unsigned short)arg9 respCode:(unsigned short)arg10 dict:(id)arg11;
+ (BOOL)sendMsgToServer:(id)arg1 sessionInfo:(id)arg2 userInfo:(id)arg3 eventMethod:(unsigned short)arg4 eventStatus:(unsigned short)arg5 eventPayload:(id)arg6;

- (id)logMsgHandler;
- (BOOL)uploadFileWithName:(id)arg1;
- (int)getUploadflag;
- (BOOL)unregisterPeriodTask:(id)arg1 unservice_block:(id)arg2;
- (BOOL)registerPeriodicTask:(id)arg1 needToUpDate:(bool)arg2 needToReport:(bool)arg3 service_block:(id)arg4;
- (BOOL)stopLogTimerForSession;
- (BOOL)startLogTimerWithInterval:(int)arg1 reportingFrequency:(int)arg2 reportingMethod:(unsigned short)arg3 reportingStatus:(unsigned short)arg4;
- (BOOL)setReportToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 msgBlock:(id)arg5;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3;
- (void)MyPeriodicTask:(unsigned short)arg1 status:(unsigned short)arg2;
- (bool)areBackendStatesAvailable:(unsigned int*)arg1;
- (void)addFrameworkStatusToReportingDictionary:(id)arg1;
- (void)sendClientURLInfo:(id)arg1;
- (void)setLogMsgHandler:(id)arg1;
- (void)internSendMsgOfType:(int)arg1 timestamp:(const struct timeval { int x1; int x2; }*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 dict:(id)arg5;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3 frameworksToCheck:(id)arg4;
- (void)setUserInfoDict:(id)arg1;
- (void)sendMsgWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;
- (void)flushMessages;
- (BOOL)setReportToServer:(id)arg1 completionHandler:(id)arg2;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;
- (void)dealloc;

@end
