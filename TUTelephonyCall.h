/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUTelephonyCall : TUCall  {
    struct __CTCall { } *_call;
}

+ (void)stopPlayingDTMFTone;
+ (int)callStatusForCTCallStatusType:(int)arg1;
+ (void)playDTMFToneForKey:(unsigned char)arg1;

- (double)callDuration;
- (void)emergencyCallStatusChangedNotification:(id)arg1;
- (BOOL)isEmergencyCall;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (BOOL)unhold;
- (BOOL)hold;
- (long)causeCode;
- (id)initWithCall:(struct __CTCall { }*)arg1;
- (BOOL)isTTY;
- (BOOL)managesAudioInterruptions;
- (id)callUUID;
- (int)callIdentifier;
- (BOOL)isAlerting;
- (void)leaveConference;
- (void)joinConference;
- (BOOL)isConferenced;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (BOOL)isDownlinkMuted;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (BOOL)isUplinkMuted;
- (void)answerWithSourceIdentifier:(id)arg1;
- (id)callerNameFromNetwork;
- (BOOL)isVoicemail;
- (id)destinationID;
- (int)supportedModelType;
- (int)callStatus;
- (BOOL)isOutgoing;
- (void)_refreshFaceTimeIDSStatus;
- (id)audioCategory;
- (double)startTime;
- (void)disconnect;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (struct __CTCall { }*)call;
- (int)service;
- (BOOL)isBlocked;

@end