/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaPlayerItem, NSString, NSNumber;

@interface SUScriptMediaPlayerItem : SUScriptObject  {
    SUMediaPlayerItem *_mediaItem;
}

@property(copy) NSString * backgroundImageURL;
@property(copy) NSString * bookmarkIdentifier;
@property(copy) NSString * initialOrientation;
@property(retain) NSNumber * itemIdentifier;
@property(copy) NSString * itemType;
@property(retain) NSNumber * playableDuration;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property(copy) NSString * URL;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)copyNativeMediaPlayerItem;
- (void)setPlayableDuration:(id)arg1;
- (void)setInitialOrientation:(id)arg1;
- (id)initialOrientation;
- (void)setBookmarkIdentifier:(id)arg1;
- (id)bookmarkIdentifier;
- (void)setBackgroundImageURL:(id)arg1;
- (id)backgroundImageURL;
- (id)attributeKeys;
- (void)setItemIdentifier:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)itemType;
- (void)setItemType:(id)arg1;
- (id)itemIdentifier;
- (void)setURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)initWithDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)URL;
- (void)dealloc;
- (id)playableDuration;

@end
