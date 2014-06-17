/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class UILabel;

@interface FMFTitleView : UIView  {
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain) UILabel * subtitleLabel;
@property(retain) UILabel * titleLabel;

+ (void)updateLocation:(id)arg1;
+ (id)viewForLocation:(id)arg1;
+ (id)sharedTitleView;

- (void)_updateLabels:(id)arg1;
- (void).cxx_destruct;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
