/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUScriptCalloutView : SUScriptObject  {
    BOOL _isVisible;
    NSString *_subtitle;
    NSString *_title;
}

@property(copy) NSString * subtitle;
@property(copy) NSString * title;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTargetX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)_resetCalloutBar;
- (void)_setupCalloutBar;
- (void)_reloadUntructedString;
- (void)_menuDidHideNotification:(id)arg1;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)init;

@end
