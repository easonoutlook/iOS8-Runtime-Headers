/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, UICollectionViewLayout, UITouch, <UICollectionViewDelegate>, UICollectionViewLayoutAttributes, <UICollectionViewDataSource>, NSMutableSet, UIView, _UIDynamicAnimationGroup, NSArray, UICollectionViewUpdate, UICollectionReusableView, NSString, NSMutableDictionary, UICollectionViewData, NSIndexPath;

@interface UICollectionView : UIScrollView  {
    UICollectionViewLayout *_layout;
    <UICollectionViewDataSource> *_dataSource;
    UIView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    int _reloadingSuspendedCount;
    int _updateAnimationCount;
    UICollectionReusableView *_firstResponderView;
    UIView *_newContentView;
    int _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_visibleCellsDict;
    NSMutableDictionary *_visibleSupplementaryViewsDict;
    NSMutableDictionary *_visibleDecorationViewsDict;
    NSMutableDictionary *_clonedCellsDict;
    NSMutableDictionary *_clonedSupplementaryViewsDict;
    NSMutableDictionary *_clonedDecorationViewsDict;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    UICollectionViewData *_collectionViewData;
    UICollectionViewUpdate *_currentUpdate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _preRotationBounds;
    struct CGPoint { 
        float x; 
        float y; 
    } _rotationBoundsOffset;
    int _rotationAnimationCount;
    int _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    UITouch *_currentTouch;
    id _updateCompletionHandler;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    UICollectionViewLayoutAttributes *_transitionLayoutAttributes;
    BOOL _isInInteractiveTransition;
    BOOL _shouldAccumulateTrackedLayoutValues;
    NSMutableDictionary *_interactiveTransitionInfos;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _interactiveCompletionHandler;

    double _currentInteractiveTransitionTimeStamp;
    double _previousInteractiveTransitionTimeStamp;
    double _startTimeStamp;
    struct CGPoint { 
        float x; 
        float y; 
    } _currentCenterOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousCenterOffset;
    float _currentInteractiveTransitionProgress;
    float _previousInteractiveTransitionProgress;
    _UIDynamicAnimationGroup *_endInteractiveTransitionAnimationGroup;
    UICollectionViewLayout *_nextLayoutForInteractiveTranstion;
    NSMutableDictionary *_interactiveTransitionValueTrackingDict;
    NSMutableArray *_trackedValuesKeys;
    NSMutableDictionary *_invalidatedAttributes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationBlock;

    struct { 
        unsigned int delegateShouldHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidUnhighlightItemAtIndexPath : 1; 
        unsigned int delegateShouldSelectItemAtIndexPath : 1; 
        unsigned int delegateShouldDeselectItemAtIndexPath : 1; 
        unsigned int delegateDidSelectItemAtIndexPath : 1; 
        unsigned int delegateDidDeselectItemAtIndexPath : 1; 
        unsigned int delegateSupportsMenus : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateWillDisplaySupplementaryView : 1; 
        unsigned int delegateDidEndDisplayingCell : 1; 
        unsigned int delegateDidEndDisplayingSupplementaryView : 1; 
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition : 1; 
        unsigned int delegateOverrideForTransitionOffsetSize : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffset : 1; 
        unsigned int dataSourceNumberOfSections : 1; 
        unsigned int dataSourceViewForSupplementaryElement : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellLayoutAttributes : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int fadeCellsForBoundsChange : 1; 
        unsigned int updatingLayout : 1; 
        unsigned int needsReload : 1; 
        unsigned int reloading : 1; 
        unsigned int skipLayoutDuringSnapshotting : 1; 
        unsigned int layoutInvalidatedSinceLastCellUpdate : 1; 
        unsigned int doneFirstLayout : 1; 
        unsigned int loadingOffscreenViews : 1; 
        unsigned int updating : 1; 
        unsigned int updatingVisibleCells : 1; 
    } _collectionViewFlags;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastLayoutOffset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _navigationCompletion;

}

@property(retain) UICollectionViewLayout * collectionViewLayout;
@property <UICollectionViewDelegate> * delegate;
@property <UICollectionViewDataSource> * dataSource;
@property(retain) UIView * backgroundView;
@property BOOL allowsSelection;
@property BOOL allowsMultipleSelection;
@property(getter=_currentUpdate,readonly) UICollectionViewUpdate * currentUpdate;
@property(getter=_collectionViewData,readonly) UICollectionViewData * collectionViewData;
@property(getter=_visibleViews,readonly) NSArray * visibleViews;
@property(getter=_navigationCompletion,setter=_setNavigationCompletion:,copy) id navigationCompletion;
@property(getter=_currentTouch,setter=_setCurrentTouch:,retain) UITouch * currentTouch;

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (id)_navigationCompletion;
- (float)_trackedLayoutValueForKey:(id)arg1;
- (void)_trackLayoutValue:(float)arg1 forKey:(id)arg2;
- (void)_cellMenuDismissed;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (id)_currentUpdate;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_cancelInteractiveTransitionWithFinalAnimation:(BOOL)arg1;
- (void)_finishInteractiveTransitionWithFinalAnimation:(BOOL)arg1;
- (id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(id)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (id)_visibleCellForIndexPath:(id)arg1;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned int)arg3;
- (id)_collectionViewData;
- (BOOL)_dataSourceImplementsNumberOfSections;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (int)highlightedGlobalItem;
- (int)maximumGlobalItemIndex;
- (void)_cancelTouches;
- (void)_selectAllSelectedItems;
- (void)_userSelectItemAtIndexPath:(id)arg1;
- (void)_unhighlightAllItems;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (void)_setCurrentTouch:(id)arg1;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_endUpdates;
- (void)_beginUpdates;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (id)_viewAnimationsForCurrentUpdate;
- (void)_prepareLayoutForUpdates;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3;
- (void)_updateWithItems:(id)arg1;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (void)_endItemAnimations;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned int)arg2;
- (void)_finishInteractiveTransitionShouldFinish:(BOOL)arg1 finalAnimation:(BOOL)arg2;
- (id)_dynamicAnimationsForTrackValues;
- (void)_updateTrackedLayoutValuesWith:(id)arg1;
- (void)_updateTransitionWithProgress:(float)arg1;
- (void)_cleanUpAfterInteractiveTransitionDidFinish:(BOOL)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)_setNavigationCompletion:(id)arg1;
- (void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(id)arg4;
- (void)_highlightFirstVisibleItemIfAppropriate;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(id)arg6 animationCompletion:(id)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned int)arg9;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3;
- (id)_visibleViewDictForElementCategory:(unsigned int)arg1 elementKind:(id)arg2;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned int)arg4;
- (void)_addControlledSubview:(id)arg1 atZIndex:(int)arg2;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 newContentSize:(struct CGSize { float x1; float x2; })arg3 andOldContentSize:(struct CGSize { float x1; float x2; })arg4;
- (id)_visibleViews;
- (id)indexPathForSupplementaryView:(id)arg1;
- (void)_invalidateWithBlock:(id)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2;
- (void)_reuseSupplementaryView:(id)arg1;
- (void)_reuseCell:(id)arg1;
- (BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3 notifyDelegate:(BOOL)arg4;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_unhighlightAllItemsAndHighlightGlobalItem:(int)arg1;
- (void)_selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned int)arg3 notifyDelegate:(BOOL)arg4;
- (void)_deselectAllAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_invalidateLayoutIfNecessary;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)performBatchUpdates:(id)arg1 completion:(id)arg2;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (BOOL)_visible;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (id)collectionViewLayout;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathsForVisibleItems;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned int)arg2 animated:(BOOL)arg3;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (int)numberOfItemsInSection:(int)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned int)arg3;
- (id)indexPathsForSelectedItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (id)_currentTouch;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_shouldShowMenuForCell:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)moveSection:(int)arg1 toSection:(int)arg2;
- (BOOL)_indexPathIsValid:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)_reloadDataIfNeeded;
- (BOOL)allowsSelection;
- (void)_setupCellAnimations;
- (void)setAllowsSelection:(BOOL)arg1;
- (id)visibleCells;
- (void)_updateBackgroundView;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)indexPathForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleBounds;
- (void)_resumeReloads;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_suspendReloads;
- (int)numberOfSections;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint { float x1; float x2; })arg1 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (id)dataSource;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)didMoveToWindow;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)next:(int)arg1 indexPathFromIndexPath:(id)arg2;
- (void)pu_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)pu_scrollToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atScrollPosition:(unsigned int)arg2 animated:(BOOL)arg3;
- (id)__ck_indexPathForLastItem;
- (struct CGSize { float x1; float x2; })__ck_contentSize;
- (void)__ck_reloadDataKeepingSelection;
- (id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2;
- (id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2;
- (id)_gkReuseIdentifierForClass:(Class)arg1;
- (void)_gkRegisterCellClass:(Class)arg1;
- (void)_gkPerformWithoutViewReuse:(id)arg1;
- (id)_gkVisibleCellForIndexPath:(id)arg1;
- (int)MPU_globalRowForRowAtIndexPath:(id)arg1;

@end
