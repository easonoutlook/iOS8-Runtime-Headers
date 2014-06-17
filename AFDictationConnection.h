/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class <AFDictationDelegate>, NSString, NSXPCConnection;

@interface AFDictationConnection : NSObject  {
    NSXPCConnection *_connection;
    NSString *_lastUsedLanguage;
    <AFDictationDelegate> *_delegate;
    unsigned int _stateInSync : 1;
    unsigned int _audioSessionID;
    float _averagePower;
    float _peakPower;
    BOOL _isCapturingSpeech;
    BOOL _hasActiveRequest;
}

@property <AFDictationDelegate> * delegate;
@property(readonly) BOOL currentlyUsingLocalDication;

+ (BOOL)dictationIsEnabled;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)fetchSupportedLanguageCodes:(id)arg1;

- (void)stopSpeech;
- (unsigned int)audioSessionID;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (BOOL)currentlyUsingLocalDication;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_willCancelDictation;
- (void)_willStartDictation;
- (void)_availabilityChanged:(id)arg1;
- (void)prepareWithOptions:(id)arg1;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_willCompleteDictation;
- (void)_willFailDictationWithError:(id)arg1;
- (id)_dictationService;
- (void)_clearConnections;
- (float)peakPower;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_invokeRequestTimeout;
- (void)_connectionInterrupted;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_cancelRequestTimeout;
- (void)_scheduleRequestTimeout;
- (void)preheat;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)cancelSpeech;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1;
- (id)_connection;
- (void).cxx_destruct;
- (void)_updateState;
- (id)delegate;
- (void)endSession;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
