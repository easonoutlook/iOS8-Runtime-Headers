/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UILabel;

@interface PLPlayingExternallyBackgroundView : UIView  {
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_imageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;


- (void)_updateSizeForLabel:(id)arg1;
- (id)_newLabelWithText:(id)arg1 withFont:(id)arg2;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMessage:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
