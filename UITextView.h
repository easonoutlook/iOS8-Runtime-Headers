/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, UITextRange, NSTextStorage, _UITextViewRestorableScrollPosition, _UITextContainerView, NSString, NSTextContainer, UIAutoscroll, UITextInputController, NSAttributedString, UITextInteractionAssistant, UITextPosition, MPUTextContainerContentSizeUpdater, UITextInputTraits, <UITextInputDelegate>, UIFont, <UITextInputTokenizer>, _UISiriStreamingManager, _UICharacterStreamingManager, UIImage, UIColor, <UITextViewDelegate>, UIView, NSLayoutManager;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UITextInput, ABText, MPUAutoupdatingTextContainer> {
    id _private;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _UITextContainerView *_containerView;
    id _inputDelegate;
    <UITextInputTokenizer> *_tokenizer;
    UITextInputController *_inputController;
    UITextInteractionAssistant *_interactionAssistant;
    UITextInputTraits *_textInputTraits;
    UIAutoscroll *_autoscroll;
    struct { 
        unsigned int needsScrollToSelectionAfterLayout : 1; 
        unsigned int isInteractingWithLink : 1; 
        unsigned int linkInteractionIsLongPress : 1; 
        unsigned int editable : 1; 
        unsigned int reentrancyGuard : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int interactiveSelectionDisabled : 1; 
        unsigned int selectable : 1; 
    } _tvFlags;
    id _linkInteractionItem;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    struct CGPoint { 
        float x; 
        float y; 
    } _scrollTargetOffset;
    unsigned int _dataDetectorTypes;
    float _preferredMaxLayoutWidth;
    UIView *_inputAccessoryView;
    _UISiriStreamingManager *_streamingManager;
    _UICharacterStreamingManager *_characterStreamingManager;
    int _siriAnimationStyle;
    NSDictionary *_siriParameters;
    float _firstBaselineOffsetFromTop;
    float _lastBaselineOffsetFromBottom;
    BOOL _clearsOnInsertion;
    UIView *_inputView;
}

@property(setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property(retain) UIFont * font;
@property(copy) NSAttributedString * attributedText;
@property(readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater;
@property(copy) NSString * ab_text;
@property(copy) NSDictionary * ab_textAttributes;
@property(setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property <UITextViewDelegate> * delegate;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property int textAlignment;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property(getter=isEditable) BOOL editable;
@property(getter=isSelectable) BOOL selectable;
@property unsigned int dataDetectorTypes;
@property BOOL allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSDictionary * typingAttributes;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property BOOL clearsOnInsertion;
@property(readonly) NSTextContainer * textContainer;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textContainerInset;
@property(readonly) NSLayoutManager * layoutManager;
@property(retain,readonly) NSTextStorage * textStorage;
@property(copy) NSDictionary * linkTextAttributes;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(retain) UIColor * insertionPointColor;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIColor * selectionHighlightColor;
@property(retain) UIImage * selectionDragDotImage;
@property unsigned int insertionPointWidth;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property BOOL isSingleLineDocument;
@property BOOL contentsIsSingleValue;
@property BOOL acceptsEmoji;
@property BOOL forceEnableDictation;
@property int emptyContentReturnKeyType;
@property BOOL returnKeyGoesToNextResponder;
@property BOOL acceptsFloatingKeyboard;
@property BOOL acceptsSplitKeyboard;
@property BOOL displaySecureTextUsingPlainText;
@property BOOL learnsCorrections;
@property int shortcutConversionType;
@property BOOL suppressReturnKeyStyling;
@property BOOL useInterfaceLanguageForLocalization;
@property BOOL deferBecomingResponder;
@property BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(copy) NSString * autocorrectionContext;
@property(copy) NSString * responseContext;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;

+ (id)_sharedHighlightView;
+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (BOOL)_isCompatibilityTextView;
+ (id)pkui_plainNonInteractiveTextView;

- (void)_finishHandlingInteraction:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_presentationRectForLinkAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_resetLinkInteraction;
- (void)_highlightLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_interactableItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_cancelDataDetectors;
- (BOOL)_mightHaveSelection;
- (id)_restorableScrollPosition;
- (struct CGPoint { float x1; float x2; })_closeQuoteAnchor;
- (struct CGPoint { float x1; float x2; })_openQuoteAnchor;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (void)_enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_enableSiriAnimationDictationStyle;
- (void)_setPreferredMaxLayoutWidth:(float)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (unsigned int)_effectiveDataDetectorTypes;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_selectionMayChange:(id)arg1;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (void)_resetDataDetectorsResults;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForScrollToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_baselineOffsetDidChange;
- (struct CGPoint { float x1; float x2; })_lastGlyphBaselineRightPoint;
- (struct CGPoint { float x1; float x2; })_firstGlyphBaselineLeftPoint;
- (float)_currentPreferredMaxLayoutWidth;
- (BOOL)usesTiledViews;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (BOOL)_shouldScrollEnclosingScrollView;
- (void)_resyncContainerFrameForNonAutolayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectIgnoringKeyboard;
- (void)_setScrollTarget:(id)arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetForScrollToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleRangeWithLayout:(BOOL)arg1;
- (unsigned int)_totalNumberOfTextViewsInLayoutManager;
- (void)_startDataDetectors;
- (BOOL)_shouldStartDataDetectors;
- (BOOL)isSelectable;
- (void)setUsesTiledViews:(BOOL)arg1;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4;
- (void)setSelectable:(BOOL)arg1;
- (void)_observedTextViewDidChange:(id)arg1;
- (void)_streamingManagerDidCommitFinalResults;
- (void)_updateBaselineInformationDependentOnBounds;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_setInteractiveTextSelectionDisabled:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (BOOL)_isInteractiveTextSelectionDisabled;
- (id)_textInputViewForAddingGestureRecognizers;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (void)_keyboardDidShow:(id)arg1;
- (void)setForceEnableDictation:(BOOL)arg1;
- (BOOL)forceEnableDictation;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_layoutDebuggingTitle;
- (BOOL)_drawsDebugBaselines;
- (void)_setDrawsDebugBaselines:(BOOL)arg1;
- (BOOL)_wantsDirtyConstraintsForChangingBoundsWidth;
- (void)_setInSecondConstraintsPass:(BOOL)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (float)_preferredMaxLayoutWidth;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (Class)_printFormatterClass;
- (id)automaticallySelectedOverlay;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setMarginTop:(unsigned int)arg1;
- (unsigned int)marginTop;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)_reanalyze:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (id)selectedText;
- (void)updateSelection;
- (void)disableClearsOnInsertion;
- (BOOL)clearsOnInsertion;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)mightHaveLinks;
- (void)setContentToHTMLString:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)setClearsOnInsertion:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (void)selectAll:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (id)webView;
- (unsigned int)dataDetectorTypes;
- (BOOL)allowsEditingTextAttributes;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setLineHeight:(float)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (BOOL)canResignFirstResponder;
- (void)updateConstraints;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (int)selectionAffinity;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (id)linkTextAttributes;
- (id)textContainer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textContainerInset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (id)selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)inputDelegate;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (id)typingAttributes;
- (int)textAlignment;
- (void)takeTraitsFrom:(id)arg1;
- (id)_textInputTraits;
- (void)setTypingAttributes:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (id)textInputView;
- (void)cancelAutoscroll;
- (id)textColor;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (id)selectionView;
- (id)interactionAssistant;
- (id)textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (id)_containerView;
- (id)layoutManager;
- (BOOL)isEditing;
- (void)_updateContentSize;
- (id)font;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)tintColorDidChange;
- (float)_firstBaselineOffsetFromTop;
- (float)_baselineOffsetFromBottom;
- (void)invalidateIntrinsicContentSize;
- (BOOL)canBecomeFirstResponder;
- (float)lineHeight;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)isEditable;
- (BOOL)_isDisplayingShortcutViewController;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)resignFirstResponder;
- (id)undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)ab_textAttributes;
- (id)ab_text;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (struct CGSize { float x1; float x2; })pkui_frameSizeForTextSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })pkui_textSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)dd_newOperation;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1;
- (BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;

@end
