/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSString, NSObject<OS_dispatch_queue>, VMAccount, NSMutableDictionary;

@interface VMVoicemail : NSObject  {
    VMAccount *_account;
    long long _identifier;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    struct __CFPhoneNumber { } *_senderPhoneNumber;
    struct __CFPhoneNumber { } *_callbackPhoneNumber;
    id _cachedAddressBookRef;
    NSString *_cachedDisplayName;
}

@property(readonly) struct __CFPhoneNumber { }* senderPhoneNumber;
@property(readonly) struct __CFPhoneNumber { }* callbackPhoneNumber;
@property(retain) id cachedAddressBookRef;
@property(retain) NSString * cachedDisplayName;

+ (id)_findPreviouslyCreatedVoicemailWithAccountNoLock:(id)arg1 identifier:(long long)arg2;
+ (void)_doVoicemailMapHousekeepingNoLock;
+ (void)_scheduleVoicemailMapHousekeepingNoLock;
+ (void)scheduleVoicemailMapHousekeeping;
+ (id)voicemailWithAccount:(id)arg1 identifier:(long long)arg2 creating:(BOOL)arg3;
+ (void)forceReloadAllLiveVoicemailsForAccount:(id)arg1;
+ (void)initialize;

- (id)initWithAccount:(id)arg1 identifier:(long long)arg2;
- (id)imageDataUsingAddressBook:(void*)arg1;
- (id)displayLabelUsingAddressBook:(void*)arg1;
- (id)displayNameUsingAddressBook:(void*)arg1;
- (void*)abRecordUsingAddressBook:(void*)arg1;
- (void)_handleDataAvailable:(id)arg1;
- (BOOL)doesNotHaveFlags:(unsigned int)arg1;
- (BOOL)hasFlags:(unsigned int)arg1;
- (struct __CFPhoneNumber { }*)callbackPhoneNumber;
- (void)setCachedDisplayName:(id)arg1;
- (struct __CFPhoneNumber { }*)senderPhoneNumber;
- (id)cachedDisplayName;
- (void)setCachedAddressBookRef:(id)arg1;
- (id)cachedAddressBookRef;
- (void*)abRecordUsingAddressBook:(void*)arg1 withIdentifier:(int*)arg2;
- (void)_lockedPreemptivelySetFlags:(unsigned int)arg1 clearFlags:(unsigned int)arg2 unlockedBlock:(id*)arg3;
- (id)dataPath;
- (id)callbackNumber;
- (unsigned long long)remoteUID;
- (void)_preemptivelySetFlags:(unsigned int)arg1 clearFlags:(unsigned int)arg2;
- (void)_updateCache;
- (void)_forceUpdateCache;
- (BOOL)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (id)sender;
- (id)date;
- (long long)identifier;
- (id)description;
- (int)duration;
- (void)dealloc;

@end
