/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class ACAccount, SSAccount;

@interface AAUIMyPhotoRequest : AARequest  {
    ACAccount *_account;
    SSAccount *_iTunesAccount;
}

@property(setter=setiTunesAccount:,retain) SSAccount * iTunesAccount;

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (void)setiTunesAccount:(id)arg1;
- (id)iTunesAccount;
- (id)urlString;
- (void).cxx_destruct;

@end
