/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    unsigned int _error;
    unsigned int _flushes;
    NSString *_guid;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int flushes : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasConnectionType;
@property unsigned int connectionType;
@property BOOL hasLinkQuality;
@property int linkQuality;
@property BOOL hasFlushes;
@property unsigned int flushes;
@property BOOL hasSendDuration;
@property unsigned int sendDuration;
@property BOOL hasPayloadSize;
@property unsigned int payloadSize;
@property BOOL hasError;
@property unsigned int error;
@property BOOL hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)dualChannelState;
- (unsigned int)payloadSize;
- (unsigned int)sendDuration;
- (unsigned int)flushes;
- (int)linkQuality;
- (BOOL)hasDualChannelState;
- (void)setHasDualChannelState:(BOOL)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setHasError:(BOOL)arg1;
- (BOOL)hasPayloadSize;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (BOOL)hasSendDuration;
- (void)setHasSendDuration:(BOOL)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (BOOL)hasFlushes;
- (void)setHasFlushes:(BOOL)arg1;
- (void)setFlushes:(unsigned int)arg1;
- (BOOL)hasLinkQuality;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (BOOL)hasConnectionType;
- (void)setHasConnectionType:(BOOL)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)error;
- (void)setError:(unsigned int)arg1;
- (id)guid;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
- (BOOL)hasTimestamp;
- (BOOL)hasError;
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
