/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSArray, NSString, NSXPCConnection, <AFAssistantUIService>, <AFSpeechDelegate>, NSMutableDictionary;

@interface AFConnection : NSObject  {
    NSXPCConnection *_connection;
    NSString *_outstandingRequestClass;
    NSArray *_cachedBulletins;
    BOOL _hasActiveRequest;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned int _stateInSync : 1;
    unsigned int _shouldSpeak : 1;
    unsigned int _isCapturingSpeech : 1;
    unsigned int _hasOutstandingRequest : 1;
    unsigned int _audioSessionID;
    float _averagePower;
    float _peakPower;
    unsigned int _clientStateIsInSync : 1;
    unsigned int _voiceOverIsActive : 1;
    <AFAssistantUIService> *_delegate;
    <AFSpeechDelegate> *_speechDelegate;
}

@property <AFAssistantUIService> * delegate;
@property <AFSpeechDelegate> * speechDelegate;
@property(readonly) BOOL isRecording;

+ (id)currentLanguageCode;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (BOOL)isAvailable;
+ (void)defrost;
+ (void)beginMonitoringAvailability;
+ (id)outputVoice;
+ (BOOL)isReadyForLanguageCode:(id)arg1;
+ (BOOL)userDataSyncNeeded;
+ (void)stopMonitoringAvailability;
+ (BOOL)assistantIsSupported;
+ (void)initialize;

- (void)_clearConnection;
- (void)rollbackRequest;
- (void)clearContext;
- (void)cancelRequest;
- (BOOL)isRecording;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id)arg2;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)setApplicationContextWithIdentifiers:(id)arg1;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)startRequestWithText:(id)arg1;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)stopSpeech;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)usefulUserResultWillPresent;
- (unsigned int)audioSessionID;
- (void)updateSpeechOptions:(id)arg1;
- (BOOL)shouldSpeak;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (void)setSpeechDelegate:(id)arg1;
- (void)recordMetrics:(id)arg1;
- (void)telephonyRequestCompleted;
- (void)sendReplyCommand:(id)arg1;
- (void)setOverriddenApplicationContext:(id)arg1 includeSmsInContext:(id)arg2;
- (void)rollbackClearContext;
- (void)forceAudioSessionActive;
- (void)setIsStark:(BOOL)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_barrier;
- (id)_clientServiceWithErrorHandler:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (id)_cachedBulletins;
- (id)speechDelegate;
- (void)sendGenericAceCommand:(id)arg1;
- (float)peakPower;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellDelegateRequestFinished;
- (void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)_doCommand:(id)arg1 reply:(id)arg2;
- (void)prepareForPhoneCall;
- (void)_extendRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)preheatWithStyle:(int)arg1;
- (void)_willCancelRequest;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (id)_clientService;
- (void)_invokeRequestTimeout;
- (void)_updateClientState;
- (void)_connectionInterrupted;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_requestDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willCompleteRequest;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_cancelRequestTimeout;
- (void)_scheduleRequestTimeout;
- (void)_tellDelegateRequestWillStart;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)preheat;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)cancelSpeech;
- (float)averagePower;
- (id)_connection;
- (void).cxx_destruct;
- (void)_updateState;
- (id)delegate;
- (void)endSession;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
