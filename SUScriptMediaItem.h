/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject  {
}

@property(readonly) MPMediaItem * nativeItem;

+ (unsigned int)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned int)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned int)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)nativeItem;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
- (id)_className;
- (id)valueForProperty:(id)arg1;

@end
