/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUINavigationPaletteView, SKUIViewElementLayoutContext, SKUIPaletteViewElement, SKUINavigationBarContext;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController  {
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}


- (id)initWithPaletteViewElement:(id)arg1;
- (void)reloadSectionViews;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInNavigationBar;
- (id)viewForElementIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)view;

@end
