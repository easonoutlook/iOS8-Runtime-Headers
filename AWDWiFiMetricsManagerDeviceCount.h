/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {
    double _timeSinceBoot;
    unsigned long long _timestamp;
    unsigned int _deviceCount;
    unsigned int _deviceIdentifierMap;
    struct { 
        unsigned int timeSinceBoot : 1; 
        unsigned int timestamp : 1; 
        unsigned int deviceCount : 1; 
        unsigned int deviceIdentifierMap : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasDeviceCount;
@property unsigned int deviceCount;
@property BOOL hasTimeSinceBoot;
@property double timeSinceBoot;
@property BOOL hasDeviceIdentifierMap;
@property unsigned int deviceIdentifierMap;


- (double)timeSinceBoot;
- (BOOL)hasTimeSinceBoot;
- (void)setHasTimeSinceBoot:(BOOL)arg1;
- (void)setTimeSinceBoot:(double)arg1;
- (unsigned int)deviceIdentifierMap;
- (BOOL)hasDeviceIdentifierMap;
- (void)setHasDeviceIdentifierMap:(BOOL)arg1;
- (void)setDeviceIdentifierMap:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (unsigned int)deviceCount;
- (BOOL)hasDeviceCount;
- (void)setHasDeviceCount:(BOOL)arg1;
- (void)setDeviceCount:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
