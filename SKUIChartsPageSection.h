/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageOverlayController, SKUIIPhoneChartsViewController, SKUIChartsComponent, SKUIIPadChartsViewController;

@interface SKUIChartsPageSection : SKUIStorePageSection <SKUIChartsViewControllerDelegate, SKUIProductPageOverlayDelegate> {
    SKUIIPadChartsViewController *_ipadViewController;
    SKUIIPhoneChartsViewController *_iphoneViewController;
    SKUIProductPageOverlayController *_overlayController;
    int _selectedChartIndex;
    int _selectedItemIndex;
}

@property(retain) SKUIChartsComponent * pageComponent;


- (void)chartsViewController:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (void)chartsViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (id)chartsViewController:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (void)_recordClickEvent:(id)arg1 withItem:(id)arg2 itemIndex:(int)arg3 chartIndex:(int)arg4;
- (id)_chartsViewController;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (BOOL)fitsToHeight;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
