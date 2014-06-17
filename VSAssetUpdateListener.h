/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject  {
    BOOL _isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;

- (void)removeAssetForLanguage:(id)arg1;
- (BOOL)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (void)downloadAssetForLanguage:(id)arg1;
- (void)_updateNextCleanupDate;
- (void)_cancelAssetCleanupTimer;
- (void)_flushLanguageChanges;
- (void)_rescheduleAssetCleanup;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_cleanupAssets;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)init;
- (id)_initShared;

@end
