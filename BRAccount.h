/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSString, NSData;

@interface BRAccount : NSObject  {
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

@property(copy) NSData * perAppAccountIdentifier;

+ (id)currentLoggedInAccountWithError:(id*)arg1;
+ (id)currentCachedLoggedInAccountWithError:(id*)arg1;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id*)arg2;
+ (void)_showICloudMigrationAlertIfNeeded;

- (id)containerWithPendingChanges;
- (BOOL)logoutWithError:(id*)arg1;
- (BOOL)loginWithError:(id*)arg1;
- (id)initWithAccountID:(id)arg1;
- (void)setPerAppAccountIdentifier:(id)arg1;
- (id)perAppAccountIdentifier;
- (void)dealloc;

@end
