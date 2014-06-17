/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUINavigationBarContext, SKUIViewElementLayoutContext, UIView;

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {
    SKUINavigationBarContext *_navigationBarContext;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property(retain) SKUINavigationBarContext * context;
@property(readonly) SKUIViewElementLayoutContext * viewLayoutContext;
@property(readonly) UIView * view;


- (id)viewLayoutContext;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)reloadSectionViews;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInNavigationBar;
- (void)reloadAfterDocumentUpdate;
- (id)viewForElementIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg1;
- (id)view;
- (id)context;
- (void)dealloc;

@end