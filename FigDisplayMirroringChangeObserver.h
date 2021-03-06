/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class NSMutableSet, NSArray, NSObject<OS_dispatch_queue>;

@interface FigDisplayMirroringChangeObserver : NSObject  {
    struct OpaqueFigPlayer { } *_player;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_clonedDisplays;
    NSMutableSet *_cloningSupportedDisplays;
    NSArray *_baseDisplayList;
}


- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)updatePlayerDisplayList;
- (void)removeReferenceToPlayer;
- (void)setBaseDisplayList:(id)arg1;
- (id)initWithPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)dealloc;

@end
