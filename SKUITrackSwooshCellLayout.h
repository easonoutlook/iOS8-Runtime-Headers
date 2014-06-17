/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, SKUIColorScheme, NSString, UILabel;

@interface SKUITrackSwooshCellLayout : SKUIItemCellLayout  {
    NSString *_artistName;
    UIView *_bottomBorderView;
    NSString *_collectionName;
    SKUIColorScheme *_colorScheme;
    int _lockupSize;
    int _layoutIdiom;
    UIView *_selectionBackgroundView;
    NSString *_subtitleFormatString;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    unsigned int _visibleFields;
}

@property(copy) NSString * artistName;
@property(copy) NSString * collectionName;
@property(copy) NSString * title;
@property(copy) NSString * subtitleFormatString;
@property int lockupSize;
@property unsigned int visibleFields;
@property int layoutIdiom;


- (id)subtitleFormatString;
- (int)lockupSize;
- (int)layoutIdiom;
- (void)layoutForItemOfferChange;
- (void)setSubtitleFormatString:(id)arg1;
- (void)setLayoutIdiom:(int)arg1;
- (void)_delayedReloadSubviewBackgroundColors;
- (void)_reloadSubviewBackgroundColors;
- (void)setLockupSize:(int)arg1;
- (unsigned int)visibleFields;
- (void)setVisibleFields:(unsigned int)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)collectionName;
- (void)setCollectionName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;

@end
