/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _currentNatType;
    NSString *_guid;
    unsigned int _isVideo;
    unsigned int _localNetworkConnection;
    unsigned int _relayConnectDuration;
    unsigned int _remoteNatType;
    unsigned int _remoteNetworkConnection;
    unsigned int _usesRelay;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int isVideo : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasConnectDuration;
@property unsigned int connectDuration;
@property BOOL hasRemoteNetworkConnection;
@property unsigned int remoteNetworkConnection;
@property BOOL hasLocalNetworkConnection;
@property unsigned int localNetworkConnection;
@property BOOL hasConnectionType;
@property unsigned int connectionType;
@property BOOL hasUsesRelay;
@property unsigned int usesRelay;
@property BOOL hasCurrentNatType;
@property unsigned int currentNatType;
@property BOOL hasRemoteNatType;
@property unsigned int remoteNatType;
@property BOOL hasRelayConnectDuration;
@property unsigned int relayConnectDuration;
@property BOOL hasIsVideo;
@property unsigned int isVideo;


- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)currentNatType;
- (unsigned int)usesRelay;
- (unsigned int)localNetworkConnection;
- (unsigned int)remoteNetworkConnection;
- (unsigned int)connectDuration;
- (BOOL)hasRelayConnectDuration;
- (void)setHasRelayConnectDuration:(BOOL)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (BOOL)hasRemoteNatType;
- (void)setHasRemoteNatType:(BOOL)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (BOOL)hasCurrentNatType;
- (void)setHasCurrentNatType:(BOOL)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (BOOL)hasUsesRelay;
- (void)setHasUsesRelay:(BOOL)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (BOOL)hasLocalNetworkConnection;
- (void)setHasLocalNetworkConnection:(BOOL)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (BOOL)hasRemoteNetworkConnection;
- (void)setHasRemoteNetworkConnection:(BOOL)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (BOOL)hasConnectDuration;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (BOOL)hasIsVideo;
- (void)setHasIsVideo:(BOOL)arg1;
- (BOOL)hasConnectionType;
- (void)setHasConnectionType:(BOOL)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (id)guid;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
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
