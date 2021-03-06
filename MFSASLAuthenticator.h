/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFConnection, MFAuthScheme, MFAccount;

@interface MFSASLAuthenticator : NSObject  {
    MFConnection *_connection;
    MFAuthScheme *_authScheme;
    MFAccount *_account;
    int _authenticationState;
}


- (void)setMissingPasswordError;
- (BOOL)couldRetry;
- (BOOL)isUsingSSL;
- (id)securityLayer;
- (BOOL)supportsInitialClientResponse;
- (id)authScheme;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (int)authenticationState;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;
- (BOOL)base64EncodeResponseData;
- (id)saslName;
- (id)account;
- (void)dealloc;

@end
