/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKPlayerPhotoView, UILabel, GKPlayer, NSDictionary;

@interface GKBasePlayerCell : GKCollectionViewCell  {
    UILabel *_nameLabel;
    GKPlayerPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
}

@property(retain) GKPlayer * player;
@property(retain) UILabel * nameLabel;
@property(retain) GKPlayerPhotoView * iconView;
@property(retain) NSDictionary * metricsOverrides;

+ (float)defaultRowHeight;
+ (id)itemHeightList;
+ (id)padMetrics;
+ (id)phoneMetrics;
+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;

- (id)player;
- (id)metricsOverrides;
- (BOOL)canRemoveItem;
- (void)setRepresentedItem:(id)arg1;
- (void)setMetricsOverrides:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRectForText;
- (void)didUpdateModel;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (id)iconView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (void)dealloc;

@end
