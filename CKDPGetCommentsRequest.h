/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPCommentedOnId, NSString, NSData, CKDPQuerySort;

@interface CKDPGetCommentsRequest : PBRequest <NSCopying> {
    NSData *_continuationMarker;
    CKDPCommentedOnId *_identifier;
    unsigned int _limit;
    CKDPQuerySort *_orderBy;
    NSString *_path;
    struct { 
        unsigned int limit : 1; 
    } _has;
}

@property(readonly) BOOL hasIdentifier;
@property(retain) CKDPCommentedOnId * identifier;
@property(readonly) BOOL hasContinuationMarker;
@property(retain) NSData * continuationMarker;
@property BOOL hasLimit;
@property unsigned int limit;
@property(readonly) BOOL hasOrderBy;
@property(retain) CKDPQuerySort * orderBy;
@property(readonly) BOOL hasPath;
@property(retain) NSString * path;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)orderBy;
- (BOOL)hasOrderBy;
- (void)setOrderBy:(id)arg1;
- (id)continuationMarker;
- (BOOL)hasContinuationMarker;
- (void)setContinuationMarker:(id)arg1;
- (unsigned int)limit;
- (BOOL)hasLimit;
- (void)setHasLimit:(BOOL)arg1;
- (void)setLimit:(unsigned int)arg1;
- (BOOL)hasIdentifier;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (BOOL)hasPath;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setPath:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)path;
- (id)description;

@end
