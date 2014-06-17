/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class YahooAccount;

@interface MFYahooSMTPAccount : SMTPAccount  {
    YahooAccount *_account;
}

@property(getter=mailAccountIfAvailable,retain) YahooAccount * mailAccount;

+ (id)accountTypeIdentifier;

- (BOOL)shouldUseSaveSentForAccount:(id)arg1;
- (id)displayHostname;
- (id)mailAccountIfAvailable;
- (id)preferredAuthScheme;
- (BOOL)usesSSL;
- (void)setMailAccount:(id)arg1;
- (void)dealloc;

@end
