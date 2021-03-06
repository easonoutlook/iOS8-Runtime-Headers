/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIView, TIKeyboardCandidateResultSet, NSMutableArray;

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSArray *m_usageTrackingTypes;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    BOOL m_fits;
    BOOL m_mouseDown;
    id m_delegate;
    int m_index;
    int m_promptTextType;
    float m_originalTypedTextRectCorrectionAmount;
    float m_maxX;
    BOOL _showHiddenCandidatesOnly;
    unsigned int m_usageTrackingMask;
    TIKeyboardCandidateResultSet *_candidateResultSet;
}

@property unsigned int usageTrackingMask;
@property(readonly) TIKeyboardCandidateResultSet * candidates;
@property(retain) TIKeyboardCandidateResultSet * candidateResultSet;
@property BOOL showHiddenCandidatesOnly;


- (id)typedTextAnimationView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowFrameForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (void)dismiss;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(int)arg2 withExtraGap:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_candidateSelected:(id)arg1;
- (float)maximumCandidateWidth;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(BOOL)arg2;
- (unsigned int)numberOfShownItems;
- (void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 maxX:(float)arg6 showHiddenCandidatesOnly:(BOOL)arg7;
- (void)removePromptSubviews;
- (id)correction;
- (id)typedText;
- (id)correctionShadowView;
- (id)correctionAnimationView;
- (id)correctionView;
- (id)typedTextView;
- (BOOL)prepareForAnimation:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addTypedTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (id)activeCandidateList;
- (unsigned int)usageTrackingMask;
- (void)setShowHiddenCandidatesOnly:(BOOL)arg1;
- (BOOL)showHiddenCandidatesOnly;
- (unsigned int)index;
- (void)setCandidateResultSet:(id)arg1;
- (id)candidateResultSet;
- (int)textEffectsVisibilityLevel;
- (void)setSelectedItem:(unsigned int)arg1;
- (id)inlineText;
- (void)revealHiddenCandidates;
- (void)candidatesDidChange;
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
- (id)statisticsIdentifier;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (BOOL)hasCandidates;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (id)candidates;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
