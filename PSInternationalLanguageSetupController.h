/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController <UIActionSheetDelegate, UIAlertViewDelegate> {
    NSString *_languageToSet;
    BOOL _notOfficialLanguage;
    BOOL _useOfficialLanguages;
    PSLanguageSelector *_languageSelector;
}

@property(retain) PSLanguageSelector * languageSelector;


- (id)language:(id)arg1;
- (id)initWithOfficialLanguages;
- (void)showBlackViewWithLabel:(id)arg1;
- (void)changeLanguageWithIndex:(unsigned int)arg1 tag:(unsigned int)arg2;
- (void)updatePreferredLanguageList;
- (void)saveLanguage:(BOOL)arg1;
- (void)saveLanguageMoveToTop;
- (void)didFinishCommit;
- (void)rotateView:(id)arg1 toOrientation:(int)arg2;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)setNotOfficialLanguage:(BOOL)arg1;
- (id)languageSelector;
- (BOOL)useOfficialLanguages;
- (void)setLanguageSelector:(id)arg1;
- (void)setupController;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)commit;
- (void)dealloc;
- (id)init;

@end