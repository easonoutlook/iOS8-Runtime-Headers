/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement  {
}

@property(copy) id valueChangedHandler;
@property(readonly) float value;
@property(readonly) GCControllerButtonInput * positive;
@property(readonly) GCControllerButtonInput * negative;
@property(getter=isFlipped,readonly) BOOL flipped;
@property(getter=isDigital,readonly) BOOL digital;


- (BOOL)_setValue:(float)arg1;
- (float)value;
- (BOOL)isFlipped;
- (id)description;
- (id)negative;
- (id)positive;
- (BOOL)isDigital;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (BOOL)isAnalog;

@end