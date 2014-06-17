/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class YahooAccount;

@interface _MFXYMCOOKIEAuthenticator : MFSASLAuthenticator  {
    YahooAccount *_yahooAccount;
    BOOL _smtp;
}

@property(retain) YahooAccount * yahooAccount;
@property(getter=isSMTP,readonly) BOOL smtp;


- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;
- (BOOL)base64EncodeResponseData;
- (id)saslName;
- (BOOL)isSMTP;
- (id)yahooAccount;
- (void)setYahooAccount:(id)arg1;
- (void)dealloc;

@end
