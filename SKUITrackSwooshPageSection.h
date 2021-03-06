/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUITrackSwooshViewController, SKUISwooshPageComponent, SKUIMissingItemLoader, SKUITrackSwooshArtworkLoader;

@interface SKUITrackSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUITrackSwooshViewControllerDelegate> {
    SKUITrackSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUITrackSwooshViewController *_swooshViewController;
}

@property(retain) SKUISwooshPageComponent * pageComponent;


- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (id)swoosh:(id)arg1 didConfirmItemOfferForItemAtIndex:(int)arg2;
- (void)_addImpressionForItemIndex:(int)arg1 toSession:(id)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 didDoubleTapCellAtIndex:(int)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2;
- (id)_artworkLoader;
- (id)_swooshViewController;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
