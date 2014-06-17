/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface FMFWildcardGestureRecognizer : UIGestureRecognizer  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchesBeganCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchesEndedCallback;

}

@property(copy) id touchesBeganCallback;
@property(copy) id touchesEndedCallback;


- (id)touchesEndedCallback;
- (id)touchesBeganCallback;
- (void)setTouchesEndedCallback:(id)arg1;
- (void)setTouchesBeganCallback:(id)arg1;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end
