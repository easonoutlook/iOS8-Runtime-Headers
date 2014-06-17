/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageItem, SKUIProductPageProductInfo, NSOperationQueue, SKUIContentRatingArtworkResourceLoader, SKUIClientContext, SKUIProductInformationView;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageItem *_item;
    SKUIProductPageProductInfo *_productInfo;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) SKUIProductPageItem * item;
@property(retain) NSOperationQueue * operationQueue;


- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)_contentRatingResourceLoader;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (id)clientContext;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:(id)arg1;
- (void)loadView;
- (id)item;
- (void)dealloc;

@end