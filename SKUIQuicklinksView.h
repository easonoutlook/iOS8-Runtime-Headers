/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UILabel, UIColor, UIView, NSString;

@interface SKUIQuicklinksView : UIView  {
    UIView *_borderView;
    UIView *_collectionView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property(retain) UIView * collectionView;
@property(copy) NSString * title;


- (void)setColoringWithColorScheme:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)title;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;

@end