/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, NSDictionary;

@interface PLWallpaperAsset : PLManagedAsset  {
}

@property(retain) NSURL * imageURL;
@property(retain) NSURL * thumbnailURL;
@property(retain) NSDictionary * wallpaperOptions;

+ (id)insertIntoPhotoLibrary:(id)arg1 withImageURL:(id)arg2 thumbnailURL:(id)arg3;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;

- (void)setWallpaperOptions:(id)arg1;
- (id)wallpaperOptions;
- (id)thumbnailURL;
- (id)imageURL;
- (id)_thumbnailImage;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)urlForKey:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setImageURL:(id)arg1;
- (id)wallpaperFullScreenImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (BOOL)isIncludedInMoments;
- (BOOL)allowsWallpaperEditing;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (void)prepareForDeletion;
- (void)awakeFromInsert;
- (id)indexSheetImage;
- (id)imageWithFormat:(int)arg1;
- (id)_image;

@end