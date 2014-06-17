/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSString, NSDictionary;

@interface MFMailAccountProxy : NSObject  {
    NSDictionary *_properties;
}

@property(readonly) NSString * fullUserName;
@property(readonly) NSString * username;
@property(readonly) NSString * firstEmailAddress;
@property(readonly) NSArray * emailAddresses;
@property(readonly) NSArray * fromEmailAddresses;
@property(readonly) NSArray * fromEmailAddressesIncludingDisabled;
@property(readonly) NSString * uniqueID;
@property(readonly) BOOL isDefaultDeliveryAccount;
@property(readonly) BOOL supportsSoftBankCodePoints;
@property(readonly) BOOL supportsThreadNotifications;
@property(readonly) BOOL restrictsRepliesAndForwards;
@property(readonly) id mailAccount;


- (id)uniqueID;
- (BOOL)_isRestricted;
- (id)username;
- (BOOL)supportsSoftBankCodePoints;
- (BOOL)supportsThreadNotifications;
- (id)fromEmailAddresses;
- (id)firstEmailAddress;
- (id)fromEmailAddressesIncludingDisabled;
- (id)emailAddresses;
- (id)fullUserName;
- (BOOL)_isActive;
- (id)_emailAddressesAndAliases;
- (BOOL)isDefaultDeliveryAccount;
- (id)_initWithProperties:(id)arg1;
- (BOOL)restrictsRepliesAndForwards;
- (id)mailAccount;
- (void)dealloc;

@end