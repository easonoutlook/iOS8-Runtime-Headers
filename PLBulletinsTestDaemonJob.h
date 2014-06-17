/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSString, NSArray;

@interface PLBulletinsTestDaemonJob : PLDaemonJob  {
    NSString *_albumUUID;
    NSArray *_addedAssetUUIDs;
    PLPhotoLibrary *_photoLibrary;
    long long _bulletinType;
}

@property long long bulletinType;
@property(retain) NSString * albumUUID;
@property(retain) NSArray * addedAssetUUIDs;
@property(retain) PLPhotoLibrary * photoLibrary;

+ (void)notifyCommentWasReceivedForAssets:(id)arg1;
+ (void)notifyLikeWasReceivedForAssets:(id)arg1;
+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;

- (void)setAddedAssetUUIDs:(id)arg1;
- (void)setBulletinType:(long long)arg1;
- (id)addedAssetUUIDs;
- (id)albumUUID;
- (long long)bulletinType;
- (void)encodeToXPCObject:(id)arg1;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)setAlbumUUID:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)run;
- (void)dealloc;

@end