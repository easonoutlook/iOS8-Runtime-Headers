/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSMutableArray, NSArray;

@interface TPNumberPad : UIControl  {
    NSMutableArray *_buttons;
    BOOL _numberButtonsEnabled;
}

@property BOOL numberButtonsEnabled;
@property(retain) NSArray * buttons;
@property float buttonBackgroundAlpha;


- (void)setButtons:(id)arg1;
- (void)setButtonBackgroundAlpha:(float)arg1;
- (float)buttonBackgroundAlpha;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)buttonCancelled:(id)arg1;
- (void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(float)arg2;
- (float)_backgroundAlphaOfButton:(id)arg1;
- (void)_layoutGrid;
- (void)_addButton:(id)arg1;
- (BOOL)numberButtonsEnabled;
- (id)initWithButtons:(id)arg1;
- (void)setNumberButtonsEnabled:(BOOL)arg1;
- (void)replaceButton:(id)arg1 atIndex:(unsigned int)arg2;
- (void)buttonLongPressed:(id)arg1;
- (id)buttons;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)buttonTapped:(id)arg1;
- (void)dealloc;
- (void)buttonUp:(id)arg1;
- (void)buttonDown:(id)arg1;

@end
