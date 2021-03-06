/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPPackageManifestItem : PBCodable <NSCopying> {
    long long _size;
    NSData *_signature;
    BOOL _lastItem;
    struct { 
        unsigned int size : 1; 
        unsigned int lastItem : 1; 
    } _has;
}

@property(readonly) BOOL hasSignature;
@property(retain) NSData * signature;
@property BOOL hasSize;
@property long long size;
@property BOOL hasLastItem;
@property BOOL lastItem;


- (BOOL)hasSize;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)lastItem;
- (BOOL)hasLastItem;
- (void)setHasLastItem:(BOOL)arg1;
- (void)setHasSize:(BOOL)arg1;
- (id)signature;
- (BOOL)hasSignature;
- (void)setSignature:(id)arg1;
- (void).cxx_destruct;
- (void)setLastItem:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (void)setSize:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)size;
- (id)description;

@end
