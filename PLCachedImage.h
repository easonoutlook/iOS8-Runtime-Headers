/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLLoadRequestKey, NSDictionary;

@interface PLCachedImage : UIImage  {
    NSDictionary *_metadata;
    int _format;
    PLLoadRequestKey *_cacheKey;
}

@property int format;
@property(retain) NSDictionary * metadata;
@property(copy) PLLoadRequestKey * cacheKey;


- (id)metadata;
- (void)setMetadata:(id)arg1;
- (int)format;
- (void)setFormat:(int)arg1;
- (void)setCacheKey:(id)arg1;
- (id)cacheKey;
- (id)description;
- (void)dealloc;

@end
