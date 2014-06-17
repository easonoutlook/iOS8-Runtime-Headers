/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUITracklistColumnData, UIView, SKUIItemOfferButton, NSMutableArray, SKUIButtonViewElement;

@interface SKUITracklistSectionHeaderCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIViewElementView> {
    SKUIItemOfferButton *_button;
    SKUIButtonViewElement *_buttonViewElement;
    SKUITracklistColumnData *_columnData;
    NSMutableArray *_labels;
    UIView *_separatorView;
}

+ (float)_titlesWidthForWidth:(float)arg1 columnData:(id)arg2;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;

- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
