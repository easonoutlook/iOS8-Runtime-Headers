/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStyledImageView, UIGradient, UIColor, UIBezierPath;

@interface SKUIStyledImageView : SKUIImageView  {
    UIBezierPath *_bezierPath;
    UIColor *_borderColor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _borderWidths;
    BOOL _didInitialHighlightForTouch;
    UIGradient *_gradient;
    SKUIStyledImageView *_highlightedImageView;
    UIColor *_imageColor;
    int _imageTreatment;
}

@property(retain) UIColor * imageTintColor;
@property int imageTreatment;
@property(retain) UIColor * borderColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } borderWidths;


- (id)imageTintColor;
- (void)_drawUberImageInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_drawTintedImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_drawBrickImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_drawAppImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawDecorationsWithImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)imageTreatment;
- (void)setBorderWidths:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageTreatment:(int)arg1;
- (void)setImageTintColor:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderWidths;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end