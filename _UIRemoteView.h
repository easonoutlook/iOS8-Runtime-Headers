/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIHostedWindowHostingHandle, UIColor;

@interface _UIRemoteView : UIView <UIStatusBarTinting> {
    BOOL _actsAsTintView;
    UIColor *_statusBarTintColor;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _tintColorDidChangeHandler;

}

@property(retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;
@property(setter=_setActsAsTintView:) BOOL _actsAsTintView;
@property(setter=_setStatusBarTintColor:,retain) UIColor * _statusBarTintColor;
@property(copy) id tintColorDidChangeHandler;
@property(setter=_setInheritsSecurity:) BOOL _inheritsSecurity;

+ (id)viewWithRemoteContextID:(unsigned int)arg1;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (Class)layerClass;

- (BOOL)_actsAsTintView;
- (id)tintColorDidChangeHandler;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setContextID:(unsigned int)arg1;
- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;
- (BOOL)_inheritsSecurity;
- (void)_setInheritsSecurity:(BOOL)arg1;
- (void)setTintColorDidChangeHandler:(id)arg1;
- (void)_setActsAsTintView:(BOOL)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (id)hostedWindowHostingHandle;
- (void)_setStatusBarTintColor:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)tintColorDidChange;
- (id)_hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)_statusBarTintColor;
- (void)dealloc;

@end
