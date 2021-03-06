/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUToolbarAppearance, SUControlAppearance, NSDictionary, SUTabBarAppearance, NSMutableDictionary;

@interface SUUIAppearance : NSObject <NSCopying> {
    SUControlAppearance *_backButtonAppearance;
    SUControlAppearance *_confirmationButtonAppearance;
    SUControlAppearance *_destructiveButtonAppearance;
    SUControlAppearance *_exitStoreButtonAppearance;
    SUControlAppearance *_forwardButtonAppearance;
    BOOL _isDefaultAppearance;
    NSMutableDictionary *_navigationBarBackgroundImages;
    NSDictionary *_navigationBarTitleTextAttributes;
    NSMutableDictionary *_navigationButtonAppearance;
    NSMutableDictionary *_segmentedControlAppearance;
    SUTabBarAppearance *_tabBarAppearance;
    SUToolbarAppearance *_toolbarAppearance;
}

@property(copy) SUControlAppearance * backButtonAppearance;
@property(copy) SUControlAppearance * confirmationButtonAppearance;
@property(copy) SUControlAppearance * destructiveButtonAppearance;
@property(copy) SUControlAppearance * exitStoreButtonAppearance;
@property(copy) SUControlAppearance * forwardButtonAppearance;
@property(copy) NSDictionary * navigationBarTitleTextAttributes;
@property(copy) SUTabBarAppearance * tabBarAppearance;
@property(copy) SUToolbarAppearance * toolbarAppearance;

+ (id)_defaultDoneButtonAppearance;
+ (id)_defaultButtonAppearance;
+ (id)_defaultForwardButtonAppearance;
+ (id)_defaultDestructiveButtonAppearance;
+ (id)_defaultConfirmationButtonAppearance;
+ (id)_defaultBackButtonAppearance;
+ (id)_defaultShadowWithColor:(id)arg1 offset:(struct CGSize { float x1; float x2; })arg2;
+ (id)_defaultTabBarAppearance;
+ (id)defaultAppearance;

- (void)setToolbarAppearance:(id)arg1;
- (void)setForwardButtonAppearance:(id)arg1;
- (void)setExitStoreButtonAppearance:(id)arg1;
- (void)setDestructiveButtonAppearance:(id)arg1;
- (void)setConfirmationButtonAppearance:(id)arg1;
- (void)setBackButtonAppearance:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (void)styleForwardButtonItem:(id)arg1;
- (void)styleDestructiveButton:(id)arg1;
- (id)navigationBarBackgroundImageForBarMetrics:(int)arg1;
- (id)forwardButtonAppearance;
- (id)exitStoreButtonAppearance;
- (id)toolbarAppearance;
- (id)segmentedControlAppearanceForStyle:(int)arg1 tintStyle:(int)arg2;
- (id)navigationBarTitleTextAttributes;
- (id)backButtonAppearance;
- (id)destructiveButtonAppearance;
- (id)confirmationButtonAppearance;
- (id)navigationButtonAppearanceForStyle:(int)arg1;
- (void)setSegmentedControlAppearance:(id)arg1 forStyle:(int)arg2 tintStyle:(int)arg3;
- (id)_copySegmentedControlKeyWithStyle:(int)arg1 tintStyle:(int)arg2;
- (void)setNavigationButtonAppearance:(id)arg1 forStyle:(int)arg2;
- (void)setNavigationBarTitleTextAttributes:(id)arg1;
- (void)setTabBarAppearance:(id)arg1;
- (void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (void)styleSegmentedControl:(id)arg1 tintStyle:(int)arg2;
- (void)styleConfirmationButtonItem:(id)arg1;
- (void)_styleBackBarButtonItem:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (void)styleExitStoreButtonItem:(id)arg1;
- (void)styleTabBarItem:(id)arg1;
- (void)styleNavigationBar:(id)arg1;
- (id)tabBarAppearance;
- (void)styleBarButtonItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
