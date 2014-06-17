/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, NSArray;

@interface CKPreferredServiceManager : NSObject  {
    NSArray *_servicePrecedence;
    NSArray *_potentialServices;
    NSMutableArray *_knownHandles;
    BOOL _enableLogging;
}

@property BOOL enableLogging;
@property(copy) NSArray * servicePrecedence;
@property(copy) NSArray * potentialServices;

+ (id)sharedPreferredServiceManager;
+ (id)alloc;

- (void)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 completion:(id)arg4;
- (BOOL)availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)preferredServiceForHandle:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)preferredServiceForAddressString:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (void)refreshAvailabilityForConversation:(id)arg1;
- (void)refreshAvailabilityForMFComposeRecipients:(id)arg1;
- (void)notifyOfPotentialServicesChange;
- (void)notifyOfServiceAvailabilityChange;
- (unsigned int)__preferrediMessageFallbackServiceForRecipientCount:(int)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned int)arg3 error:(char *)arg4;
- (BOOL)_isiMessageAvailable;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (unsigned int)_optionsForRecipients:(id)arg1;
- (id)_preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)_preferredServiceForAddressStrings:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)_preferredServiceForRecipientsCount:(int)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (BOOL)_availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3 actualHandle:(id*)arg4;
- (unsigned int)__preferredServiceTypeForRecipientCount:(int)arg1 options:(unsigned int)arg2 error:(char *)arg3;
- (id)servicePrecedence;
- (id)_preferredServiceForHandles:(id)arg1 allowUnknown:(BOOL)arg2 checkWithServer:(BOOL)arg3;
- (BOOL)enableLogging;
- (void)_clearCaches;
- (void)setServicePrecedence:(id)arg1;
- (id)potentialServices;
- (void)_updatePotentialServices;
- (void)setPotentialServices:(id)arg1;
- (void)_handleServiceAvailabilityChanged:(id)arg1;
- (void)_handleDeviceCapabilitiesChanged:(id)arg1;
- (void)_handleIMHandleIDStatusChanged:(id)arg1;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (void)prepareForResume;
- (BOOL)isMultiService;
- (BOOL)availabilityForAddress:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3;
- (id)preferredService;
- (void)refreshAvailabilityForAddressStrings:(id)arg1;
- (id)preferredServiceForMFComposeRecipients:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (id)preferredServiceForConversation:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char *)arg4;
- (void)setEnableLogging:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end