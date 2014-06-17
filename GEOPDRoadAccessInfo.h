/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {
    NSMutableArray *_roadAccessPoints;
}

@property(retain) NSMutableArray * roadAccessPoints;

+ (id)roadAccessInfoForPlaceData:(id)arg1;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roadAccessPoints;
- (id)roadAccessPointAtIndex:(unsigned int)arg1;
- (void)clearRoadAccessPoints;
- (unsigned int)roadAccessPointsCount;
- (void)addRoadAccessPoint:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end