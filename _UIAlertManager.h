/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertManager : NSObject  {
}

+ (void)showDimmingViewAnimated:(BOOL)arg1;
+ (void)applyClientWindowTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_alertTranslationForInterfaceOrientation:(int)arg1 andTranslation:(float)arg2;
+ (BOOL)cancelAlertsAnimated:(BOOL)arg1;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1 deferDisplay:(BOOL)arg2;
+ (void)hideDimmingViewAnimated:(BOOL)arg1;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
+ (void)applyInternalWindowTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (void)_applyAlertTransforms;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })calculatedAlertTransform;
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)arg1;
+ (void)alertPopoutCompleted;
+ (void)removeFromStack:(id)arg1;
+ (id)topMostAlert;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1;
+ (void)addToStack:(id)arg1 dontDimBackground:(BOOL)arg2;
+ (void)sizeAlertWindowForCurrentOrientation;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3;
+ (BOOL)stackContainsAlert:(id)arg1;
+ (BOOL)hideTopMostAlertAnimated:(BOOL)arg1;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3;
+ (void)reorientAlertWindowTo:(int)arg1 animated:(BOOL)arg2 keyboard:(id)arg3;
+ (id)visibleAlert;
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned int)arg1;
+ (void)hideTopmostMiniAlert;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
+ (void)initialize;
+ (void)hideAlertsForTermination;
+ (void)noteOrientationChangingTo:(int)arg1;

- (void)_didHideDimmingView:(id)arg1 finished:(id)arg2;

@end
