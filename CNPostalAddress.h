/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, NSString;

@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_addressDictionary;
}

@property(copy,readonly) NSString * street;
@property(copy,readonly) NSString * subLocality;
@property(copy,readonly) NSString * city;
@property(copy,readonly) NSString * subAdministrativeArea;
@property(copy,readonly) NSString * state;
@property(copy,readonly) NSString * postalCode;
@property(copy,readonly) NSString * country;
@property(copy,readonly) NSString * ISOCountryCode;
@property(readonly) NSString * formattedAddressSingleLine;
@property(retain) NSMutableDictionary * addressDictionary;
@property(readonly) NSString * formattedAddress;

+ (id)postalAddressWithDictionary:(id)arg1;
+ (id)localizedCountryNameForCountryCode:(id)arg1;
+ (id)addressFormatsDictionary;
+ (id)defaultCountryCode;
+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;
+ (id)postalAddress;

- (id)street;
- (id)postalCode;
- (id)ISOCountryCode;
- (id)subLocality;
- (id)subAdministrativeArea;
- (id)country;
- (id)formattedAddress;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)state;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)addressDictionary;
- (void)setAddressDictionary:(id)arg1;
- (BOOL)_isAddressFieldEqual:(id)arg1 toField:(id)arg2;
- (id)formattedAddressSingleLine;
- (id)keyboardSettingsForAddressPart:(id)arg1;
- (id)city;

@end