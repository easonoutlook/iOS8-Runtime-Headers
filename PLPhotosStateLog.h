/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSObject<OS_dispatch_group>;

@interface PLPhotosStateLog : NSObject  {
    NSObject<OS_dispatch_group> *_group;
    PLPhotoLibrary *_photoLibrary;
}

@property(readonly) NSObject<OS_dispatch_group> * group;
@property(retain,readonly) PLPhotoLibrary * photoLibrary;


- (BOOL)createSnapshot;
- (void)logDescription:(id)arg1;
- (void)logAssetCounts;
- (void)logAllAlbums;
- (void)logAlbumLists;
- (void)logMoments;
- (BOOL)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(BOOL)arg5;
- (BOOL)compressFileFromPath:(id)arg1 toPath:(id)arg2;
- (void)logAlbum:(id)arg1 index:(unsigned int)arg2 indent:(unsigned int)arg3 completeMetadata:(BOOL)arg4 printAssets:(BOOL)arg5;
- (void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned int)arg3;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (id)group;
- (void)dealloc;
- (id)init;

@end
