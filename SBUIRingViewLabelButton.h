/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UILabel, TPRevealingRingView;

@interface SBUIRingViewLabelButton : UIControl  {
    TPRevealingRingView *_ringView;
    UILabel *_label;
}

@property(readonly) TPRevealingRingView * backgroundRing;
@property(readonly) UILabel * label;


- (id)backgroundRing;
- (id)label;
- (void)setHighlighted:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
