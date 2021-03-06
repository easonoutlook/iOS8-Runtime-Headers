/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter  {
    struct { 
        unsigned int initializedUsedRects : 1; 
    } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}


- (id)_pageData;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPageAtIndex:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageAtIndex:(int)arg1;
- (int)_recalcPageCount;
- (id)_textView;
- (void)setColor:(id)arg1;
- (id)color;
- (int)textAlignment;
- (id)font;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)dealloc;

@end
