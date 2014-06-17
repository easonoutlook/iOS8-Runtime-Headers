/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ACAccountType, ACAccountCredential, ACAccount, NSMutableSet, ACAccountStore, NSSet, NSArray, NSDictionary, NSDate, NSString, NSMutableDictionary, NSURL;

@interface ACAccount : NSObject <NSSecureCoding> {
    ACAccountStore *_store;
    NSString *_identifier;
    NSString *_accountDescription;
    NSString *_owningBundleID;
    NSString *_username;
    NSString *_authenticationType;
    NSString *_credentialType;
    NSString *_clientToken;
    BOOL _haveCheckedForClientToken;
    ACAccountType *_accountType;
    ACAccountCredential *_credential;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_dataclassProperties;
    BOOL _accountAccessAvailable;
    BOOL _authenticated;
    BOOL _active;
    BOOL _supportsAuthentication;
    BOOL _visible;
    NSURL *_objectID;
    NSDate *_date;
    NSDate *_lastCredentialRenewalRejectionDate;
    ACAccount *_parentAccount;
    BOOL _haveCheckedForParentAccount;
    NSString *_parentAccountIdentifier;
    BOOL _haveCheckedForChildAccounts;
    NSArray *_childAccounts;
    NSMutableSet *_enabledDataclasses;
    NSMutableSet *_provisionedDataclasses;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_dirtyAccountProperties;
    id _credentialsDidChangeObserver;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _accountPropertiesTransformer;

    BOOL _creatingFromManagedObject;
}

@property(readonly) ACAccount * ck_cloudKitAccount;
@property(readonly) NSString * aa_personID;
@property(setter=aa_setFirstName:,copy) NSString * aa_firstName;
@property(setter=aa_setLastName:,copy) NSString * aa_lastName;
@property(readonly) NSString * aa_primaryEmail;
@property(readonly) NSString * aa_appleId;
@property(readonly) NSArray * aa_appleIDAliases;
@property(readonly) BOOL aa_needsRegistration;
@property(readonly) BOOL aa_needsEmailConfiguration;
@property(readonly) BOOL aa_serviceUnavailable;
@property(readonly) NSDictionary * aa_serviceUnavailableInfo;
@property(readonly) NSString * aa_protocolVersion;
@property(readonly) NSString * aa_displayName;
@property(readonly) NSString * aa_syncStoreIdentifier;
@property(readonly) NSString * aa_accountTypeString;
@property(readonly) ACAccount * aa_fmfAccount;
@property(readonly) ACAccount * aa_fmipAccount;
@property(readonly) NSString * aa_fmipToken;
@property(readonly) NSString * aa_mapsToken;
@property(readonly) NSString * aa_hsaToken;
@property(readonly) NSString * aa_accountFooterText;
@property(readonly) NSDictionary * aa_accountFooterButton;
@property(readonly) NSDictionary * aa_accountFirstDisplayAlert;
@property(readonly) ACAccount * aa_cloudKitAccount;
@property(readonly) ACAccount * aa_childMailAccount;
@property(setter=aa_setPrimaryAccount:) BOOL aa_isPrimaryAccount;
@property(setter=aa_setPrimaryEmailVerified:) BOOL aa_isPrimaryEmailVerified;
@property(setter=aa_setSyncedAccount:) BOOL aa_isSyncedAccount;
@property(setter=aa_setNeedsToVerifyTerms:) BOOL aa_needsToVerifyTerms;
@property(setter=aa_setPassword:,copy) NSString * aa_password;
@property(setter=aa_setAuthToken:,copy) NSString * aa_authToken;
@property(retain) NSString * mcProfileUUID;
@property(retain) NSString * mcPayloadUUID;
@property(readonly) NSString * identifier;
@property(retain) ACAccountType * accountType;
@property(copy) NSString * accountDescription;
@property(copy) NSString * username;
@property(readonly) NSString * userFullName;
@property(retain) ACAccountCredential * credential;
@property(readonly) NSURL * objectID;
@property(readonly) ACAccountStore * accountStore;
@property(retain) ACAccount * parentAccount;
@property(readonly) NSString * parentAccountIdentifier;
@property(readonly) NSArray * childAccounts;
@property(retain) NSMutableSet * enabledDataclasses;
@property(retain) NSMutableSet * provisionedDataclasses;
@property(readonly) NSDictionary * dataclassProperties;
@property(getter=isAuthenticated) BOOL authenticated;
@property(readonly) NSDictionary * accountProperties;
@property(readonly) ACAccount * displayAccount;
@property(getter=isActive) BOOL active;
@property BOOL supportsAuthentication;
@property(getter=isDirty,readonly) BOOL dirty;
@property(readonly) NSSet * dirtyProperties;
@property(readonly) NSSet * dirtyAccountProperties;
@property(readonly) NSString * authenticationType;
@property(readonly) NSString * credentialType;
@property(readonly) BOOL supportsPush;
@property(retain) NSDate * creationDate;
@property(getter=isVisible) BOOL visible;
@property(retain) NSDate * lastCredentialRenewalRejectionDate;
@property(readonly) NSString * shortDebugName;
@property(readonly) NSString * clientToken;
@property(copy) id accountPropertiesTransformer;

+ (BOOL)supportsSecureCoding;
+ (id)_createNewAccountUID;
+ (id)aa_dataclassesBoundToSingleAppleAccount;
+ (id)aa_dataclassesBoundToPrimaryAppleAccount;

- (void)setAccountType:(id)arg1;
- (BOOL)isAuthenticated;
- (id)username;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)creationDate;
- (id)objectID;
- (id)enabledDataclasses;
- (void)setCredential:(id)arg1;
- (id)credentialWithError:(id*)arg1;
- (void)setAccountDescription:(id)arg1;
- (id)accountDescription;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountProperties;
- (id)parentAccountIdentifier;
- (id)accountPropertyForKey:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setAuthenticationType:(id)arg1;
- (id)authenticationType;
- (id)credential;
- (id)provisionedDataclasses;
- (BOOL)supportsPush;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (BOOL)addClientToken:(id)arg1;
- (BOOL)isEnabledToSyncDataclass:(id)arg1;
- (BOOL)authenticated;
- (id)clientToken;
- (id)parentAccount;
- (void)setParentAccount:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)initWithAccountType:(id)arg1;
- (id)accountType;
- (id)childAccounts;
- (id)accountStore;
- (id)propertyForKey:(id)arg1;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (id)lastCredentialRenewalRejectionDate;
- (id)accountByCleaningThirdPartyTransformations;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (void)markAllPropertiesDirty;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (id)dataclassProperties;
- (id)dirtyAccountProperties;
- (id)diffAccount:(id)arg1;
- (void)_loadAllCachedProperties;
- (void)_setAccountStore:(id)arg1;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (void)setOwningBundleID:(id)arg1;
- (id)owningBundleID;
- (BOOL)supportsAuthentication;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (void)setCredentialType:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)setActive:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (BOOL)isActive;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reload;
- (id)credentialType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDirty;
- (id)description;
- (void)dealloc;
- (id)userFullName;
- (BOOL)isPropertyDirty:(id)arg1;
- (id)dirtyProperties;
- (void)_setObjectID:(id)arg1;
- (void)refresh;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)displayAccount;
- (void)setAccountPropertiesTransformer:(id)arg1;
- (id)shortDebugName;
- (void)setCreatingFromManagedObject:(BOOL)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)setAccountProperties:(id)arg1;
- (void)_markCredentialDirty;
- (id)fullDescription;
- (BOOL)_useParentForCredentials;
- (id)enabledAndSyncableDataclasses;
- (void)_markAccountPropertyDirty:(id)arg1;
- (id)accountPropertiesTransformer;
- (void)credentialsChanged:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_installCredentialsChangedObserver;
- (void)_clearCachedCredentials;
- (void)_clearDirtyProperties;
- (void)_clearCachedChildAccounts;
- (id)mcBackingPayload;
- (id)mcBackingProfile;
- (void)setMcPayloadUUID:(id)arg1;
- (id)mcPayloadUUID;
- (void)setMcProfileUUID:(id)arg1;
- (id)mcProfileUUID;
- (BOOL)MCIsManaged;
- (id)appleID;
- (id)dsid;
- (BOOL)canRemoveAccount;
- (void)setDSID:(id)arg1;
- (id)_registeredBundles;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (void)storeOriginalUsername;
- (id)aa_password;
- (id)aa_appleIDAliases;
- (id)aa_primaryEmail;
- (id)aa_authToken;
- (id)aa_personID;
- (id)aa_lastName;
- (id)aa_firstName;
- (void)aa_setSyncedAccount:(BOOL)arg1;
- (void)aa_setPrimaryEmailVerified:(BOOL)arg1;
- (void)aa_setPrimaryAccount:(BOOL)arg1;
- (BOOL)aa_needsRegistration;
- (id)aa_authTokenWithError:(id*)arg1;
- (BOOL)aa_needsToVerifyTerms;
- (void)aa_setPassword:(id)arg1;
- (id)aa_syncStoreIdentifier;
- (BOOL)aa_needsEmailConfiguration;
- (void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)aa_useCellularForDataclass:(id)arg1;
- (BOOL)aa_isSyncedAccount;
- (id)aa_serviceUnavailableInfo;
- (BOOL)aa_serviceUnavailable;
- (id)aa_accountFirstDisplayAlert;
- (id)aa_accountFooterButton;
- (id)aa_accountFooterText;
- (id)aa_hsaTokenWithError:(id*)arg1;
- (id)aa_hsaToken;
- (id)aa_mapsToken;
- (id)aa_fmipToken;
- (id)aa_protocolVersion;
- (BOOL)aa_isPrimaryEmailVerified;
- (id)aa_accountTypeString;
- (void)aa_setLastName:(id)arg1;
- (void)aa_setFirstName:(id)arg1;
- (id)aa_displayName;
- (id)aa_childMailAccount;
- (void)aa_setHSAToken:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
- (id)aa_cloudKitAccount;
- (id)aa_fmfAccount;
- (id)aa_fmipAccount;
- (void)aa_setNeedsToVerifyTerms:(BOOL)arg1;
- (int)mobileMeAccountStatus;
- (BOOL)aa_isPrimaryAccount;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (void)aa_setAuthToken:(id)arg1;
- (id)aa_appleId;
- (void)aa_removeCerts;
- (void)aa_configureCerts;
- (id)displayUsername;
- (id)aaui_compositeName;
- (id)aida_deviceProvisioningInfo;
- (id)aida_alternateDSID;
- (id)aida_tokenWithExpirationCheck;
- (id)aida_tokenWithExpiryCheckForService:(id)arg1;
- (id)aida_tokenForService:(id)arg1;
- (id)aida_dsid;
- (id)ck_cloudKitAccount;
- (void)setPasswordFromSync:(id)arg1;
- (void)applySyncProperties:(id)arg1;
- (id)syncIdentityString;
- (BOOL)isMobileMeAccount;
- (id)_usernameFromProperties:(id)arg1;

@end