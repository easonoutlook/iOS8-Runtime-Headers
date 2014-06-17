/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying> {
    NSMutableArray *_containerItems;
    int _originatorType;
    int _originatorVersion;
    struct { 
        unsigned int originatorType : 1; 
        unsigned int originatorVersion : 1; 
    } _has;
}

@property(retain) NSMutableArray * containerItems;
@property BOOL hasOriginatorType;
@property int originatorType;
@property BOOL hasOriginatorVersion;
@property int originatorVersion;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)originatorVersion;
- (int)originatorType;
- (void)setContainerItems:(id)arg1;
- (id)containerItems;
- (BOOL)hasOriginatorVersion;
- (void)setHasOriginatorVersion:(BOOL)arg1;
- (void)setOriginatorVersion:(int)arg1;
- (BOOL)hasOriginatorType;
- (void)setHasOriginatorType:(BOOL)arg1;
- (void)setOriginatorType:(int)arg1;
- (id)containerItemsAtIndex:(unsigned int)arg1;
- (void)clearContainerItems;
- (unsigned int)containerItemsCount;
- (void)addContainerItems:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
