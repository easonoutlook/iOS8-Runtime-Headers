/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKJoystickView, CKDismissView, NSArray;

@interface CKJoystickOverlayView : UIView <CKDismissViewDelegate, CKJoystickHostView> {
    CKJoystickView *_joystickView;
    CKDismissView *_dismissView;
}

@property(retain) CKJoystickView * joystickView;
@property(retain) CKDismissView * dismissView;
@property(copy) NSArray * passthroughViews;

+ (id)sharedInstance;

- (void)presentJoystickView:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3 animated:(BOOL)arg4;
- (void)dismissViewWasTapped:(id)arg1;
- (void)dismissJoystickViewAnimated:(BOOL)arg1;
- (id)dismissView;
- (void)setJoystickView:(id)arg1;
- (id)joystickView;
- (void)setDismissView:(id)arg1;
- (void)joystickGestureRecognized:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (id)passthroughViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
