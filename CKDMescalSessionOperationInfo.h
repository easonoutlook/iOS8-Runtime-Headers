/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKOperationInfo <NSSecureCoding> {
    int _serverVersion;
    CKDMescalSession *_session;
}

@property int serverVersion;
@property(retain) CKDMescalSession * session;


- (void)setServerVersion:(int)arg1;
- (int)serverVersion;
- (void).cxx_destruct;
- (void)setSession:(id)arg1;
- (id)session;

@end
