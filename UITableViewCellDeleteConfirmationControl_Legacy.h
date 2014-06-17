/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl  {
    BOOL _visible;
    UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;
}

@property(getter=isVisible) BOOL visible;

+ (struct CGSize { float x1; float x2; })defaultSizeForTitle:(id)arg1;

- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cancelDeleteConfirmationWithGesture:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (BOOL)isVisible;
- (void)_confirmationAnimationDidEnd;
- (void)setVisible:(BOOL)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })defaultSize;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)dealloc;

@end