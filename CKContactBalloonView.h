/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UILabel, CKMediaObject, UIImageView;

@interface CKContactBalloonView : CKColoredBalloonView  {
    CKMediaObject *_mediaObject;
    UIImageView *_chevron;
    UIImageView *_contactImageView;
    UILabel *_nameLabel;
    UILabel *_organizationLabel;
}

@property(retain) CKMediaObject * mediaObject;
@property(retain) UIImageView * chevron;
@property(retain) UIImageView * contactImageView;
@property(retain) UILabel * nameLabel;
@property(retain) UILabel * organizationLabel;


- (void)setOrganizationLabel:(id)arg1;
- (id)organizationLabel;
- (id)mediaObject;
- (void)configureForMessagePart:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)prepareForDisplay;
- (id)contactImageView;
- (void)setContactImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)chevron;
- (void)setChevron:(id)arg1;
- (void)prepareForReuse;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)description;
- (void)dealloc;

@end