/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerButtonInput, GCControllerAxisInput;

@interface GCControllerDirectionPad : GCControllerElement  {
}

@property(copy) id valueChangedHandler;
@property(readonly) GCControllerAxisInput * xAxis;
@property(readonly) GCControllerAxisInput * yAxis;
@property(readonly) GCControllerButtonInput * up;
@property(readonly) GCControllerButtonInput * down;
@property(readonly) GCControllerButtonInput * left;
@property(readonly) GCControllerButtonInput * right;


- (id)right;
- (id)left;
- (id)up;
- (id)description;
- (id)yAxis;
- (id)xAxis;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (id)down;

@end
