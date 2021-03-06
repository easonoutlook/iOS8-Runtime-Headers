/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TIKeyboardCandidateResultSet, NSString, UIKeyboardCandidateSortControl, <UIKeyboardCandidateListDelegate>, UIKeyboardCandidateGridCollectionViewController;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    BOOL _reducedWidth;
    BOOL _showHiddenCandidatesOnly;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSString *_inlineText;
    float _maxX;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    int _position;
    UIKeyboardCandidateSortControl *_sortSelectionBar;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inlineRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _previousCollapsedFrame;
}

@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(copy) NSString * inlineText;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inlineRect;
@property float maxX;
@property(getter=isReducedWidth,readonly) BOOL reducedWidth;
@property(readonly) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property int position;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } previousCollapsedFrame;
@property(readonly) UIKeyboardCandidateSortControl * sortSelectionBar;
@property BOOL showHiddenCandidatesOnly;


- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previousCollapsedFrame;
- (void)sortSelectionBarAction;
- (void)expand;
- (id)sortSelectionBar;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 maxX:(float)arg3;
- (void)setMaxX:(float)arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6 showHiddenCandidatesOnly:(BOOL)arg7;
- (float)maxX;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)isAcceptableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (void)updateLayerBorderWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inlineRect;
- (BOOL)isReducedWidth;
- (id)collectionViewController;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(BOOL)arg2;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)activeCandidateList;
- (void)setShowHiddenCandidatesOnly:(BOOL)arg1;
- (BOOL)showHiddenCandidatesOnly;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (unsigned int)gridCollectionViewNumberOfColumns:(id)arg1;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (id)inlineText;
- (void)revealHiddenCandidates;
- (void)candidatesDidChange;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (void)setInlineText:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
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
- (void)candidateListSelectionDidChange:(id)arg1;
- (id)statisticsIdentifier;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidateSet:(id)arg1;
- (BOOL)hasCandidates;
- (id)candidateSet;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (id)candidates;
- (void)layout;
- (void)didMoveToWindow;
- (struct CGSize { float x1; float x2; })size;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)position;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPosition:(int)arg1;
- (void)dealloc;

@end
