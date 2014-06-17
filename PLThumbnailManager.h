/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, NSIndexSet, NSLock, PLLargeImageLoader, NSDictionary, PLPhotoLibrary, <PLThumbPersistenceManager>, NSMutableDictionary, NSArray;

@interface PLThumbnailManager : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    NSLock *_lock;
    NSIndexSet *_occupiedIndexes;
    NSDictionary *_changedPhotosMap;
    NSArray *_changedPhotos;
    NSMutableDictionary *_thumbManagersByFormat;
    <PLThumbPersistenceManager> *_lastUsedThumbManager;
    int _lastUsedThumbManagerFormat;
    PLLargeImageLoader *_largeImageLoaderFullSize;
    PLLargeImageLoader *_largeImageLoaderFullScreen;
    PLLargeImageLoader *_largeImageLoaderFilledScreen;
    PLLargeImageLoader *_largeImageLoaderFilledHalfScreen;
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    struct _FigCascadeContext { } *_unicornContextPortrait;
    struct _FigCascadeContext { } *_unicornContextLandscape;
    id _observerToken;
}

@property PLPhotoLibrary * photoLibrary;
@property(retain,readonly) NSMutableDictionary * thumbManagersByFormat;
@property(retain) id observerToken;

+ (id)cameraPreviewWellAssetUUID;
+ (int)largestNonJPEGThumbnailFormat;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (BOOL)hasExceededRebuildThumbnailRequestLimit;
+ (BOOL)isRebuildingThumbnails;
+ (void)rebuildAllMissingThumbnails;
+ (void)addRebuildThumbnailsRequest;
+ (id)cameraPreviewWellImageQueue;
+ (void)saveCameraPreviewWellImage:(struct CGImage { }*)arg1 uuid:(id)arg2;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (void)resetThumbnails;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (BOOL)useImageTableForFormat:(int)arg1;
+ (id)supportedThumbnailFormats;
+ (int)thumbnailVersionCurrent;
+ (int)thumbnailVersion;
+ (BOOL)isRidingCrudSnow;
+ (BOOL)isRidingPowderSnow;
+ (id)_allPossibleThumbnailFormats;
+ (BOOL)shouldUseLargerNonJPEGThumbnailFormat;
+ (BOOL)hasRebuildThumbnailsRequest;
+ (id)defaultThumbnailsDirectory;
+ (id)defaultThumbnailsDirectoryV2;
+ (void)removeObsoleteMetadata;
+ (BOOL)hasObsoleteThumbnailTables;
+ (BOOL)isMissingThumbnailTables;
+ (int)thumbnailFormat;

- (id)thumbManagersByFormat;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (id)preheatItemSourceForFormat:(int)arg1;
- (id)_tableDescriptions;
- (id)compactImageTables;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned int)arg2 uuid:(id)arg3;
- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (BOOL)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (struct __CFDictionary { }*)placeholderThumbnailDataByFormatID;
- (void)setThumbnails:(struct __CFDictionary { }*)arg1 forPhoto:(id)arg2;
- (id)newImageDataForPhoto:(id)arg1 withFormat:(int)arg2 wantURLOnly:(BOOL)arg3 networkAccessAllowed:(BOOL)arg4 networkAccessForced:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_anyImageTable;
- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)_unicorn_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_thumbManagerForFormat:(int*)arg1;
- (BOOL)_canAccessImageForAsset:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (int)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id*)arg2;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageProperties:(const struct __CFDictionary {}**)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9;
- (id)photoLibrary;
- (void)clearPhotoLibrary;
- (id)initWithWeakPhotoLibrary:(id)arg1;
- (void)setObserverToken:(id)arg1;
- (id)observerToken;
- (void)dealloc;

@end