/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SSMetricsPageEvent, SSVLoadURLOperation, NSURLRequest, UIRefreshControl, SKUIStorePageSectionsViewController, SKUIClientContext, SKUIStorePage, <SKUIStorePageDelegate>, SKUIMetricsController, SKUIColorScheme, NSDictionary, NSString, NSOperationQueue;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {
    SKUIClientContext *_clientContext;
    <SKUIStorePageDelegate> *_delegate;
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    BOOL _loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    UIRefreshControl *_refreshControl;
    SKUIStorePageSectionsViewController *_sectionsViewController;
    SKUIStorePage *_storePage;
}

@property(getter=isLoading,readonly) BOOL loading;
@property(copy) SKUIStorePage * storePage;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIStorePageDelegate> * delegate;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) UIRefreshControl * refreshControl;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)storePage;
- (void)_runPerformanceTestAfterIdle;
- (void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(id)arg3;
- (void)setStorePage:(id)arg1;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (BOOL)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;
- (BOOL)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
- (void)cancelPageLoad;
- (void)_runPerformanceTestAfterPageLoad;
- (void)_showProductPage:(id)arg1 withPageEvent:(id)arg2;
- (void)_runScrollTestWithName:(id)arg1 options:(id)arg2;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)_reloadStorePage;
- (void)_loadWithOperation:(id)arg1 completionBlock:(id)arg2;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(id)arg2;
- (id)_sectionsViewController;
- (id)activeMetricsController;
- (void)loadURL:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (BOOL)performTestWithName:(id)arg1 options:(id)arg2;
- (void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (id)clientContext;
- (id)_colorScheme;
- (void)setClientContext:(id)arg1;
- (id)operationQueue;
- (void).cxx_destruct;
- (id)refreshControl;
- (void)setRefreshControl:(id)arg1;
- (BOOL)isLoading;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
