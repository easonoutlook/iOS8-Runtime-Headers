/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushConnectionConnected : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    int _linkQuality;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int linkQuality : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasConnectDuration;
@property unsigned int connectDuration;
@property BOOL hasConnectionType;
@property unsigned int connectionType;
@property BOOL hasLinkQuality;
@property int linkQuality;
@property BOOL hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)connectDuration;
- (BOOL)hasConnectDuration;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (unsigned int)dualChannelState;
- (int)linkQuality;
- (BOOL)hasDualChannelState;
- (void)setHasDualChannelState:(BOOL)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
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