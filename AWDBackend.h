/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@class AWDStats, TimingCollection;

@interface AWDBackend : RTCReportingBackend  {
    AWDStats *_awdstat;
    TimingCollection *_videoQualityTimers;
    BOOL _callStarted;
    BOOL _RTStatsReceived;
}

@property(retain) AWDStats * awdstat;
@property BOOL callStarted;
@property BOOL RTStatsReceived;
@property(retain) TimingCollection * videoQualityTimers;


- (BOOL)callStarted;
- (BOOL)RTStatsReceived;
- (id)videoQualityTimers;
- (id)awdstat;
- (void)setRTStatsReceived:(BOOL)arg1;
- (void)setCallStarted:(BOOL)arg1;
- (void)setVideoQualityTimers:(id)arg1;
- (void)setAwdstat:(id)arg1;
- (void)parseVideoProperty:(unsigned short)arg1 dict:(id)arg2;
- (void)parseCellTechChange:(unsigned short)arg1 dict:(id)arg2;
- (void)parseAWDEvent:(unsigned short)arg1 dict:(id)arg2;
- (void)parseVideoDegraded:(id)arg1 direction:(unsigned short)arg2;
- (void)parseConnectivityTimings:(id)arg1;
- (void)parseVideoStats:(unsigned short)arg1 dict:(id)arg2;
- (void)parseRTStats:(id)arg1;
- (void)parseAudioTierChange:(id)arg1;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval { int x1; int x2; }*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 dict:(id)arg6;
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;
- (void)dealloc;

@end
