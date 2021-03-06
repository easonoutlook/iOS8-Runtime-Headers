/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying> {
    NSString *_bundleIdentifier;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property(readonly) BOOL hasBundleIdentifier;
@property(retain) NSString * bundleIdentifier;
@property(readonly) BOOL hasUserPrivacySettings;
@property(retain) CKDPUserPrivacySettings * userPrivacySettings;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasBundleIdentifier;
- (id)userPrivacySettings;
- (BOOL)hasUserPrivacySettings;
- (void)setUserPrivacySettings:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)bundleIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
