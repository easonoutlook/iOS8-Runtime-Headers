/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSString, AVPlayerLayerInternal;

@interface AVPlayerLayer : CALayer  {
    AVPlayerLayerInternal *_playerLayer;
}

@property(retain) AVPlayer * player;
@property(copy) NSString * videoGravity;
@property(getter=isReadyForDisplay,readonly) BOOL readyForDisplay;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } videoRect;

+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)playerLayerWithPlayer:(id)arg1;
+ (id)keyPathsForValuesAffectingVideoLayerGravity;

- (BOOL)isReadyForDisplay;
- (id)player;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoRect;
- (void)setVideoGravity:(id)arg1;
- (void)removeAllAnimations;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)setPlayer:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)initWithLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_videoRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_subtitleLayer;
- (id)_closedCaptionLayer;
- (id)_videoLayer;
- (id)_subtitleGravity;
- (void)_setSubtitleDisplayEnabled:(BOOL)arg1;
- (BOOL)_subtitleDisplayEnabled;
- (void)_setItem:(id)arg1 readyForDisplay:(BOOL)arg2;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;
- (void)_updatePresentationSize:(struct CGSize { float x1; float x2; })arg1 forceUpdate:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1;
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 gravity:(id)arg3;
- (void)_addAnimationsForMaskLayer:(id)arg1;
- (void)_notifyPlayerOfDisplaySize;
- (void)_setSubtitleGravity:(id)arg1;
- (id)videoGravity;
- (int)videoLayerGravity;
- (void)setPlayerController:(id)arg1;
- (void)setVideoLayerGravity:(int)arg1;

@end