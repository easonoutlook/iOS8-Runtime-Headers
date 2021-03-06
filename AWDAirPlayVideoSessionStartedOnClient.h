/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned long long _fileBytes;
    unsigned long long _timestamp;
    unsigned int _audioOnly;
    unsigned int _authMs;
    unsigned int _bitrate;
    unsigned int _bonjourMs;
    unsigned int _connectMs;
    unsigned int _duration;
    unsigned int _infoMs;
    unsigned int _postAuthMs;
    unsigned int _secureConnectionMs;
    NSString *_serverModel;
    NSString *_serverVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    unsigned int _type;
    struct { 
        unsigned int fileBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int authMs : 1; 
        unsigned int bitrate : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int duration : 1; 
        unsigned int infoMs : 1; 
        unsigned int postAuthMs : 1; 
        unsigned int secureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) BOOL hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasStatus;
@property int status;
@property(readonly) BOOL hasServerModel;
@property(retain) NSString * serverModel;
@property(readonly) BOOL hasServerVersion;
@property(retain) NSString * serverVersion;
@property BOOL hasType;
@property unsigned int type;
@property BOOL hasTransportType;
@property unsigned int transportType;
@property BOOL hasFileBytes;
@property unsigned long long fileBytes;
@property BOOL hasDuration;
@property unsigned int duration;
@property BOOL hasBitrate;
@property unsigned int bitrate;
@property BOOL hasAudioOnly;
@property unsigned int audioOnly;
@property BOOL hasBonjourMs;
@property unsigned int bonjourMs;
@property BOOL hasConnectMs;
@property unsigned int connectMs;
@property BOOL hasInfoMs;
@property unsigned int infoMs;
@property BOOL hasSecureConnectionMs;
@property unsigned int secureConnectionMs;
@property BOOL hasAuthMs;
@property unsigned int authMs;
@property BOOL hasPostAuthMs;
@property unsigned int postAuthMs;


- (unsigned int)postAuthMs;
- (unsigned int)secureConnectionMs;
- (unsigned int)infoMs;
- (unsigned long long)fileBytes;
- (id)serverModel;
- (BOOL)hasPostAuthMs;
- (void)setHasPostAuthMs:(BOOL)arg1;
- (void)setPostAuthMs:(unsigned int)arg1;
- (BOOL)hasSecureConnectionMs;
- (void)setHasSecureConnectionMs:(BOOL)arg1;
- (void)setSecureConnectionMs:(unsigned int)arg1;
- (BOOL)hasInfoMs;
- (void)setHasInfoMs:(BOOL)arg1;
- (void)setInfoMs:(unsigned int)arg1;
- (BOOL)hasBitrate;
- (void)setHasBitrate:(BOOL)arg1;
- (BOOL)hasFileBytes;
- (void)setHasFileBytes:(BOOL)arg1;
- (void)setFileBytes:(unsigned long long)arg1;
- (BOOL)hasServerVersion;
- (BOOL)hasServerModel;
- (void)setServerModel:(id)arg1;
- (unsigned int)authMs;
- (BOOL)hasAuthMs;
- (void)setHasAuthMs:(BOOL)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (unsigned int)connectMs;
- (unsigned int)bonjourMs;
- (BOOL)hasConnectMs;
- (void)setHasConnectMs:(BOOL)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (BOOL)hasBonjourMs;
- (void)setHasBonjourMs:(BOOL)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (unsigned int)audioOnly;
- (BOOL)hasAudioOnly;
- (void)setHasAudioOnly:(BOOL)arg1;
- (void)setAudioOnly:(unsigned int)arg1;
- (id)sessionUUID;
- (BOOL)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (unsigned int)transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasDuration;
- (void)setHasDuration:(BOOL)arg1;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (BOOL)hasTransportType;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setBitrate:(unsigned int)arg1;
- (unsigned int)bitrate;
- (BOOL)hasStatus;
- (void)setHasStatus:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)setServerVersion:(id)arg1;
- (id)serverVersion;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)type;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void)dealloc;
- (void)setTransportType:(unsigned int)arg1;

@end
