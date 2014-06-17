/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTextEditingTraits : NSObject  {
    BOOL _isBold;
    BOOL _isItalicized;
    BOOL _isUnderlined;
    BOOL _canToggleBoldface;
    BOOL _canToggleItalics;
    BOOL _canToggleUnderline;
    BOOL _supportStyling;
    BOOL _canCut;
    BOOL _canCopy;
    BOOL _canPaste;
    BOOL _canMoveCursorLeft;
    BOOL _canMoveCursorRight;
}

@property(readonly) BOOL isBold;
@property(readonly) BOOL isItalicized;
@property(readonly) BOOL isUnderlined;
@property(readonly) BOOL canToggleBoldface;
@property(readonly) BOOL canToggleItalics;
@property(readonly) BOOL canToggleUnderline;
@property(readonly) BOOL supportStyling;
@property BOOL canCut;
@property(readonly) BOOL canCopy;
@property(readonly) BOOL canPaste;
@property(readonly) BOOL canMoveCursorLeft;
@property(readonly) BOOL canMoveCursorRight;

+ (id)traitsWithResponder:(id)arg1 editable:(BOOL)arg2;

- (BOOL)canMoveCursorRight;
- (BOOL)canMoveCursorLeft;
- (BOOL)canPaste;
- (BOOL)canCopy;
- (void)setCanCut:(BOOL)arg1;
- (BOOL)canCut;
- (BOOL)supportStyling;
- (BOOL)canToggleUnderline;
- (BOOL)canToggleItalics;
- (BOOL)canToggleBoldface;
- (BOOL)isUnderlined;
- (BOOL)isItalicized;
- (BOOL)isBold;
- (id)initWithResponder:(id)arg1 editable:(BOOL)arg2;

@end
