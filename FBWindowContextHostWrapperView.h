/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class UIColor, FBWindowContextHostManager;

@interface FBWindowContextHostWrapperView : UIView <FBWindowContextAppearance> {
    FBWindowContextHostManager *_manager;
    UIColor *_backgroundColorWhileNotHosting;
    UIColor *_backgroundColorWhileHosting;
}

@property(readonly) FBWindowContextHostManager * manager;
@property(retain) UIColor * backgroundColorWhileHosting;
@property(retain) UIColor * backgroundColorWhileNotHosting;
@property(getter=isContextHosted,readonly) BOOL contextHosted;
@property(getter=isJailed,readonly) BOOL jailed;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentFrame;
@property(readonly) float level;


- (void)clearManager;
- (void)updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 manager:(id)arg2;
- (BOOL)isJailed;
- (BOOL)isContextHosted;
- (void)setBackgroundColorWhileNotHosting:(id)arg1;
- (id)backgroundColorWhileNotHosting;
- (void)setBackgroundColorWhileHosting:(id)arg1;
- (id)backgroundColorWhileHosting;
- (void)_hostingStatusChanged;
- (id)_backgroundColorWhileNotHosting;
- (id)_backgroundColorWhileHosting;
- (BOOL)_isReallyHosting;
- (void)_toggleBackgroundColorIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (id)manager;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (float)level;
- (id)_hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)window;
- (id)description;
- (void)dealloc;

@end
