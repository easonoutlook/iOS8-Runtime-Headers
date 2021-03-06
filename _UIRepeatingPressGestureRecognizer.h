/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer  {
    BOOL _timerOn;
    int _delayIndex;
    unsigned int _numberOfTouchesRequired;
    int _buttonType;
}

@property unsigned int numberOfTouchesRequired;
@property(setter=_setButtonType:) int _buttonType;

+ (double)delayForRepeatNumber:(int)arg1;

- (void)_finishNextStep:(id)arg1;
- (void)_nextStep:(id)arg1;
- (void)_scheduleNextTimer;
- (void)_cancelPress;
- (void)_endPress;
- (void)_beginPress;
- (void)_clearTapTimer;
- (void)_resetGestureRecognizer;
- (unsigned int)numberOfTouchesRequired;
- (void)_setButtonType:(int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setView:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (int)_buttonType;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
