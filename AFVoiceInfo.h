/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isCustom;
    NSString *_languageCode;
    int _gender;
}

@property(readonly) NSString * languageCode;
@property int gender;
@property BOOL isCustom;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isCustom;
- (void)setIsCustom:(BOOL)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(int)arg2 isCustom:(BOOL)arg3;
- (id)languageCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setGender:(int)arg1;
- (int)gender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
