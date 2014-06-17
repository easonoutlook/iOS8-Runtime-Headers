/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, NSArray, _UIContentUnavailableView, <SKUIDownloadsChildViewControllerDelegate>, UICollectionView;

@interface SKUIIPadDownloadsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    NSArray *_downloads;
    _UIContentUnavailableView *_noContentView;
    <SKUIDownloadsChildViewControllerDelegate> *_delegate;
    BOOL _editing;
    SKUIClientContext *_clientContext;
}

@property(retain) SKUIClientContext * clientContext;
@property(retain) NSArray * downloads;
@property <SKUIDownloadsChildViewControllerDelegate> * delegate;


- (void)_editAction:(id)arg1;
- (void)_reloadNavigationItem;
- (void)_reloadLayout;
- (void)setDownloads:(id)arg1;
- (void)reloadDownloadsAtIndexes:(id)arg1;
- (id)clientContext;
- (void)_reload;
- (void)setClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)loadView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)delegate;
- (void)_cancelAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)downloads;

@end
