/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUActivity, WebScriptObject, SUScriptFunction, NSString;

@interface SUScriptActivity : SUScriptObject  {
    SUScriptFunction *_actionFunction;
}

@property(readonly) SUActivity * nativeActivity;
@property(retain) WebScriptObject * actionFunction;
@property(copy) NSString * activityTitle;
@property(copy) NSString * activityType;
@property(readonly) NSString * activityImageNameGiftAppStore;
@property(readonly) NSString * activityImageNameGiftMusicStore;
@property(readonly) NSString * activityImageNamePingAppStore;
@property(readonly) NSString * activityImageNamePingMusicStore;
@property(readonly) NSString * activityImageNameWishlistAppStore;
@property(readonly) NSString * activityImageNameWishlistMusicStore;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)_performActionFunctionWithItems:(id)arg1;
- (id)activityImageNameWishlistMusicStore;
- (id)activityImageNameWishlistAppStore;
- (id)activityImageNamePingMusicStore;
- (id)activityImageNamePingAppStore;
- (id)activityImageNameGiftMusicStore;
- (id)activityImageNameGiftAppStore;
- (void)setActionFunction:(id)arg1;
- (id)actionFunction;
- (void)setActivityImageWithURL:(id)arg1 scale:(id)arg2;
- (void)setActivityImageWithName:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (id)_nativeActivity;
- (id)nativeActivity;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;

@end