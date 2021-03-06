/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class UIImageView, UIImage;

@interface MusicPartialPlaybackTableViewCellContentView : MusicStandardMediaTableViewCellContentView  {
    UIImage *_tintedUnplayedIndicatorImage;
    UIImageView *_unplayedIndicatorImageView;
    UIImage *_unplayedIndicatorHighlightedImage;
    UIImage *_unplayedIndicatorImage;
}

@property(retain) UIImage * unplayedIndicatorHighlightedImage;
@property(retain) UIImage * unplayedIndicatorImage;

+ (float)textLeadingDistanceFromArtwork;

- (void)_reloadUnplayedIndicatorImageView;
- (id)_effectiveTintedUnplayedIndicatorImage;
- (id)unplayedIndicatorImage;
- (id)unplayedIndicatorHighlightedImage;
- (void)setUnplayedIndicatorHighlightedImage:(id)arg1;
- (void)setUnplayedIndicatorImage:(id)arg1;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
