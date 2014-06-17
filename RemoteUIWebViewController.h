/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIToolbar, _UIBackdropView, <RemoteUIWebViewControllerDelegate>, UIWebView;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
    UIWebView *_webView;
    UIToolbar *_toolbar;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadCompletion;

    _UIBackdropView *_statusBarBackdrop;
    BOOL _scalesPageToFit;
    <RemoteUIWebViewControllerDelegate> *_delegate;
}

@property <RemoteUIWebViewControllerDelegate> * delegate;
@property(readonly) UIToolbar * toolbar;
@property(readonly) UIWebView * webView;
@property BOOL scalesPageToFit;


- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)setScalesPageToFit:(BOOL)arg1;
- (BOOL)scalesPageToFit;
- (id)webView;
- (id)toolbar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)delegate;
- (void)loadURL:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end