/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BWNode;

@interface FigBWNodeRenderObserver : NSObject <BWNodeRenderDelegate> {
    BWNode *_node;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willRenderSampleBufferHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _formatDidBecomeLiveHandler;

}

@property(copy) id willRenderSampleBufferHandler;
@property(copy) id formatDidBecomeLiveHandler;


- (id)formatDidBecomeLiveHandler;
- (id)willRenderSampleBufferHandler;
- (void)setFormatDidBecomeLiveHandler:(id)arg1;
- (void)setWillRenderSampleBufferHandler:(id)arg1;
- (id)initWithBWNode:(id)arg1;
- (void)node:(id)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 forInput:(id)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
- (void)dealloc;

@end
