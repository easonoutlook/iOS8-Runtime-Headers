/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying> {
    NSMutableArray *_containerPrivacySettings;
}

@property(retain) NSMutableArray * containerPrivacySettings;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setContainerPrivacySettings:(id)arg1;
- (id)containerPrivacySettingsAtIndex:(unsigned int)arg1;
- (void)clearContainerPrivacySettings;
- (unsigned int)containerPrivacySettingsCount;
- (void)addContainerPrivacySettings:(id)arg1;
- (id)containerPrivacySettings;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
