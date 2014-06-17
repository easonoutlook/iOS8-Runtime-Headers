/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@class UIView;

@interface GKAlertView : UIAlertView  {
    UIView *_clipView;
    UIView *_contentView;
}

+ (struct CGSize { float x1; float x2; })preferredContentViewSize;
+ (void)initialize;

- (void)setContentView:(id)arg1 animated:(BOOL)arg2;
- (void)_replaceContentView:(id)arg1 animated:(BOOL)arg2;
- (void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)initAlertView;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)layoutAnimated:(BOOL)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (BOOL)_canDrawContent;
- (id)contentView;
- (void)dealloc;

@end
