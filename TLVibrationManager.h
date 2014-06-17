/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class TLAccessQueue, NSDictionary;

@interface TLVibrationManager : NSObject  {
    BOOL _needsRefresh;
    BOOL _allowsAutoRefresh;
    unsigned int _specialBehaviors;
    NSDictionary *_cachedSystemVibrationPatterns;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    TLAccessQueue *_accessQueue;
}

@property BOOL needsRefresh;
@property BOOL allowsAutoRefresh;
@property(readonly) BOOL shouldVibrateForCurrentRingerSwitchState;
@property(readonly) BOOL shouldVibrateOnRing;
@property(readonly) BOOL shouldVibrateOnSilent;
@property(setter=_setAllowsAutoRefresh:) BOOL _allowsAutoRefresh;
@property(setter=_setSpecialBehaviors:) unsigned int _specialBehaviors;
@property(getter=_isUnitTestingModeEnabled,readonly) BOOL _unitTestingModeEnabled;
@property(readonly) NSDictionary * _systemVibrationPatterns;
@property(setter=_setCachedSystemVibrationPatterns:,retain) NSDictionary * _cachedSystemVibrationPatterns;
@property(readonly) NSDictionary * _userGeneratedVibrationPatterns;
@property(setter=_setCachedUserGeneratedVibrationPatterns:,retain) NSDictionary * _cachedUserGeneratedVibrationPatterns;
@property(setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotification;
+ (id)sharedVibrationManager;

- (BOOL)_migrateLegacySettings;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (BOOL)_vibrationIsSettableForAlertType:(int)arg1;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (id)currentVibrationNameForAlertType:(int)arg1;
- (BOOL)allowsAutoRefresh;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (unsigned int)_storedSystemVibrationDataMigrationVersion;
- (BOOL)shouldVibrateOnRing;
- (BOOL)shouldVibrateOnSilent;
- (BOOL)_booleanPreferenceForKey:(struct __CFString { }*)arg1 defaultValue:(BOOL)arg2;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2;
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)arg1 error:(id*)arg2;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (id)_systemVibrationPatterns;
- (id)_cachedSystemVibrationPatterns;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)_userGeneratedVibrationPatterns;
- (void)_setNeedsRefresh:(BOOL)arg1;
- (id)_cachedUserGeneratedVibrationPatterns;
- (BOOL)needsRefresh;
- (unsigned int)_specialBehaviors;
- (BOOL)_allowsAutoRefresh;
- (void)_setCachedUserGeneratedVibrationPatterns:(id)arg1;
- (void)_setCachedSystemVibrationPatterns:(id)arg1;
- (BOOL)_isUnitTestingModeEnabled;
- (void)_setAllowsAutoRefresh:(BOOL)arg1;
- (void)_setSpecialBehaviors:(unsigned int)arg1;
- (id)_initWithSpecialBehaviors:(unsigned int)arg1;
- (void)_performBlockInAccessQueue:(id)arg1;
- (void)_setAccessQueue:(id)arg1;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (id)noneVibrationName;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2;
- (BOOL)shouldVibrateForCurrentRingerSwitchState;
- (id)noneVibrationPattern;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_accessQueue;
- (void)dealloc;
- (id)init;
- (BOOL)refresh;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (void)setAllowsAutoRefresh:(BOOL)arg1;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;

@end
