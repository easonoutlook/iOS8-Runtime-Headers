/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class GmailAccount;

@interface MFGmailSMTPAccount : SMTPAccount <MFGmailAccountClientTokenProtocol> {
    GmailAccount *_account;
}

@property(getter=mailAccountIfAvailable,retain) GmailAccount * mailAccount;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)username;
- (id)errorForResponse:(id)arg1;
- (id)displayHostname;
- (id)mailAccountIfAvailable;
- (BOOL)shouldUseAuthentication;
- (BOOL)shouldFetchACEDBInfoForError:(id)arg1;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (BOOL)usesSSL;
- (id)_urlFromResponse:(id)arg1;
- (void)setMailAccount:(id)arg1;
- (id)clientToken;
- (void)dealloc;
- (id)password;

@end