/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class NSMutableDictionary, NSDictionary;

@interface ACUIAccountViewProvidersManager : NSObject  {
    NSDictionary *_accountTypeToPluginNameMap;
    NSMutableDictionary *_pluginCache;
}

+ (id)sharedInstance;

- (id)_loadAccountViewProviderPluginWithName:(id)arg1;
- (id)configurationInfoForViewingAccount:(id)arg1;
- (Class)viewControllerClassForViewingAccount:(id)arg1;
- (id)_accountViewProviderPluginForAccountTypeID:(id)arg1;
- (id)configurationInfoForCreatingAccountWithType:(id)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
