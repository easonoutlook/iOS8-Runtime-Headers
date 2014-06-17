/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIButton, UILabel, NSString, UIView, UIImageView, <CKLocationShareBalloonViewDelegate>;

@interface CKLocationShareBalloonView : CKImageBalloonView  {
    int _offerState;
    NSString *_titleString;
    NSString *_locationString;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    UIButton *_startSharingButton;
    UIButton *_ignoreButton;
    UIView *_horizontalSeparator;
    UIView *_verticalSeparator;
    UIImageView *_chevron;
}

@property <CKLocationShareBalloonViewDelegate> * delegate;
@property int offerState;
@property(copy) NSString * titleString;
@property(copy) NSString * locationString;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * locationLabel;
@property(retain) UIButton * startSharingButton;
@property(retain) UIButton * ignoreButton;
@property(retain) UIView * horizontalSeparator;
@property(retain) UIView * verticalSeparator;
@property(retain) UIImageView * chevron;


- (id)locationString;
- (void)setOfferState:(int)arg1;
- (void)setTitleString:(id)arg1;
- (void)setofferState:(int)arg1;
- (void)setVerticalSeparator:(id)arg1;
- (void)setHorizontalSeparator:(id)arg1;
- (void)setIgnoreButton:(id)arg1;
- (void)_ignoreButtonHit:(id)arg1;
- (void)setStartSharingButton:(id)arg1;
- (void)_shareButtonHit:(id)arg1;
- (id)titleString;
- (id)verticalSeparator;
- (id)horizontalSeparator;
- (id)startSharingButton;
- (id)ignoreButton;
- (void)configureForLocationShareOfferChatItem:(id)arg1;
- (int)offerState;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)prepareForDisplay;
- (void)setLocationString:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (id)locationLabel;
- (id)chevron;
- (void)setChevron:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end