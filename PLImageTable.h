/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSMutableArray, NSDictionary;

@interface PLImageTable : NSObject <PLThumbPersistenceManager> {
    int _format;
    NSString *_path;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    BOOL _readOnly;
    BOOL _dying;
    int _fid;
    long long _fileLength;
    int _entryCount;
    unsigned long _segmentLength;
    unsigned int _segmentCount;
    NSMutableArray *_allSegments;
    NSMutableIndexSet *_preheatIndexes;
    NSObject<OS_dispatch_queue> *_preheatIndexIsolation;
    NSObject<OS_dispatch_queue> *_preheatQueue;
}

@property(readonly) NSDictionary * photoUUIDToIndexMap;
@property(readonly) NSString * path;
@property(readonly) int imageFormat;
@property(readonly) int imageWidth;
@property(readonly) int imageHeight;
@property(readonly) int imageRowBytes;
@property(readonly) int imageLength;
@property(readonly) BOOL isReadOnly;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;

+ (void)releaseSegmentCache;
+ (void)writeImage:(id)arg1 toData:(id*)arg2 thumbnailFormat:(int)arg3 videoDuration:(id)arg4 width:(int*)arg5 height:(int*)arg6 bytesPerRow:(int*)arg7 dataWidth:(int*)arg8 dataHeight:(int*)arg9 dataOffset:(int*)arg10;

- (void)finishUnicornEntryAtIndex:(unsigned int)arg1 withImageData:(id)arg2 imageSize:(struct CGSize { float x1; float x2; })arg3 asset:(id)arg4;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (id)photoUUIDToIndexMap;
- (void)_releaseSegment:(id)arg1;
- (unsigned long)_segmentLength;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (id)imageDataAtIndex:(unsigned int)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg3 options:(unsigned int)arg4;
- (BOOL)isReadOnly;
- (int)entryCount;
- (void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(id)arg2;
- (void)preheatImageDataAtIndex:(unsigned int)arg1 completionHandler:(id)arg2;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned int)arg2 uuid:(id)arg3;
- (id)_debugDescription;
- (BOOL)usesThumbIdentifiers;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (BOOL)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (void)_doPreheatWithCompletionHandler:(id)arg1;
- (void)_adviseWillNeedEntriesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_getAndClearPreheatIndexes;
- (int)imageRowBytes;
- (int)imageHeight;
- (int)imageWidth;
- (int)imageFormat;
- (int)imageLength;
- (void)_verifyThumbnailDataForIndex:(unsigned int)arg1 uuid:(id)arg2;
- (BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2;
- (void)_flushEntryAtAddress:(void*)arg1;
- (id)dataForEntryAtIndex:(unsigned int)arg1 createIfNeeded:(BOOL)arg2;
- (void)_flushEntryAtAddress:(void*)arg1 count:(int)arg2;
- (void)_setEntryCount:(int)arg1;
- (void)_updateSegmentCount;
- (void)_addEntriesIfNecessaryForIndex:(int)arg1;
- (void)_reloadSegmentAtIndex:(int)arg1;
- (id)_segmentAtIndex:(int)arg1;
- (void)_releaseSegmentAtIndex:(int)arg1;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(BOOL)arg3;
- (int)_fileDescriptor;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)path;
- (void)dealloc;

@end
