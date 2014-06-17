/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying> {
    NSMutableArray *_fields;
}

@property(retain) NSMutableArray * fields;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFields:(id)arg1;
- (id)fields;
- (id)fieldsAtIndex:(unsigned int)arg1;
- (unsigned int)fieldsCount;
- (void)clearFields;
- (void)addFields:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
