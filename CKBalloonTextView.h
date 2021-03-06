/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {
    BOOL _singleLine;
    NSAttributedString *_attributedText;
    float _capOffsetFromBoundsTop;
    float _lastLineBaselineOffsetFromBoundsTop;
}

@property float capOffsetFromBoundsTop;
@property float lastLineBaselineOffsetFromBoundsTop;
@property(getter=isSingleLine) BOOL singleLine;
@property(copy) NSAttributedString * attributedText;


- (void)setSingleLine:(BOOL)arg1;
- (void)setLastLineBaselineOffsetFromBoundsTop:(float)arg1;
- (float)lastLineBaselineOffsetFromBoundsTop;
- (void)setCapOffsetFromBoundsTop:(float)arg1;
- (float)capOffsetFromBoundsTop;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 isSingleLine:(BOOL*)arg3;
- (BOOL)isSingleLine;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)didMoveToWindow;

@end
