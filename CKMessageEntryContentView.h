/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMessageEntryRichTextView, UIView, NSString, CKMessageEntryTextView, CKComposition;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate> {
    BOOL _shouldShowSubject;
    BOOL _shouldShowCharacterCount;
    BOOL _needsTextLayout;
    BOOL _needsEnsureSelectionVisible;
    BOOL _ignoreEndEditing;
    CKComposition *_composition;
    CKMessageEntryTextView *_subjectView;
    CKMessageEntryRichTextView *_textView;
    UIView *_activeView;
    float _placeholderHeight;
    UIView *_dividerLine;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textAlignmentInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _subjectAlignmentInsets;
}

@property BOOL shouldShowSubject;
@property BOOL shouldShowCharacterCount;
@property(retain) CKComposition * composition;
@property(retain) CKMessageEntryTextView * subjectView;
@property(retain) CKMessageEntryRichTextView * textView;
@property(getter=isActive,readonly) BOOL active;
@property UIView * activeView;
@property(copy) NSString * placeholderText;
@property(getter=isSingleLine,readonly) BOOL singleLine;
@property(getter=isShowingDictationPlaceholder,readonly) BOOL showingDictationPlaceholder;
@property float placeholderHeight;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentTextAlignmentInsets;
@property BOOL balloonColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } subjectAlignmentInsets;
@property(retain) UIView * dividerLine;
@property BOOL needsTextLayout;
@property BOOL needsEnsureSelectionVisible;
@property BOOL ignoreEndEditing;


- (void)setSubjectAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPlaceholderHeight:(float)arg1;
- (BOOL)needsEnsureSelectionVisible;
- (void)setNeedsEnsureSelectionVisible:(BOOL)arg1;
- (BOOL)ignoreEndEditing;
- (void)setActiveView:(id)arg1;
- (void)setIgnoreEndEditing:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })subjectAlignmentInsets;
- (void)invalidateComposition;
- (void)setSubjectView:(id)arg1;
- (void)setNeedsTextLayout:(BOOL)arg1;
- (void)ensureSelectionVisibleIfNeeded;
- (BOOL)needsTextLayout;
- (BOOL)balloonColor;
- (BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (BOOL)makeActive;
- (id)subjectView;
- (id)activeView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)shouldShowSubject;
- (BOOL)isShowingDictationPlaceholder;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setComposition:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 shouldShowSubject:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3;
- (void)setDividerLine:(id)arg1;
- (void)setShouldShowCharacterCount:(BOOL)arg1;
- (void)setShouldShowSubject:(BOOL)arg1;
- (float)placeholderHeight;
- (BOOL)isSingleLine;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentTextAlignmentInsets;
- (BOOL)shouldShowCharacterCount;
- (id)dividerLine;
- (void)calculateTextMetrics;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setTextView:(id)arg1;
- (BOOL)isActive;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setPlaceholderText:(id)arg1;
- (id)placeholderText;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)composition;

@end
