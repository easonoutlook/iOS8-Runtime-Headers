/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, WebScriptObject, SUScriptFunction, NSNumber;

@interface SUScriptMenuViewController : SUScriptViewController  {
    SUScriptFunction *_action;
}

@property(retain) WebScriptObject * action;
@property(retain) id items;
@property(retain) NSNumber * selectedIndex;
@property(retain) NSString * title;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)newNativeViewController;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setSelectedIndex:(id)arg1;
- (id)selectedIndex;
- (id)_viewController;
- (void)setAction:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)action;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end