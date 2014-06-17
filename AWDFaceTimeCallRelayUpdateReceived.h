/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallRelayUpdateReceived : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_guid;
    unsigned int _isVideo;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isVideo : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasIsVideo;
@property unsigned int isVideo;


- (BOOL)hasIsVideo;
- (void)setHasIsVideo:(BOOL)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (id)guid;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)setGuid:(id)arg1;
- (unsigned int)isVideo;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
