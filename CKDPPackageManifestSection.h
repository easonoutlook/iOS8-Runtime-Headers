/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {
    long long _size;
    NSData *_signature;
    BOOL _lastSection;
    struct { 
        unsigned int size : 1; 
        unsigned int lastSection : 1; 
    } _has;
}

@property(readonly) BOOL hasSignature;
@property(retain) NSData * signature;
@property BOOL hasSize;
@property long long size;
@property BOOL hasLastSection;
@property BOOL lastSection;


- (BOOL)hasSize;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)lastSection;
- (BOOL)hasLastSection;
- (void)setHasLastSection:(BOOL)arg1;
- (void)setLastSection:(BOOL)arg1;
- (void)setHasSize:(BOOL)arg1;
- (id)signature;
- (BOOL)hasSignature;
- (void)setSignature:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setSize:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)size;
- (id)description;

@end
