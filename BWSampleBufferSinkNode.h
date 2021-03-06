/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface BWSampleBufferSinkNode : BWSinkNode  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sampleBufferAvailableHandler;

}

@property(copy) id sampleBufferAvailableHandler;

+ (void)initialize;

- (id)sampleBufferAvailableHandler;
- (id)initWithInputMediaType:(unsigned long)arg1;
- (void)setSampleBufferAvailableHandler:(id)arg1;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)dealloc;
- (id)init;

@end
