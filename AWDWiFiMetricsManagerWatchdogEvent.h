/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _available;
    unsigned int _deviceIdentifierMap;
    unsigned int _flags;
    int _reason;
    unsigned int _subreason;
    unsigned int _version;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int available : 1; 
        unsigned int deviceIdentifierMap : 1; 
        unsigned int flags : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int version : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasVersion;
@property unsigned int version;
@property BOOL hasFlags;
@property unsigned int flags;
@property BOOL hasAvailable;
@property int available;
@property BOOL hasReason;
@property int reason;
@property BOOL hasSubreason;
@property unsigned int subreason;
@property BOOL hasDeviceIdentifierMap;
@property unsigned int deviceIdentifierMap;


- (unsigned int)deviceIdentifierMap;
- (unsigned int)subreason;
- (BOOL)hasDeviceIdentifierMap;
- (void)setHasDeviceIdentifierMap:(BOOL)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (BOOL)hasSubreason;
- (void)setHasSubreason:(BOOL)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (BOOL)hasReason;
- (void)setHasReason:(BOOL)arg1;
- (BOOL)hasAvailable;
- (void)setHasAvailable:(BOOL)arg1;
- (BOOL)hasFlags;
- (void)setHasFlags:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasVersion;
- (void)setHasVersion:(BOOL)arg1;
- (void)setReason:(int)arg1;
- (void)setAvailable:(int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (int)available;
- (unsigned int)flags;
- (BOOL)hasTimestamp;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)reason;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end