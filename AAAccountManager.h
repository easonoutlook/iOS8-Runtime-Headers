/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSMutableArray, ACAccountStore;

@interface AAAccountManager : NSObject  {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

+ (id)sharedManager;

- (id)_accountStore;
- (void)addAccount:(id)arg1;
- (void)reloadAccounts;
- (void)removeAccount:(id)arg1;
- (id)accounts;
- (id)accountWithIdentifier:(id)arg1;
- (id)primaryAccount;
- (void)saveAllAccounts;
- (void)updateAccount:(id)arg1;
- (id)accountWithPersonID:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)accountsEnabledForDataclass:(id)arg1;
- (void)_removeAppleIDCertsForUsername:(id)arg1;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void).cxx_destruct;
- (void)dealloc;

@end