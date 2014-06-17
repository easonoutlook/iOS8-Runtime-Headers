/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class UIView;

@interface MPUPinningView : UIView  {
    UIView *_containerView;
    UIView *_contentView;
}

@property(retain) UIView * contentView;


- (void)_configureMatchMoveAnimation;
- (void)_prepareForDefaultImageSnapshotNotification:(id)arg1;
- (void).cxx_destruct;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;

@end
