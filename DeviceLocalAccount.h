/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}

+ (id)typeString;
+ (id)tetheredSourceForDataClass:(id)arg1;
+ (BOOL)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (id)basicAccountProperties;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)_identifier;

- (id)syncStoreIdentifier;
- (id)displayName;
- (id)identifier;

@end
