/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIButton, UILabel, <PLPhotoCommentEntryViewDelegate>, UITextView;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {
    UILabel *placeholderLabel;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIButton *_postButton;
    <PLPhotoCommentEntryViewDelegate> *_delegate;
}

@property(retain,readonly) UITextView * textView;
@property(retain,readonly) UILabel * placeholderLabel;
@property(retain,readonly) UIButton * postButton;
@property <PLPhotoCommentEntryViewDelegate> * delegate;


- (id)trimmedText;
- (id)postButton;
- (id)placeholderLabel;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (void)clearText;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)preferredHeight;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end