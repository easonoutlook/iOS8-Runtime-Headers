/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointOnRoad : PBCodable <NSCopying> {
    int _featureIndex;
    int _vertexIndex;
    struct { 
        unsigned int vertexIndex : 1; 
    } _has;
}

@property int featureIndex;
@property BOOL hasVertexIndex;
@property int vertexIndex;


- (int)featureIndex;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureIndex:(int)arg1;
- (int)vertexIndex;
- (BOOL)hasVertexIndex;
- (void)setHasVertexIndex:(BOOL)arg1;
- (void)setVertexIndex:(int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
