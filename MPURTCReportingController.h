/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class RTCReporting, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPURTCReportingController : MPUReportingController  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _recordingEnabled;
    unsigned int _reportingFlag;
    NSMutableArray *_reportingFlagLoadCompletionHandlers;
    RTCReporting *_rtcReporting;
    BOOL _shouldDeferEventFlushing;
}

@property BOOL shouldDeferEventFlushing;


- (void)flushImmediately;
- (void)_recordReportingEvents:(id)arg1;
- (void)setShouldDeferEventFlushing:(BOOL)arg1;
- (void)loadRTCReportingFlagWithCompletionHandler:(id)arg1;
- (BOOL)shouldDeferEventFlushing;
- (BOOL)_getMethod:(unsigned short*)arg1 respCode:(unsigned short*)arg2 infoDictionary:(id*)arg3 fromReportingEvent:(id)arg4;
- (void).cxx_destruct;
- (id)init;

@end
