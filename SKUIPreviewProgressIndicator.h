/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, SKUIShapeView;

@interface SKUIPreviewProgressIndicator : UIView  {
    SKUIShapeView *_backgroundView;
    UIImageView *_cancelImageView;
    SKUIShapeView *_foregroundView;
    BOOL _isIndeterminate;
    float _progress;
}

@property(getter=isIndeterminate,readonly) BOOL indeterminate;
@property float progress;


- (void)endIndeterminateAnimation;
- (void)beginIndeterminateAnimation;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lineWidth:(float)arg2;
- (void)reloadWithPlayerStatus:(id)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)isIndeterminate;
- (float)progress;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgress:(float)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;

@end
