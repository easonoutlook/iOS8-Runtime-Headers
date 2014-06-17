/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {
    int _format;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    NSString *_path;
    NSString *_filename;
    BOOL _readOnly;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
}

@property(readonly) NSString * path;
@property(readonly) int imageFormat;
@property(readonly) int imageWidth;
@property(readonly) int imageHeight;
@property(readonly) int imageRowBytes;
@property(readonly) int imageLength;
@property(readonly) BOOL isReadOnly;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;

+ (BOOL)_deviceShouldUseLowPerformancePixelFormat;
+ (id)baseSessionOptions;
+ (struct __CFDictionary { }*)decodeSessionOptions;
+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;

- (void)_writeData:(id)arg1 forThumbIdentifier:(id)arg2;
- (void)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (id)thumbnailForImage:(id)arg1 videoDuration:(id)arg2;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg3 options:(unsigned int)arg4;
- (BOOL)isReadOnly;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (id)imageWithIdentifier:(id)arg1;
- (id)_debugDescription;
- (BOOL)usesThumbIdentifiers;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (BOOL)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (int)imageRowBytes;
- (int)imageHeight;
- (int)imageWidth;
- (int)imageFormat;
- (int)imageLength;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)path;
- (id)description;
- (void)dealloc;

@end
