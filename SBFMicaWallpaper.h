/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class _UICAPackageView, NSBundle, UIView;

@interface SBFMicaWallpaper : SBFProceduralWallpaper  {
    NSBundle *_loadedBundle;
    _UICAPackageView *_packageView;
    UIView *_rootView;
}

+ (id)thumbnailImageForOptions:(id)arg1;
+ (id)presetWallpaperOptions;
+ (id)identifier;

- (void)_loadView;
- (void)_unloadView;
- (void)setWallpaperOptions:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end