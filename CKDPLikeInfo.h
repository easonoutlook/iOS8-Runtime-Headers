/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikeInfo : PBCodable <NSCopying> {
    int _likeCount;
    BOOL _likedByCurrentUser;
    struct { 
        unsigned int likeCount : 1; 
        unsigned int likedByCurrentUser : 1; 
    } _has;
}

@property BOOL hasLikeCount;
@property int likeCount;
@property BOOL hasLikedByCurrentUser;
@property BOOL likedByCurrentUser;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)likedByCurrentUser;
- (int)likeCount;
- (BOOL)hasLikedByCurrentUser;
- (void)setHasLikedByCurrentUser:(BOOL)arg1;
- (void)setLikedByCurrentUser:(BOOL)arg1;
- (BOOL)hasLikeCount;
- (void)setHasLikeCount:(BOOL)arg1;
- (void)setLikeCount:(int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
