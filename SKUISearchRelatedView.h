/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, CAGradientLayer, SKUIClientContext, NSMutableArray, <SKUISearchRelatedViewDelegate>, UIView, UILabel, UIButton, UIScrollView, _UIBackdropView, NSArray;

@interface SKUISearchRelatedView : UIView  {
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    SKUIClientContext *_clientContext;
    <SKUISearchRelatedViewDelegate> *_delegate;
    NSArray *_relatedQueries;
    UILabel *_titleLabel;
    NSMutableArray *_relatedButtons;
    UIScrollView *_scrollView;
    UIView *_scrollViewSuperview;
    UILabel *_noRelatedLabel;
    UIButton *_backButton;
    UIView *_separatorView;
    NSString *_previousRelatedSearchTerm;
    CAGradientLayer *_mask;
}

@property(readonly) _UIBackdropView * backdropView;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSArray * relatedQueries;
@property <SKUISearchRelatedViewDelegate> * delegate;
@property(copy) NSString * previousRelatedSearchTerm;


- (id)previousRelatedSearchTerm;
- (id)relatedQueries;
- (void)setRelatedQueries:(id)arg1;
- (void)setPreviousRelatedSearchTerm:(id)arg1;
- (void)_backAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (id)backdropView;
- (void).cxx_destruct;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
