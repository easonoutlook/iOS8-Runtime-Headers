/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView, UIImage, NSString, UILabel;

@interface CKContactAlertView : UIView  {
    NSString *_contactDescription;
    UIImage *_image;
    UIImageView *_contactImageView;
    UILabel *_contactLabel;
}

@property(retain) NSString * contactDescription;
@property(retain) UIImage * image;
@property(retain) UIImageView * contactImageView;
@property(retain) UILabel * contactLabel;


- (void)setContactLabel:(id)arg1;
- (id)contactLabel;
- (id)contactDescription;
- (void)setContactDescription:(id)arg1;
- (id)contactImageView;
- (void)setContactImageView:(id)arg1;
- (id)image;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
