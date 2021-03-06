/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;

@interface SSClientAccountStore : SSAccountStore  {
    NSArray *_accounts;
    BOOL _accountsValid;
}

@property(copy) NSArray * accounts;


- (void)setAccounts:(id)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (void)signOutAllAccounts;
- (id)_copyReloadedAccounts;
- (void)_signOutWithAccountIDs:(id)arg1;
- (void)updateAccountsWithMessage:(id)arg1 completionBlock:(id)arg2;
- (void)_invalidateAccounts;
- (id)_accountWithUniqueIdentifier:(id)arg1;
- (id)_addAccount:(id)arg1 asActiveAccount:(BOOL)arg2 activeLockerAccount:(BOOL)arg3;
- (void)_reloadAccountsIfNeeded;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(int)arg2;
- (void)signOutAccount:(id)arg1;
- (id)addAccount:(id)arg1;
- (void)reloadAccounts;
- (id)accounts;
- (id)activeAccount;
- (void)dealloc;
- (id)init;
- (id)activeLockerAccount;

@end
