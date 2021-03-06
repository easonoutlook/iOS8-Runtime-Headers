/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFriendsDataSource : GKBasicCollectionViewDataSource  {
    int _kind;
}

@property int kind;


- (void)removeItemAtIndexPath:(id)arg1;
- (void)setKind:(int)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (int)kind;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionTitle;

@end
