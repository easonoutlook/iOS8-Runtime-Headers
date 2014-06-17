/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIColor, UIView;

@interface RUInnerShadowHeaderFooterView : UITableViewHeaderFooterView  {
    UIView *_shadowBackgroundView;
    UIView *_shadowView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _shadowEdgeInsets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } shadowEdgeInsets;
@property(retain) UIColor * shadowBackgroundColor;

+ (float)defaultInnerShadowRadius;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })shadowEdgeInsets;
- (id)shadowBackgroundColor;
- (void)setShadowEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setShadowBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
