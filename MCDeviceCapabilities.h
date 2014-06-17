/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDeviceCapabilities : NSObject  {
    BOOL _supportsBlockLevelEncryption;
    BOOL _supportsFileLevelEncryption;
}

@property(readonly) BOOL supportsBlockLevelEncryption;
@property(readonly) BOOL supportsFileLevelEncryption;

+ (id)currentDevice;

- (BOOL)supportsFileLevelEncryption;
- (BOOL)supportsBlockLevelEncryption;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3;
- (BOOL)_mediaDiskIsEncrypted;
- (id)init;

@end
