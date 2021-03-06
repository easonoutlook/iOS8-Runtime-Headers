/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView, UIImage, UILabel, NSString;

@interface CKAttachmentView : UIView  {
    UIImageView *_iconImageView;
    UILabel *_actionLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(copy) UIImage * icon;
@property(copy) NSString * action;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(retain) UIImageView * iconImageView;
@property(retain) UILabel * actionLabel;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * subtitleLabel;


- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (void)setAction:(id)arg1;
- (id)titleLabel;
- (id)action;
- (id)title;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIconImageView:(id)arg1;
- (id)iconImageView;
- (void)dealloc;
- (id)icon;

@end
