/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, NSMutableArray, <SKUIIPadSearchHeaderViewDelegate>, NSDictionary, UIPopoverController, NSMutableDictionary, NSArray;

@interface SKUIIPadSearchHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    int _activeFacetIndex;
    SKUIClientContext *_clientContext;
    <SKUIIPadSearchHeaderViewDelegate> *_delegate;
    NSMutableArray *_facetButtons;
    UIPopoverController *_facetPopoverController;
    NSMutableDictionary *_facetSelections;
    NSArray *_searchFacets;
}

@property <SKUIIPadSearchHeaderViewDelegate> * delegate;
@property(readonly) NSArray * searchFacets;
@property(readonly) NSDictionary * facetSelections;


- (id)searchFacets;
- (void)setSearchFacets:(id)arg1 selections:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 clientContext:(id)arg2;
- (int)_selectedIndexForFacet:(id)arg1;
- (id)_titleForFacet:(id)arg1;
- (void)_facetButtonAction:(id)arg1;
- (void)_destroyFacetPopover;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)facetSelections;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end