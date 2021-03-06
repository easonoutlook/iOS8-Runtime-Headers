/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIInputViewController, UIView, UIKeyboard;

@interface UIInputViewSet : NSObject  {
    UIView *_inputView;
    UIView *_inputAccessoryView;
    BOOL _isKeyboard;
    BOOL _supportsSplit;
    BOOL _isSplit;
    float _splitHeightDelta;
    UIResponder *_restorableResponder;
    UIInputViewController *_inputViewController;
    UIInputViewController *_accessoryViewController;
}

@property(readonly) UIKeyboard * keyboard;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property(retain) UIInputViewController * inputViewController;
@property(retain) UIInputViewController * accessoryViewController;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputAccessoryViewBounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputViewBounds;
@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) BOOL supportsSplit;
@property(readonly) BOOL isSplit;
@property(readonly) BOOL inputViewKeyboardCanSplit;
@property UIResponder * restorableResponder;
@property(readonly) BOOL isInputViewPlaceholder;
@property(readonly) BOOL isInputAccessoryViewPlaceholder;
@property(readonly) UIView * layeringView;
@property float splitHeightDelta;

+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)emptyInputSet;

- (BOOL)isInputAccessoryViewPlaceholder;
- (BOOL)inSyncWithOrientation:(int)arg1 forKeyboard:(id)arg2;
- (id)inputSetWithInputAccessoryViewOnly;
- (BOOL)_inputAccessoryViewSupportsSplit;
- (BOOL)_inputViewSupportsSplit;
- (BOOL)_inputViewIsVisible;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(BOOL)arg3;
- (BOOL)_inputViewSetSupportsSplit;
- (id)restorableResponder;
- (void)setRestorableResponder:(id)arg1;
- (BOOL)usesKeyClicks;
- (void)setAccessoryViewController:(id)arg1;
- (void)setInputViewController:(id)arg1;
- (BOOL)canAnimateToInputViewSet:(id)arg1;
- (BOOL)containsResponder:(id)arg1;
- (BOOL)isInputViewPlaceholder;
- (BOOL)isStrictSupersetOfViewSet:(id)arg1;
- (float)splitHeightDelta;
- (void)_endSplitTransitionIfNeeded;
- (void)_setSplitProgress:(float)arg1;
- (void)_beginSplitTransitionIfNeeded;
- (void)setSplitHeightDelta:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputAccessoryViewBounds;
- (id)_splittableInputAccessoryView;
- (BOOL)__isCKAccessoryView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rightInputViewSetFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftInputViewSetFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputViewBounds;
- (id)layeringView;
- (BOOL)_accessorySuppressesShadow;
- (BOOL)_inputViewIsSplit;
- (BOOL)inputViewKeyboardCanSplit;
- (int)keyboardOrientation:(id)arg1;
- (id)_themableInputAccessoryView;
- (BOOL)visible;
- (id)keyboard;
- (void)refreshPresentation;
- (BOOL)supportsSplit;
- (BOOL)isSplit;
- (void)_setRenderConfig:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (id)inputViewController;
- (id)inputAccessoryView;
- (id)inputView;
- (id)accessoryViewController;
- (BOOL)containsView:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
