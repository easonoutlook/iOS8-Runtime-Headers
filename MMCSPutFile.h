/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MMCSPutFile : MMCSSimpleFile  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateBlock;

}

@property(copy) id completionBlock;
@property(copy) id progressUpdateBlock;


- (void)setProgressUpdateBlock:(id)arg1;
- (id)progressUpdateBlock;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end
