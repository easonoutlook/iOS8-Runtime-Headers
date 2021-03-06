/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageDeduplicated : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _deduplicationInterval;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deduplicationInterval : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasDeduplicationInterval;
@property unsigned int deduplicationInterval;


- (unsigned int)deduplicationInterval;
- (BOOL)hasDeduplicationInterval;
- (void)setHasDeduplicationInterval:(BOOL)arg1;
- (void)setDeduplicationInterval:(unsigned int)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)guid;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)setGuid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
