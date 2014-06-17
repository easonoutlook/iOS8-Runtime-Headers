/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSArray;

@interface MPStoreOfferMediaItemArtwork : MPMediaItemArtwork  {
    long long _itemPersistentID;
    NSArray *_screenshotDictionaries;
    NSArray *_itemArtworkDictionaries;
    NSArray *_containerArtworkDictionaries;
    unsigned int _hash;
    NSString *_cacheID;
}

@property(readonly) NSString * cacheID;


- (void).cxx_destruct;
- (unsigned int)hash;
- (id)cacheID;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 artworkCacheID:(id)arg2;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (BOOL)hasArtworkAvailable;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_bestImageURLForSize:(struct CGSize { float x1; float x2; })arg1 artworkDictionaries:(id)arg2;
- (id)_imageWithURL:(id)arg1;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;

@end
