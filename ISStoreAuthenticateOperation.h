/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property(readonly) SSAuthenticationContext * authenticationContext;


- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)_setAuthenticatedDSID:(id)arg1;
- (void)_handleAuthenticateResponse:(id)arg1;
- (id)_authenticatedDSID;
- (id)uniqueKey;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)run;
- (void)dealloc;

@end
