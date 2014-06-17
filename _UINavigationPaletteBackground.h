/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UINavigationBar, UIColor, _UIBackdropView, _UINavigationControllerPalette, UIView;

@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {
    UIColor *_barTintColor;
    UIImageView *_shadowView;
    _UINavigationControllerPalette *_palette;
    UINavigationBar *_bar;
    _UIBackdropView *_adaptiveBackdrop;
    struct { 
        unsigned int barTranslucence : 3; 
        unsigned int barStyle : 3; 
        unsigned int paletteWantsAdaptiveBackdrop : 1; 
    } _navbarFlags;
}

@property int barStyle;
@property(retain) UIColor * barTintColor;
@property(getter=_shadowView,setter=_setShadowView:,retain) UIView * shadowView;
@property(getter=isTranslucent) BOOL translucent;
@property BOOL paletteWantsAdaptiveBackdrop;


- (void)setPaletteWantsAdaptiveBackdrop:(BOOL)arg1;
- (BOOL)paletteWantsAdaptiveBackdrop;
- (void)_syncWithBarStyles;
- (void)updateBackgroundView;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2;
- (void)_setShadowView:(id)arg1;
- (id)barTintColor;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (int)barStyle;
- (void)setBarStyle:(int)arg1;
- (id)_shadowView;
- (id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2;
- (void)didMoveToSuperview;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)isTranslucent;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end