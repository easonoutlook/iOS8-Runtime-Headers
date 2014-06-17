/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKLabel, NSString;

@interface GKFriendPlayerCell : GKBasePlayerCell  {
    GKLabel *_statusLabel;
    GKLabel *_whenLabel;
}

@property(retain) GKLabel * statusLabel;
@property(retain) GKLabel * whenLabel;
@property NSString * whenText;

+ (void)registerCellClassesWithCollectionView:(id)arg1;
+ (Class)cellClassForPlayer:(id)arg1;

- (void)setWhenLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setWhenText:(id)arg1;
- (id)whenText;
- (id)statusLabel;
- (id)whenLabel;
- (void)didUpdateModel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
