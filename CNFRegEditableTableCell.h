/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell  {
    SEL _emptyStateSelector;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    id _textChangeObserver;
    BOOL _textFieldIsEmpty;
    BOOL _skipDelegateCallback;
    UIImage *_shadowImage;
    CNFRegShadowView *_shadowView;
    UIImage *_customCheckmarkImage;
    UIImage *_customCheckmarkImageSelected;
}

@property BOOL skipDelegateCallback;
@property(retain) UIImage * shadowImage;
@property(retain) UIImage * customCheckmarkImage;
@property(retain) UIImage * customCheckmarkImageSelected;
@property(retain) CNFRegShadowView * shadowView;


- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)_stopListeningForTextChanges;
- (void)_startListeningForTextChanges;
- (id)customCheckmarkImageSelected;
- (id)customCheckmarkImage;
- (void)notifyTextFieldDidEndEditing;
- (void)notifyTextFieldDidBeginEditing;
- (void)notifyTextFieldEmptyStateChanged:(BOOL)arg1;
- (BOOL)_textFieldIsCurrentlyEmpty;
- (void)_handleTextChanged;
- (void)_updateTextFieldOffsetWithDict:(id)arg1;
- (BOOL)skipDelegateCallback;
- (void)textFieldChangedExternally;
- (void)setSkipDelegateCallback:(BOOL)arg1;
- (void)setCustomCheckmarkImageSelected:(id)arg1;
- (void)setCustomCheckmarkImage:(id)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowView;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (void)setTitle:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
