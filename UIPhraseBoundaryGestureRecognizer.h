/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, UIResponder<UITextInput>;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer  {
    UIResponder<UITextInput> *_textInput;
    UIDelayedAction *_secondDelayTimer;
    double _secondDelay;
    BOOL _secondDelayElapsed;
    id _userData;
}

@property UIResponder<UITextInput> * textInput;
@property double secondDelay;
@property(readonly) BOOL secondDelayElapsed;
@property id userData;


- (void)setUserData:(id)arg1;
- (id)userData;
- (BOOL)secondDelayElapsed;
- (void)setSecondDelay:(double)arg1;
- (void)setTextInput:(id)arg1;
- (id)textInput;
- (double)secondDelay;
- (void)secondDelayElapsed:(id)arg1;
- (void)startTimer;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)setState:(int)arg1;

@end