/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSAdvancedLanguageController : PSListItemsController  {
    PSSpecifier *_checkedSpecifier;
}


- (void)setLocaleLanguage:(id)arg1 specifier:(id)arg2;
- (void)updateChecked:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
