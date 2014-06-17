/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class NSArray, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface VTPhraseSpotter : NSObject  {
    void *_ndetect;
    NSArray *_triggerPhrases;
    double _threshold;
    double _earlyDetectThreshold;
    unsigned long long _earlyDetectResetAtSampleCount;
    BOOL _audioLoggingEnabled;
    double _loggingThreshold;
    unsigned long long _loggingResetTimeout;
    unsigned long long _loggingPreDelay;
    NSString *_audioFileDir;
    NSString *_locale;
    NSString *_configPath;
    NSString *_configData;
    NSString *_configLocale;
    NSString *_configVersion;
    unsigned long long _samplecount;
    unsigned long long _samplecountAtLastTriggerStart;
    unsigned long long _samplecountAtLastTriggerEnd;
    double _lastScore;
    double _lastTriggerEndTime;
    double _earlyDetectTime;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSObject<OS_dispatch_queue> *_ndetectQueue;
    int _heartbeatCounter;
    unsigned char _state;
    int _languageCodeChangedNotificationToken;
    NSObject<OS_dispatch_source> *_languageCodeChangedSource;
    NSObject<OS_dispatch_queue> *_languageCodeChangedQueue;
    unsigned long long _samplerate;
}

@property(readonly) unsigned long long samplerate;
@property(readonly) unsigned long long sampleCount;
@property(readonly) unsigned long long sampleCountAtStartOfTrigger;
@property(readonly) unsigned long long sampleCountAtEndOfTrigger;
@property(readonly) double lastScore;

+ (void)initialize;

- (unsigned long long)samplerate;
- (double)lastScore;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (void)_updateLocale;
- (void)_assetsAvailable:(id)arg1;
- (void)_handleLanguageCodeChanged;
- (void)_listenForLanguageCodeUpdates;
- (id)_capturePath:(BOOL)arg1;
- (void)_unlistenForLocaleUpdates;
- (BOOL)_configureWithDefaults;
- (BOOL)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (void).cxx_destruct;
- (void)_commonInit;
- (unsigned long long)sampleCount;
- (void)dealloc;
- (id)init;
- (unsigned long long)sampleCountAtEndOfTrigger;
- (unsigned long long)sampleCountAtStartOfTrigger;
- (id)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;

@end
