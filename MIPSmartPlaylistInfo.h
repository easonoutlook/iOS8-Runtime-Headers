/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {
    unsigned int _evaluationOrder;
    int _limitKind;
    unsigned int _limitOrder;
    unsigned int _limitValue;
    NSData *_smartCriteria;
    BOOL _dynamic;
    BOOL _enabledItemsOnly;
    BOOL _filtered;
    BOOL _limited;
    BOOL _reverseLimitOrder;
    struct { 
        unsigned int evaluationOrder : 1; 
        unsigned int limitKind : 1; 
        unsigned int limitOrder : 1; 
        unsigned int limitValue : 1; 
        unsigned int dynamic : 1; 
        unsigned int enabledItemsOnly : 1; 
        unsigned int filtered : 1; 
        unsigned int limited : 1; 
        unsigned int reverseLimitOrder : 1; 
    } _has;
}

@property BOOL hasDynamic;
@property BOOL dynamic;
@property BOOL hasFiltered;
@property BOOL filtered;
@property BOOL hasLimited;
@property BOOL limited;
@property BOOL hasLimitKind;
@property int limitKind;
@property BOOL hasEvaluationOrder;
@property unsigned int evaluationOrder;
@property BOOL hasLimitOrder;
@property unsigned int limitOrder;
@property BOOL hasLimitValue;
@property unsigned int limitValue;
@property BOOL hasEnabledItemsOnly;
@property BOOL enabledItemsOnly;
@property BOOL hasReverseLimitOrder;
@property BOOL reverseLimitOrder;
@property(readonly) BOOL hasSmartCriteria;
@property(retain) NSData * smartCriteria;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)smartCriteria;
- (BOOL)reverseLimitOrder;
- (BOOL)enabledItemsOnly;
- (unsigned int)limitOrder;
- (unsigned int)evaluationOrder;
- (int)limitKind;
- (BOOL)limited;
- (BOOL)filtered;
- (BOOL)dynamic;
- (BOOL)hasSmartCriteria;
- (BOOL)hasReverseLimitOrder;
- (void)setHasReverseLimitOrder:(BOOL)arg1;
- (void)setReverseLimitOrder:(BOOL)arg1;
- (BOOL)hasEnabledItemsOnly;
- (void)setHasEnabledItemsOnly:(BOOL)arg1;
- (void)setEnabledItemsOnly:(BOOL)arg1;
- (BOOL)hasLimitValue;
- (void)setHasLimitValue:(BOOL)arg1;
- (void)setLimitValue:(unsigned int)arg1;
- (BOOL)hasLimitOrder;
- (void)setHasLimitOrder:(BOOL)arg1;
- (void)setLimitOrder:(unsigned int)arg1;
- (BOOL)hasEvaluationOrder;
- (void)setHasEvaluationOrder:(BOOL)arg1;
- (void)setEvaluationOrder:(unsigned int)arg1;
- (BOOL)hasLimitKind;
- (void)setHasLimitKind:(BOOL)arg1;
- (void)setLimitKind:(int)arg1;
- (BOOL)hasLimited;
- (void)setHasLimited:(BOOL)arg1;
- (void)setLimited:(BOOL)arg1;
- (BOOL)hasFiltered;
- (void)setHasFiltered:(BOOL)arg1;
- (void)setFiltered:(BOOL)arg1;
- (BOOL)hasDynamic;
- (void)setHasDynamic:(BOOL)arg1;
- (void)setSmartCriteria:(id)arg1;
- (unsigned int)limitValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setDynamic:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
