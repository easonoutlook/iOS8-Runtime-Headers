/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {
    NSString *_field;
    NSMutableArray *_operands;
    int _type;
    NSString *_value;
}

@property int type;
@property(readonly) BOOL hasField;
@property(retain) NSString * field;
@property(readonly) BOOL hasValue;
@property(retain) NSString * value;
@property(retain) NSMutableArray * operands;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)operandAtIndex:(unsigned int)arg1;
- (void)addOperand:(id)arg1;
- (id)operands;
- (void)clearOperands;
- (unsigned int)operandsCount;
- (void)setOperands:(id)arg1;
- (BOOL)hasField;
- (void)setField:(id)arg1;
- (BOOL)hasValue;
- (id)dictionaryRepresentation;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)field;
- (id)description;
- (void)dealloc;

@end
