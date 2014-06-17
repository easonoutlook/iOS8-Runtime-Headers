/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {
    NSMutableArray *_filters;
    int _queryOperator;
    NSMutableArray *_sorts;
    NSMutableArray *_types;
    BOOL _distinct;
    struct { 
        unsigned int queryOperator : 1; 
        unsigned int distinct : 1; 
    } _has;
}

@property(retain) NSMutableArray * types;
@property(retain) NSMutableArray * filters;
@property(retain) NSMutableArray * sorts;
@property BOOL hasDistinct;
@property BOOL distinct;
@property BOOL hasQueryOperator;
@property int queryOperator;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)distinct;
- (void)setSorts:(id)arg1;
- (id)sorts;
- (void)setTypes:(id)arg1;
- (BOOL)hasQueryOperator;
- (void)setHasQueryOperator:(BOOL)arg1;
- (void)setQueryOperator:(int)arg1;
- (int)queryOperator;
- (BOOL)hasDistinct;
- (void)setHasDistinct:(BOOL)arg1;
- (void)setDistinct:(BOOL)arg1;
- (id)sortsAtIndex:(unsigned int)arg1;
- (void)clearSorts;
- (unsigned int)sortsCount;
- (id)filtersAtIndex:(unsigned int)arg1;
- (void)clearFilters;
- (unsigned int)filtersCount;
- (id)typesAtIndex:(unsigned int)arg1;
- (void)clearTypes;
- (unsigned int)typesCount;
- (void)addSorts:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addTypes:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)types;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
