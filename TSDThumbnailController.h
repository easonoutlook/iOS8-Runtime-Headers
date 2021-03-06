/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDThumbnailProducer>, NSSet, <TSDThumbnailControllerDelegate>, TSDThumbnailGenerator, NSObject<OS_dispatch_queue>, TSKDocumentRoot, NSMutableSet, NSDate, TSULRUCache;

@interface TSDThumbnailController : NSObject <TSDThumbnailConsumer> {
    TSKDocumentRoot *_documentRoot;
    <TSDThumbnailControllerDelegate> *_delegate;
    <TSDThumbnailProducer> *_producer;
    TSDThumbnailGenerator *_generator;
    BOOL _thumbnailRequested;
    BOOL _thumbnailerEnabled;
    unsigned int _thumbnailSuspendCount;
    NSMutableSet *_dirtySet;
    TSULRUCache *_thumbnailCache;
    double _delayBeforeRedraw;
    BOOL _tornDown;
    BOOL _callbackScheduled;
    int _delayHandlingStatus;
    NSDate *_drawingStartDate;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationQueue;
}

@property <TSDThumbnailControllerDelegate> * delegate;
@property <TSDThumbnailProducer> * producer;
@property struct CGColor { }* backgroundColor;
@property double delayBeforeRedraw;
@property(readonly) NSSet * dirtySet;
@property(getter=isEnabled) BOOL enabled;


- (void)teardown;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)delegate;
- (struct CGColor { }*)backgroundColor;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)dirtySet;
- (void)setDelayBeforeRedraw:(double)arg1;
- (double)delayBeforeRedraw;
- (id)producer;
- (void)waitForIdentifiersOfThumbnailsToHaveThumbnails:(id)arg1;
- (id)thumbnail:(id)arg1 waitIfNecessary:(BOOL)arg2;
- (void)invalidateThumbnail:(id)arg1;
- (void)invalidateAllThumbnailsAndOptionallyClearCache:(BOOL)arg1;
- (id)initWithDocumentRoot:(id)arg1 cacheSize:(unsigned int)arg2;
- (id)nextThumbnailIdentifier;
- (BOOL)shouldCallCommit;
- (void)commitThumbnail:(id)arg1 identifier:(id)arg2;
- (BOOL)p_mustCacheThumbnailsForAllPrincipalThumbnailIdentifiers;
- (void)updateThumbnail:(id)arg1 identifier:(id)arg2 continueThumbnailing:(BOOL)arg3;
- (id)cachedThumbnail:(id)arg1;
- (void)p_scheduleThumbnailGenerationMainThreadEntry;
- (void)p_scheduleThumbnailGeneration;
- (void)thumbnailCountDidChange;
- (BOOL)p_notGeneratingThumbnail;
- (void)updateThumbnails;
- (BOOL)p_isThumbnailGenerationActive;
- (void)setProducer:(id)arg1;
- (void)p_handleMemoryNotification:(id)arg1;
- (void)p_thumbnailEvicted:(id)arg1 identifier:(id)arg2;
- (void)resumeThumbnailing;
- (void)suspendThumbnailing;

@end
