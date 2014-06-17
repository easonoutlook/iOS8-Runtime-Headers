/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObject : NSObject  {
    int _clientPID;
    struct { unsigned int x1[8]; } *_clientAuditToken;
}

@property(readonly) int clientPID;
@property(readonly) struct { unsigned int x1[8]; }* clientAuditToken;

+ (id)_center;

- (int)clientPID;
- (id)init;
- (struct { unsigned int x1[8]; }*)clientAuditToken;
- (id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)_registerNotificationsForSelectors;

@end
