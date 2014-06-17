/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVPlayerItemLegibleOutputPushDelegate>, NSObject<OS_dispatch_queue>, AVPlayerItemLegibleOutputInternal;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput  {
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}

@property(readonly) <AVPlayerItemLegibleOutputPushDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (void)setTextStylingResolution:(id)arg1;
- (void)setAdvanceIntervalForDelegateInvocation:(double)arg1;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (id)initWithMediaSubtypesForNativeRepresentation:(id)arg1;
- (id)delegateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2;
- (id)textStylingResolution;
- (void)_collectUncollectables;
- (void)_signalFlush;
- (void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_detachFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)arg1;
- (double)advanceIntervalForDelegateInvocation;
- (id)_figLegibleOutputsDictionaryOptions;
- (BOOL)suppressesPlayerRendering;

@end
