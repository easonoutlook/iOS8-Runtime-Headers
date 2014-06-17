/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject  {
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}

+ (id)sharedSpinnerManager;

- (void)stopAnimatingForIdentifier:(id)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end
