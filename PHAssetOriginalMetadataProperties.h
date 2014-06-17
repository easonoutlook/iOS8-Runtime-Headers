/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class PHAsset, NSString;

@interface PHAssetOriginalMetadataProperties : NSObject  {
    short _originalHeight;
    short _originalWidth;
    short _originalExifOrientation;
    PHAsset *_asset;
    NSString *_originalAssetsUUID;
    NSString *_originalFilename;
    int _originalFilesize;
    NSString *_originalPath;
}

@property(readonly) PHAsset * asset;
@property(readonly) NSString * originalAssetsUUID;
@property(readonly) short originalHeight;
@property(readonly) short originalWidth;
@property(readonly) NSString * originalFilename;
@property(readonly) short originalExifOrientation;
@property(readonly) int originalFilesize;
@property(readonly) NSString * originalPath;


- (id)originalPath;
- (id)originalAssetsUUID;
- (short)originalWidth;
- (short)originalHeight;
- (id)originalFilename;
- (int)originalFilesize;
- (id)asset;
- (void).cxx_destruct;
- (short)originalExifOrientation;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end
