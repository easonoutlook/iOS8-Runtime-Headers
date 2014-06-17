/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIControlCenterLabel : UILabel <SBUIControlCenterControl> {
}


- (void)controlConfigurationDidChangeForState:(int)arg1;
- (void)controlAppearanceDidChangeForState:(int)arg1;
- (void)_updateAttributedText;
- (int)_currentState;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;
- (void)setNumberOfLines:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
