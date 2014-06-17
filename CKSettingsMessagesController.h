/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate> {
    BOOL _showingChildViewController;
    int _profileToken;
}


- (BOOL)shouldReloadSpecifiersOnResume;
- (id)controllerForSpecifier:(id)arg1;
- (id)specifiers;
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;
- (id)getKeepMessages:(id)arg1;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;
- (id)areReadReceiptsEnabled:(id)arg1;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (id)isMadridEnabled:(id)arg1;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (id)willSendGroupMMS:(id)arg1;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (id)isMMSEnabled:(id)arg1;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSpecifierLoading:(id)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3;
- (id)_madridSettingsController;
- (void)_updateUIWithError:(id)arg1;
- (void)_showMadridSetupIfNecessary:(BOOL)arg1;
- (BOOL)_isMadridSwitchOn;
- (BOOL)_isMadridAccountOperational;
- (id)madridSigninSpecifiers;
- (BOOL)shouldShowMadridSignin;
- (id)genericSettingsSpecifierIdentifiers;
- (BOOL)shouldShowGenericSettings;
- (id)sendAsSMSIdentifiers;
- (BOOL)shouldShowSendAsSMS;
- (id)blacklistSettingsSpecifierIdentifiers;
- (id)characterCountSpecifierIdentifiers;
- (id)madridAccountsSpecifierIdentifiers;
- (BOOL)shouldShowMadridAccounts;
- (id)readReceiptSpecifierIdentifiers;
- (BOOL)shouldShowReadReceipts;
- (id)deliveryReceiptSpecifierIdentifiers;
- (BOOL)shouldShowDeliveryReceipts;
- (id)_switchFooterText:(BOOL*)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (BOOL)shouldShowMadridSwitch;
- (void)_showMadridSetupIfNecessary;
- (BOOL)_isSMSDevice;
- (void)_stopListeningForProfileChanges;
- (void)_startListeningForProfileChanges;
- (void)newCarrierNotification;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (void)_updateSwitchDelayed;
- (BOOL)_allAccountsAreDeactivated;
- (void)_setupAccountHandlersForDisabling;
- (void)_updateSwitch;
- (void)_setupAccountHandlers;
- (BOOL)shouldShowBlacklistSettings;
- (BOOL)wantsWiFiChooser;
- (id)logName;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (BOOL)shouldShowCharacterCount;
- (id)bundle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)isDeliveryReportsEnabled:(id)arg1;

@end
