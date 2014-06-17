/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {
    NSMutableArray *_searchAttributionSources;
}

@property(retain) NSMutableArray * searchAttributionSources;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchAttributionSources;
- (id)searchAttributionSourcesAtIndex:(unsigned int)arg1;
- (void)clearSearchAttributionSources;
- (unsigned int)searchAttributionSourcesCount;
- (void)addSearchAttributionSources:(id)arg1;
- (void)setSearchAttributionSources:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end