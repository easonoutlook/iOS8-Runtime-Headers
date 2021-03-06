/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIBrowseHeaderPageComponent;

@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection  {
}

@property(retain) SKUIBrowseHeaderPageComponent * pageComponent;


- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;

@end
