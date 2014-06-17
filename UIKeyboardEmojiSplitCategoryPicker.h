/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiCategory, UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
    BOOL _whiteText;
    UIKeyboardEmojiCategory *_lastUsedCategory;
}

@property BOOL whiteText;


- (id)categoryForCurrentRow;
- (void)updateCategorySelectedIndicator:(int)arg1;
- (id)symbolForRow:(int)arg1;
- (id)titleForRow:(int)arg1;
- (void)setWhiteText:(BOOL)arg1;
- (void)setCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (BOOL)whiteText;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
