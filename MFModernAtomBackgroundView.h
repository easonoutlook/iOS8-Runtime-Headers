/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFModernAtomView, UIView;

@interface MFModernAtomBackgroundView : UIView  {
    UIView *_selectedView;
    unsigned int _selectionStyle;
    UIView *_separatorView;
    MFModernAtomView *_hostAtomView;
    int _separatorStyle;
    BOOL _selected;
    float _scalingFactor;
}

@property(readonly) UIView * selectedView;
@property(readonly) UIView * separatorView;
@property MFModernAtomView * hostAtomView;
@property int separatorStyle;
@property float scalingFactor;


- (id)separatorView;
- (int)separatorStyle;
- (BOOL)isSelected;
- (void)setSeparatorStyle:(int)arg1;
- (void)tintColorDidChange;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)scalingFactor;
- (id)_chevronImage;
- (id)hostAtomView;
- (void)_setSelectionStyle:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_backgroundBleedArea;
- (void)setScalingFactor:(float)arg1;
- (id)selectedView;
- (float)separatorWidth;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned int)arg3;
- (void)setHostAtomView:(id)arg1;
- (void)dealloc;

@end