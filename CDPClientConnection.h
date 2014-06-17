/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@class CDDebug, NSString, CDDXPCConnection;

@interface CDPClientConnection : NSObject  {
    BOOL _admissionOverride;
    BOOL _admissionResult;
    NSString *_clientName;
    CDDXPCConnection *_connection;
    CDDebug *_debug;
}

@property(readonly) NSString * clientName;
@property BOOL admissionOverride;
@property BOOL admissionResult;
@property(readonly) CDDXPCConnection * connection;
@property(readonly) CDDebug * debug;


- (void)setAdmissionResult:(BOOL)arg1;
- (BOOL)admissionResult;
- (void)setAdmissionOverride:(BOOL)arg1;
- (BOOL)admissionOverride;
- (BOOL)activitySignal:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (BOOL)admissionSignoffForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(id)arg5;
- (BOOL)triggerWithConditions:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (BOOL)bootstrapWithError:(id*)arg1 replyHandler:(id)arg2;
- (id)initWithPluginName:(id)arg1 error:(id*)arg2;
- (BOOL)sendMessage:(int)arg1 withXPCdictionaryKey:(id)arg2 dictionary:(id)arg3 admissionId:(id)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(id)arg7;
- (id)connection;
- (void).cxx_destruct;
- (id)clientName;
- (id)init;
- (id)debug;

@end
