/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class PSViewController<ACUISettingsPluginParentProtocol>, NSMutableDictionary;

@interface ACUISettingsPluginManager : NSObject  {
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}


- (id)initWithParentViewController:(id)arg1;
- (id)contactsSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)mailSettingsPlugin;
- (void)parentViewControllerWillDisappear;
- (id)_loadSettingsPluginFromBundleWithName:(id)arg1;
- (id)_settingsPluginFromBundleWithName:(id)arg1;
- (void).cxx_destruct;

@end
