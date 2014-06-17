/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface _UIReflectingView : UIView  {
    UIView *_containerView;
    UIView *_gradientView;
    float _reflectionAlpha;
}

@property(retain,readonly) UIView * containerView;
@property float reflectionFraction;
@property float reflectionAlpha;


- (float)reflectionFraction;
- (void)_updateGradientColors;
- (float)reflectionAlpha;
- (void)setReflectionFraction:(float)arg1;
- (void)setReflectionAlpha:(float)arg1;
- (id)_gradientLayer;
- (id)containerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
