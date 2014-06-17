/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLegacyButton;

@interface TPLegacyCallWaitingButton : UIImageView  {
    TPLegacyButton *_innerButton;
    unsigned int _type : 1;
}

+ (float)defaultVerticalCenteringOffset;
+ (id)_buttonForType:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForType:(int)arg1;

- (void)removeTarget:(id)arg1 forControlEvents:(unsigned int)arg2;
- (id)initBottomForTTYWithTitle:(id)arg1;
- (id)initBottomForSecondIncomingCallWaiting;
- (id)initBottomForIncomingCallWaiting;
- (id)initTopForTTY;
- (id)initTopForIncomingCallWaiting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 type:(int)arg2;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)dealloc;

@end
