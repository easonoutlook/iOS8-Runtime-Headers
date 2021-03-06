/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFComposeRecipientAtomDelegate>, UITextInputTraits, MFComposeRecipient;

@interface MFModernComposeRecipientAtom : MFModernAtomView  {
    <MFComposeRecipientAtomDelegate> *_delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan : 1;
    unsigned int _touchesWereCancelled : 1;
}

@property(readonly) MFComposeRecipient * recipient;
@property <MFComposeRecipientAtomDelegate> * delegate;


- (id)recipient;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)keyCommands;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2 presentationOptions:(unsigned int)arg3;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
