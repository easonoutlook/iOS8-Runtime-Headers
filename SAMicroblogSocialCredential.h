/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject> {
}

@property(copy) NSString * accessToken;
@property(copy) NSString * personalizationPermission;
@property(copy) NSString * socialNetwork;
@property(copy) NSString * tokenSecret;

+ (id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)socialCredential;

- (void)setTokenSecret:(id)arg1;
- (id)tokenSecret;
- (void)setPersonalizationPermission:(id)arg1;
- (id)personalizationPermission;
- (void)setSocialNetwork:(id)arg1;
- (id)socialNetwork;
- (id)encodedClassName;
- (id)accessToken;
- (void)setAccessToken:(id)arg1;
- (id)groupIdentifier;

@end
