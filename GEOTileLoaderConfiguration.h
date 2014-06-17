/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLocale, NSString, GEOResourceManifestConfiguration;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying> {
    Class _serverProxyClass;
    BOOL _trackUsage;
    unsigned int _memoryCacheCountLimit;
    unsigned int _memoryCacheCostLimit;
    NSString *_diskCacheLocation;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property Class serverProxyClass;
@property BOOL trackUsage;
@property unsigned int memoryCacheCountLimit;
@property unsigned int memoryCacheCostLimit;
@property(copy) NSString * diskCacheLocation;
@property(retain) GEOResourceManifestConfiguration * manifestConfiguration;
@property(retain) NSLocale * locale;


- (void)setDiskCacheLocation:(id)arg1;
- (void)setManifestConfiguration:(id)arg1;
- (id)manifestConfiguration;
- (id)diskCacheLocation;
- (void)setMemoryCacheCostLimit:(unsigned int)arg1;
- (unsigned int)memoryCacheCostLimit;
- (void)setMemoryCacheCountLimit:(unsigned int)arg1;
- (unsigned int)memoryCacheCountLimit;
- (void)setTrackUsage:(BOOL)arg1;
- (BOOL)trackUsage;
- (void)setServerProxyClass:(Class)arg1;
- (Class)serverProxyClass;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end