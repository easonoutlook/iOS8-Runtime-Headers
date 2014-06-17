/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class UIImage, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>;

@interface PLJPEGPreheatItem : PLPreheatItem  {
    NSString *_imagePath;
    NSObject<OS_dispatch_queue> *_queue;
    UIImage *_cachedImage;
    unsigned long _requestID;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
    BOOL _dataIsLoading;
    unsigned int _loadingOptions;
    unsigned int _cancelled;
}


- (void)cancelPreheatRequest;
- (id)initialDecodeSessionOptions;
- (BOOL)addImageHandler:(id)arg1;
- (id)cachedImageIfAvailable;
- (id)cachedImage;
- (id)initWithImagePath:(id)arg1 format:(int)arg2 imageType:(int)arg3 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg4 options:(unsigned int)arg5;
- (void)loadPreheatDataWithHandler:(id)arg1;
- (void)_leaveWaitGroupIfNeeded;
- (void)_uncancel;
- (id)preheatData;
- (id)createDecodedImage:(struct CGImage { }*)arg1 data:(id)arg2;
- (struct __CFDictionary { }*)decodeSessionOptions;
- (void)_cacheImage;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;
- (void)_cancel;
- (BOOL)isCancelled;
- (void)dealloc;

@end
