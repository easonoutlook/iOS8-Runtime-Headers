/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {
    unsigned long long _durationFromVoiceRecordingEnd;
    unsigned long long _durationFromVoiceSendEnd;
    unsigned long long _timestamp;
    struct { 
        unsigned int durationFromVoiceRecordingEnd : 1; 
        unsigned int durationFromVoiceSendEnd : 1; 
        unsigned int timestamp : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasDurationFromVoiceRecordingEnd;
@property unsigned long long durationFromVoiceRecordingEnd;
@property BOOL hasDurationFromVoiceSendEnd;
@property unsigned long long durationFromVoiceSendEnd;


- (unsigned long long)durationFromVoiceSendEnd;
- (unsigned long long)durationFromVoiceRecordingEnd;
- (BOOL)hasDurationFromVoiceSendEnd;
- (void)setHasDurationFromVoiceSendEnd:(BOOL)arg1;
- (void)setDurationFromVoiceSendEnd:(unsigned long long)arg1;
- (BOOL)hasDurationFromVoiceRecordingEnd;
- (void)setHasDurationFromVoiceRecordingEnd:(BOOL)arg1;
- (void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1;
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
