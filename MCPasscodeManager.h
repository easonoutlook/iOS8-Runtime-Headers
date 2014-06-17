/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPasscodeManager : NSObject  {
}

+ (id)sharedManager;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;
+ (id)generateSalt;
+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3;
+ (id)deviceLockedError;
+ (BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4;
+ (BOOL)isDeviceUnlocked;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;

- (BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1;
- (id)localizedDescriptionOfPasscodePolicy;
- (id)_passcodeCharacteristics;
- (BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3;
- (id)_publicPasscodeDict;
- (id)_privatePasscodeDict;
- (id)_wrongPasscodeError;
- (void)lockDevice;
- (int)newPasscodeEntryScreenType;
- (int)currentUnlockScreenType;
- (void)passcodeExpiryDateCompletionBlock:(id)arg1;
- (BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3;
- (BOOL)isPasscodeSet;
- (void)lockDeviceImmediately:(BOOL)arg1;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2;
- (BOOL)isDeviceLocked;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;
- (id)passcodeExpiryDateOutError:(id*)arg1;

@end
