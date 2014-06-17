/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, UIImageView, UIImage;

@interface EKCalendarChooserCell : UITableViewCell  {
    BOOL _showCheckmarksOnLeft;
    BOOL _checked;
    BOOL _shouldAnimate;
    BOOL _showsColorDot;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
    UILabel *_customTitleTextLabel;
    UILabel *_customDetailTextLabel;
}

@property BOOL showCheckmarksOnLeft;
@property BOOL checked;
@property BOOL shouldAnimate;
@property BOOL showsColorDot;


- (BOOL)checked;
- (void).cxx_destruct;
- (BOOL)shouldAnimate;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setChecked:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (BOOL)showsColorDot;
- (void)setColorDotHighlightedImage:(id)arg1;
- (void)setColorDotImage:(id)arg1;
- (void)setShowsColorDot:(BOOL)arg1;
- (void)setShowCheckmarksOnLeft:(BOOL)arg1;
- (void)setShowCheckmarksOnLeft:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldAnimate:(BOOL)arg1;
- (BOOL)showCheckmarksOnLeft;
- (void)setContentAlpha:(float)arg1;

@end