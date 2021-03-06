/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushReceivedDropped : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    unsigned int _isFromStorage;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _receiveOffset;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int isFromStorage : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int receiveOffset : 1; 
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
@property BOOL hasReceiveOffset;
@property unsigned int receiveOffset;
@property BOOL hasPayloadSize;
@property unsigned int payloadSize;
@property BOOL hasIsFromStorage;
@property unsigned int isFromStorage;
@property BOOL hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)isFromStorage;
- (unsigned int)receiveOffset;
- (BOOL)hasIsFromStorage;
- (void)setHasIsFromStorage:(BOOL)arg1;
- (void)setIsFromStorage:(unsigned int)arg1;
- (BOOL)hasReceiveOffset;
- (void)setHasReceiveOffset:(BOOL)arg1;
- (void)setReceiveOffset:(unsigned int)arg1;
- (unsigned int)dualChannelState;
- (unsigned int)payloadSize;
- (int)linkQuality;
- (BOOL)hasDualChannelState;
- (void)setHasDualChannelState:(BOOL)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (BOOL)hasPayloadSize;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (BOOL)hasLinkQuality;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (BOOL)hasConnectionType;
- (void)setHasConnectionType:(BOOL)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)guid;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
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
