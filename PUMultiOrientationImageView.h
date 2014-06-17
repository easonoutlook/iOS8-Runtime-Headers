/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIView, UIImage, NSArray;

@interface PUMultiOrientationImageView : UIView  {
    NSArray *_orientedSubviews;
    UIView *_currentOrientedSubview;
    BOOL _allowsEdgeAntialiasing;
    UIImage *_image;
}

@property(retain) UIImage * image;
@property BOOL allowsEdgeAntialiasing;


- (void).cxx_destruct;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (id)image;
- (void)setContentMode:(int)arg1;
- (void)setImage:(id)arg1;
- (void)_updateSubviews;
- (void)_updateLayout;
- (BOOL)allowsEdgeAntialiasing;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
