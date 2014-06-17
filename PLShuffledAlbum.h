/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, UIImage, NSObject<PLAlbumProtocol>, NSMutableOrderedSet, NSDate, NSDictionary, NSArray, NSOrderedSet, <NSObject><NSCopying>, NSString, PLManagedAsset, NSNumber;

@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol> {
    struct __CFArray { } *_toBackingMap;
    struct __CFArray { } *_fromBackingMap;
    struct NSObject { Class x1; } *_backingAlbum;
    PLManagedAsset *_startingAsset;
    NSMutableOrderedSet *_assets;
}

@property(retain,readonly) PLManagedAsset * startingAsset;
@property(retain,readonly) NSObject<PLAlbumProtocol> * backingAlbum;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(retain) NSMutableOrderedSet * _assets;
@property(retain,readonly) NSString * uuid;
@property(retain,readonly) NSString * title;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned int approximateCount;
@property(readonly) unsigned int assetsCount;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) BOOL isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) BOOL canShowComments;
@property(readonly) BOOL canShowAvalancheStacks;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property BOOL hasUnseenContentBoolValue;
@property(copy,readonly) NSString * name;
@property(retain,readonly) UIImage * posterImage;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isFolder;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isFamilyCloudSharedAlbum;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL isRecentlyAddedAlbum;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(retain,readonly) NSURL * groupURL;
@property(copy,readonly) id sortingComparator;
@property int pendingItemsCount;
@property int pendingItemsType;

+ (struct NSObject { Class x1; }*)unshuffledAlbum:(struct NSObject { Class x1; }*)arg1;
+ (struct NSObject { Class x1; }*)shuffledAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;

- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned int)arg2;
- (id)objectInShuffledAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInShuffledAssetsOfObject:(id)arg1;
- (unsigned int)countOfShuffledAssets;
- (struct __CFArray { }*)fromBackingMap;
- (void)createShuffledIndexesMaps;
- (id)startingAsset;
- (void)createShuffledIndexesMapsIfNeeded;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 startingAsset:(id)arg2;
- (id)cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)_assets;
- (void)set_assets:(id)arg1;
- (struct NSObject { Class x1; }*)backingAlbum;
- (id)localizedLocationNames;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (unsigned int)videosCount;
- (unsigned int)photosCount;
- (unsigned int)assetsCount;
- (unsigned int)approximateCount;
- (id)assets;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (int)pendingItemsType;
- (void)setPendingItemsCount:(int)arg1;
- (int)pendingItemsCount;
- (id)sortingComparator;
- (id)groupURL;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isFolder;
- (BOOL)isStandInAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isWallpaperAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isLibrary;
- (id)posterImage;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (BOOL)hasUnseenContentBoolValue;
- (id)mutableAssets;
- (void)batchFetchAssets:(id)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isCameraAlbum;
- (int)kindValue;
- (BOOL)isRecentlyAddedAlbum;
- (id)localizedTitle;
- (id)uuid;
- (id)kind;
- (BOOL)isEmpty;
- (id)title;
- (id)name;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)init;

@end
