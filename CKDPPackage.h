/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable <NSCopying> {
    CKDPAsset *_manifest;
    NSMutableArray *_sections;
}

@property(readonly) BOOL hasManifest;
@property(retain) CKDPAsset * manifest;
@property(retain) NSMutableArray * sections;


- (void)setManifest:(id)arg1;
- (id)manifest;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasManifest;
- (id)sectionsAtIndex:(unsigned int)arg1;
- (void)clearSections;
- (unsigned int)sectionsCount;
- (void)addSections:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
