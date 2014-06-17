/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettings : PBCodable <NSCopying> {
    BOOL _discoverable;
    struct { 
        unsigned int discoverable : 1; 
    } _has;
}

@property BOOL hasDiscoverable;
@property BOOL discoverable;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasDiscoverable:(BOOL)arg1;
- (BOOL)hasDiscoverable;
- (void)setDiscoverable:(BOOL)arg1;
- (BOOL)discoverable;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
