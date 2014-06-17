/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class UIColor;

@interface MPUSeparatorView : UIView  {
    float _leftMarginWidth;
    UIColor *_marginColor;
    float _rightMarginWidth;
    UIColor *_separatorColor;
}

@property float leftMarginWidth;
@property(retain) UIColor * marginColor;
@property float rightMarginWidth;
@property(retain) UIColor * separatorColor;


- (float)rightMarginWidth;
- (id)marginColor;
- (float)leftMarginWidth;
- (void)setRightMarginWidth:(float)arg1;
- (void)setMarginColor:(id)arg1;
- (void)setLeftMarginWidth:(float)arg1;
- (void).cxx_destruct;
- (void)setSeparatorColor:(id)arg1;
- (id)separatorColor;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end