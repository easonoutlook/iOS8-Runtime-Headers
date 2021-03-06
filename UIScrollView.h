/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIScrollViewDelegate>, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIImageView, NSISVariable, UIView, _UIStaticScrollBar, UIScrollView, UISwipeGestureRecognizer, NSArray;

@interface UIScrollView : UIView <_UIScrollToTopView, NSCoding> {
    id _delegate;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    UIImageView *_verticalScrollIndicator;
    UIImageView *_horizontalScrollIndicator;
    _UIStaticScrollBar *_staticScrollBar;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _scrollIndicatorInset;
    double _startOffsetX;
    double _startOffsetY;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    double _lastUpdateTime;
    float _minimumZoomScale;
    float _maximumZoomScale;
    UIView *_zoomView;
    double _horizontalVelocity;
    double _verticalVelocity;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    id _scrollHeartbeat;
    struct CGPoint { 
        float x; 
        float y; 
    } _pageDecelerationTarget;
    struct CGSize { 
        float width; 
        float height; 
    } _decelerationFactor;
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedDecelerationTarget;
    struct CGSize { 
        float width; 
        float height; 
    } _adjustedDecelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    id *_shadows;
    id _scrollNotificationViews;
    double _contentOffsetAnimationDuration;
    id _animation;
    id _zoomAnimation;
    id _pinch;
    id _pan;
    id _swipe;
    id _touchDelayGestureRecognizer;
    UISwipeGestureRecognizer *_lowFidelitySwipeGestureRecognizers[4];
    UIScrollView *_draggingChildScrollView;
    struct CGPoint { 
        float x; 
        float y; 
    } _parentAdjustment;
    float _pagingSpringPull;
    float _pagingFriction;
    int _fastScrollCount;
    float _fastScrollMultiplier;
    float _fastScrollStartMultiplier;
    double _fastScrollEndTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _rotationCenterPoint;
    float _accuracy;
    unsigned int _zoomAnimationCount;
    struct CGSize { 
        float width; 
        float height; 
    } _accumulatedOffset;
    int _touchLevel;
    float _savedKeyboardAdjustmentDelta;
    struct { 
        unsigned int tracking : 1; 
        unsigned int dragging : 1; 
        unsigned int verticalBounceEnabled : 1; 
        unsigned int horizontalBounceEnabled : 1; 
        unsigned int verticalBouncing : 1; 
        unsigned int horizontalBouncing : 1; 
        unsigned int bouncesZoom : 1; 
        unsigned int zoomBouncing : 1; 
        unsigned int alwaysBounceHorizontal : 1; 
        unsigned int alwaysBounceVertical : 1; 
        unsigned int preventScrollingContainer : 1; 
        unsigned int canCancelContentTouches : 1; 
        unsigned int delaysContentTouches : 1; 
        unsigned int programmaticScrollDisabled : 1; 
        unsigned int scrollDisabled : 1; 
        unsigned int zoomDisabled : 1; 
        unsigned int scrollTriggered : 1; 
        unsigned int showsHorizontalScrollIndicator : 1; 
        unsigned int showsVerticalScrollIndicator : 1; 
        unsigned int indicatorStyle : 2; 
        unsigned int inZoom : 1; 
        unsigned int hideIndicatorsInZoom : 1; 
        unsigned int pushedTrackingMode : 1; 
        unsigned int displayingScrollIndicators : 1; 
        unsigned int verticalIndicatorShrunk : 1; 
        unsigned int horizontalIndicatorShrunk : 1; 
        unsigned int contentFitDisableScrolling : 1; 
        unsigned int pagingEnabled : 1; 
        unsigned int pagingLeft : 1; 
        unsigned int pagingRight : 1; 
        unsigned int pagingUp : 1; 
        unsigned int pagingDown : 1; 
        unsigned int lastHorizontalDirection : 1; 
        unsigned int lastVerticalDirection : 1; 
        unsigned int dontScrollToTop : 1; 
        unsigned int scrollingToTop : 1; 
        unsigned int singleFingerPan : 1; 
        unsigned int autoscrolling : 1; 
        unsigned int automaticContentOffsetAdjustmentDisabled : 1; 
        unsigned int skipStartOffsetAdjustment : 1; 
        unsigned int delegateScrollViewDidScroll : 1; 
        unsigned int delegateScrollViewDidZoom : 1; 
        unsigned int delegateContentSizeForZoomScale : 1; 
        unsigned int preserveCenterDuringRotation : 1; 
        unsigned int delaysTrackingWhileDecelerating : 1; 
        unsigned int pinnedZoomMin : 1; 
        unsigned int pinnedXMin : 1; 
        unsigned int pinnedYMin : 1; 
        unsigned int pinnedXMax : 1; 
        unsigned int pinnedYMax : 1; 
        unsigned int skipLinkChecks : 1; 
        unsigned int staysCenteredDuringPinch : 1; 
        unsigned int wasDelayingPinchForSystemGestures : 1; 
        unsigned int systemGesturesRecognitionPossible : 1; 
        unsigned int disableContentOffsetRounding : 1; 
        unsigned int alwaysDisableContentOffsetRounding : 1; 
        unsigned int adjustedDecelerationTargetX : 1; 
        unsigned int adjustedDecelerationTargetY : 1; 
        unsigned int hasScrolled : 1; 
        unsigned int wantsConstrainedContentSize : 1; 
        unsigned int updateInsetBottom : 1; 
        unsigned int beingDraggedByChildScrollView : 1; 
        unsigned int adjustsTargetsOnContentOffsetChanges : 1; 
        unsigned int forwardsTouchesUpResponderChain : 1; 
    } _scrollViewFlags;
    BOOL _useContentDimensionVariablesForConstraintLowering;
    id _scrollTestParameters;
    int _keyboardDismissMode;
    NSISVariable *_contentWidthVariable;
    NSISVariable *_contentHeightVariable;
    NSArray *_automaticContentConstraints;
    struct CADoublePoint { 
        double x; 
        double y; 
    } _zoomAnchorPoint;
}

@property(getter=_adjustsTargetsOnContentOffsetChanges,setter=_setAdjustsTargetsOnContentOffsetChanges:) BOOL adjustsTargetsOnContentOffsetChanges;
@property(getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;
@property(getter=_isScrollingToTop,readonly) BOOL scrollingToTop;
@property(getter=_isAnimatingScroll,readonly) BOOL isAnimatingScroll;
@property(readonly) _UIStaticScrollBar * _staticScrollBar;
@property struct CGPoint { float x1; float x2; } contentOffset;
@property struct CGSize { float x1; float x2; } contentSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property <UIScrollViewDelegate> * delegate;
@property(getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property BOOL bounces;
@property BOOL alwaysBounceVertical;
@property BOOL alwaysBounceHorizontal;
@property(getter=isPagingEnabled) BOOL pagingEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property BOOL showsHorizontalScrollIndicator;
@property BOOL showsVerticalScrollIndicator;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } scrollIndicatorInsets;
@property int indicatorStyle;
@property float decelerationRate;
@property(getter=isTracking,readonly) BOOL tracking;
@property(getter=isDragging,readonly) BOOL dragging;
@property(getter=isDecelerating,readonly) BOOL decelerating;
@property BOOL delaysContentTouches;
@property BOOL canCancelContentTouches;
@property float minimumZoomScale;
@property float maximumZoomScale;
@property float zoomScale;
@property BOOL bouncesZoom;
@property(getter=isZooming,readonly) BOOL zooming;
@property(getter=isZoomBouncing,readonly) BOOL zoomBouncing;
@property BOOL scrollsToTop;
@property(readonly) UIPanGestureRecognizer * panGestureRecognizer;
@property(readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property int keyboardDismissMode;
@property(getter=_forwardsTouchesUpResponderChain,setter=_setForwardsTouchesUpResponderChain:) BOOL forwardsTouchesUpResponderChain;
@property(retain) id scrollTestParameters;
@property(retain,readonly) NSISVariable * _contentWidthVariable;
@property(retain,readonly) NSISVariable * _contentHeightVariable;
@property(setter=_setUseContentDimensionVariablesForConstraintLowering:) BOOL _useContentDimensionVariablesForConstraintLowering;
@property(setter=_setAutomaticContentConstraints:,copy) NSArray * _automaticContentConstraints;
@property(getter=_isVerticalBouncing,readonly) BOOL isVerticalBouncing;
@property(getter=_isHorizontalBouncing,readonly) BOOL isHorizontalBouncing;
@property(getter=_isAnimatingZoom,readonly) BOOL isAnimatingZoom;
@property(getter=_zoomAnchorPoint,setter=_setZoomAnchorPoint:) struct CADoublePoint { double x1; double x2; } zoomAnchorPoint;

+ (id)_implicitAnimationCulprits;
+ (void)_scrollWithNSTimer:(BOOL)arg1;
+ (SEL)_panGestureAction;
+ (SEL)_pinchGestureAction;

- (float)maxVelocityInDirection:(int)arg1;
- (int)scrollableDirections;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)_reenableImplicitAnimationsAfterScrollTest;
- (id)_scrollTestExtraResults;
- (void)_incrementForScrollTest;
- (void)_suppressImplicitAnimationsForScrollTest;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5;
- (BOOL)_viewIsInsideNavigationController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForPageContainingView:(id)arg1;
- (void)_pinContentOffsetToClosestPageBoundary;
- (id)_backgroundShadowForSlideAnimation;
- (void)_adjustShadowsIfNecessaryForOffset:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (BOOL)_isAutoscrolling;
- (void)_setAutoscrolling:(BOOL)arg1;
- (BOOL)_pagingDown;
- (BOOL)_pagingUp;
- (BOOL)_pagingRight;
- (BOOL)_pagingLeft;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float*)arg3;
- (void)_setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)_setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)_setAlwaysBounceVertical:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_animatedOriginalOffset;
- (id)_parentScrollView;
- (void)_setContentOffsetPinned:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_setContentOffsetPinned:(struct CGPoint { float x1; float x2; })arg1;
- (double)_touchDelayForScrollDetection;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3;
- (void)_forceDelegateScrollViewDidZoom:(BOOL)arg1;
- (BOOL)_isAutomaticContentOffsetAdjustmentEnabled;
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)arg1;
- (void)_updateScrollAnimationForChangedTargetOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setAbsoluteContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 animationCurve:(int)arg3;
- (void)_moveContentSubview:(id)arg1 toBack:(BOOL)arg2;
- (BOOL)_canCancelContentTouches:(id)arg1;
- (BOOL)_resetScrollingForGestureEvent:(id)arg1;
- (void)_stopScrollingAndZoomingAnimations;
- (void)_adjustStartOffsetForGrabbedBouncingScrollView;
- (void)_clearParentAdjustment;
- (BOOL)_shouldTrackImmediatelyWhileDecelerating;
- (void)_adjustShadowsIfNecessary;
- (void)_delegateScrollViewAnimationEnded;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_originalOffsetForAnimatedSetContentOffset;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(BOOL)arg4;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1 tramplingDragFlags:(BOOL)arg2;
- (void)_clearContentOffsetAnimation;
- (void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2 tramplingDragFlags:(BOOL)arg3;
- (void)_stopScrollDecelerationNotify:(BOOL)arg1;
- (void)_scrollViewDidEndDecelerating;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 withOffset:(float)arg2;
- (float)_shadowHeightOffset;
- (float)_offsetForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4;
- (BOOL)_isBouncing;
- (double)_verticalVelocity;
- (double)_horizontalVelocity;
- (void)_setUseContentDimensionVariablesForConstraintLowering:(BOOL)arg1;
- (BOOL)_useContentDimensionVariablesForConstraintLowering;
- (void)setKeyboardDismissMode:(int)arg1;
- (id)scrollTestParameters;
- (id)pinchGestureRecognizer;
- (id)panGestureRecognizer;
- (void)_staticScrollBarScrollAnimationEnded;
- (struct CGPoint { float x1; float x2; })_pageDecelerationTarget;
- (BOOL)_isAnimatingZoom;
- (BOOL)isZoomBouncing;
- (void)zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1;
- (BOOL)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3;
- (float)maximumZoomScale;
- (void)setMaximumZoomScale:(float)arg1;
- (void)setMinimumZoomScale:(float)arg1;
- (float)_defaultPagingFriction;
- (void)_setPagingFriction:(float)arg1;
- (float)_pagingFriction;
- (BOOL)_ignoreLinkedOnChecks;
- (void)_setIgnoreLinkedOnChecks:(BOOL)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
- (BOOL)scrollsToTop;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)setDelaysContentTouches:(BOOL)arg1;
- (BOOL)delaysContentTouches;
- (void)setCanCancelContentTouches:(BOOL)arg1;
- (BOOL)canCancelContentTouches;
- (void)setBouncesZoom:(BOOL)arg1;
- (BOOL)bouncesZoom;
- (void)_setForwardsTouchesUpResponderChain:(BOOL)arg1;
- (BOOL)_forwardsTouchesUpResponderChain;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)_rubberBandToOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_touchPositionForTouches:(id)arg1;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (BOOL)_showsBackgroundShadow;
- (void)flashScrollIndicators;
- (void)setPreservesCenterDuringRotation:(BOOL)arg1;
- (BOOL)preservesCenterDuringRotation;
- (float)_scrollHysteresis;
- (void)_setContentOffsetRoundingEnabled:(BOOL)arg1;
- (BOOL)_contentOffsetRoundingEnabled;
- (BOOL)tracksImmediatelyWhileDecelerating;
- (void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1;
- (BOOL)allowsMultipleFingers;
- (void)setAllowsMultipleFingers:(BOOL)arg1;
- (void)setVerticalScrollDecelerationFactor:(float)arg1;
- (float)verticalScrollDecelerationFactor;
- (void)setHorizontalScrollDecelerationFactor:(float)arg1;
- (float)horizontalScrollDecelerationFactor;
- (int)indicatorStyle;
- (void)setDecelerationRate:(float)arg1;
- (float)decelerationRate;
- (void)setIndicatorStyle:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)showsVerticalScrollIndicator;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (BOOL)showsHorizontalScrollIndicator;
- (BOOL)_isHorizontalBouncing;
- (BOOL)_isVerticalBouncing;
- (void)_setTransfersScrollToContainer:(BOOL)arg1;
- (void)setAlwaysBounceHorizontal:(BOOL)arg1;
- (void)setAlwaysBounceVertical:(BOOL)arg1;
- (float)keyboardBottomInsetAdjustmentDelta;
- (BOOL)updateInsetBottomDuringKeyboardDismiss;
- (void)setUpdateInsetBottomDuringKeyboardDismiss:(BOOL)arg1;
- (BOOL)bouncesVertically;
- (void)setBouncesVertically:(BOOL)arg1;
- (BOOL)bouncesHorizontally;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (BOOL)bounces;
- (void)setBounces:(BOOL)arg1;
- (unsigned int)_abuttedPagingEdges;
- (void)setPagingEnabled:(BOOL)arg1;
- (BOOL)_isScrollingToTop;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)_setAdjustsTargetsOnContentOffsetChanges:(BOOL)arg1;
- (BOOL)_adjustsTargetsOnContentOffsetChanges;
- (BOOL)_isRectFullyVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)_panGestureRecognizer;
- (void)_smoothScrollIntoBounds;
- (void)_lowFidelityScrollInDirection:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetForLowFidelityScrollInDirection:(struct CGPoint { float x1; float x2; })arg1 duration:(double*)arg2;
- (struct CGPoint { float x1; float x2; })_animatedTargetOffset;
- (BOOL)_isAnimatingScroll;
- (void)_runLoopModePopped:(id)arg1;
- (void)_smoothScrollDisplayLink:(id)arg1;
- (void)_smoothScrollTimer:(id)arg1;
- (void)_smoothScrollWithUpdateTime:(double)arg1;
- (void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7;
- (BOOL)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8;
- (BOOL)_getPagingDecelerationOffset:(struct CADoublePoint { double x1; double x2; }*)arg1 forTimeInterval:(double)arg2;
- (void)_setContentOffsetAnimationDuration:(double)arg1;
- (double)_contentOffsetAnimationDuration;
- (float)_zoomScaleForRubberBandScale:(float)arg1;
- (void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_zoomAnchorPoint;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(float)arg2;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (float)_zoomRubberBandScaleForScale:(float)arg1;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (id)_layoutVariablesWithAmbiguousValue;
- (BOOL)_constraintAffectsContentSize:(id)arg1;
- (struct CGSize { float x1; float x2; })_nsis_contentSize;
- (void)_accumulateViewConstraintsIntoArray:(id)arg1;
- (void)_updatePanGesture;
- (void)_resetScrollingWithUIEvent:(id)arg1;
- (void)_endPanNormal:(BOOL)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(float)arg1 verticalVelocity:(float)arg2;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8;
- (void)_updatePinchGestureForState:(int)arg1;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7;
- (void)_scrollViewWillBeginZooming;
- (void)_setZoomAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg1;
- (void)_scrollViewDidEndZooming;
- (float)_zoomScaleFromPresentationLayer:(BOOL)arg1;
- (BOOL)_staysCenteredDuringPinch;
- (void)_popTrackingRunLoopMode;
- (void)_startTimer:(BOOL)arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (BOOL)_scrollViewWillEndDraggingWithDeceleration:(BOOL)arg1;
- (BOOL)_shouldScrollOnGestureRecognizerFailed;
- (int)keyboardDismissMode;
- (void)_scrollViewWillBeginDragging;
- (struct CADoublePoint { double x1; double x2; })_rubberBandContentOffsetForOffset:(struct CADoublePoint { double x1; double x2; })arg1 outsideX:(BOOL*)arg2 outsideY:(BOOL*)arg3;
- (float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(BOOL*)arg5;
- (BOOL)alwaysBounceVertical;
- (BOOL)alwaysBounceHorizontal;
- (void)_setShowsBackgroundShadow:(BOOL)arg1;
- (void)_flashScrollIndicatorsPersistingPreviousFlashes:(BOOL)arg1;
- (void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (float)minimumZoomScale;
- (void)_handleLowFidelitySwipe:(id)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_updatePinchGesture;
- (void)delayed:(id)arg1;
- (unsigned int)_currentlyAbuttedContentEdges;
- (unsigned int)_abuttedEdgesForContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updatePagingGesture;
- (void)_updateZoomGestureRecognizersEnabled;
- (id)_scrollViewTouchDelayGesture;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_registerAsScrollToTopViewIfPossible;
- (void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)_adjustCrossingConstraintsIfNecessaryForOldContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1;
- (void)_notifyDidScroll;
- (void)_setAutomaticContentConstraints:(id)arg1;
- (id)_constraintsFromContentSize;
- (id)_automaticContentConstraints;
- (void)_attemptToDragParent:(id)arg1 forNewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_adjustContentOffsetIfNecessary;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (float)zoomScale;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)_stopDraggingParent:(id)arg1;
- (void)_startDraggingParent:(id)arg1;
- (float)_adjustedVerticalOffsetPinnedToScrollableBounds:(float)arg1;
- (float)_adjustedHorizontalOffsetPinnedToScrollableBounds:(float)arg1;
- (BOOL)_transfersScrollToContainer;
- (BOOL)_stopBeingDraggedByChild:(id)arg1;
- (BOOL)_startBeingDraggedByChild:(id)arg1;
- (void)_updateScrollGestureRecognizersEnabled;
- (void)_handleSwipe:(id)arg1;
- (void)_updatePanGestureConfiguration;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)_setUsesStaticScrollBar:(BOOL)arg1;
- (BOOL)_usesLowFidelityPanning;
- (BOOL)isPagingEnabled;
- (void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
- (void)_updateUsesStaticScrollBar;
- (void)_hideScrollIndicators;
- (void)_staticScrollBar:(id)arg1 didScrollInDirection:(struct CGPoint { float x1; float x2; })arg2;
- (void)_layoutStaticScrollBar;
- (id)_staticScrollBar;
- (void)setScrollTestParameters:(id)arg1;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1;
- (BOOL)isDirectionalLockEnabled;
- (void)_centerContentIfNecessary;
- (BOOL)isZooming;
- (id)_getDelegateZoomView;
- (void)_updateContentFitDisableScrolling;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)_createGestureRecognizersForCurrentTouchLevel;
- (void)_clearContentOffsetAnimation:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_skipNextStartOffsetAdjustment;
- (BOOL)_isScrollingEnabled;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (void)_removeScrollNotificationView:(id)arg1;
- (void)_addScrollNotificationView:(id)arg1;
- (void)_setSubviewWantsAutolayoutTripWantsAutolayout:(BOOL)arg1;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (BOOL)_forwardsToParentScroller;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (BOOL)_supportsContentDimensionVariables;
- (void)_resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_didRemoveDependentConstraint:(id)arg1;
- (void)_didAddDependentConstraint:(id)arg1;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (id)_contentHeightVariable;
- (id)_contentWidthVariable;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (struct CGPoint { float x1; float x2; })_adjustedContentOffsetPinnedToScrollableBounds:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (BOOL)_canScrollY;
- (BOOL)_canScrollX;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)isTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (BOOL)isScrollEnabled;
- (void)setProgrammaticScrollEnabled:(BOOL)arg1;
- (BOOL)isProgrammaticScrollEnabled;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (BOOL)isDecelerating;
- (BOOL)isDragging;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)ab_adjustForAutomaticKeyboardInfo:(id)arg1 lastAdjustment:(float*)arg2;
- (float)ab_verticalOverlapUsingKeyboardInfo:(id)arg1;
- (void)ab_scrollToSelectionOfTextView:(id)arg1 animated:(BOOL)arg2;
- (void)ab_scrollToSelectionOfTextView:(id)arg1;
- (BOOL)mf_needsToAdjustContentOffset;
- (id)topExtensionViewColor;
- (void)setTopExtensionViewColor:(id)arg1;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (void)scrollBy:(float)arg1 forIterations:(int)arg2;
- (void)_testingScrollStep;
- (BOOL)restoreScrollPositionForKey:(id)arg1;
- (void)saveScrollPositionForKey:(id)arg1;
- (id)keyForContentMode:(int)arg1;
- (struct CGSize { float x1; float x2; })pu_currentContentSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pu_displayFrameForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)pu_isScrolledAtEdge:(unsigned int)arg1 tolerance:(float)arg2;
- (void)pu_scrollToContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)pu_scrollToEdge:(unsigned int)arg1 animated:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })__ck_scrollToBottomContentOffset;
- (struct CGSize { float x1; float x2; })__ck_contentSize;
- (BOOL)__ck_isScrolledToBottom;
- (void)__ck_scrollToTop:(BOOL)arg1;
- (BOOL)__ck_isScrolledToTop;
- (void)__ck_scrollToBottom:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })__ck_scrollToTopContentOffset;

@end
