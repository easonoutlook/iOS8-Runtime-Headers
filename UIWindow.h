/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, UIColor, _UISystemGestureGateGestureRecognizer, UIScreen, FBSScene, _UIResponderSelectionCursor, UITraitCollection, _UISimulatedApplicationResizeGestureRecognizerDelegate, _UIWindowAnimationController, NSUndoManager, NSMutableSet, UIView, UIViewController, NSArray, NSString, _UIViewControllerNullAnimationTransitionCoordinator, UIResponder, NSMutableArray;

@interface UIWindow : UIView <NSISEngineDelegate> {
    id _delegate;
    float _windowLevel;
    float _windowSublevel;
    id _layerContext;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    id _touchData;
    int _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    UIScreen *_screen;
    CALayer *_transformLayer;
    NSMutableArray *_rotationViewControllers;
    UIViewController *_rootViewController;
    UIColor *_savedBackgroundColor;
    NSMutableSet *_subtreeMonitoringViews;
    NSMutableSet *_tintViews;
    id _currentTintView;
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int isHandlingContentRotation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
        unsigned int legacyOrientationChecks : 1; 
        unsigned int windowResizedToFullScreen : 1; 
        unsigned int statusBarFollowsOrientation : 1; 
        unsigned int secure : 1; 
        unsigned int isMainSceneSized : 1; 
    } _windowFlags;
    id _windowController;
    BOOL _attachable;
    NSString *_debugName;
    FBSScene *_scene;
    _UIResponderSelectionCursor *_responderSelectionCursor;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    struct __CFDictionary { } *_touchMap;
    int _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    unsigned int _systemGesturesArePossible : 1;
    BOOL __containedGestureRecognizersShouldRespectGestureServerInstructions;
    BOOL __usesLegacySupportedOrientationChecks;
    BOOL __shouldHitTestEntireScreen;
    _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
    NSArray *_windowInternalConstraints;
    NSArray *_rootViewConstraints;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deferredLaunchBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __rotationCompleteBlock;

    int _toWindowOrientation;
    int _fromWindowOrientation;
    _UIWindowAnimationController *__animationController;
    _UISimulatedApplicationResizeGestureRecognizerDelegate *__simulatedApplicationResizeGestureRecognizerDelegate;
}

@property(readonly) struct CGSize { float x1; float x2; } MPU_rootViewSize;
@property(retain) UIScreen * screen;
@property float windowLevel;
@property(getter=isKeyWindow,readonly) BOOL keyWindow;
@property(retain) UIViewController * rootViewController;
@property(setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions;
@property(setter=_setWindowInternalConstraints:,copy) NSArray * _windowInternalConstraints;
@property(readonly) BOOL _usesLegacySupportedOrientationChecks;
@property(setter=_setDeferredLaunchBlock:,copy) id _deferredLaunchBlock;
@property(setter=_setRotationCompleteBlock:,copy) id _rotationCompleteBlock;
@property(setter=_setLegacyOrientationChecks:) BOOL _legacyOrientationChecks;
@property(getter=_toWindowOrientation,readonly) int toWindowOrientation;
@property(getter=_fromWindowOrientation,readonly) int fromWindowOrientation;
@property(getter=_animationController,setter=_setAnimationController:,retain) _UIWindowAnimationController * _animationController;
@property(readonly) struct { int x1; int x2; } __sizeClassPair;
@property(setter=_setRootViewConstraints:,copy) NSArray * _rootViewConstraints;
@property(setter=_setSimulatedApplicationResizeGestureRecognizerDelegate:,retain) _UISimulatedApplicationResizeGestureRecognizerDelegate * _simulatedApplicationResizeGestureRecognizerDelegate;
@property(setter=_setShouldHitTestEntireScreen:) BOOL _shouldHitTestEntireScreen;
@property(setter=_setTraitCollectionChangeTransitionCoordinator:,retain) _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;

+ (id)_findWithDisplayPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_statusBarControllingWindow;
+ (void*)createScreenIOSurface;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg5;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_popKeyWindow;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(BOOL)arg1;
+ (void)_clearKeyWindowStack;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (void)_setTransformLayerRotationsAreEnabled:(BOOL)arg1;
+ (void)setAllWindowsKeepContextInBackground:(BOOL)arg1;
+ (Class)layerClass;
+ (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 withBlock:(id)arg3;
+ (id)_hitTestToPoint:(struct CGPoint { float x1; float x2; })arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceFromScreen:(id)arg1;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 usePurpleGfx:(BOOL)arg5 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg6;
+ (void)_popKeyWindow:(id)arg1;
+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(BOOL)arg2;
+ (unsigned int)_keyWindowStackSize;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id)arg2;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)arg1;
+ (BOOL)_transformLayerRotationsAreEnabled;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (void)initialize;
+ (void)_prepareWindowsForAppResume;
+ (void)_prepareWindowsPassingTestForAppResume:(id)arg1;
+ (id)_externalKeyWindow;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 forScreen:(id)arg3;
+ (void)_prepareWindowsForAppSuspend;
+ (id)_topVisibleWindowPassingTest:(id)arg1;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2;
+ (void)_synchronizeDrawing;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2 forAutolayoutRootViewsOnly:(BOOL)arg3;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (id)keyWindow;
+ (void)_executeDeferredLaunchBlocks;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;

- (BOOL)_isLoweringAnchoringConstraints;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(BOOL)arg2 contentInsetScale:(float)arg3;
- (void)_setIsLoweringAnchoringConstraints:(BOOL)arg1;
- (void)_uiib_invalidateWindowInternalConstraints;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (unsigned int)_expectedWindowInternalConstraintsCount;
- (BOOL)hasAmbiguousLayout;
- (id)_redundantConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)exerciseAmbiguityInLayout;
- (id)_descendantWithAmbiguousLayout;
- (id)_uiib_candidateRedundantConstraints;
- (void)_initializeLayoutEngine;
- (void)_invalidateWindowInternalConstraints;
- (id)_hostingHandle;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)matchDeviceOrientation:(id)arg1;
- (void)setupForOrientation:(int)arg1;
- (void)keyboardDidHide;
- (void)_matchDeviceOrientation;
- (float)_classicOffset;
- (void)updateConstraints;
- (id)_layoutEngineIfAvailable;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (id)_responderWindow;
- (void)updateConstraintsIfNeeded;
- (void)_switchToLayoutEngine:(id)arg1;
- (id)_layoutEngineCreateIfNecessary;
- (void)_setAnimationController:(id)arg1;
- (int)_fromWindowOrientation;
- (BOOL)_usesLegacySupportedOrientationChecks;
- (void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(BOOL)arg1;
- (BOOL)_containedGestureRecognizersShouldRespectGestureServerInstructions;
- (id)_windowInternalConstraints;
- (id)_traitCollectionChangeTransitionCoordinator;
- (BOOL)_isSecure;
- (id)_normalInheritedTintColor;
- (id)_rootLayer;
- (id)_directionalGestureRecognizers;
- (void)_geometryDidChangeForView:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (void)_writeLayerTreeToPath:(id)arg1;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (void)setResizesToFullScreen:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_isInAWindow;
- (struct CADoublePoint { double x1; double x2; })_convertDoublePointFromSceneReferenceSpace:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })_convertDoublePointToSceneReferenceSpace:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void*)createIOSurface;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_firstResponder;
- (BOOL)_isSettingFirstResponder;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_unregisterChargedView:(id)arg1;
- (void)_registerChargedView:(id)arg1;
- (void)_makeExternalKeyWindow;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (struct { int x1; int x2; })__sizeClassPair;
- (void)setScreen:(id)arg1;
- (void)_allContainedGestureRecognizersWereReset;
- (void)_updateContainedGestureRecognizerState;
- (BOOL)_shouldDelayTouchForSystemGestures:(id)arg1;
- (BOOL)_systemGestureRecognitionIsPossible;
- (id)_appearanceContainer;
- (void)synchronizeDrawingWithID:(int)arg1 count:(unsigned int)arg2;
- (BOOL)isUsingOnePartRotationAnimation;
- (BOOL)autorotates;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_forceTwoPartRotationAnimation:(BOOL)arg1;
- (void)_setRotatableViewOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2;
- (void)setAutorotates:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_setWindowControlsStatusBarOrientation:(BOOL)arg1;
- (unsigned int)_supportedInterfaceOrientationsForRootViewController;
- (void)_clearPendingKeyboardChanges;
- (void)_removeRotationViewController:(id)arg1;
- (void)_addRotationViewController:(id)arg1;
- (void)_slideFooterFromOrientation:(int)arg1 toOrientation:(int)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)setBecomeKeyOnOrderFront:(BOOL)arg1;
- (float)level;
- (struct CGPoint { float x1; float x2; })convertDeviceToWindow:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertWindowToDevice:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_containedInAbsoluteResponderChain;
- (float)_convertVisualAltitude:(float)arg1 toWindow:(id)arg2;
- (float)_convertVisualAltitude:(float)arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffsetFromSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertOffsetToSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (BOOL)_disableAutomaticKeyboardUI;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (void)makeKey:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)_setLegacyOrientationChecks:(BOOL)arg1;
- (BOOL)_legacyOrientationChecks;
- (BOOL)_disableViewScaling;
- (void)_orderContextToFront;
- (BOOL)_hasContext;
- (void)_transformLayerShouldMaskToBounds:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 debugName:(id)arg2;
- (id)_debugName;
- (BOOL)_shouldHitTestEntireScreen;
- (id)_simulatedApplicationResizeGestureRecognizerDelegate;
- (void)_setSimulatedApplicationResizeGestureRecognizerDelegate:(id)arg1;
- (void)_scrollResponderToVisible:(id)arg1;
- (BOOL)_isPoint:(struct CGPoint { float x1; float x2; })arg1 relativeToPoint:(struct CGPoint { float x1; float x2; })arg2 inDirection:(int)arg3;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)loadFirstResponderScrollViewContentInDirection:(struct CGSize { float x1; float x2; })arg1;
- (void)_moveResponderSelectionInDirection:(int)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_moveWithEvent:(id)arg1;
- (void)moveToNextResponderInDirection:(int)arg1;
- (BOOL)resizesToFullScreen;
- (void)_updateCurrentTintView;
- (void)_updateAppTintView;
- (BOOL)_shouldResizeWithScene;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (BOOL)_isStatusBarWindow;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)_canPromoteFromKeyWindowStack;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint { float x1; float x2; })arg1;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateIsSceneSizedFlag;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_traitCollectionForSize:(struct CGSize { float x1; float x2; })arg1 screen:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { float x1; float x2; })arg1 screenCollection:(id)arg2;
- (void)_updateWindowTraitsAndNotify:(BOOL)arg1;
- (BOOL)_alwaysGetsContexts;
- (void)_updateAncestorGestureRecognizerState;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(BOOL)arg4;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)contentView;
- (id)__clientsForRotationCallbacks;
- (void)_rotateWindowToOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 skipCallbacks:(BOOL)arg4;
- (void)_rotateToBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 applyTransformToWindow:(BOOL)arg3 updateStatusBar:(BOOL)arg4 duration:(double)arg5 force:(BOOL)arg6 isRotating:(BOOL)arg7;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2 fenceID:(int)arg3 animation:(int)arg4;
- (void)_setRotatableViewOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (BOOL)isInterfaceAutorotationDisabled;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_setShouldHitTestEntireScreen:(BOOL)arg1;
- (id)_rotationCompleteBlock;
- (void)_willChangeToSize:(struct CGSize { float x1; float x2; })arg1 orientation:(int)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
- (int)_toWindowOrientation;
- (void)_setDeferredLaunchBlock:(id)arg1;
- (id)_deferredLaunchBlock;
- (void)_updateSimulatedApplicationResizeGestureForInterfaceOrientationChange;
- (BOOL)_isAnyWindowRotating;
- (BOOL)_legacyShouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)_clientsForRotation;
- (id)_rotationViewControllers;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (id)_rootForKeyResponderCycle;
- (struct CGPoint { float x1; float x2; })_convertPointFromSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertPointToSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendButtonGesturesForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (BOOL)_isScrollingEnabledForView:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (float)_chargeMultiplicationFactor;
- (float)_touchSloppinessFactor;
- (void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)addRootViewControllerViewIfPossible;
- (void)_resignKeyWindowStatus;
- (void)makeKeyWindow;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_setRootViewConstraints:(id)arg1;
- (id)_rootViewConstraints;
- (void)_beginKeyWindowDeferral;
- (void)_destroyContext;
- (BOOL)keepContextInBackground;
- (void)_createContext;
- (void)_destroyContextFromScreen:(id)arg1;
- (void)_updateSceneIfNecessary;
- (void)setLevel:(float)arg1;
- (void)_configureContextOptions:(id)arg1;
- (BOOL)_disableGroupOpacity;
- (BOOL)_ignoresHitTest;
- (int)windowOutput;
- (void)_createContextAttached:(BOOL)arg1;
- (BOOL)_isClippedByScreenJail;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_isOffsetByScreenJail;
- (BOOL)_isScaledByScreenJail;
- (BOOL)_isRotatedByScreenJail;
- (void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)arg1;
- (void)_endKeyWindowDeferral;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setWindowInternalConstraints:(id)arg1;
- (void)_resizeWindowToFullScreenIfNecessary;
- (void)awakeFromNib;
- (void)_commonInit;
- (void)_updateContextOrderingAndSetLayerHidden:(BOOL)arg1;
- (int)bitsPerComponent;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 debugName:(id)arg2 scene:(id)arg3 attached:(BOOL)arg4;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 debugName:(id)arg2 attached:(BOOL)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 attached:(BOOL)arg2;
- (void)_commonInitAttachedWindow:(BOOL)arg1 debugName:(id)arg2 scene:(id)arg3;
- (void)_installSimulatedApplicationResizeGesture;
- (void)_createContextIfNecessaryForCurrentApplicationState;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)_sceneBoundsDidChange;
- (void)_updateTransformLayer;
- (void)_setScene:(id)arg1;
- (id)_window;
- (id)_window;
- (BOOL)isInternalWindow;
- (BOOL)_canBecomeKeyWindow;
- (id)traitCollection;
- (BOOL)_canAffectStatusBarAppearance;
- (id)_targetWindowForPathIndex:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (BOOL)_usesWindowServerHitTesting;
- (void)endDisablingInterfaceAutorotation;
- (void)beginDisablingInterfaceAutorotation;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (BOOL)_isHostedInAnotherProcess;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneBounds;
- (BOOL)_isConstrainedByScreenJail;
- (void)_setExclusiveTouchView:(id)arg1;
- (id)_exclusiveTouchView;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })warpPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_clampPointToScreenJail:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setSystemGestureRecognitionIsPossible:(BOOL)arg1 andTouchesAreCancelled:(BOOL)arg2;
- (void)_setFirstResponder:(id)arg1;
- (float)windowLevel;
- (BOOL)_isWindowServerHostingManaged;
- (void)_endModalSession;
- (void)_beginModalSession;
- (id)_scene;
- (BOOL)becomeFirstResponder;
- (BOOL)isKeyWindow;
- (id)rootViewController;
- (void)_updateWindowTraits;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)_windowInterfaceOrientation;
- (BOOL)_shouldParticipateInVirtualResizing;
- (id)_deepestUnambiguousResponder;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (id)_touchData;
- (id)representation;
- (void)synchronizeDrawingWithID:(int)arg1;
- (struct __CFDictionary { }*)_touchMap;
- (BOOL)_needsShakesWhenInactive;
- (id)undoManager;
- (void)sendEvent:(id)arg1;
- (BOOL)_includeInDefaultImageSnapshot;
- (BOOL)_shouldZoom;
- (void)_setRotationCompleteBlock:(id)arg1;
- (BOOL)isRotating;
- (id)_currentTintView;
- (BOOL)_windowControlsStatusBarOrientation;
- (id)screen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneReferenceBounds;
- (unsigned int)_contextId;
- (void)_orderFrontWithoutMakingKey;
- (void)setWindowLevel:(float)arg1;
- (void)_setSecure:(BOOL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)firstResponder;
- (id)nextResponder;
- (void)setRootViewController:(id)arg1;
- (BOOL)_isTextEffectsWindow;
- (int)interfaceOrientation;
- (void)makeKeyAndVisible;
- (BOOL)_clearMouseView;
- (id)_animationController;
- (id)delegate;
- (void)removeFromSuperview;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_screen;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)copyIOSurfaceSnapshotView:(int)arg1;
- (id)removeTouchCaptureViewWithTag:(int)arg1;
- (id)addTouchCaptureViewWithTag:(int)arg1;
- (struct CGSize { float x1; float x2; })MPU_rootViewSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_axConvertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;

@end
