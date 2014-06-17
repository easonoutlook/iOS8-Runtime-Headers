/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIButton, UIImage, NSString, UILabel, UIImageView, NSMutableArray;

@interface CKTranscriptRecipientCell : UITableViewCell  {
    BOOL _showsLocation;
    BOOL _showMailButton;
    BOOL _showPhoneButton;
    BOOL _showFaceTimeVideoButton;
    BOOL _showInfoButton;
    NSString *_entityName;
    NSString *_locationString;
    UIImage *_contactImage;
    UIButton *_mailButton;
    UIButton *_phoneButton;
    UIButton *_facetimeVideoButton;
    UIButton *_infoButton;
    NSMutableArray *_visibleButtons;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    UIImageView *_contactImageView;
}

@property(copy) NSString * entityName;
@property(copy) NSString * locationString;
@property BOOL showsLocation;
@property BOOL showMailButton;
@property BOOL showPhoneButton;
@property BOOL showFaceTimeVideoButton;
@property BOOL showInfoButton;
@property(retain) UIImage * contactImage;
@property(retain) UIButton * mailButton;
@property(retain) UIButton * phoneButton;
@property(retain) UIButton * facetimeVideoButton;
@property(retain) UIButton * infoButton;
@property(retain) NSMutableArray * visibleButtons;
@property(retain) UILabel * nameLabel;
@property(retain) UILabel * locationLabel;
@property(retain) UIImageView * contactImageView;

+ (float)marginWidth;
+ (id)identifier;
+ (float)preferredHeight;

- (id)locationString;
- (id)entityName;
- (void)setVisibleButtons:(id)arg1;
- (void)setContactImage:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setShowFaceTimeVideoButton:(BOOL)arg1;
- (void)setShowPhoneButton:(BOOL)arg1;
- (void)setShowMailButton:(BOOL)arg1;
- (void)setShowInfoButton:(BOOL)arg1;
- (void)setShowsLocation:(BOOL)arg1;
- (BOOL)showMailButton;
- (BOOL)showPhoneButton;
- (BOOL)showFaceTimeVideoButton;
- (BOOL)showInfoButton;
- (void)_updateVisibleButtons;
- (void)setLocationLabel:(id)arg1;
- (id)locationLabel;
- (BOOL)showsLocation;
- (id)contactImage;
- (id)visibleButtons;
- (id)contactImageView;
- (void)setContactImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)facetimeVideoButton;
- (id)phoneButton;
- (id)mailButton;
- (id)infoButton;
- (void)setInfoButton:(id)arg1;
- (void)setFacetimeVideoButton:(id)arg1;
- (void)setPhoneButton:(id)arg1;
- (void)setMailButton:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
