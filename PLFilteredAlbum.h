/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class UIImage, NSMutableIndexSet, NSURL, NSObject<PLAlbumProtocol>, NSIndexSet, NSMutableOrderedSet, PLIndexMapper, NSDate, NSPredicate, NSArray, NSDictionary, NSOrderedSet, <NSObject><NSCopying>, NSString, PLManagedAsset, NSNumber;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache> {
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    BOOL _backingAlbumSupportsEdits;
    BOOL _backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
    BOOL isObservingContextChanges;
    struct NSObject { Class x1; } *_backingAlbum;
    int filter;
    NSPredicate *predicate;
    NSArray *_filterParameters;
}

@property int filter;
@property(readonly) NSArray * filterParameters;
@property(retain,readonly) PLIndexMapper * indexMapper;
@property(retain) NSObject<PLAlbumProtocol> * backingAlbum;
@property(retain) NSPredicate * predicate;
@property BOOL isObservingContextChanges;
@property NSMutableOrderedSet * _assets;
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
@property(retain,readonly) NSMutableOrderedSet * userEditableAssets;
@property(retain) NSString * cloudGUID;
@property(retain) NSDictionary * cloudMetadata;
@property(retain) NSString * cloudOwnerFirstName;
@property(retain) NSString * cloudOwnerLastName;
@property(retain) NSString * cloudOwnerFullName;
@property(retain) NSString * cloudOwnerEmail;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(retain) NSDate * cloudSubscriptionDate;
@property(retain) NSString * publicURL;
@property(retain) NSOrderedSet * invitationRecords;
@property(retain) NSNumber * unseenAssetsCount;
@property unsigned int unseenAssetsCountIntegerValue;
@property(retain) NSNumber * cloudPublicURLEnabled;
@property(retain) NSNumber * cloudPublicURLEnabledLocal;
@property(retain) NSNumber * cloudMultipleContributorsEnabled;
@property(retain) NSNumber * cloudMultipleContributorsEnabledLocal;
@property(retain) NSDate * cloudLastInterestingChangeDate;
@property(retain) NSDate * cloudCreationDate;
@property(retain) NSDate * cloudLastContributionDate;
@property(retain) NSString * cloudPersonID;
@property(readonly) int cloudRelationshipStateValue;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(retain,readonly) NSString * localizedSharedWithLabel;
@property(retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords;
@property(retain,readonly) NSDate * cloudFirstRecentBatchDate;
@property BOOL cloudNotificationsEnabled;
@property(copy,readonly) NSIndexSet * filteredIndexes;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;

+ (struct NSObject { Class x1; }*)unfilteredAlbum:(struct NSObject { Class x1; }*)arg1;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 intersectFilter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;

- (int)filter;
- (BOOL)isObservingContextChanges;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned int)arg2;
- (void)getFilteredAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInFilteredAssetsOfObject:(id)arg1;
- (unsigned int)countOfFilteredAssets;
- (id)indexMapper;
- (id)cachedIndexMapState;
- (id)currentStateForChange;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)_editableBackingAlbum;
- (void)_commonInitWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (void)backingContextDidChange:(id)arg1;
- (void)setIsObservingContextChanges:(BOOL)arg1;
- (id)_cloudSharedBackingAlbum;
- (id)filteredIndexes;
- (id)_assets;
- (void)set_assets:(id)arg1;
- (void)setBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
- (struct NSObject { Class x1; }*)backingAlbum;
- (id)filterParameters;
- (id)userEditableAssets;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
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
- (void)setCloudNotificationsEnabled:(BOOL)arg1;
- (BOOL)cloudNotificationsEnabled;
- (id)cloudFirstRecentBatchDate;
- (id)cloudAlbumSubscriberRecords;
- (id)localizedSharedWithLabel;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (void)setCloudPersonID:(id)arg1;
- (id)cloudPersonID;
- (void)setCloudLastContributionDate:(id)arg1;
- (id)cloudLastContributionDate;
- (void)setCloudCreationDate:(id)arg1;
- (id)cloudCreationDate;
- (void)setCloudLastInterestingChangeDate:(id)arg1;
- (id)cloudLastInterestingChangeDate;
- (void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
- (id)cloudMultipleContributorsEnabledLocal;
- (void)setCloudMultipleContributorsEnabled:(id)arg1;
- (id)cloudMultipleContributorsEnabled;
- (void)setCloudPublicURLEnabledLocal:(id)arg1;
- (id)cloudPublicURLEnabledLocal;
- (void)setCloudPublicURLEnabled:(id)arg1;
- (id)cloudPublicURLEnabled;
- (void)setUnseenAssetsCountIntegerValue:(unsigned int)arg1;
- (unsigned int)unseenAssetsCountIntegerValue;
- (void)setUnseenAssetsCount:(id)arg1;
- (id)unseenAssetsCount;
- (void)setInvitationRecords:(id)arg1;
- (id)invitationRecords;
- (void)setPublicURL:(id)arg1;
- (id)publicURL;
- (void)setCloudSubscriptionDate:(id)arg1;
- (id)cloudSubscriptionDate;
- (void)setCloudOwnerHashedPersonID:(id)arg1;
- (id)cloudOwnerHashedPersonID;
- (void)setCloudOwnerEmail:(id)arg1;
- (id)cloudOwnerEmail;
- (void)setCloudOwnerFullName:(id)arg1;
- (id)cloudOwnerFullName;
- (void)setCloudOwnerLastName:(id)arg1;
- (id)cloudOwnerLastName;
- (void)setCloudOwnerFirstName:(id)arg1;
- (id)cloudOwnerFirstName;
- (void)setCloudMetadata:(id)arg1;
- (id)cloudMetadata;
- (void)setCloudGUID:(id)arg1;
- (id)cloudGUID;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned int*)arg1 count:(unsigned int*)arg2 showsProgress:(BOOL*)arg3;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isCameraAlbum;
- (int)kindValue;
- (BOOL)isRecentlyAddedAlbum;
- (id)localizedTitle;
- (id)predicate;
- (id)uuid;
- (id)kind;
- (void)setPredicate:(id)arg1;
- (void)setFilter:(int)arg1;
- (BOOL)isEmpty;
- (id)title;
- (id)name;
- (id)description;
- (unsigned int)count;
- (void)dealloc;

@end