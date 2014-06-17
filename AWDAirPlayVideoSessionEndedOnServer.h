/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionEndedOnServer : PBCodable <NSCopying> {
    double _bandwidthMax;
    double _bandwidthMean;
    double _bandwidthStdDev;
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _fastFowards;
    unsigned int _localFairPlayCount;
    unsigned int _localNonFairPlayCount;
    unsigned int _pauses;
    unsigned int _readyToPlayMs;
    int _reason;
    unsigned int _remoteFairPlayCount;
    unsigned int _remoteNonFairPlayCount;
    unsigned int _rewinds;
    NSString *_sessionUUID;
    unsigned int _stallCount;
    struct { 
        unsigned int bandwidthMax : 1; 
        unsigned int bandwidthMean : 1; 
        unsigned int bandwidthStdDev : 1; 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int fastFowards : 1; 
        unsigned int localFairPlayCount : 1; 
        unsigned int localNonFairPlayCount : 1; 
        unsigned int pauses : 1; 
        unsigned int readyToPlayMs : 1; 
        unsigned int reason : 1; 
        unsigned int remoteFairPlayCount : 1; 
        unsigned int remoteNonFairPlayCount : 1; 
        unsigned int rewinds : 1; 
        unsigned int stallCount : 1; 
    } _has;
}

@property(readonly) BOOL hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasReason;
@property int reason;
@property BOOL hasDuration;
@property unsigned int duration;
@property BOOL hasPauses;
@property unsigned int pauses;
@property BOOL hasRewinds;
@property unsigned int rewinds;
@property BOOL hasFastFowards;
@property unsigned int fastFowards;
@property BOOL hasReadyToPlayMs;
@property unsigned int readyToPlayMs;
@property BOOL hasStallCount;
@property unsigned int stallCount;
@property BOOL hasBandwidthStdDev;
@property double bandwidthStdDev;
@property BOOL hasBandwidthMean;
@property double bandwidthMean;
@property BOOL hasBandwidthMax;
@property double bandwidthMax;
@property BOOL hasLocalFairPlayCount;
@property unsigned int localFairPlayCount;
@property BOOL hasLocalNonFairPlayCount;
@property unsigned int localNonFairPlayCount;
@property BOOL hasRemoteFairPlayCount;
@property unsigned int remoteFairPlayCount;
@property BOOL hasRemoteNonFairPlayCount;
@property unsigned int remoteNonFairPlayCount;


- (unsigned int)fastFowards;
- (unsigned int)rewinds;
- (BOOL)hasFastFowards;
- (void)setHasFastFowards:(BOOL)arg1;
- (void)setFastFowards:(unsigned int)arg1;
- (BOOL)hasRewinds;
- (void)setHasRewinds:(BOOL)arg1;
- (void)setRewinds:(unsigned int)arg1;
- (unsigned int)remoteNonFairPlayCount;
- (unsigned int)remoteFairPlayCount;
- (unsigned int)localNonFairPlayCount;
- (unsigned int)localFairPlayCount;
- (double)bandwidthMax;
- (double)bandwidthMean;
- (double)bandwidthStdDev;
- (unsigned int)stallCount;
- (unsigned int)readyToPlayMs;
- (BOOL)hasRemoteNonFairPlayCount;
- (void)setHasRemoteNonFairPlayCount:(BOOL)arg1;
- (void)setRemoteNonFairPlayCount:(unsigned int)arg1;
- (BOOL)hasRemoteFairPlayCount;
- (void)setHasRemoteFairPlayCount:(BOOL)arg1;
- (void)setRemoteFairPlayCount:(unsigned int)arg1;
- (BOOL)hasLocalNonFairPlayCount;
- (void)setHasLocalNonFairPlayCount:(BOOL)arg1;
- (void)setLocalNonFairPlayCount:(unsigned int)arg1;
- (BOOL)hasLocalFairPlayCount;
- (void)setHasLocalFairPlayCount:(BOOL)arg1;
- (void)setLocalFairPlayCount:(unsigned int)arg1;
- (BOOL)hasBandwidthMax;
- (void)setHasBandwidthMax:(BOOL)arg1;
- (void)setBandwidthMax:(double)arg1;
- (BOOL)hasBandwidthMean;
- (void)setHasBandwidthMean:(BOOL)arg1;
- (void)setBandwidthMean:(double)arg1;
- (BOOL)hasBandwidthStdDev;
- (void)setHasBandwidthStdDev:(BOOL)arg1;
- (void)setBandwidthStdDev:(double)arg1;
- (BOOL)hasStallCount;
- (void)setHasStallCount:(BOOL)arg1;
- (void)setStallCount:(unsigned int)arg1;
- (BOOL)hasReadyToPlayMs;
- (void)setHasReadyToPlayMs:(BOOL)arg1;
- (void)setReadyToPlayMs:(unsigned int)arg1;
- (unsigned int)pauses;
- (BOOL)hasPauses;
- (void)setHasPauses:(BOOL)arg1;
- (void)setPauses:(unsigned int)arg1;
- (BOOL)hasReason;
- (void)setHasReason:(BOOL)arg1;
- (id)sessionUUID;
- (BOOL)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setReason:(int)arg1;
- (BOOL)hasDuration;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)reason;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void)dealloc;

@end
