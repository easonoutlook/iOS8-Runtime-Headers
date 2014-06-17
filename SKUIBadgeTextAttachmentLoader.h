/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSHashTable, NSMapTable, SKUIResourceLoader;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}


- (id)initWithResourceLoader:(id)arg1;
- (BOOL)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(int)arg3;
- (void)disconnectStringView:(id)arg1;
- (void)connectStringView:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void).cxx_destruct;

@end
