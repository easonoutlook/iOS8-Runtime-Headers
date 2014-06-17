/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAltitudeManifestReserved;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {
    GEOAltitudeManifestReserved *_reserved;
}

+ (id)sharedManager;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (unsigned int)versionForRegion:(unsigned int)arg1;
- (id)tourIdsForRegion:(unsigned int)arg1;
- (id)nameForRegion:(unsigned int)arg1;
- (BOOL)isValidTourId:(unsigned long long)arg1;
- (void)parseManifest:(id)arg1;
- (void)_reloadManifest;
- (id)availableRegions;
- (BOOL)parseXml:(id)arg1;
- (id)initWithoutObserver;
- (void)commonInit;
- (void)dealloc;
- (id)init;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end
