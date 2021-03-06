/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString, NSData;

@interface BRFieldXattr : PBCodable <NSCopying> {
    NSString *_name;
    NSData *_value;
}

@property(retain) NSString * name;
@property(retain) NSData * value;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end
