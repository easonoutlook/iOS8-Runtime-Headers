/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSArray, NSString, NSData, _IDSAccount, NSDictionary, NSDate;

@interface IDSAccount : NSObject  {
    _IDSAccount *_internal;
}

@property(retain) NSString * loginID;
@property(retain,readonly) NSString * serviceName;
@property(readonly) BOOL isActive;
@property(readonly) BOOL canSend;
@property(retain,readonly) NSArray * devices;
@property(retain,readonly) NSArray * nearbyDevices;
@property(retain,readonly) NSArray * aliases;
@property(retain,readonly) NSArray * aliasStrings;
@property(retain,readonly) NSArray * vettedAliases;
@property(retain,readonly) NSDictionary * profileInfo;
@property(retain) NSDictionary * accountInfo;
@property(readonly) int accountType;
@property(retain,readonly) NSString * uniqueID;
@property(retain,readonly) NSString * displayName;
@property(readonly) int registrationStatus;
@property(readonly) NSArray * registeredURIs;
@property(readonly) NSData * registrationCertificate;
@property(readonly) NSDate * dateRegistered;
@property(readonly) NSDate * nextRegistrationDate;
@property(readonly) NSData * pushToken;
@property(readonly) NSString * regionID;
@property(readonly) NSString * regionBasePhoneNumber;
@property(readonly) NSDictionary * regionServerContext;
@property(readonly) NSString * profileID;
@property(retain,readonly) NSString * primaryServiceName;


- (void)removeDelegate:(id)arg1;
- (id)uniqueID;
- (BOOL)canSend;
- (int)registrationStatus;
- (id)registrationCertificate;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)deactivateAndPurgeIdentify;
- (id)registeredURIs;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)accountInfo;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)passwordUpdated;
- (id)loginID;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)validateAliases:(id)arg1;
- (void)unvalidateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)authenticateAccount;
- (id)vettedAliases;
- (id)aliases;
- (id)profileInfo;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (void)_callNearbyDevicesChanged;
- (id)profileID;
- (id)regionServerContext;
- (id)regionBasePhoneNumber;
- (id)dateRegistered;
- (id)nextRegistrationDate;
- (id)nearbyDevices;
- (id)primaryServiceName;
- (void)setLoginID:(id)arg1;
- (void)_setIsEnabled:(BOOL)arg1;
- (void)setAccountInfo:(id)arg1;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)aliasStrings;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)setPassword:(id)arg1;
- (id)pushToken;
- (int)accountType;
- (void)setAuthToken:(id)arg1;
- (id)regionID;
- (id)displayName;
- (BOOL)_isEnabled;
- (BOOL)isActive;
- (id)description;
- (void)dealloc;
- (id)_internal;
- (id)devices;
- (id)serviceName;

@end
