/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIResourceLoader, SKUILayoutCache, <SKUIProductPageChildViewControllerDelegate>, UIScrollView, SKUIClientContext, SKUIProductPageTableViewController, SKUIProductPage, SKUIProductPageTableHeaderOnlySection, SKUIProductPageHeaderViewController, SKUIProductPageTableTextBoxSection, NSOperationQueue, NSMutableArray;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController> {
    BOOL _askPermission;
    SKUIClientContext *_clientContext;
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIResourceLoader *_resourceLoader;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}

@property(readonly) SKUIProductPage * productPage;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSOperationQueue * operationQueue;
@property BOOL askPermission;
@property(readonly) UIScrollView * scrollView;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;

+ (float)defaultPageWidthForUserInterfaceIdiom:(int)arg1;

- (id)tableViewForTableViewSection:(id)arg1;
- (void)screenshotsWillBeginDragging:(id)arg1;
- (void)_configureSwooshSection:(id)arg1;
- (id)_copyrightSection;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (void)_expandSection:(id)arg1;
- (id)_infoSection;
- (id)_featuresSection;
- (id)_whatsNewSection;
- (id)_descriptionSection;
- (id)_screenshotsSection;
- (id)_parentBundlesSection;
- (id)_bundledAppsSection;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(float)arg2;
- (id)_storeNotesSection;
- (BOOL)askPermission;
- (void)setHeaderViewController:(id)arg1;
- (id)headerViewController;
- (id)productPage;
- (id)clientContext;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)initWithProductPage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setAskPermission:(BOOL)arg1;
- (id)operationQueue;
- (void).cxx_destruct;
- (id)_tableViewController;
- (id)scrollView;
- (void)setOperationQueue:(id)arg1;
- (void)loadView;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)_resourceLoader;

@end
