/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection  {
}

@property(readonly) MPMediaPlaylist * nativePlaylist;

+ (id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned int)arg1;
+ (unsigned int)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)nativePlaylist;
- (id)_className;
- (id)valueForProperty:(id)arg1;

@end
