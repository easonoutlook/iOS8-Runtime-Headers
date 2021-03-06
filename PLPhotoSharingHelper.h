/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoSharingHelper : NSObject  {
}

+ (BOOL)debugDownloadAllDerivatives;
+ (BOOL)debugDownloadMetadataOnly;
+ (BOOL)debugDownloadThumbnailsOnly;
+ (BOOL)debugAlwaysStreamSharedVideos;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (unsigned long long)purgeableSpace;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(id)arg1;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(id)arg1;
+ (void)applicationIsInForeground:(BOOL)arg1;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)checkServerModelForAlbum:(id)arg1;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(BOOL)arg2;
+ (struct CGSize { float x1; float x2; })derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(id)arg1;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (BOOL)hasPhoneInvitationForAlbum:(id)arg1;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completion:(id)arg2;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int*)arg1 handler:(id)arg2;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 completion:(id)arg2;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (BOOL)canSetUserCloudSharedLiked:(BOOL)arg1 forAssets:(id)arg2 error:(id*)arg3;
+ (BOOL)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id*)arg2;
+ (BOOL)canCreateStreamInPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (int)maxVideoLengthForPublishing;
+ (int)maxNumDerivativesToDownloadPerPush;
+ (int)maxCharactersPerComment;
+ (int)maxSubscribersPerStream;
+ (int)maxAssetsPerStream;
+ (id)streamdVideoCache;
+ (void)initializeMSPlatform;
+ (void)pollForAlbumListUpdates;
+ (BOOL)accountMatchesEmail:(id)arg1;
+ (id)sharingEmail;
+ (BOOL)sharedStreamsExplictlyDisabled;
+ (BOOL)sharedStreamsUIEnabled;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (BOOL)isBreadcrumbDebugEnabled;
+ (double)intervalBetweenPolls;
+ (id)_downloadRequestQueue;
+ (BOOL)_shouldDownloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2;
+ (double)intervalBetweenAlbumPolls;
+ (float)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (struct CGSize { float x1; float x2; })videoPosterFrameDimension;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)_processPhoneFailuresQueue;
+ (id)_phoneInvitationFailureFile;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (BOOL)isCellularConnection;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;
+ (void)trackUploadBatchSize:(unsigned int)arg1;
+ (void)resetAllLocalState;
+ (BOOL)debugAutoAcceptInvitation;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(BOOL)arg3;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (int)maxCommentsPerAsset;
+ (BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (int)maxSubscribedStreams;
+ (int)maxOwnedStreams;
+ (int)_serverLimitValueForKey:(id)arg1 withDefaultResult:(int)arg2;
+ (id)serverSideConfigurationDictionary;
+ (id)_pathToServerConfigurationCache;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (void)retryOutstandingActivities;
+ (BOOL)sharedStreamsEnabled;
+ (BOOL)removeCloudSharingDirectories:(id*)arg1;
+ (void)forgetSharingPersonID:(id)arg1;
+ (id)sharingPersonID;
+ (void)accountSettingsChanged;
+ (void)photosPreferencesChanged;
+ (void)downloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4;
+ (void)clearCachedAccountState;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;


@end
