/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIWindow, FBSDisplay, NSMutableArray, UISoftwareDimmingWindow, UIScreenMode, NSDictionary, UIScreen, UITraitCollection, _UIScreenTransparentHitTestWindow;

@interface UIScreen : NSObject <_UITraitEnvironmentInternal, UITraitEnvironment> {
    id _display;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _referenceBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _interfaceOrientedBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unjailedReferenceBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mainSceneReferenceBounds;
    int _interfaceOrientation;
    float _scale;
    float _touchScaleFactor;
    float _horizontalScale;
    int _userInterfaceIdiom;
    NSDictionary *_capabilities;
    UIWindow *_screenDisablingWindow;
    double _startedPausingWindows;
    NSMutableArray *_pausedWindows;
    _UIScreenTransparentHitTestWindow *_extendedJailHitTestWindow;
    NSArray *_availableDisplayModes;
    float _pointsPerInch;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int screenUpdatesDisabled : 1; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
    } _screenFlags;
    BOOL _wantsSoftwareDimming;
    BOOL _jailUsesHitTestWindow;
    UITraitCollection *_defaultTraitCollection;
    UITraitCollection *_overrideTraitCollection;
    UITraitCollection *_lastNotifiedTraitCollection;
    FBSDisplay *_fbsDisplay;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    int _lastNotifiedBacklightLevel;
    float _jailScale;
    int _jailOrientation;
    struct CGSize { 
        float width; 
        float height; 
    } _jailSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _jailOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _jailTouchInsets;
}

@property(readonly) float _gkScale;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _gkBounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } applicationFrame;
@property(readonly) float scale;
@property(copy,readonly) NSArray * availableModes;
@property(retain,readonly) UIScreenMode * preferredMode;
@property(retain) UIScreenMode * currentMode;
@property int overscanCompensation;
@property(retain,readonly) UIScreen * mirroredScreen;
@property float brightness;
@property BOOL wantsSoftwareDimming;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } nativeBounds;
@property(readonly) float nativeScale;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _referenceBounds;
@property(getter=_unjailedReferenceBounds,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _unjailedReferenceBounds;
@property(getter=_jailSize,setter=_setJailSize:) struct CGSize { float x1; float x2; } jailSize;
@property(getter=_jailOffset,setter=_setJailOffset:) struct CGPoint { float x1; float x2; } jailOffset;
@property(getter=_jailScale,setter=_setJailScale:) float jailScale;
@property(getter=_jailOrientation,setter=_setJailOrientation:) int jailOrientation;
@property(getter=_jailTouchInsets,setter=_setJailTouchInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } jailTouchInsets;
@property(getter=_jailUsesHitTestWindow,setter=_setJailUsesHitTestWindow:) BOOL jailUsesHitTestWindow;
@property(setter=_setSoftwareDimmingWindow:,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;
@property(setter=_setLastNotifiedBacklightLevel:) int _lastNotifiedBacklightLevel;
@property(retain) FBSDisplay * fbsDisplay;
@property(getter=_defaultTraitCollection,setter=_setDefaultTraitCollection:) UITraitCollection * defaultTraitCollection;
@property(getter=_overrideTraitCollection,setter=_setOverrideTraitCollection:) UITraitCollection * overrideTraitCollection;
@property(getter=_lastNotifiedTraitCollection,setter=_setLastNotifiedTraitCollection:,retain) UITraitCollection * lastNotifiedTraitCollection;
@property(readonly) UITraitCollection * traitCollection;

+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (id)_carScreen;
+ (void)_videoOutSettingsChanged;
+ (BOOL)_shouldDisableJail;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(BOOL)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForScreenOriginRotation:(float)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)screens;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToRotateScreen:(float)arg1;
+ (void)_endDisableScreenUpdates;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (void)initialize;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)_prepareScreensForAppResume;
+ (void)_enumerateScreensWithBlock:(id)arg1;
+ (id)_workspaceCapableScreens;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
+ (id)mainScreen;
+ (id)sbs_screenTypes;
+ (id)sbs_snapshotImagePathComponent:(int)arg1;
+ (id)sbs_launchImageInfoPlistKeyModifier:(int)arg1;

- (void)_setSpeed:(float)arg1 forWindow:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_jailTouchInsets;
- (void)_setJailOrientation:(int)arg1;
- (void)_setJailScale:(float)arg1;
- (void)_setJailOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_jailOffset;
- (void)setWantsSoftwareDimming:(BOOL)arg1;
- (BOOL)wantsSoftwareDimming;
- (id)_defaultTraitCollection;
- (struct CGSize { float x1; float x2; })_jailSize;
- (float)nativeScale;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)brightness;
- (void)setBrightness:(float)arg1;
- (id)_display;
- (BOOL)_areMusicListsLimited;
- (BOOL)_areListsLimited;
- (void)_setJailUsesHitTestWindow:(BOOL)arg1;
- (void)_setJailTouchInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setJailSize:(struct CGSize { float x1; float x2; })arg1;
- (int)_workspaceCapableScreenType;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setOverrideTraitCollection:(id)arg1;
- (BOOL)_isCarScreen;
- (unsigned int)_seed;
- (void)setOverscanCompensation:(int)arg1;
- (int)overscanCompensation;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (double)_refreshRate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsInPixels;
- (BOOL)_isRotatable;
- (struct CGPoint { float x1; float x2; })_positionForWindowTransformLayerInJail:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_rawJailedBoundsEdgeInsets;
- (void)_ensureConnectedIfPossible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nativeBounds;
- (id)_lazySoftwareDimmingWindow;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (BOOL)_supportsBrightness;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_setLastNotifiedBacklightLevel:(int)arg1;
- (int)_lastNotifiedBacklightLevel;
- (id)_softwareDimmingWindow;
- (BOOL)_isUIElementLimited:(id)arg1;
- (BOOL)_jailUsesHitTestWindow;
- (id)_capabilities;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_updateCapabilities;
- (void)_updateTraits;
- (void)setCurrentMode:(id)arg1;
- (id)preferredMode;
- (BOOL)_isExternal;
- (BOOL)_hasStatusBar;
- (BOOL)_isOverscanned;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (BOOL)_hasWindows;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_endObservingBacklightLevelNotifications;
- (void)_beginObservingBacklightLevelNotifications;
- (void)_disconnectScreen;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(BOOL)arg2;
- (void)setFbsDisplay:(id)arg1;
- (void)_enableScreenUpdates;
- (void)_disableScreenUpdates:(BOOL)arg1;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (void)_updateAvailableDisplayModes;
- (void)_connectScreen;
- (BOOL)_isWorkspaceCapable;
- (void)_computeMetrics;
- (id)initWithDisplay:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_interfaceOrientedBounds;
- (int)_interfaceOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2 ignoreStatusBar:(BOOL)arg3;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (id)currentMode;
- (id)_overrideTraitCollection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1;
- (BOOL)_wantsWideContentMargins;
- (id)_capabilityForKey:(id)arg1;
- (id)mirroredScreen;
- (id)_lastNotifiedTraitCollection;
- (void)_setUserInterfaceIdiom:(int)arg1;
- (id)snapshot;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (id)snapshotView;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (int)_imageOrientation;
- (BOOL)_canFocusViews;
- (BOOL)_isDisplayPointWithinExtendedJailBounds:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_unjailedReferenceBounds;
- (id)_displayID;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_jailedBoundsEdgeInsets;
- (struct CGPoint { float x1; float x2; })_positionForWindowTransformLayerInJail:(BOOL)arg1 offsetByScreenJail:(BOOL)arg2;
- (float)_horizontalPixelScale;
- (float)_jailScale;
- (int)_jailOrientation;
- (float)_rotation;
- (int)bitsPerComponent;
- (id)_name;
- (float)_pointsPerInch;
- (float)_scale;
- (id)traitCollection;
- (float)_touchScaleFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_realDisplayBounds;
- (BOOL)_areBoundsJailed;
- (void)_enumerateWindowsWithBlock:(id)arg1;
- (void)_setScale:(float)arg1;
- (void)_updateUserInterfaceIdiom;
- (float)scale;
- (BOOL)_isMainScreen;
- (unsigned int)_integerDisplayID;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationFrame;
- (id)_defaultTraitCollectionForInterfaceOrientation:(int)arg1;
- (void)_setInterfaceOrientation:(int)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)fbsDisplay;
- (int)_userInterfaceIdiom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_referenceBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForInterfaceOrientation:(int)arg1;
- (id)availableModes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gkBounds;
- (float)_gkScale;
- (id)_mapkit_display;
- (id)sbs_snapshotImagePathComponent;
- (id)sbs_launchImageInfoPlistKeyModifier;
- (BOOL)sbs_isMainScreen;
- (BOOL)sbs_isCarScreen;

@end