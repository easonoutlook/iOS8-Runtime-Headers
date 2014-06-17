/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView;

@interface CAMFilterButton : UIButton  {
    UIImageView *__circlesImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tappableEdgeInsets;
}

@property(getter=isOn) BOOL on;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tappableEdgeInsets;
@property(readonly) UIImageView * _circlesImageView;

+ (id)filterButton;

- (id)_circlesImageView;
- (void)_commonCAMFilterButtonInitialization;
- (id)_filterOnImage;
- (id)_filterImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tappableEdgeInsets;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void).cxx_destruct;
- (float)_selectedIndicatorAlpha;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;

@end
