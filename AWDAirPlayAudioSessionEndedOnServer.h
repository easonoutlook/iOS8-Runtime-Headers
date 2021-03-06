/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayAudioSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _bigLosses;
    unsigned int _compressionPercent;
    unsigned int _dacpNext;
    unsigned int _dacpPauses;
    unsigned int _dacpPrevious;
    unsigned int _duration;
    unsigned int _futileRetransmits;
    unsigned int _glitches;
    unsigned int _lastPackets;
    unsigned int _lostPackets;
    unsigned int _maxBurstLoss;
    unsigned int _ntpOffsetAvg;
    unsigned int _ntpOffsetMax;
    unsigned int _ntpOffsetMin;
    unsigned int _ntpOutliers;
    unsigned int _ntpRTTAvg;
    unsigned int _ntpRTTMax;
    unsigned int _ntpRTTMin;
    unsigned int _ntpSteps;
    int _reason;
    unsigned int _retransmitAvgMs;
    unsigned int _retransmitMaxMs;
    unsigned int _retransmitMinMs;
    unsigned int _retransmitNotFounds;
    unsigned int _retransmitReceives;
    unsigned int _retransmitRetryMaxMs;
    unsigned int _retransmitRetryMinMs;
    unsigned int _retransmitSends;
    unsigned int _rtpMaxSkew;
    unsigned int _rtpSkewResets;
    NSString *_sessionUUID;
    unsigned int _unrecoveredPackets;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bigLosses : 1; 
        unsigned int compressionPercent : 1; 
        unsigned int dacpNext : 1; 
        unsigned int dacpPauses : 1; 
        unsigned int dacpPrevious : 1; 
        unsigned int duration : 1; 
        unsigned int futileRetransmits : 1; 
        unsigned int glitches : 1; 
        unsigned int lastPackets : 1; 
        unsigned int lostPackets : 1; 
        unsigned int maxBurstLoss : 1; 
        unsigned int ntpOffsetAvg : 1; 
        unsigned int ntpOffsetMax : 1; 
        unsigned int ntpOffsetMin : 1; 
        unsigned int ntpOutliers : 1; 
        unsigned int ntpRTTAvg : 1; 
        unsigned int ntpRTTMax : 1; 
        unsigned int ntpRTTMin : 1; 
        unsigned int ntpSteps : 1; 
        unsigned int reason : 1; 
        unsigned int retransmitAvgMs : 1; 
        unsigned int retransmitMaxMs : 1; 
        unsigned int retransmitMinMs : 1; 
        unsigned int retransmitNotFounds : 1; 
        unsigned int retransmitReceives : 1; 
        unsigned int retransmitRetryMaxMs : 1; 
        unsigned int retransmitRetryMinMs : 1; 
        unsigned int retransmitSends : 1; 
        unsigned int rtpMaxSkew : 1; 
        unsigned int rtpSkewResets : 1; 
        unsigned int unrecoveredPackets : 1; 
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
@property BOOL hasCompressionPercent;
@property unsigned int compressionPercent;
@property BOOL hasGlitches;
@property unsigned int glitches;
@property BOOL hasRetransmitSends;
@property unsigned int retransmitSends;
@property BOOL hasRetransmitReceives;
@property unsigned int retransmitReceives;
@property BOOL hasFutileRetransmits;
@property unsigned int futileRetransmits;
@property BOOL hasRetransmitNotFounds;
@property unsigned int retransmitNotFounds;
@property BOOL hasRetransmitMinMs;
@property unsigned int retransmitMinMs;
@property BOOL hasRetransmitMaxMs;
@property unsigned int retransmitMaxMs;
@property BOOL hasRetransmitAvgMs;
@property unsigned int retransmitAvgMs;
@property BOOL hasRetransmitRetryMinMs;
@property unsigned int retransmitRetryMinMs;
@property BOOL hasRetransmitRetryMaxMs;
@property unsigned int retransmitRetryMaxMs;
@property BOOL hasLostPackets;
@property unsigned int lostPackets;
@property BOOL hasUnrecoveredPackets;
@property unsigned int unrecoveredPackets;
@property BOOL hasLastPackets;
@property unsigned int lastPackets;
@property BOOL hasMaxBurstLoss;
@property unsigned int maxBurstLoss;
@property BOOL hasBigLosses;
@property unsigned int bigLosses;
@property BOOL hasNtpRTTMin;
@property unsigned int ntpRTTMin;
@property BOOL hasNtpRTTMax;
@property unsigned int ntpRTTMax;
@property BOOL hasNtpRTTAvg;
@property unsigned int ntpRTTAvg;
@property BOOL hasNtpOffsetMin;
@property unsigned int ntpOffsetMin;
@property BOOL hasNtpOffsetMax;
@property unsigned int ntpOffsetMax;
@property BOOL hasNtpOffsetAvg;
@property unsigned int ntpOffsetAvg;
@property BOOL hasNtpOutliers;
@property unsigned int ntpOutliers;
@property BOOL hasNtpSteps;
@property unsigned int ntpSteps;
@property BOOL hasRtpMaxSkew;
@property unsigned int rtpMaxSkew;
@property BOOL hasRtpSkewResets;
@property unsigned int rtpSkewResets;
@property BOOL hasDacpPauses;
@property unsigned int dacpPauses;
@property BOOL hasDacpNext;
@property unsigned int dacpNext;
@property BOOL hasDacpPrevious;
@property unsigned int dacpPrevious;


- (unsigned int)dacpPrevious;
- (unsigned int)dacpNext;
- (unsigned int)dacpPauses;
- (unsigned int)rtpSkewResets;
- (unsigned int)rtpMaxSkew;
- (unsigned int)ntpSteps;
- (unsigned int)ntpOutliers;
- (unsigned int)ntpOffsetAvg;
- (unsigned int)ntpOffsetMax;
- (unsigned int)ntpOffsetMin;
- (unsigned int)ntpRTTAvg;
- (unsigned int)ntpRTTMax;
- (unsigned int)ntpRTTMin;
- (unsigned int)bigLosses;
- (unsigned int)maxBurstLoss;
- (unsigned int)lastPackets;
- (unsigned int)unrecoveredPackets;
- (unsigned int)lostPackets;
- (unsigned int)retransmitRetryMaxMs;
- (unsigned int)retransmitRetryMinMs;
- (unsigned int)retransmitAvgMs;
- (unsigned int)retransmitMaxMs;
- (unsigned int)retransmitMinMs;
- (unsigned int)retransmitNotFounds;
- (unsigned int)retransmitReceives;
- (unsigned int)retransmitSends;
- (unsigned int)glitches;
- (unsigned int)compressionPercent;
- (BOOL)hasDacpPrevious;
- (void)setHasDacpPrevious:(BOOL)arg1;
- (void)setDacpPrevious:(unsigned int)arg1;
- (BOOL)hasDacpNext;
- (void)setHasDacpNext:(BOOL)arg1;
- (void)setDacpNext:(unsigned int)arg1;
- (BOOL)hasDacpPauses;
- (void)setHasDacpPauses:(BOOL)arg1;
- (void)setDacpPauses:(unsigned int)arg1;
- (BOOL)hasRtpSkewResets;
- (void)setHasRtpSkewResets:(BOOL)arg1;
- (void)setRtpSkewResets:(unsigned int)arg1;
- (BOOL)hasRtpMaxSkew;
- (void)setHasRtpMaxSkew:(BOOL)arg1;
- (void)setRtpMaxSkew:(unsigned int)arg1;
- (BOOL)hasNtpSteps;
- (void)setHasNtpSteps:(BOOL)arg1;
- (void)setNtpSteps:(unsigned int)arg1;
- (BOOL)hasNtpOutliers;
- (void)setHasNtpOutliers:(BOOL)arg1;
- (void)setNtpOutliers:(unsigned int)arg1;
- (BOOL)hasNtpOffsetAvg;
- (void)setHasNtpOffsetAvg:(BOOL)arg1;
- (void)setNtpOffsetAvg:(unsigned int)arg1;
- (BOOL)hasNtpOffsetMax;
- (void)setHasNtpOffsetMax:(BOOL)arg1;
- (void)setNtpOffsetMax:(unsigned int)arg1;
- (BOOL)hasNtpOffsetMin;
- (void)setHasNtpOffsetMin:(BOOL)arg1;
- (void)setNtpOffsetMin:(unsigned int)arg1;
- (BOOL)hasNtpRTTAvg;
- (void)setHasNtpRTTAvg:(BOOL)arg1;
- (void)setNtpRTTAvg:(unsigned int)arg1;
- (BOOL)hasNtpRTTMax;
- (void)setHasNtpRTTMax:(BOOL)arg1;
- (void)setNtpRTTMax:(unsigned int)arg1;
- (BOOL)hasNtpRTTMin;
- (void)setHasNtpRTTMin:(BOOL)arg1;
- (void)setNtpRTTMin:(unsigned int)arg1;
- (BOOL)hasBigLosses;
- (void)setHasBigLosses:(BOOL)arg1;
- (void)setBigLosses:(unsigned int)arg1;
- (BOOL)hasMaxBurstLoss;
- (void)setHasMaxBurstLoss:(BOOL)arg1;
- (void)setMaxBurstLoss:(unsigned int)arg1;
- (BOOL)hasLastPackets;
- (void)setHasLastPackets:(BOOL)arg1;
- (void)setLastPackets:(unsigned int)arg1;
- (BOOL)hasUnrecoveredPackets;
- (void)setHasUnrecoveredPackets:(BOOL)arg1;
- (void)setUnrecoveredPackets:(unsigned int)arg1;
- (BOOL)hasLostPackets;
- (void)setHasLostPackets:(BOOL)arg1;
- (void)setLostPackets:(unsigned int)arg1;
- (BOOL)hasRetransmitRetryMaxMs;
- (void)setHasRetransmitRetryMaxMs:(BOOL)arg1;
- (void)setRetransmitRetryMaxMs:(unsigned int)arg1;
- (BOOL)hasRetransmitRetryMinMs;
- (void)setHasRetransmitRetryMinMs:(BOOL)arg1;
- (void)setRetransmitRetryMinMs:(unsigned int)arg1;
- (BOOL)hasRetransmitAvgMs;
- (void)setHasRetransmitAvgMs:(BOOL)arg1;
- (void)setRetransmitAvgMs:(unsigned int)arg1;
- (BOOL)hasRetransmitMaxMs;
- (void)setHasRetransmitMaxMs:(BOOL)arg1;
- (void)setRetransmitMaxMs:(unsigned int)arg1;
- (BOOL)hasRetransmitMinMs;
- (void)setHasRetransmitMinMs:(BOOL)arg1;
- (void)setRetransmitMinMs:(unsigned int)arg1;
- (BOOL)hasRetransmitNotFounds;
- (void)setHasRetransmitNotFounds:(BOOL)arg1;
- (void)setRetransmitNotFounds:(unsigned int)arg1;
- (BOOL)hasRetransmitReceives;
- (void)setHasRetransmitReceives:(BOOL)arg1;
- (void)setRetransmitReceives:(unsigned int)arg1;
- (BOOL)hasRetransmitSends;
- (void)setHasRetransmitSends:(BOOL)arg1;
- (void)setRetransmitSends:(unsigned int)arg1;
- (BOOL)hasGlitches;
- (void)setHasGlitches:(BOOL)arg1;
- (void)setGlitches:(unsigned int)arg1;
- (BOOL)hasCompressionPercent;
- (void)setHasCompressionPercent:(BOOL)arg1;
- (void)setCompressionPercent:(unsigned int)arg1;
- (unsigned int)futileRetransmits;
- (BOOL)hasFutileRetransmits;
- (void)setHasFutileRetransmits:(BOOL)arg1;
- (void)setFutileRetransmits:(unsigned int)arg1;
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
