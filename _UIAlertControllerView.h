/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionView, _UIAlertControllerActionView, _UIKeyboardLayoutAlignmentView, _UIDimmingKnockoutBackdropView, UILabel, UIView, NSLayoutConstraint, NSMutableArray, _UIAlertControllerCollectionViewFlowLayout, UIAlertController;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource> {
    UIAlertController *_alertController;
    UICollectionView *_actionCollectionView;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentViewControllerContainerView;
    _UIAlertControllerActionView *_discreteCancelActionView;
    _UIDimmingKnockoutBackdropView *_backdropView;
    UIView *_contentView;
    UIView *_foregroundView;
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    int _layoutOrientation;
    BOOL _inPopover;
    BOOL _hasDimmingView;
    BOOL _showsCancelAction;
    BOOL _cancelActionIsDiscrete;
    BOOL _hasBackdropView;
    BOOL _alignsToKeyboard;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_availableSpaceAlignmentConstraint;
    NSMutableArray *_backdropViewConstraints;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSLayoutConstraint *_backdropViewRightConstraint;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_noDimmingViewConstraints;
    NSLayoutConstraint *_foregroundViewCenteringYConstraint;
}

@property UIAlertController * alertController;
@property(readonly) UIView * _foregroundView;
@property(readonly) UIView * _dimmingView;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout * _flowLayout;
@property int layoutOrientation;
@property BOOL inPopover;
@property BOOL hasDimmingView;
@property BOOL showsCancelAction;
@property BOOL cancelActionIsDiscrete;
@property BOOL hasBackdropView;
@property BOOL alignsToKeyboard;

+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;

- (BOOL)_actionLayoutIsVertical;
- (BOOL)alignsToKeyboard;
- (float)_styleAppropriateVisualAltitude;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_reevaluateSuperviewSizingConstraints;
- (id)_orderedActionsForCollectionView;
- (float)_bottomLabelPixelOffset;
- (float)_messageLabelPixelOffset;
- (float)_singleLabelTopScaledValue;
- (float)_singleLabelScaledValue;
- (float)_singleLabelTopPixelOffset;
- (float)_singleLabelPixelOffset;
- (id)_singleLabelFont;
- (BOOL)_shouldHaveCancelActionInCollectionView;
- (id)_actionsForCollectionView;
- (void)_actionLayoutDirectionChanged;
- (BOOL)hasDimmingView;
- (float)_messageTopScaledValue;
- (float)_messageScaledValue;
- (float)_bottomLabelScaledValue;
- (float)_titleScaledValue;
- (id)_messageColor;
- (id)_titleColor;
- (id)_messageFont;
- (BOOL)hasBackdropView;
- (void)_removeDiscreteCancelActionView;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (float)_marginBetweenContentAndDiscreteCancelButton;
- (BOOL)_hasDiscreteCancelAction;
- (struct CGSize { float x1; float x2; })_collectionViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(struct CGSize { float x1; float x2; })arg2;
- (float)_layoutWidthForHorizontalLayout:(BOOL)arg1;
- (BOOL)_canLayOutActionsHorizontally;
- (BOOL)cancelActionIsDiscrete;
- (BOOL)showsCancelAction;
- (struct CGSize { float x1; float x2; })_itemSizeForHorizontalLayout:(BOOL)arg1;
- (BOOL)_wantsHorizontalCollectionViewLayout;
- (struct CGSize { float x1; float x2; })_minimumSizeForAllActions;
- (BOOL)hasDiscreteHorizontalCancelAction;
- (float)_idealLayoutWidth;
- (int)_numberOfActionsForCollectionView;
- (BOOL)_wantsHorizontalActionSheet;
- (float)_availableWidthForHorizontalLayout:(BOOL)arg1;
- (float)_contrainedWidth;
- (BOOL)_horizontalLayoutCanUseFullWidth;
- (struct CGSize { float x1; float x2; })_sizeForLayoutWidthDetermination;
- (float)_titleTopScaledValue;
- (float)_labelHorizontalInsets;
- (float)_contentCornerRadius;
- (BOOL)_buttonsAreTopMost;
- (void)_invalidateFlowLayout;
- (void)_prepareDimmingViewConstraints;
- (void)_applyCollectionViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_prepareBackdropViewConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_prepareCancelView;
- (void)_prepareActionCollectionView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareBackdropView;
- (void)_prepareContentView;
- (void)_prepareForegroundView;
- (void)_prepareViewsAndAddConstraints;
- (void)setShowsCancelAction:(BOOL)arg1;
- (void)setInPopover:(BOOL)arg1;
- (id)_titleFont;
- (void)_contentSizeChanged;
- (id)alertController;
- (struct CGSize { float x1; float x2; })_contentViewControllerSize;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
- (float)_contentHorizontalInsets;
- (id)cancelAction;
- (void)_alignContentToAvailableSpaceByLayoutAttribute:(int)arg1;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)setCancelActionIsDiscrete:(BOOL)arg1;
- (void)_propertiesChanged;
- (void)setAlignsToKeyboard:(BOOL)arg1;
- (void)setHasBackdropView:(BOOL)arg1;
- (void)setHasDimmingView:(BOOL)arg1;
- (id)_flowLayout;
- (void)setAlertController:(id)arg1;
- (float)_contentVerticalInsets;
- (BOOL)inPopover;
- (float)_idealWidth;
- (id)_dimmingView;
- (id)contentViewController;
- (id)message;
- (void)setLayoutOrientation:(int)arg1;
- (int)layoutOrientation;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)setTintAdjustmentMode:(int)arg1;
- (int)tintAdjustmentMode;
- (id)title;
- (id)actions;
- (id)_foregroundView;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_UIAppearance_setInPopover:(BOOL)arg1;
- (void)_UIAppearance_setHasDimmingView:(BOOL)arg1;
- (void)_UIAppearance_setShowsCancelAction:(BOOL)arg1;
- (void)_UIAppearance_setHasBackdropView:(BOOL)arg1;
- (void)_UIAppearance_setAlignsToKeyboard:(BOOL)arg1;

@end
