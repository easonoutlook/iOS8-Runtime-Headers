/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIScreenshot, NSMutableDictionary, NSArray;

@interface SKUISearchItem : SKUIItem  {
    SKUIScreenshot *_primaryScreenshot;
    NSArray *_screenshots;
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}

@property(readonly) SKUIScreenshot * primaryScreenshot;
@property(readonly) NSArray * screenshots;


- (id)screenshots;
- (id)primaryScreenshot;
- (void)setChildItem:(id)arg1 forIdentifier:(id)arg2;
- (id)childItemForIdentifier:(id)arg1;
- (id)loadedChildItems;
- (id)childItemIdentifiers;
- (id)initWithLookupDictionary:(id)arg1;
- (void).cxx_destruct;

@end