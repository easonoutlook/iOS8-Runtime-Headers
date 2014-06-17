/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDMescalSession;

@interface CKDMescalSessionOperation : CKDOperation  {
    int _serverVersion;
    CKDMescalSession *_mescalSession;
}

@property int serverVersion;
@property(retain) CKDMescalSession * mescalSession;


- (void)setMescalSession:(id)arg1;
- (void)_handleCertRequestFinished:(id)arg1;
- (void)_exchangeDataAndSendRequest:(id)arg1;
- (void)_handleSessionRequestFinished:(id)arg1;
- (id)mescalSession;
- (void)setServerVersion:(int)arg1;
- (int)serverVersion;
- (id)flowControlKey;
- (BOOL)shouldCheckAppVersion;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)main;

@end
