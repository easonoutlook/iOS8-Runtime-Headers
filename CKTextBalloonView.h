/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, CKBalloonTextView;

@interface CKTextBalloonView : CKColoredBalloonView  {
    BOOL _centerTextWhenSkinny;
    CKBalloonTextView *_textView;
    NSAttributedString *_attributedText;
}

@property(retain) CKBalloonTextView * textView;
@property(copy) NSAttributedString * attributedText;
@property BOOL centerTextWhenSkinny;


- (BOOL)centerTextWhenSkinny;
- (float)textViewWidthForWidth:(float)arg1;
- (void)setCenterTextWhenSkinny:(BOOL)arg1;
- (void)configureForMessagePart:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)prepareForDisplay;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)description;
- (void)dealloc;

@end
