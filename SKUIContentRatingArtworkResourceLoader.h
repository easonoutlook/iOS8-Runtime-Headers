/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMapTable, NSHashTable, UIImage, SKUIImageDataConsumer, SKUIResourceLoader;

@interface SKUIContentRatingArtworkResourceLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    SKUIResourceLoader *_loader;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property(readonly) SKUIResourceLoader * artworkLoader;
@property(retain) SKUIImageDataConsumer * imageDataConsumer;
@property(readonly) UIImage * placeholderImage;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;


- (void)setImageDataConsumer:(id)arg1;
- (id)imageDataConsumer;
- (id)artworkLoader;
- (void)loadImageForContentRating:(id)arg1 clientContent:(id)arg2 reason:(int)arg3;
- (id)cachedImageForContentRating:(id)arg1 withClientContext:(id)arg2;
- (id)_loadImage:(id)arg1;
- (id)_urlForContentRating:(id)arg1 clientContext:(id)arg2;
- (id)initWithArtworkLoader:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)placeholderImage;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)removeObserver:(id)arg1;
- (id)init;

@end
