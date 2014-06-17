/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableDictionary, PHFetchResult;

@interface PLAssetContainerDataSource : NSObject <PLPhotoBrowserControllerInitDataSource> {
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_assetsFetchResultByAssetCollection;
    unsigned int _allAssetsCount;
    unsigned int *_containerCounts;
    BOOL _cachedValuesNeedUpdate;
    unsigned int _lastAssetCollectionIndex;
}

@property(readonly) PHFetchResult * assetCollectionsFetchResult;


- (unsigned int)assetCountForContainer:(id)arg1;
- (void)_updateCachedCount:(unsigned int)arg1 forContainerAtContainerIndex:(unsigned int)arg2;
- (void)_updateCachedValues;
- (unsigned int)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned int)arg1 wrap:(BOOL)arg2;
- (unsigned int)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned int)arg1 wrap:(BOOL)arg2;
- (id)assetInAssetContainer:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)indexOffsetForAssetContainerAtAssetIndex:(unsigned int)arg1;
- (id)assetContainerForAssetGlobalIndex:(unsigned int)arg1;
- (id)assetContainerForAsset:(id)arg1;
- (unsigned int)globalIndexOfAsset:(id)arg1;
- (id)pl_fetchAllAssets;
- (unsigned int)assetCountForContainerAtIndex:(unsigned int)arg1;
- (unsigned int)decrementGlobalIndex:(unsigned int)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (unsigned int)incrementGlobalIndex:(unsigned int)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)firstAssetIndexPath;
- (id)assetsInAssetCollectionAtIndex:(unsigned int)arg1;
- (id)assetWithObjectID:(id)arg1;
- (unsigned int)indexOfContainer:(id)arg1;
- (void)viewControllerPhotoLibraryDidChange:(id)arg1;
- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2 andWrap:(BOOL)arg3;
- (id)indexPathOfAsset:(id)arg1;
- (id)initWithAssetCollectionsFetchResult:(id)arg1 collectionsAssetsFetchResults:(id)arg2;
- (id)indexPathForGlobalIndex:(unsigned int)arg1;
- (id)assetAtGlobalIndex:(unsigned int)arg1;
- (unsigned int)globalIndexForIndexPath:(id)arg1;
- (id)assetContainerAtIndex:(unsigned int)arg1;
- (unsigned int)allAssetsCount;
- (BOOL)hasAssetAtIndexPath:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetsInAssetCollection:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (void)dealloc;

@end