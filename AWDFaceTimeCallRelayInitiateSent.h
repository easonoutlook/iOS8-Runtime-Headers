/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallRelayInitiateSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _errorCode;
    NSString *_guid;
    unsigned int _isVideo;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int isVideo : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasErrorCode;
@property int errorCode;
@property BOOL hasSendDuration;
@property unsigned int sendDuration;
@property BOOL hasIsVideo;
@property unsigned int isVideo;


- (BOOL)hasIsVideo;
- (void)setHasIsVideo:(BOOL)arg1;
- (unsigned int)sendDuration;
- (BOOL)hasSendDuration;
- (void)setHasSendDuration:(BOOL)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (id)guid;
- (BOOL)hasErrorCode;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)setGuid:(id)arg1;
- (int)errorCode;
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
