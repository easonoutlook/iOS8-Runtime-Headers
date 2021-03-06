/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUILockupViewElement, SKUIPreviewProgressIndicator, NSMutableArray, NSMapTable;

@interface SKUIHorizontalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIPreviewContainerView, SKUIViewElementView> {
    NSMutableArray *_columnViewArrays;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    struct CGSize { 
        float width; 
        float height; 
    } _lastFitSize;
    SKUILockupViewElement *_lockupElement;
    float _leftColumnWidth;
    NSMapTable *_lineSpacings;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    float _rightColumnWidth;
}

+ (float)_lineSpacingForViewElement:(id)arg1 context:(id)arg2;
+ (float)_middleColumnHeightForViewElements:(id)arg1 columnWidth:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })_rightColumnSizeForViewElements:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })_leftColumnSizeForViewElements:(id)arg1 context:(id)arg2;
+ (id)_newColumnStacksForLockup:(id)arg1;
+ (void)_requestLayoutForViewElements:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize { float x1; float x2; })_sizeForViewElement:(id)arg1 width:(int)arg2 context:(id)arg3;
+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;

- (void)hidePreviewProgressAnimated:(BOOL)arg1;
- (void)_enumerateViewElementViewsUsingBlock:(id)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
