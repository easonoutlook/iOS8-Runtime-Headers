/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPLikeInfo, CKDPCommentedOnId;

@interface CKDPCommentSummary : PBCodable <NSCopying> {
    CKDPCommentedOnId *_identifier;
    CKDPLikeInfo *_likeInfo;
}

@property(readonly) BOOL hasIdentifier;
@property(retain) CKDPCommentedOnId * identifier;
@property(readonly) BOOL hasLikeInfo;
@property(retain) CKDPLikeInfo * likeInfo;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)likeInfo;
- (BOOL)hasLikeInfo;
- (void)setLikeInfo:(id)arg1;
- (BOOL)hasIdentifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
