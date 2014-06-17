/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UILabel;

@interface STValueUnitLabel : UIView  {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    float _labelSpacing;
    int _textAlignment;
    unsigned int _reversesLabels : 1;
    unsigned int _forceLayout : 1;
    unsigned int _verticalArrangement : 1;
}

@property(readonly) UILabel * leftLabel;
@property(readonly) UILabel * rightLabel;
@property float labelSpacing;
@property int textAlignment;
@property BOOL reversesLabels;
@property BOOL verticalArrangement;


- (void)setLabelSpacing:(float)arg1;
- (float)labelSpacing;
- (BOOL)reversesLabels;
- (BOOL)_labelsNeedSizing;
- (void)_sizeLabelsToFit;
- (BOOL)verticalArrangement;
- (void)setVerticalArrangement:(BOOL)arg1;
- (void)setReversesLabels:(BOOL)arg1;
- (int)textAlignment;
- (void)sizeToFit;
- (void)setTextAlignment:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)rightLabel;
- (id)leftLabel;

@end
