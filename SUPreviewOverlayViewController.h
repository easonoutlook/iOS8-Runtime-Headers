/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SUPreviewOverlayStorePageViewController, NSString;

@interface SUPreviewOverlayViewController : SUViewController  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    BOOL _loaded;
    float _paddingRight;
    float _paddingTop;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    NSString *_userInfoString;
    BOOL _visible;
}

@property(getter=isContentLoaded,readonly) BOOL contentLoaded;
@property struct CGSize { float x1; float x2; } contentSize;
@property float paddingRight;
@property float paddingTop;
@property(copy) NSString * userInfoString;

+ (void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;
+ (double)defaultAnimationDuration;
+ (id)defaultRequestProperties;

- (id)userInfoString;
- (id)_scrollViewForViewController:(id)arg1;
- (id)_previewOverlayContainerForViewController:(id)arg1;
- (void)setUserInfoString:(id)arg1;
- (void)invalidateForMemoryPurge;
- (void)showInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)hideInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (id)_storePageViewController;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)showInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(id)arg2;
- (BOOL)isContentLoaded;
- (void)hideInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)setPaddingRight:(float)arg1;
- (float)paddingRight;
- (void)setPaddingTop:(float)arg1;
- (float)paddingTop;
- (void)loadView;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)loadWithCompletionBlock:(id)arg1;

@end
