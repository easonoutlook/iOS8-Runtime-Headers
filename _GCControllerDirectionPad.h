/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _valueChangedHandler;

    _GCControllerAxisInput *_xAxis;
    _GCControllerAxisInput *_yAxis;
}


- (id)right;
- (id)left;
- (id)up;
- (void).cxx_destruct;
- (id)description;
- (void)_fireValueChanged;
- (id)yAxis;
- (id)xAxis;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (id)down;

@end
