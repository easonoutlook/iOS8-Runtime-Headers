/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPAsset, NSString;

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {
    CKDPAsset *_asset;
    NSString *_token;
}

@property(readonly) BOOL hasToken;
@property(retain) NSString * token;
@property(readonly) BOOL hasAsset;
@property(retain) CKDPAsset * asset;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasAsset;
- (BOOL)hasToken;
- (void)setToken:(id)arg1;
- (id)token;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end