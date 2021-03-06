/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIKeyboardCandidatePocketShadow;

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton  {
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    UIImage *_backgroundNormal;
    UIImage *_backgroundHighlighted;
    BOOL _drawsBackground;
    BOOL _drawsPocketShadow;
}

@property BOOL drawsBackground;
@property BOOL drawsPocketShadow;


- (BOOL)drawsPocketShadow;
- (id)toggleButtonBackgroundImageWithHighlight:(BOOL)arg1;
- (void)updateBackgroundImages;
- (void)setDrawsPocketShadow:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
