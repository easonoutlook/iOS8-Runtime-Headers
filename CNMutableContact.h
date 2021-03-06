/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, NSDateComponents;

@interface CNMutableContact : CNContact  {
}

@property(copy) NSString * namePrefix;
@property(copy) NSString * givenName;
@property(copy) NSString * middleName;
@property(copy) NSString * familyName;
@property(copy) NSString * nameSuffix;
@property(copy) NSString * previousFamilyName;
@property(copy) NSString * nickname;
@property(copy) NSString * phoneticGivenName;
@property(copy) NSString * phoneticMiddleName;
@property(copy) NSString * phoneticFamilyName;
@property(copy) NSString * organizationName;
@property(copy) NSString * departmentName;
@property(copy) NSString * jobTitle;
@property(copy) NSDateComponents * birthday;
@property(copy) NSString * note;
@property int contactType;
@property(copy) NSArray * phoneNumbers;
@property(copy) NSArray * emailAddresses;
@property(copy) NSArray * urlAddresses;
@property(copy) NSArray * dates;
@property(copy) NSArray * instantMessageAddresses;
@property(copy) NSArray * relatedNames;
@property(copy) NSArray * socialProfiles;
@property(copy) NSArray * postalAddresses;
@property(copy) NSArray * ringtone;
@property(copy) NSArray * textTone;
@property(copy) NSArray * birthdays;

+ (id)contactWithRecord:(void*)arg1 unify:(BOOL)arg2;
+ (id)contactWithRecord:(void*)arg1;
+ (id)contact;

- (void)setNickname:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (BOOL)hasChanges;
- (void)setEmailAddresses:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setBirthday:(id)arg1;
- (id)initWithRecord:(void*)arg1;
- (void)_setValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)setTextTone:(id)arg1;
- (void)setRingtone:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setDates:(id)arg1;
- (void)setUrlAddresses:(id)arg1;
- (void)setPreferredForPhoto;
- (void)setPreferredForName;
- (void)setNote:(id)arg1;
- (void)setBirthdays:(id)arg1;
- (void)setDepartmentName:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPreviousFamilyName:(id)arg1;
- (struct __CFString { }*)_ABLabelFromCNLabel:(id)arg1;
- (void)_setStringMultiValueForProperty:(int)arg1 values:(id)arg2;
- (void)_setMultiValueForProperty:(int)arg1 values:(id)arg2 valueFromCNValue:(id)arg3;
- (void)setAlternateBirthday:(id)arg1;
- (void)setContactType:(int)arg1;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (id)initWithRecord:(void*)arg1 unify:(BOOL)arg2 originalRecord:(void*)arg3;
- (void)setPostalAddresses:(id)arg1;
- (BOOL)saveContact;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (BOOL)addToGroup:(void*)arg1;
- (BOOL)unlinkContact;
- (BOOL)linkToContact:(id)arg1;
- (BOOL)saveContactInAddressBook:(void*)arg1;
- (void)updateContactType:(BOOL)arg1;
- (void)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (BOOL)deleteContact;

@end
