/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView  {
    unsigned int _textStorageEditingDepth;
    MFComposeRecipientTextView *_hostRecipientView;
}

@property(readonly) NSArray * atoms;
@property MFComposeRecipientTextView * hostRecipientView;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (int)baseWritingDirection;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)becomeFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (id)undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hostRecipientView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertGlyphRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBlock:(id)arg2;
- (BOOL)isEditingTextStorage;
- (id)atoms;
- (void)batchTextStorageUpdates:(id)arg1;
- (void)enumerateAtomAttachments:(id)arg1;
- (void)enumerateAtoms:(id)arg1;
- (void)setHostRecipientView:(id)arg1;

@end