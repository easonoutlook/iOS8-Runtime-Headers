/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer  {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;

- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)dealloc;
- (id)init;
- (void)commitModifications;
- (void)beginModifications;
- (BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (void)advanceToNextItem;
- (void)_enqueueModification:(id)arg1;
- (BOOL)_shouldEnqueueModifications;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (int)_defaultActionAtItemEnd;
- (void)setActionAtItemEnd:(int)arg1;

@end
