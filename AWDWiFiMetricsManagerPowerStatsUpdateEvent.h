/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _associatedSleepDur;
    unsigned int _roamDur;
    unsigned int _totalDur;
    unsigned int _type;
    unsigned int _unassociatedSleepDur;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int associatedSleepDur : 1; 
        unsigned int roamDur : 1; 
        unsigned int totalDur : 1; 
        unsigned int type : 1; 
        unsigned int unassociatedSleepDur : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasType;
@property unsigned int type;
@property BOOL hasUnassociatedSleepDur;
@property unsigned int unassociatedSleepDur;
@property BOOL hasAssociatedSleepDur;
@property unsigned int associatedSleepDur;
@property BOOL hasRoamDur;
@property unsigned int roamDur;
@property BOOL hasTotalDur;
@property unsigned int totalDur;


- (unsigned int)totalDur;
- (unsigned int)roamDur;
- (unsigned int)associatedSleepDur;
- (unsigned int)unassociatedSleepDur;
- (BOOL)hasTotalDur;
- (void)setHasTotalDur:(BOOL)arg1;
- (void)setTotalDur:(unsigned int)arg1;
- (BOOL)hasRoamDur;
- (void)setHasRoamDur:(BOOL)arg1;
- (void)setRoamDur:(unsigned int)arg1;
- (BOOL)hasAssociatedSleepDur;
- (void)setHasAssociatedSleepDur:(BOOL)arg1;
- (void)setAssociatedSleepDur:(unsigned int)arg1;
- (BOOL)hasUnassociatedSleepDur;
- (void)setHasUnassociatedSleepDur:(BOOL)arg1;
- (void)setUnassociatedSleepDur:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)type;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end