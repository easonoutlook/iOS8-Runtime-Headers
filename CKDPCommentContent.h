/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPCommentContent : PBCodable <NSCopying> {
    NSData *_comment;
    BOOL _encrypted;
    struct { 
        unsigned int encrypted : 1; 
    } _has;
}

@property BOOL hasEncrypted;
@property BOOL encrypted;
@property(readonly) BOOL hasComment;
@property(retain) NSData * comment;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)comment;
- (BOOL)hasComment;
- (BOOL)hasEncrypted;
- (void)setHasEncrypted:(BOOL)arg1;
- (void)setEncrypted:(BOOL)arg1;
- (BOOL)encrypted;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setComment:(id)arg1;

@end
