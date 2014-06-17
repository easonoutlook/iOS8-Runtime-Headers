/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSDate, PHContentEditingOutput, CLLocation, PHChangeRequestHelper, NSManagedObjectID, UIImage, NSString, NSURL, NSData, PHObjectPlaceholder;

@interface PHAssetChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    BOOL _didChangeAdjustments;
    PHContentEditingOutput *_contentEditingOutput;
    NSString *_editorBundleID;
    CLLocation *_updatedLocation;
    PHChangeRequestHelper *_helper;
    BOOL _entitled;
    NSString *_clientName;
    unsigned int _supportedEditOperations;
    UIImage *_imageForInsertion;
    NSData *_imageDataForInsertion;
    NSURL *_videoURLForInsertion;
}

@property(readonly) PHObjectPlaceholder * placeholderForCreatedAsset;
@property(retain) NSDate * creationDate;
@property(retain) CLLocation * location;
@property(getter=isFavorite) BOOL favorite;
@property(getter=isHidden) BOOL hidden;
@property(retain) PHContentEditingOutput * contentEditingOutput;
@property unsigned int supportedEditOperations;
@property(retain) UIImage * imageForInsertion;
@property(retain) NSData * imageDataForInsertion;
@property(retain) NSURL * videoURLForInsertion;
@property(readonly) PHChangeRequestHelper * helper;
@property(readonly) NSString * managedEntityName;
@property(readonly) NSString * uuid;
@property(readonly) NSManagedObjectID * objectID;
@property(getter=isEntitled,readonly) BOOL entitled;
@property(readonly) NSString * clientName;
@property(getter=isNew,readonly) BOOL new;
@property(getter=isMutated,readonly) BOOL mutated;

+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)changeRequestForAsset:(id)arg1;
+ (void)deleteAssets:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (void)_createAssetFromVideoURL:(id)arg1 uuid:(id)arg2;
+ (void)_createAssetFromImageData:(id)arg1 uuid:(id)arg2;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromImageData:(id)arg1;

- (void)setLocation:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (BOOL)isFavorite;
- (void)setFavorite:(BOOL)arg1;
- (id)creationDate;
- (id)objectID;
- (id)uuid;
- (void).cxx_destruct;
- (id)location;
- (id)contentEditingOutput;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4;
- (void)revertAssetToOriginal;
- (void)setContentEditingOutput:(id)arg1;
- (id)placeholderForCreatedAsset;
- (id)videoURLForInsertion;
- (id)imageForInsertion;
- (id)imageDataForInsertion;
- (unsigned int)supportedEditOperations;
- (void)setVideoURLForInsertion:(id)arg1;
- (void)setImageForInsertion:(id)arg1;
- (void)setImageDataForInsertion:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;
- (void)setSupportedEditOperations:(unsigned int)arg1;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1;
- (BOOL)isMutated;
- (void)didMutate;
- (id)mutations;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (id)initForNewObject;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (BOOL)isEntitled;
- (id)managedEntityName;
- (id)clientName;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isNew;
- (id)helper;

@end
