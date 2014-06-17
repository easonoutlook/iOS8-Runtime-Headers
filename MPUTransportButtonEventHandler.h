/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSObject<OS_dispatch_source>, UIButton;

@interface MPUTransportButtonEventHandler : NSObject  {
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPress;
    BOOL _shouldFakeEnabled;
    BOOL _supportsTapWhenDisabled;
    UIButton *_button;
    double _minimumLongPressDuration;
}

@property UIButton * button;
@property double minimumLongPressDuration;
@property BOOL supportsTapWhenDisabled;


- (BOOL)shouldForceTrackingEnabled;
- (BOOL)shouldFakeEnabled;
- (id)performHitTestingBlock:(id)arg1;
- (void)setSupportsTapWhenDisabled:(BOOL)arg1;
- (BOOL)supportsTapWhenDisabled;
- (void)setMinimumLongPressDuration:(double)arg1;
- (double)minimumLongPressDuration;
- (void)_longPressTimerAction;
- (void)_clearLongPressTimer;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)button;
- (void)dealloc;
- (id)init;

@end
