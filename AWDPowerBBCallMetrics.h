/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBCallMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _bBAndDataPowerMicroWatt;
    unsigned int _bBPowerMicroWatt;
    unsigned int _bBTotalAndDataDuration;
    unsigned int _bBTotalCallDuration;
    unsigned int _connectedSleepDuration;
    unsigned int _connectedSleepDurationData;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bBAndDataPowerMicroWatt : 1; 
        unsigned int bBPowerMicroWatt : 1; 
        unsigned int bBTotalAndDataDuration : 1; 
        unsigned int bBTotalCallDuration : 1; 
        unsigned int connectedSleepDuration : 1; 
        unsigned int connectedSleepDurationData : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasBBTotalCallDuration;
@property unsigned int bBTotalCallDuration;
@property BOOL hasBBPowerMicroWatt;
@property unsigned int bBPowerMicroWatt;
@property BOOL hasBBTotalAndDataDuration;
@property unsigned int bBTotalAndDataDuration;
@property BOOL hasBBAndDataPowerMicroWatt;
@property unsigned int bBAndDataPowerMicroWatt;
@property BOOL hasConnectedSleepDuration;
@property unsigned int connectedSleepDuration;
@property BOOL hasConnectedSleepDurationData;
@property unsigned int connectedSleepDurationData;


- (unsigned int)connectedSleepDurationData;
- (unsigned int)connectedSleepDuration;
- (unsigned int)bBAndDataPowerMicroWatt;
- (unsigned int)bBTotalAndDataDuration;
- (unsigned int)bBPowerMicroWatt;
- (unsigned int)bBTotalCallDuration;
- (BOOL)hasConnectedSleepDurationData;
- (void)setHasConnectedSleepDurationData:(BOOL)arg1;
- (void)setConnectedSleepDurationData:(unsigned int)arg1;
- (BOOL)hasConnectedSleepDuration;
- (void)setHasConnectedSleepDuration:(BOOL)arg1;
- (void)setConnectedSleepDuration:(unsigned int)arg1;
- (BOOL)hasBBAndDataPowerMicroWatt;
- (void)setHasBBAndDataPowerMicroWatt:(BOOL)arg1;
- (void)setBBAndDataPowerMicroWatt:(unsigned int)arg1;
- (BOOL)hasBBTotalAndDataDuration;
- (void)setHasBBTotalAndDataDuration:(BOOL)arg1;
- (void)setBBTotalAndDataDuration:(unsigned int)arg1;
- (BOOL)hasBBPowerMicroWatt;
- (void)setHasBBPowerMicroWatt:(BOOL)arg1;
- (void)setBBPowerMicroWatt:(unsigned int)arg1;
- (BOOL)hasBBTotalCallDuration;
- (void)setHasBBTotalCallDuration:(BOOL)arg1;
- (void)setBBTotalCallDuration:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
