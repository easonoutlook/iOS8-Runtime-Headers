/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class RUIWebContainerView, NSURL, <RUITableFooterDelegate>;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {
    RUIWebContainerView *_webContainerView;
    <RUITableFooterDelegate> *_delegate;
    NSURL *_baseURL;
}

@property <RUITableFooterDelegate> * delegate;
@property(retain) NSURL * baseURL;


- (id)initWithAttributes:(id)arg1;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (void)setBaseURL:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void).cxx_destruct;
- (id)baseURL;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
