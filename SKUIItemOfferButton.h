/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemOfferButtonState, NSString, UIImageView, SKUICircleProgressIndicator, UILabel, UIView, UIImage, SKUIFocusedTouchGestureRecognizer, NSMutableAttributedString, UIColor, <SKUIItemOfferButtonDelegate>;

@interface SKUIItemOfferButton : UIControl  {
    UIColor *_backgroundColor;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    UIImage *_cloudImage;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    int _confirmationTitleStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _confirmationTitleFitSize;
    <SKUIItemOfferButtonDelegate> *_delegate;
    int _fillStyle;
    UIImage *_image;
    UIImageView *_imageView;
    BOOL _isUbered;
    float _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    BOOL _showsConfirmationState;
    NSMutableAttributedString *_titleAttributedString;
    struct CGSize { 
        float width; 
        float height; 
    } _titleFitSize;
    UILabel *_titleLabel;
    int _titleStyle;
    BOOL _universal;
    BOOL _usesDrawRectPath;
    SKUIItemOfferButtonState *_state;
    UIImageView *_universalImageView;
}

@property <SKUIItemOfferButtonDelegate> * delegate;
@property(copy) NSString * confirmationTitle;
@property(retain) UIImage * image;
@property(copy) NSString * title;
@property int fillStyle;
@property float progress;
@property(getter=isShowingConfirmation,readonly) BOOL showingConfirmation;
@property BOOL showsConfirmationState;
@property int progressType;
@property int confirmationTitleStyle;
@property int titleStyle;
@property(getter=isUniversal) BOOL universal;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_imageInsetsForProgressType:(int)arg1;
+ (id)_imageForProgressType:(int)arg1;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 fillStyle:(int)arg4 universal:(BOOL)arg5 tintColor:(id)arg6;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 fillStyle:(int)arg4 universal:(BOOL)arg5 tintColor:(id)arg6;
+ (id)_cloudImageForTint:(id)arg1 isUbered:(BOOL)arg2;
+ (id)_defaultTitleAttributes;
+ (struct CGSize { float x1; float x2; })_titleSizeThatFitsForSize:(struct CGSize { float x1; float x2; })arg1 titleStyle:(int)arg2 mutableAttributedString:(id)arg3;
+ (BOOL)_sizeMattersForTitleStyle:(int)arg1;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)_basicAnimationWithKeyPath:(id)arg1;

- (BOOL)isUniversal;
- (int)fillStyle;
- (void)_insertCancelGestureRecognizer;
- (void)_cancelGestureAction:(id)arg1;
- (void)_insertLabel;
- (void)_insertImageView;
- (void)_insertProgressIndicator;
- (void)_insertBorderView;
- (void)_insertUniversalView;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (BOOL)showsConfirmationState;
- (BOOL)_touchInBounds:(id)arg1;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(float)arg3 completion:(id)arg4;
- (BOOL)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(BOOL)arg5;
- (void)setConfirmationTitle:(id)arg1;
- (void)setShowsConfirmationState:(BOOL)arg1;
- (void)setFillStyle:(int)arg1;
- (void)_updateForChangedTitleProperty;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(float)arg3 completion:(id)arg4;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(float)arg3 completion:(id)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(float)arg3 completion:(id)arg4;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(float)arg3 completion:(id)arg4;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)setProgressType:(int)arg1 animated:(BOOL)arg2;
- (void)_updateForChangedConfirmationTitleProperty;
- (id)confirmationTitle;
- (void)_sendDidAnimate;
- (void)_reloadForCurrentState:(BOOL)arg1;
- (void)_sendWillAnimate;
- (BOOL)isShowingConfirmation;
- (void)setTitleStyle:(int)arg1;
- (int)titleStyle;
- (void)setConfirmationTitleStyle:(int)arg1;
- (int)confirmationTitleStyle;
- (int)progressType;
- (void)showCloudImage;
- (void)setUniversal:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })layoutSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)removeButtonStateAnimations;
- (void)setColoringWithAppearance:(id)arg1;
- (void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)setValuesUsingViewElement:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (void)_removeCancelGestureRecognizer;
- (void)setProgressType:(int)arg1;
- (void).cxx_destruct;
- (float)progress;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)setEnabled:(BOOL)arg1;
- (id)image;
- (id)title;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end