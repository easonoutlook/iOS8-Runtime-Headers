/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class SiriUISnippetViewController, UIView, SiriUIKeyline, UILabel, SiriUIContentButton, UICollectionReusableView<SiriUIReusableView>;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UILabel *_cancelledLabel;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    SiriUISnippetViewController *_snippetViewController;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _snippetEdgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _footerEdgeInsets;
}

@property(getter=_snippetEdgeInsets,setter=_setSnippetEdgeInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } snippetEdgeInsets;
@property(getter=_footerEdgeInsets,setter=_setFooterEdgeInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } footerEdgeInsets;
@property SiriUISnippetViewController * snippetViewController;

+ (id)elementKind;
+ (id)reuseIdentifier;
+ (float)defaultHeight;

- (void)_setHeaderView:(id)arg1;
- (void)_setFooterEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)animateSnippetConfirmationWithCompletion:(id)arg1;
- (void)animateSnippetCancellationWithCompletion:(id)arg1;
- (void)_setSnippetEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_setFooterView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_snippetEdgeInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_footerEdgeInsets;
- (float)_heightForHeaderView;
- (float)_heightForTransparentFooterView;
- (float)_heightForTransparentHeaderView;
- (float)_heightForFooterView;
- (void)_configureSubviewsForCurrentInset;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)setSnippetViewController:(id)arg1;
- (id)snippetViewController;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
