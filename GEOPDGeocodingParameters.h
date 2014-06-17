/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDViewportInfo, NSString, GEOStructuredAddress;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    unsigned int _maxResults;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    struct { 
        unsigned int maxResults : 1; 
    } _has;
}

@property(readonly) BOOL hasQueryString;
@property(retain) NSString * queryString;
@property BOOL hasMaxResults;
@property unsigned int maxResults;
@property(readonly) BOOL hasViewportInfo;
@property(retain) GEOPDViewportInfo * viewportInfo;
@property(readonly) BOOL hasStructuredAddress;
@property(retain) GEOStructuredAddress * structuredAddress;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)viewportInfo;
- (BOOL)hasStructuredAddress;
- (id)structuredAddress;
- (void)setStructuredAddress:(id)arg1;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (BOOL)hasViewportInfo;
- (BOOL)hasQueryString;
- (void)setViewportInfo:(id)arg1;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (BOOL)hasMaxResults;
- (void)setHasMaxResults:(BOOL)arg1;
- (id)queryString;
- (void)setQueryString:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg1;

@end