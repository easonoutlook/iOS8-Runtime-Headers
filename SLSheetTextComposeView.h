/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UILabel, UITextView;

@interface SLSheetTextComposeView : UIView  {
    UITextView *_textView;
    UILabel *_placeholderLabel;
    float _textRightInset;
}

@property(retain) UITextView * textView;
@property(retain) UILabel * placeholderLabel;
@property float textRightInset;


- (void)setPlaceholderLabel:(id)arg1;
- (id)placeholderLabel;
- (void).cxx_destruct;
- (id)textView;
- (void)setTextView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)restoreKeyboard;
- (float)textRightInset;
- (void)_assembleView;
- (void)setTextRightInset:(float)arg1;

@end
