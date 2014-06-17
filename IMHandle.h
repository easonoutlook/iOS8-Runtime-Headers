/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSAttributedString, NSURL, IMAccount, NSData, NSDate, NSSet, NSArray, NSDictionary, IMServiceImpl, NSString, NSMutableArray, IMPerson;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    NSString *_guid;
    IMAccount *_account;
    NSString *_id;
    NSString *_uncanonicalID;
    NSString *_countryCode;
    NSDictionary *_otherServiceIDs;
    NSDate *_idleSince;
    NSDate *_feedUpdatedDate;
    NSDictionary *_extraProps;
    NSDictionary *_certs;
    NSSet *_groups;
    IMPerson *_person;
    NSString *_abFirstName;
    NSString *_abLastName;
    NSString *_abFullName;
    NSString *_abNickname;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_uniqueName;
    NSData *_pictureData;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSAttributedString *_richStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSString *_prevStatusMsg;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSURL *_statusURL;
    struct __CFPhoneNumber { } *_phoneNumberRef;
    NSString *_formattedNumber;
    BOOL _hasCheckedPhoneNumber;
    unsigned int _status;
    unsigned int _prevStatus;
    unsigned long long _capabilities;
    unsigned int _authRequestStatus;
    unsigned int _resourceIndex;
    int _IDStatus;
    BOOL _isRetainingAccount;
    BOOL _blockNotifications;
    BOOL _hasTemporaryWatch;
    BOOL _isMobile;
    BOOL _isBot;
    BOOL _isAnonymous;
    BOOL _beingTornDown;
    BOOL _hasCheckedCardMap;
    BOOL _isRegistered;
    int _priority;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSURL *_statusMessageURL;
}

@property(readonly) BOOL hasNoConferencingCaps;
@property(retain,readonly) NSString * ID;
@property(retain) NSString * originalID;
@property(retain) NSString * countryCode;
@property(retain,readonly) NSString * displayID;
@property(retain,readonly) NSString * normalizedID;
@property(readonly) BOOL hasName;
@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * fullName;
@property(retain,readonly) NSString * uniqueName;
@property(retain,readonly) NSString * nameAndID;
@property(retain,readonly) NSString * nameAndEmail;
@property(retain,readonly) NSString * firstName;
@property(retain,readonly) NSString * lastName;
@property(retain,readonly) NSString * nickname;
@property(retain,readonly) IMAccount * account;
@property(retain,readonly) IMServiceImpl * service;
@property int IDStatus;
@property(retain,readonly) NSURL * statusURL;
@property(retain) NSURL * statusMessageAsURL;
@property(readonly) unsigned int status;
@property(retain,readonly) NSString * statusMessage;
@property(retain,readonly) NSString * nameOfStatus;
@property(retain,readonly) NSAttributedString * richStatusMessage;
@property(retain,readonly) NSString * offlineString;
@property(readonly) unsigned int previousStatus;
@property(retain,readonly) NSString * previousStatusMessage;
@property(readonly) double timeSinceWentOffline;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) unsigned int authRequestStatus;
@property(readonly) double idleTime;
@property(retain,readonly) NSString * idleString;
@property(retain,readonly) NSDate * feedUpdatedDate;
@property int priority;
@property(readonly) BOOL canBeAdded;
@property(readonly) BOOL canBeDeleted;
@property(readonly) unsigned long long capabilities;
@property(readonly) BOOL isBot;
@property(readonly) BOOL isBuddy;
@property(readonly) BOOL isLoginIMHandle;
@property(readonly) BOOL isVisiblyBlocked;
@property(setter=setBlocked:) BOOL isBlocked;
@property(readonly) BOOL isAnonymous;
@property(readonly) BOOL isSystemUser;
@property(readonly) BOOL isMobile;
@property(readonly) BOOL isLoginIMHandleForAnyAccount;
@property(retain,readonly) NSString * mobileDeviceName;
@property(readonly) BOOL watchingIMHandle;
@property(retain,readonly) NSData * pictureData;
@property(retain) NSDictionary * otherServiceIDs;
@property(retain,readonly) NSDictionary * extraProperties;
@property(retain,readonly) NSString * email;
@property(retain,readonly) NSArray * emails;
@property(setter=setIMPerson:,retain) IMPerson * person;
@property(readonly) int addressBookIdentifier;
@property(retain,readonly) NSArray * groupsArray;
@property(retain,readonly) NSSet * groups;
@property(readonly) BOOL hasOtherSiblings;
@property(retain,readonly) NSSet * siblings;
@property(retain,readonly) NSArray * siblingsArray;
@property(retain,readonly) NSArray * accountSiblingsArray;
@property(retain,readonly) NSArray * existingAccountSiblingsArray;
@property(readonly) id bestSibling;
@property(retain,readonly) id bestAccountSibling;
@property(readonly) BOOL isConferenceAvailable;
@property(readonly) BOOL hasConferencing;
@property(readonly) BOOL hasVideo;
@property(readonly) BOOL hasMultiwayVideo;
@property(readonly) BOOL hasAudio;
@property(readonly) BOOL hasMultiwayAudio;
@property(retain,readonly) NSString * resource;
@property(retain,readonly) NSString * IDWithoutResource;
@property(retain,readonly) NSString * server;
@property(retain,readonly) NSString * accountTypeName;
@property(retain,readonly) NSString * guid;
@property(retain,readonly) NSString * _displayNameWithAbbreviation;
@property(readonly) BOOL supportsARDMuxing;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasResource;
@property(readonly) id imHandleWithoutResource;
@property(readonly) id existingIMHandleWithoutResource;
@property(readonly) BOOL hasServer;
@property(retain,readonly) IMPerson * _cachedPerson;
@property(readonly) NSArray * dependentIMHandles;
@property(readonly) BOOL areABPropertiesRecent;
@property(setter=_setIsRegisteredWithRegistrar:) BOOL _isRegisteredWithRegistrar;
@property(retain) NSData * customPictureData;

+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (BOOL)notificationsEnabled;
+ (void)setNotificationsEnabled:(BOOL)arg1;
+ (id)nameOfStatus:(unsigned int)arg1;
+ (id)bestIMHandleInArray:(id)arg1;
+ (void)_loadStatusNames;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;

- (BOOL)hasCapability:(unsigned long long)arg1;
- (id)displayID;
- (BOOL)hasLocation;
- (BOOL)hasName;
- (id)countryCode;
- (id)nickname;
- (void)setEmails:(id)arg1;
- (id)emails;
- (id)email;
- (id)fullName;
- (id)lastName;
- (id)firstName;
- (id)resource;
- (void)setUniqueName:(id)arg1;
- (void)setImageData:(id)arg1;
- (BOOL)hasVideo;
- (id)statusMessage;
- (BOOL)canBeDeleted;
- (id)guid;
- (id)fmfSiblingHandles;
- (id)imHandleRegistrarGUID;
- (void)_sendRemoteLogDumpRequest;
- (void)setStatusMessageAsURL:(id)arg1;
- (id)statusMessageAsURL;
- (void)setIDStatus:(int)arg1;
- (BOOL)isBot;
- (void)setOtherServiceIDs:(id)arg1;
- (id)richStatusMessage;
- (id)previousStatusMessage;
- (id)feedUpdatedDate;
- (unsigned int)previousStatus;
- (id)statusURL;
- (void)_setIsRegisteredWithRegistrar:(BOOL)arg1;
- (BOOL)_isRegisteredWithRegistrar;
- (void)setCustomPictureData:(id)arg1;
- (id)customPictureData;
- (void)_imPersonPictureChanged:(id)arg1;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (BOOL)hasMultiwayAudio;
- (BOOL)hasMultiwayVideo;
- (BOOL)isConferenceAvailable;
- (BOOL)hasConferencing;
- (id)_bestChatSibling;
- (id)_chatSiblings;
- (BOOL)_isChatSiblingOf:(id)arg1;
- (BOOL)isSiblingOf:(id)arg1;
- (BOOL)isAccountSiblingOf:(id)arg1;
- (id)siblingsArray;
- (BOOL)hasOtherSiblings;
- (int)compareNormalizedIDs:(id)arg1;
- (int)compareLastNames:(id)arg1;
- (int)compareFirstNames:(id)arg1;
- (id)idleString;
- (id)offlineString;
- (void)setStatusURLFromString:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)_setIDStatus:(int)arg1;
- (id)nameOfStatus;
- (void)statusMessageChanged:(id)arg1;
- (void)setPersonStatus:(unsigned int)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (id)dependentIMHandles;
- (id)accountTypeName;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (void)setBlocked:(BOOL)arg1;
- (BOOL)isVisiblyBlocked;
- (id)bestSibling;
- (id)bestIMHandleForAccount:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (void)requestValueOfProperty:(id)arg1;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (BOOL)isLoginIMHandleForAnyAccount;
- (id)mobileDeviceName;
- (void)setIsBot:(BOOL)arg1;
- (void)setIsMobile:(BOOL)arg1;
- (BOOL)isSystemUser;
- (BOOL)canBeAdded;
- (void)setLocalNickname:(id)arg1;
- (void)_clearABPersonLookup;
- (void)clearABPerson;
- (id)nameAndEmail;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3;
- (id)_handleInfo;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (void)_registerForIMPersonPictureChanges;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (id)pictureData;
- (BOOL)hasAudio;
- (id)_chatSiblingsArray;
- (id)chatSiblingsArray;
- (id)normalizedID;
- (id)_nameForComparisonPreferFirst:(BOOL)arg1;
- (void)_clearStatusMessageURLCache;
- (void)_filterStatusMessage;
- (double)idleTime;
- (double)timeSinceStatusChanged;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (void)setStatus:(unsigned int)arg1 message:(id)arg2 richMessage:(id)arg3;
- (id)imHandleWithoutResource;
- (BOOL)_isMyIDInList:(id)arg1;
- (void)_setExtraProperties:(id)arg1;
- (BOOL)isBetterThanIMHandle:(id)arg1;
- (id)existingAccountSiblingsArray;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (double)timeSinceWentOffline;
- (BOOL)supportsARDMuxing;
- (BOOL)isMobile;
- (void)_createPhoneNumberRefIfNeeded;
- (id)accountSiblingsArray;
- (id)IDWithoutResource;
- (id)extraProperties;
- (void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4;
- (void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)_abPersonCreateIfNeeded;
- (id)_nameUsingUnique:(BOOL)arg1;
- (id)_IDWithTrimmedServer;
- (BOOL)hasServer;
- (id)_formattedPhoneNumber;
- (BOOL)_hasServiceNameProperties;
- (BOOL)_hasABName;
- (void)sendNotificationABPersonChanged;
- (void)resetUniqueName;
- (void)_clearABProperties;
- (void)resetABProperties;
- (BOOL)areABPropertiesRecent;
- (id)existingIMHandleWithoutResource;
- (void)_postNotification:(id)arg1;
- (BOOL)shouldQueueNotifications;
- (id)bestIMHandleForService:(id)arg1;
- (id)groupsArray;
- (BOOL)isAnonymous;
- (void)setAnonymous:(BOOL)arg1;
- (id)existingChatSiblingsArray;
- (void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2;
- (void)_setCountryCode:(id)arg1;
- (int)compareStatus:(id)arg1;
- (void)statusChanged:(unsigned int)arg1;
- (BOOL)isLoginIMHandle;
- (void)statusChanged:(unsigned int)arg1 message:(id)arg2;
- (void)setIMPerson:(id)arg1;
- (id)_cachedPerson;
- (BOOL)resetABPerson;
- (void)setHasTemporaryWatch:(BOOL)arg1;
- (BOOL)watchingIMHandle;
- (id)otherServiceIDs;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3;
- (BOOL)_setCapabilities:(unsigned long long)arg1;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3 knownIDStatus:(int)arg4;
- (void)_setOriginalID:(id)arg1;
- (void)_updateOriginalID:(id)arg1;
- (void)propertiesChanged:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)_stopRetainingAccount:(id)arg1;
- (void)releaseNotificationQueue;
- (void)beginNotificationQueue;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (BOOL)isBuddy;
- (unsigned int)authRequestStatus;
- (int)compareAccountNames:(id)arg1;
- (void)_removeAccountReference:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (id)bestAccountSibling;
- (unsigned long long)capabilities;
- (void)setCapabilities:(unsigned long long)arg1;
- (BOOL)hasResource;
- (id)account;
- (id)nameAndID;
- (id)fmfHandle;
- (void)requestIDStatus;
- (int)IDStatus;
- (id)_displayNameWithAbbreviation;
- (id)displayNameForChat:(id)arg1;
- (id)originalID;
- (int)addressBookIdentifier;
- (id)imHandleForOtherAccount:(id)arg1;
- (BOOL)matchesIMHandle:(id)arg1;
- (int)compareIDs:(id)arg1;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (id)siblings;
- (id)person;
- (unsigned int)status;
- (id)uniqueName;
- (void)setPriority:(int)arg1;
- (int)priority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)server;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (oneway void)release;
- (id)init;
- (void)_registerForNotifications;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)groups;
- (void)setEmail:(id)arg1;
- (id)service;
- (BOOL)isBlocked;
- (id)ID;
- (BOOL)hasNoConferencingCaps;

@end
