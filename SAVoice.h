/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAVoice : SADomainObject  {
}

@property(copy) NSString * gender;
@property(copy) NSString * languageString;
@property(copy) NSString * name;
@property(copy) NSString * quality;

+ (id)voiceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voice;

- (void)setLanguageString:(id)arg1;
- (id)languageString;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setQuality:(id)arg1;
- (id)quality;
- (void)setGender:(id)arg1;
- (id)gender;
- (id)name;
- (void)setName:(id)arg1;
- (id)groupIdentifier;

@end
