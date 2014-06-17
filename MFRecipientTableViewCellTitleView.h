/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UILabel, UIColor, NSAttributedString;

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting> {
    NSAttributedString *_deselectedAttributedString;
    UIColor *_tintColor;
    BOOL _shouldDim;
    BOOL _highlighted;
    UILabel *_titleLabel;
}

@property(readonly) UILabel * titleLabel;
@property BOOL highlighted;
@property BOOL shouldDim;

+ (float)height;
+ (id)regularStringAttributes;
+ (id)highlightedStringAttributes;
+ (id)defaultStringAttributes;

- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleLabel;
- (id)tintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldDim;
- (void)setShouldDim:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;

@end
