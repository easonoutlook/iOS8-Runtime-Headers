/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, _UIBarButtonItemAppearanceStorage, NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage  {
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    UIImage *shadowImage;
    BOOL hidesShadow;
    int barMetrics;
    UIImage *backIndicatorImage;
    UIImage *backIndicatorTransitionMaskImage;
    NSNumber *backIndicatorLeftMargin;
    BOOL reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    BOOL _deferShadowToSearchBar;
    int defaultBarMetrics;
    int activeBarMetrics;
    NSString *_backdropViewGroupName;
}

@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * miniBackgroundImage;
@property(readonly) UIImage * promptBackgroundImage;
@property(readonly) UIImage * miniPromptBackgroundImage;
@property(readonly) UIImage * condensedBackgroundImage;
@property(readonly) UIImage * cardBackgroundImage;
@property(copy) NSDictionary * textAttributes;
@property(retain) UIImage * shadowImage;
@property BOOL hidesShadow;
@property int defaultBarMetrics;
@property int activeBarMetrics;
@property BOOL reversesShadowOffset;
@property(readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage;
@property(readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage;
@property BOOL deferShadowToSearchBar;
@property(retain) UIImage * backIndicatorImage;
@property(retain) UIImage * backIndicatorTransitionMaskImage;
@property(retain) NSNumber * backIndicatorLeftMargin;
@property(retain) NSString * backdropViewGroupName;

+ (int)typicalBarPosition;

- (void)setBackdropViewGroupName:(id)arg1;
- (id)backdropViewGroupName;
- (void)setDeferShadowToSearchBar:(BOOL)arg1;
- (BOOL)deferShadowToSearchBar;
- (void)setBackIndicatorLeftMargin:(id)arg1;
- (id)backIndicatorLeftMargin;
- (void)setBackIndicatorTransitionMaskImage:(id)arg1;
- (id)backIndicatorTransitionMaskImage;
- (void)setBackIndicatorImage:(id)arg1;
- (id)backIndicatorImage;
- (void)setActiveBarMetrics:(int)arg1;
- (int)activeBarMetrics;
- (void)setDefaultBarMetrics:(int)arg1;
- (int)defaultBarMetrics;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (void)setReversesShadowOffset:(BOOL)arg1;
- (BOOL)reversesShadowOffset;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;
- (void)setHidesShadow:(BOOL)arg1;
- (BOOL)hidesShadow;
- (id)representativeImageForIdiom:(int)arg1;
- (id)barButtonAppearanceStorage;
- (id)_barButtonAppearanceStorage;
- (float)titleVerticalAdjustmentForBarMetrics:(int)arg1;
- (void)setTitleVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)condensedBackgroundImage;
- (id)miniPromptBackgroundImage;
- (id)promptBackgroundImage;
- (id)miniBackgroundImage;
- (id)backgroundImage;
- (id)cardBackgroundImage;
- (void)dealloc;

@end
