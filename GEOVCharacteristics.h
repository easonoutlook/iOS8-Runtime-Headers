/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable <NSCopying> {
    NSMutableArray *_pointCharacteristics;
}

@property(retain) NSMutableArray * pointCharacteristics;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)pointCharacteristics;
- (id)pointCharacteristicAtIndex:(unsigned int)arg1;
- (void)clearPointCharacteristics;
- (unsigned int)pointCharacteristicsCount;
- (void)addPointCharacteristic:(id)arg1;
- (void)setPointCharacteristics:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end