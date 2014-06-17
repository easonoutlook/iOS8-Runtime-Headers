/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class UIImage, NSString, NSObject<OS_dispatch_queue>;

@interface MusicArtworkTiler : NSObject  {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    UIImage *_placeholderImage;
    NSString *_cacheIdentifier;
    id _context;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
}

@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(retain) UIImage * placeholderImage;
@property(copy) NSString * cacheIdentifier;
@property id context;
@property struct CGSize { float x1; float x2; } imageSize;


- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)requestTiledArtworkForPlaylist:(id)arg1 tileCount:(int)arg2 completionHandler:(id)arg3;
- (void)requestTiledArtworkForCatalogs:(id)arg1 completionHandler:(id)arg2;
- (void)setCallbackQueue:(id)arg1;
- (id)callbackQueue;
- (id)placeholderImage;
- (void)setPlaceholderImage:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setContext:(id)arg1;
- (id)context;
- (id)cacheIdentifier;
- (void)setCacheIdentifier:(id)arg1;

@end