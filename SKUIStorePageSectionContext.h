/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, SKUIStorePageSectionsViewController, SKUIMetricsController, UICollectionView, SKUIClientContext, SKUIItemOfferButtonAppearance, SKUILayoutCache, SKUIResourceLoader, UIColor;

@interface SKUIStorePageSectionContext : NSObject  {
    float _activePageWidth;
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    float _landscapePageWidth;
    SKUIMetricsController *_metricsController;
    SKUIStorePageSectionsViewController *_parentViewController;
    UIColor *_placeholderColor;
    float _portraitPageWidth;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
    int _layoutStyle;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) UICollectionView * collectionView;
@property(readonly) SKUIColorScheme * colorScheme;
@property(readonly) UIColor * placeholderColor;
@property(readonly) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(readonly) float activePageWidth;
@property(readonly) float landscapePageWidth;
@property(readonly) float portraitPageWidth;
@property(readonly) int layoutStyle;
@property(readonly) SKUIMetricsController * metricsController;
@property(readonly) SKUIStorePageSectionsViewController * parentViewController;
@property(readonly) SKUIResourceLoader * resourceLoader;
@property(readonly) SKUILayoutCache * textLayoutCache;


- (id)resourceLoader;
- (id)itemOfferButtonAppearance;
- (id)placeholderColor;
- (id)textLayoutCache;
- (float)activePageWidth;
- (float)landscapePageWidth;
- (float)portraitPageWidth;
- (void)_setPortraitPageWidth:(float)arg1;
- (void)_setLandscapePageWidth:(float)arg1;
- (void)_setActivePageWidth:(float)arg1;
- (void)_setTextLayoutCache:(id)arg1;
- (void)_setResourceLoader:(id)arg1;
- (void)_setLayoutStyle:(int)arg1;
- (id)metricsController;
- (void)_setMetricsController:(id)arg1;
- (void)_setColorScheme:(id)arg1;
- (void)_setParentViewController:(id)arg1;
- (int)layoutStyle;
- (id)clientContext;
- (id)colorScheme;
- (void)_setCollectionView:(id)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)parentViewController;
- (id)init;

@end
