/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIMediaComponent, SKUIEmbeddedMediaView;

@interface SKUIGalleryPaneViewController : UIViewController  {
    SKUIMediaComponent *_component;
    int _galleryIndex;
}

@property(readonly) SKUIMediaComponent * component;
@property(readonly) int galleryIndex;
@property(readonly) SKUIEmbeddedMediaView * mediaView;


- (id)initWithMediaComponent:(id)arg1 galleryIndex:(int)arg2;
- (int)galleryIndex;
- (id)component;
- (id)mediaView;
- (void).cxx_destruct;

@end