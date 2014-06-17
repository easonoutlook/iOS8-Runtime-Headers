/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PUAlertView : UIAlertView <UIAlertViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shouldEnableFirstOtherButtonBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willDismissHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(copy) id shouldEnableFirstOtherButtonBlock;
@property(copy) id willDismissHandler;
@property(copy) id completionHandler;


- (void)setCompletionHandler:(id)arg1;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (id)completionHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showWithCompletionHandler:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (id)shouldEnableFirstOtherButtonBlock;
- (void)_tearDown;
- (id)willDismissHandler;
- (void)setWillDismissHandler:(id)arg1;
- (void)setShouldEnableFirstOtherButtonBlock:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
