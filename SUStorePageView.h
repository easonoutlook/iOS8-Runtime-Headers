/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIScrollView, UIView;

@interface SUStorePageView : UIView  {
    UIView *_backdropView;
    UIView *_contentView;
    UIView *_headerView;
    UIScrollView *_headerScrollView;
    UIView *_previewOverlayView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentViewInsets;
}

@property(retain) UIView * backdropView;
@property(retain) UIView * contentView;
@property(retain) UIView * headerView;
@property(retain) UIView * previewOverlayView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentViewInsets;


- (void)setContentViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)previewOverlayView;
- (void)setPreviewOverlayView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsets;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)layoutSubviews;
- (void)dealloc;

@end
