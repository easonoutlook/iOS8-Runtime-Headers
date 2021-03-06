/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCache, <MPArtworkDataSource>, NSString;

@interface MPArtworkCatalog : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _fittingSize;
    BOOL _loadingRepresentation;
    float _destinationScale;
    id _token;
    <MPArtworkDataSource> *_dataSource;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _configurationBlock;

}

@property float destinationScale;
@property struct CGSize { float x1; float x2; } fittingSize;
@property(retain) id token;
@property <MPArtworkDataSource> * dataSource;
@property(readonly) NSCache * cache;
@property(copy) NSString * cacheIdentifier;
@property id requestingContext;
@property id destination;
@property(copy) id configurationBlock;
@property(getter=isLoadingRepresentation) BOOL loadingRepresentation;

+ (void)setCachePurgesWhenEnteringBackground:(BOOL)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCacheLimit:(unsigned int)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;

- (void)setToken:(id)arg1;
- (id)token;
- (void).cxx_destruct;
- (void)setConfigurationBlock:(id)arg1;
- (id)configurationBlock;
- (id)cache;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)dataSource;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)description;
- (void)dealloc;
- (float)destinationScale;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (BOOL)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (void)setDestination:(id)arg1 configurationBlock:(id)arg2;
- (void)requestImageWithCompletionHandler:(id)arg1;
- (void)setFittingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDestinationScale:(float)arg1;
- (void)_loadBestRepresentationIfNeeded;
- (void)_updateWithRepresentation:(id)arg1;
- (id)requestingContext;
- (id)cacheIdentifier;
- (void)setRequestingContext:(id)arg1;
- (void)setCacheIdentifier:(id)arg1;
- (void)_updateRepresentation;
- (void)setLoadingRepresentation:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })fittingSize;
- (BOOL)isLoadingRepresentation;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;

@end
