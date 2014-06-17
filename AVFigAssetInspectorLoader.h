/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspector, NSObject<OS_dispatch_queue>, AVWeakReference, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader  {
    struct OpaqueFigAsset { } *_figAsset;
    long _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    long _assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    NSURL *_URL;
}

+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetPropertiesForKeys;
+ (void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4;

- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoading;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)hasProtectedContent;
- (id)lyrics;
- (id)URL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)dealloc;
- (void)finalize;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (id)_loadingBatches;
- (id)_completionHandlerQueue;
- (int)_loadStatusForProperty:(id)arg1 figAsset:(struct OpaqueFigAsset { }*)arg2 returningError:(int*)arg3;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (unsigned long long)downloadToken;
- (id)resolvedURL;
- (id)assetInspector;
- (id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 forAsset:(id)arg4;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1 forAsset:(id)arg2;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (BOOL)_isStreaming;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (struct OpaqueFigAsset { }*)_figAsset;

@end