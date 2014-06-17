/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSMutableDictionary, IDSAccount, NSString, NSSet, NSMapTable;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate> {
    id _messageContext;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    IDSAccount *_account;
    NSSet *_commands;
    NSString *_serviceToken;
    NSMutableDictionary *_pendingSends;
    unsigned int _delegateCapabilities;
}

@property(readonly) BOOL isActive;
@property(retain,readonly) IDSAccount * account;


- (void)removeDelegate:(id)arg1;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2;
- (void)setDelegateCapabilities:(unsigned int)arg1;
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)_clearPendingSends;
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned int)arg4;
- (void)acceptAttachmentInvite:(id)arg1;
- (BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendFile:(id)arg1 userInfo:(id)arg2 toDestinations:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)_setTemporaryMessageContext:(id)arg1;
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
- (void)attachmentReceived:(id)arg1 fileURL:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5;
- (void)attachmentInviteReceived:(id)arg1 userInfo:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5;
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)messageIdentifier:(id)arg1 forAccount:(id)arg2 updatedWithResponseCode:(int)arg3 error:(id)arg4 lastCall:(BOOL)arg5;
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (void)daemonDisconnected;
- (void)daemonConnected;
- (void)_connect;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)account;
- (BOOL)isActive;
- (void)dealloc;

@end