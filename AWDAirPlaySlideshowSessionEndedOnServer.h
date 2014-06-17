/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlaySlideshowSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _maxBPS;
    unsigned int _maxPhotoBytes;
    unsigned int _minBPS;
    unsigned int _minPhotoBytes;
    unsigned int _pauses;
    int _reason;
    NSString *_sessionUUID;
    unsigned int _skipAheads;
    unsigned int _skipBacks;
    unsigned int _totalPhotos;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int maxBPS : 1; 
        unsigned int maxPhotoBytes : 1; 
        unsigned int minBPS : 1; 
        unsigned int minPhotoBytes : 1; 
        unsigned int pauses : 1; 
        unsigned int reason : 1; 
        unsigned int skipAheads : 1; 
        unsigned int skipBacks : 1; 
        unsigned int totalPhotos : 1; 
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
@property BOOL hasTotalPhotos;
@property unsigned int totalPhotos;
@property BOOL hasMinPhotoBytes;
@property unsigned int minPhotoBytes;
@property BOOL hasMaxPhotoBytes;
@property unsigned int maxPhotoBytes;
@property BOOL hasMinBPS;
@property unsigned int minBPS;
@property BOOL hasMaxBPS;
@property unsigned int maxBPS;
@property BOOL hasPauses;
@property unsigned int pauses;
@property BOOL hasSkipBacks;
@property unsigned int skipBacks;
@property BOOL hasSkipAheads;
@property unsigned int skipAheads;


- (unsigned int)skipAheads;
- (unsigned int)skipBacks;
- (unsigned int)pauses;
- (BOOL)hasSkipAheads;
- (void)setHasSkipAheads:(BOOL)arg1;
- (void)setSkipAheads:(unsigned int)arg1;
- (BOOL)hasSkipBacks;
- (void)setHasSkipBacks:(BOOL)arg1;
- (void)setSkipBacks:(unsigned int)arg1;
- (BOOL)hasPauses;
- (void)setHasPauses:(BOOL)arg1;
- (void)setPauses:(unsigned int)arg1;
- (unsigned int)maxBPS;
- (unsigned int)minBPS;
- (unsigned int)maxPhotoBytes;
- (unsigned int)minPhotoBytes;
- (unsigned int)totalPhotos;
- (BOOL)hasMaxBPS;
- (void)setHasMaxBPS:(BOOL)arg1;
- (void)setMaxBPS:(unsigned int)arg1;
- (BOOL)hasMinBPS;
- (void)setHasMinBPS:(BOOL)arg1;
- (void)setMinBPS:(unsigned int)arg1;
- (BOOL)hasMaxPhotoBytes;
- (void)setHasMaxPhotoBytes:(BOOL)arg1;
- (void)setMaxPhotoBytes:(unsigned int)arg1;
- (BOOL)hasMinPhotoBytes;
- (void)setHasMinPhotoBytes:(BOOL)arg1;
- (void)setMinPhotoBytes:(unsigned int)arg1;
- (BOOL)hasTotalPhotos;
- (void)setHasTotalPhotos:(BOOL)arg1;
- (void)setTotalPhotos:(unsigned int)arg1;
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