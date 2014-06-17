/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _aPWakeCacheFlushCnt;
    unsigned int _idlePowerMicroWatt;
    unsigned int _oOSPowerMicroWatt;
    unsigned int _registrationPowerMicroWatt;
    unsigned int _scanPowerMicroWatt;
    unsigned int _voicePowerMicroWatt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int aPWakeCacheFlushCnt : 1; 
        unsigned int idlePowerMicroWatt : 1; 
        unsigned int oOSPowerMicroWatt : 1; 
        unsigned int registrationPowerMicroWatt : 1; 
        unsigned int scanPowerMicroWatt : 1; 
        unsigned int voicePowerMicroWatt : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasScanPowerMicroWatt;
@property unsigned int scanPowerMicroWatt;
@property BOOL hasOOSPowerMicroWatt;
@property unsigned int oOSPowerMicroWatt;
@property BOOL hasRegistrationPowerMicroWatt;
@property unsigned int registrationPowerMicroWatt;
@property BOOL hasIdlePowerMicroWatt;
@property unsigned int idlePowerMicroWatt;
@property BOOL hasVoicePowerMicroWatt;
@property unsigned int voicePowerMicroWatt;
@property BOOL hasAPWakeCacheFlushCnt;
@property unsigned int aPWakeCacheFlushCnt;


- (unsigned int)aPWakeCacheFlushCnt;
- (unsigned int)voicePowerMicroWatt;
- (unsigned int)idlePowerMicroWatt;
- (unsigned int)registrationPowerMicroWatt;
- (unsigned int)oOSPowerMicroWatt;
- (unsigned int)scanPowerMicroWatt;
- (BOOL)hasAPWakeCacheFlushCnt;
- (void)setHasAPWakeCacheFlushCnt:(BOOL)arg1;
- (void)setAPWakeCacheFlushCnt:(unsigned int)arg1;
- (BOOL)hasVoicePowerMicroWatt;
- (void)setHasVoicePowerMicroWatt:(BOOL)arg1;
- (void)setVoicePowerMicroWatt:(unsigned int)arg1;
- (BOOL)hasIdlePowerMicroWatt;
- (void)setHasIdlePowerMicroWatt:(BOOL)arg1;
- (void)setIdlePowerMicroWatt:(unsigned int)arg1;
- (BOOL)hasRegistrationPowerMicroWatt;
- (void)setHasRegistrationPowerMicroWatt:(BOOL)arg1;
- (void)setRegistrationPowerMicroWatt:(unsigned int)arg1;
- (BOOL)hasOOSPowerMicroWatt;
- (void)setHasOOSPowerMicroWatt:(BOOL)arg1;
- (void)setOOSPowerMicroWatt:(unsigned int)arg1;
- (BOOL)hasScanPowerMicroWatt;
- (void)setHasScanPowerMicroWatt:(BOOL)arg1;
- (void)setScanPowerMicroWatt:(unsigned int)arg1;
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
