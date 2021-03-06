/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UILabel, UIColor, SKUIBadgeLabel, NSString, SKUIClientContext;

@interface SKUILockupMetadataView : UIView  {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SKUIClientContext *_clientContext;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    int _numberOfUserRatings;
    UILabel *_releaseDateLabel;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    unsigned int _visibleFields;
}

@property(retain) SKUIClientContext * clientContext;
@property unsigned int visibleFields;
@property(copy) NSString * artistName;
@property(copy) NSString * editorialBadgeString;
@property(copy) NSString * categoryString;
@property(copy) NSString * itemCountString;
@property(copy) NSString * itemOfferString;
@property(copy) NSString * releaseDateString;
@property(copy) NSString * title;
@property int numberOfUserRatings;
@property float userRating;
@property(readonly) UIColor * primaryTextColor;

+ (float)maximumHeightWithVisibleFields:(unsigned int)arg1;

- (unsigned int)visibleFields;
- (void)setVisibleFields:(unsigned int)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setNumberOfUserRatings:(int)arg1;
- (void)setItemOfferString:(id)arg1;
- (void)setCategoryString:(id)arg1;
- (void)setEditorialBadgeString:(id)arg1;
- (id)releaseDateString;
- (id)itemOfferString;
- (id)itemCountString;
- (id)editorialBadgeString;
- (id)_decimalNumberFormatter;
- (void)_reloadUserRatingViews;
- (id)_newDefaultLabel;
- (id)clientContext;
- (int)numberOfUserRatings;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)primaryTextColor;
- (void)setClientContext:(id)arg1;
- (id)categoryString;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (float)userRating;
- (void)setUserRating:(float)arg1;
- (void).cxx_destruct;
- (id)title;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItemCountString:(id)arg1;
- (void)setBackgroundColor:(id)arg1;

@end
