/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_parameters;
    int _type;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSDictionary * parameters;
@property int type;

+ (BOOL)supportsSecureCoding;
+ (id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1;
+ (int)_privacySettingTypeFromTypeIdentifier:(id)arg1;
+ (id)postPrivacySettingsForPrivacyOptions:(id)arg1;
+ (id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4;

- (void)setParameters:(id)arg1;
- (id)parameters;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)identifier;
- (id)parametersFormValueString;
- (id)_parametersJSONStringRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;

@end