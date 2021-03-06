/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray;

@interface SKSoundSource : NSObject  {
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}

@property BOOL shouldLoop;
@property double gain;
@property struct CGPoint { float x1; float x2; } position;
@property(readonly) BOOL isPlaying;
@property(readonly) int completedBufferCount;
@property(readonly) int queuedBufferCount;

+ (id)source;
+ (id)sourceWithBuffer:(id)arg1;

- (BOOL)isPlaying;
- (void)pause;
- (void).cxx_destruct;
- (void)setShouldLoop:(BOOL)arg1;
- (BOOL)shouldLoop;
- (void)purgeCompletedBuffers;
- (int)queuedBufferCount;
- (int)completedBufferCount;
- (void)queueBuffer:(id)arg1;
- (void)stop;
- (struct CGPoint { float x1; float x2; })position;
- (id)description;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)init;
- (double)gain;
- (void)setGain:(double)arg1;
- (void)play;

@end
