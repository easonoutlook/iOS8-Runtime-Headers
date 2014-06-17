/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UILabel, UIButton, UIImage, NSString;

@interface SKUIEditorialCardCellLayout : SKUICellLayout  {
    UIImageView *_artworkImageView;
    UIButton *_button;
    UILabel *_messageLabel;
    UILabel *_messageTitleLabel;
}

@property(retain) UIImage * artwork;
@property(copy) NSString * message;
@property(copy) NSString * messageTitle;
@property(copy) NSString * buttonTitle;


- (id)messageTitle;
- (void)setMessageTitle:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setArtwork:(id)arg1;
- (id)artwork;

@end
