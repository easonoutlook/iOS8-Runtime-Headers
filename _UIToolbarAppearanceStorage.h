/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage  {
    UIImage *shadowImage;
    UIImage *topShadowImage;
    BOOL hidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * miniBackgroundImage;
@property(retain) UIImage * topBackgroundImage;
@property(retain) UIImage * miniTopBackgroundImage;
@property(retain) UIImage * shadowImage;
@property(retain) UIImage * topShadowImage;
@property BOOL hidesShadow;

+ (int)typicalBarPosition;

- (void)setMiniTopBackgroundImage:(id)arg1;
- (void)setTopBackgroundImage:(id)arg1;
- (void)setMiniBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setTopShadowImage:(id)arg1;
- (id)miniTopBackgroundImage;
- (id)topBackgroundImage;
- (id)topShadowImage;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (void)setHidesShadow:(BOOL)arg1;
- (BOOL)hidesShadow;
- (id)miniBackgroundImage;
- (id)backgroundImage;
- (void)dealloc;

@end
