/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_autocompleteURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_forwardGeocoderURL;
    unsigned int _identifier;
    NSString *_locationShiftURL;
    NSString *_mapMatchURL;
    NSString *_polyLocationShiftURL;
    NSString *_problemCategoriesURL;
    NSString *_problemNotificationAvailabilityURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSString *_regionalResourcesURL;
    NSString *_releaseInfo;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_searchURL;
    NSString *_simpleETAURL;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    NSString *_usageURL;
}

@property unsigned int identifier;
@property(retain) NSMutableArray * tileSets;
@property(retain) NSMutableArray * resources;
@property(readonly) BOOL hasUniqueIdentifier;
@property(retain) NSString * uniqueIdentifier;
@property(retain) NSMutableArray * attributions;
@property(retain) NSMutableArray * regionalResourceTiles;
@property(retain) NSMutableArray * regionalResourceRegions;
@property(readonly) BOOL hasRegionalResourcesURL;
@property(retain) NSString * regionalResourcesURL;
@property(readonly) BOOL hasSearchURL;
@property(retain) NSString * searchURL;
@property(readonly) BOOL hasSearchAttributionManifestURL;
@property(retain) NSString * searchAttributionManifestURL;
@property(readonly) BOOL hasAutocompleteURL;
@property(retain) NSString * autocompleteURL;
@property(readonly) BOOL hasReverseGeocoderURL;
@property(retain) NSString * reverseGeocoderURL;
@property(readonly) BOOL hasForwardGeocoderURL;
@property(retain) NSString * forwardGeocoderURL;
@property(readonly) BOOL hasDirectionsURL;
@property(retain) NSString * directionsURL;
@property(readonly) BOOL hasEtaURL;
@property(retain) NSString * etaURL;
@property(readonly) BOOL hasLocationShiftURL;
@property(retain) NSString * locationShiftURL;
@property(readonly) BOOL hasBatchReverseGeocoderURL;
@property(retain) NSString * batchReverseGeocoderURL;
@property(readonly) BOOL hasReleaseInfo;
@property(retain) NSString * releaseInfo;
@property(readonly) BOOL hasMapMatchURL;
@property(retain) NSString * mapMatchURL;
@property(readonly) BOOL hasResourcesURL;
@property(retain) NSString * resourcesURL;
@property(readonly) BOOL hasSimpleETAURL;
@property(retain) NSString * simpleETAURL;
@property(readonly) BOOL hasAddressCorrectionInitURL;
@property(retain) NSString * addressCorrectionInitURL;
@property(readonly) BOOL hasAddressCorrectionUpdateURL;
@property(retain) NSString * addressCorrectionUpdateURL;
@property(readonly) BOOL hasPolyLocationShiftURL;
@property(retain) NSString * polyLocationShiftURL;
@property(readonly) BOOL hasProblemSubmissionURL;
@property(retain) NSString * problemSubmissionURL;
@property(readonly) BOOL hasProblemStatusURL;
@property(retain) NSString * problemStatusURL;
@property(readonly) BOOL hasReverseGeocoderVersionsURL;
@property(retain) NSString * reverseGeocoderVersionsURL;
@property(readonly) BOOL hasProblemCategoriesURL;
@property(retain) NSString * problemCategoriesURL;
@property(readonly) BOOL hasUsageURL;
@property(retain) NSString * usageURL;
@property(readonly) BOOL hasProblemNotificationAvailabilityURL;
@property(retain) NSString * problemNotificationAvailabilityURL;
@property(readonly) BOOL hasAnnouncementsURL;
@property(retain) NSString * announcementsURL;
@property(retain) NSMutableArray * announcementsSupportedLanguages;
@property(readonly) BOOL hasDispatcherURL;
@property(retain) NSString * dispatcherURL;
@property(readonly) BOOL hasProblemOptInURL;
@property(retain) NSString * problemOptInURL;


- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setAttributions:(id)arg1;
- (unsigned int)attributionsCount;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)hasRegionalResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)regionalResourceRegionsForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)flatRegionalResourceTilesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)attributions;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)setResources:(id)arg1;
- (id)resources;
- (id)regionalResourcesURL;
- (BOOL)hasRegionalResourcesURL;
- (BOOL)hasUniqueIdentifier;
- (id)regionalResourceRegionAtIndex:(unsigned int)arg1;
- (void)clearRegionalResourceRegions;
- (id)regionalResourceTileAtIndex:(unsigned int)arg1;
- (void)clearRegionalResourceTiles;
- (id)resourceAtIndex:(unsigned int)arg1;
- (void)clearResources;
- (void)setRegionalResourceRegions:(id)arg1;
- (void)setRegionalResourceTiles:(id)arg1;
- (void)setRegionalResourcesURL:(id)arg1;
- (unsigned int)regionalResourceRegionsCount;
- (void)addRegionalResourceTile:(id)arg1;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)addResource:(id)arg1;
- (unsigned int)regionalResourceTilesCount;
- (id)regionalResourceRegions;
- (id)regionalResourceTiles;
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (unsigned int)resourcesCount;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_resetBestLanguages;
- (id)problemOptInURL;
- (id)dispatcherURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsURL;
- (id)problemNotificationAvailabilityURL;
- (id)usageURL;
- (id)problemCategoriesURL;
- (id)reverseGeocoderVersionsURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (id)polyLocationShiftURL;
- (id)addressCorrectionUpdateURL;
- (id)addressCorrectionInitURL;
- (id)simpleETAURL;
- (id)mapMatchURL;
- (id)releaseInfo;
- (id)locationShiftURL;
- (id)etaURL;
- (id)autocompleteURL;
- (id)searchAttributionManifestURL;
- (id)resourcesURL;
- (BOOL)hasProblemOptInURL;
- (BOOL)hasDispatcherURL;
- (BOOL)hasAnnouncementsURL;
- (BOOL)hasProblemNotificationAvailabilityURL;
- (BOOL)hasUsageURL;
- (BOOL)hasProblemCategoriesURL;
- (BOOL)hasReverseGeocoderVersionsURL;
- (BOOL)hasProblemStatusURL;
- (BOOL)hasProblemSubmissionURL;
- (BOOL)hasPolyLocationShiftURL;
- (BOOL)hasAddressCorrectionUpdateURL;
- (BOOL)hasAddressCorrectionInitURL;
- (BOOL)hasSimpleETAURL;
- (BOOL)hasMapMatchURL;
- (BOOL)hasBatchReverseGeocoderURL;
- (BOOL)hasReleaseInfo;
- (BOOL)hasLocationShiftURL;
- (BOOL)hasEtaURL;
- (BOOL)hasDirectionsURL;
- (BOOL)hasForwardGeocoderURL;
- (BOOL)hasReverseGeocoderURL;
- (BOOL)hasAutocompleteURL;
- (BOOL)hasSearchAttributionManifestURL;
- (BOOL)hasSearchURL;
- (BOOL)hasResourcesURL;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned int)arg1;
- (void)clearAnnouncementsSupportedLanguages;
- (unsigned int)announcementsSupportedLanguagesCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setProblemNotificationAvailabilityURL:(id)arg1;
- (void)setUsageURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setMapMatchURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setLocationShiftURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setForwardGeocoderURL:(id)arg1;
- (void)setReverseGeocoderURL:(id)arg1;
- (void)setAutocompleteURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSearchURL:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (id)batchReverseGeocoderURL;
- (id)reverseGeocoderURL;
- (id)forwardGeocoderURL;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 useStatusCodes:(BOOL*)arg2;
- (id)tileSets;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (void)clearTileSets;
- (unsigned int)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)searchURL;
- (id)directionsURL;
- (id)attributionAtIndex:(unsigned int)arg1;
- (void)clearAttributions;
- (void)addAttribution:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setIdentifier:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)uniqueIdentifier;
- (id)description;
- (void)dealloc;

@end
