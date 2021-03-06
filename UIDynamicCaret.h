/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDynamicCaretInput, _UIDynamicCaretNoContentView, _UIDynamicCaretHelpLabel, TIKeyboardCandidateResultSet, <UIKeyboardCandidateListDelegate>, _UIDynamicCaretAlternatives;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    int _selectedIndex;
    BOOL _justDeleted;
    _UIDynamicCaretInput *_inputView;
    _UIDynamicCaretAlternatives *_alternativesView;
    _UIDynamicCaretNoContentView *_noContentView;
    _UIDynamicCaretHelpLabel *_helpLabel;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property BOOL isActive;
@property(retain) _UIDynamicCaretInput * inputView;
@property(retain) _UIDynamicCaretAlternatives * alternativesView;
@property(retain) _UIDynamicCaretNoContentView * noContentView;
@property(retain) _UIDynamicCaretHelpLabel * helpLabel;
@property(retain) TIKeyboardCandidateResultSet * candidateSet;


- (void)alternativeTappedAtIndex:(int)arg1;
- (void)setDocumentHasContent:(BOOL)arg1;
- (void)displayAlternatives:(BOOL)arg1;
- (id)helpLabel;
- (id)noContentView;
- (id)alternativesView;
- (void)setHelpLabel:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setAlternativesView:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setInputView:(id)arg1;
- (id)inputView;
- (unsigned int)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (BOOL)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (id)statisticsIdentifier;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidateSet:(id)arg1;
- (BOOL)hasCandidates;
- (id)candidateSet;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (id)backgroundImage;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)isActive;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
