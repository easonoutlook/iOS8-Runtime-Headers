/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIButton, UILabel, NSArray, PUSlidersCollectionView, NSMutableSet;

@interface PUCompactAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource> {
    UILabel *_titleLabel;
    UIButton *_expansionButton;
    PUSlidersCollectionView *_modeSlidersCollectionView;
    NSArray *_titleLabelConstraints;
    NSArray *_expansionButtonConstraints;
    NSArray *_modeSlidersCollectionViewConstraints;
    NSArray *__visibleModes;
    NSMutableSet *_expandedSupermodes;
}


- (void).cxx_destruct;
- (void)updateConstraints;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newModePickerListBackgroundView;
- (BOOL)shouldShowModePickerOnFirstDisplay;
- (void)configurePickerCell:(id)arg1 forMode:(id)arg2;
- (BOOL)_isExpandedSupermode:(id)arg1;
- (void)setListViewExpanded:(BOOL)arg1 explicitly:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setExpanded:(BOOL)arg1 forSupermode:(id)arg2 exclusive:(BOOL)arg3 animated:(BOOL)arg4;
- (void)copyStateFromAdjustmentsModeBar:(id)arg1;
- (void)_updateVisibleModesAnimated:(BOOL)arg1;
- (void)_updateTitleLabelAnimated:(BOOL)arg1;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)currentSlidersCollectionView;
- (BOOL)wantsToHandleEventAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)visibleSliderAdjustmentModes;
- (void)setSelectedMode:(id)arg1 animated:(BOOL)arg2;

@end
