/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSString, TLAccessQueue, NSDictionary, NSMutableDictionary;

@interface TLToneManager : NSObject  {
    BOOL _shouldUseServiceToAccessTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_iTunesToneIdentifiersByPID;
    NSMutableDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    NSDictionary *_previewBehaviorsByDefaultIdentifier;
    NSDictionary *_cachedTonePreferences;
    TLAccessQueue *_accessQueue;
}

@property(readonly) NSString * _rootDirectory;
@property(readonly) NSString * _deviceITunesRingtoneDirectory;
@property(readonly) NSString * _deviceITunesRingtoneInformationPlist;
@property(readonly) NSString * _iTunesRingtoneDirectory;
@property(readonly) NSString * _iTunesRingtoneInformationPlist;
@property(readonly) NSString * _systemRingtoneDirectory;
@property(setter=_setITunesTonesByIdentifier:,retain) NSMutableDictionary * _iTunesTonesByIdentifier;
@property(setter=_setITunesToneIdentifiersByPID:,retain) NSMutableDictionary * _iTunesToneIdentifiersByPID;
@property(setter=_setAlertTonesByIdentifier:,retain) NSMutableDictionary * _alertTonesByIdentifier;
@property(setter=_setToneIdentifierAliasMap:,retain) NSDictionary * _toneIdentifierAliasMap;
@property(setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;
@property(setter=_setPreviewBehaviorsByDefaultIdentifier:,retain) NSDictionary * _previewBehaviorsByDefaultIdentifier;
@property(setter=_setShouldUseServiceToAccessTonePreferences:) BOOL _shouldUseServiceToAccessTonePreferences;
@property(setter=_setCachedTonePreferences:,retain) NSDictionary * _cachedTonePreferences;
@property(setter=_setShouldIgnoreNextToneDidChangeNotification:) BOOL _shouldIgnoreNextToneDidChangeNotification;

+ (BOOL)_migrateLegacyToneSettings;
+ (id)_defaultToneIdentifierForAlertType:(int)arg1;
+ (id)_copySystemWideTonePreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
+ (struct __CFString { }*)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString { }*)arg1;
+ (id)sharedToneManager;

- (void)_handleDeviceRingtonesChangedNotification;
- (BOOL)_toneIsSettableForAlertType:(int)arg1;
- (void)_removeAllSyncedData;
- (BOOL)_removeSyncedToneByPID:(id)arg1;
- (BOOL)_insertSyncedToneMetadata:(id)arg1 fileName:(id)arg2;
- (id)_iTunesToneForPID:(id)arg1;
- (id)_allSyncedTones;
- (BOOL)_transferPurchasedToITunes:(id)arg1;
- (BOOL)_insertPurchasedToneMetadata:(id)arg1 fileName:(id)arg2;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (unsigned long)currentToneSoundIDForAlertType:(int)arg1;
- (id)currentToneNameForAlertType:(int)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (unsigned long long)_installedTonesSize;
- (BOOL)_shouldIgnoreNextToneDidChangeNotification;
- (id)_toneIdentifierForFileAtPath:(id)arg1;
- (BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2 deletedMetadata:(id*)arg3;
- (BOOL)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)_defaultRingtoneName;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)_defaultRingtonePath;
- (id)_systemRingtoneDirectory;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (id)_alertTonesByIdentifier;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (id)filePathForToneIdentifier:(id)arg1;
- (unsigned long)soundIDForToneIdentifier:(id)arg1;
- (unsigned long)currentToneSoundIDForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)_handleTonePreferencesChangedNotification;
- (void)_setShouldIgnoreNextToneDidChangeNotification:(BOOL)arg1;
- (BOOL)_setToneIdentifierUsingService:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_tonePreferencesFromService;
- (BOOL)_shouldUseServiceToAccessTonePreferences;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)_newServiceConnection;
- (id)_cachedTonePreferences;
- (id)defaultRingtoneIdentifier;
- (id)_previewBehaviorsByDefaultIdentifier;
- (id)_toneIdentifierAliasMap;
- (id)defaultToneIdentifierForAlertType:(int)arg1;
- (id)_systemModernSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (int)_lockManifestAtPath:(id)arg1;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (id)_installedTones;
- (id)_iTunesTonesByIdentifier;
- (id)_iTunesToneIdentifiersByPID;
- (id)_deviceITunesRingtoneInformationPlist;
- (id)_iTunesRingtoneInformationPlist;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (id)_rootDirectory;
- (void)_setPreviewBehaviorsByDefaultIdentifier:(id)arg1;
- (void)_setCachedTonePreferences:(id)arg1;
- (void)_setToneIdentifierAliasMap:(id)arg1;
- (void)_setAlertTonesByIdentifier:(id)arg1;
- (void)_setITunesToneIdentifiersByPID:(id)arg1;
- (void)_setITunesTonesByIdentifier:(id)arg1;
- (void)_performBlockInAccessQueue:(id)arg1;
- (void)_loadPreviewBehaviorsByDefaultIdentifier;
- (void)_loadToneIdentifierAliasMap;
- (void)_loadAlertToneInfo;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_setShouldUseServiceToAccessTonePreferences:(BOOL)arg1;
- (void)_setAccessQueue:(id)arg1;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)newAVItemForToneIdentifier:(id)arg1;
- (unsigned long)_previewBehaviorForDefaultIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(BOOL*)arg2;
- (BOOL)_filePathHasSupportedExtensionForRingtone:(id)arg1;
- (id)_iTunesToneWithIdentifier:(id)arg1;
- (id)_deviceITunesRingtoneDirectory;
- (id)_iTunesRingtoneDirectory;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_accessQueue;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)nameForToneIdentifier:(id)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;

@end
