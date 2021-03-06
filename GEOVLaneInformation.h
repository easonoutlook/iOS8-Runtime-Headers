/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneInformation : PBCodable <NSCopying> {
    unsigned int _style;
    unsigned int _validityMask;
}

@property unsigned int style;
@property unsigned int validityMask;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setValidityMask:(unsigned int)arg1;
- (unsigned int)validityMask;
- (id)dictionaryRepresentation;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
