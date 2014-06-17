/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView, UIView, NSString, <CAMModeDialDataSource>, NSMutableArray, CAGradientLayer;

@interface CAMModeDial : UIControl  {
    int _orientation;
    <CAMModeDialDataSource> *_dataSource;
    unsigned int _selectedIndex;
    NSMutableArray *__items;
    UIView *__dialContainerView;
    UIView *__itemsContainerView;
    UIImageView *__dotImageView;
    CAGradientLayer *__dialGradientLayer;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *__tapZones;
    NSString *__contentSizeCategory;
    UIView *__dotTopMarginLayoutSpacer;
    UIView *__centeringDebugView;
}

@property(readonly) int orientation;
@property <CAMModeDialDataSource> * dataSource;
@property unsigned int selectedIndex;
@property(readonly) NSMutableArray * _items;
@property(readonly) UIView * _dialContainerView;
@property(readonly) UIView * _itemsContainerView;
@property(readonly) UIImageView * _dotImageView;
@property(readonly) CAGradientLayer * _dialGradientLayer;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }* _tapZones;
@property(copy,readonly) NSString * _contentSizeCategory;
@property(readonly) UIView * _dotTopMarginLayoutSpacer;
@property(readonly) UIView * _centeringDebugView;


- (id)_centeringDebugView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_tapZones;
- (id)_dialGradientLayer;
- (id)_dotImageView;
- (id)_itemsContainerView;
- (id)_dialContainerView;
- (void)updateToContentSize:(id)arg1;
- (struct CGPoint { float x1; float x2; })_containerPositionFromSelectedIndex;
- (float)_approximateWidthOfLabelAtIndex:(int)arg1;
- (id)_contentSizeCategory;
- (id)_fontForOrientation:(int)arg1;
- (void)_updateContainerViewPositionFromSelectedIndex;
- (void)_layoutVerticalTapZones;
- (void)_layoutHorizontalTapZones;
- (id)_dotTopMarginLayoutSpacer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOrientation:(int)arg1;
- (void)_commonCAMModeDialInitialization;
- (id)_verticalDialMeshTransform;
- (id)_horizontalDialMeshTransform;
- (void)_setupHorizontalDotConstraints;
- (void)_layoutForVerticalOrientation;
- (void)_layoutForHorizontalOrientation;
- (void).cxx_destruct;
- (id)_dotImage;
- (id)_items;
- (void)setSelectedIndex:(unsigned int)arg1;
- (unsigned int)selectedIndex;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (int)orientation;
- (id)dataSource;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectedIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1;

@end
