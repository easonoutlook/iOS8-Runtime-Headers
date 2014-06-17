/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIImageView, UIView, UILabel, UIImage;

@interface _RUTrackActionsTableViewCell : UITableViewCell  {
    UIImageView *_accessoryImageView;
    UILabel *_lastConfiguredTextLabel;
    UIView *_topSeparatorView;
    BOOL _displaysAsDisabled;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _accessoryImageOffset;
}

@property(retain) UIImage * accessoryImage;
@property struct UIOffset { float x1; float x2; } accessoryImageOffset;
@property BOOL displaysAsDisabled;
@property(retain) UIImage * highlightedAccessoryImage;
@property BOOL showsTopSeparator;

+ (id)_textLabelFont;
+ (float)defaultHeightForTraitCollection:(id)arg1;

- (BOOL)displaysAsDisabled;
- (struct UIOffset { float x1; float x2; })accessoryImageOffset;
- (BOOL)showsTopSeparator;
- (id)highlightedAccessoryImage;
- (id)accessoryImage;
- (void)setDisplaysAsDisabled:(BOOL)arg1;
- (void)setAccessoryImageOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setHighlightedAccessoryImage:(id)arg1;
- (void)setAccessoryImage:(id)arg1;
- (void)setShowsTopSeparator:(BOOL)arg1;
- (void).cxx_destruct;
- (id)textLabel;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
