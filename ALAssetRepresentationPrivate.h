/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class PLSidecarFile, NSString, ALAssetsLibrary, PLPhotoLibrary, PLManagedAsset;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {
    ALAssetsLibrary *_library;
    BOOL _isValid;
    PLManagedAsset *_photo;
    PLSidecarFile *_sidecar;
    NSString *_extension;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain) PLSidecarFile * sidecar;
@property(copy) NSString * extension;
@property ALAssetsLibrary * library;
@property BOOL isValid;
@property(retain) PLManagedAsset * photo;
@property(retain) PLPhotoLibrary * _photoLibrary;

+ (void)_setupFileDescriptorQueue;
+ (void)_clearFileDescriptorQueue;
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;
+ (int)_fileDescriptorForPersistentURL:(id)arg1;

- (void)_performBlockAndWait:(id)arg1;
- (void)setLibrary:(id)arg1;
- (id)library;
- (void)setPhoto:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (BOOL)_isImage;
- (BOOL)_isVideo;
- (id)extension;
- (void)setExtension:(id)arg1;
- (BOOL)isValid;
- (id)photo;
- (void)dealloc;
- (void)set_photoLibrary:(id)arg1;
- (void)setSidecar:(id)arg1;
- (id)_photoLibrary;
- (void)libraryDidChange;
- (id)sidecar;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;

@end
