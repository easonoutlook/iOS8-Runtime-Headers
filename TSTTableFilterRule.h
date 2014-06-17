/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTFormulaPredicate;

@interface TSTTableFilterRule : NSObject <NSCopying> {
    TSTFormulaPredicate *mPredicate;
    BOOL mDisabled;
    BOOL mDoesNotNeedFormulaRewriteForImport;
}

+ (id)ruleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3;
+ (id)ruleWithFormulaPredicate:(id)arg1;

- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)formula;
- (id)predicate;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)localizedTextRepresentation;
- (BOOL)matchesCell:(id)arg1;
- (BOOL)matchesRow:(unsigned short)arg1 withFormulaTableID:(struct __CFUUID { }*)arg2 withCalculationEngine:(id)arg3;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (id)p_formatDurationPredicate;
- (id)p_formatDatePredicate;
- (id)p_formatValuePredicate;
- (id)p_formatTextPredicate;
- (id)initRuleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3;
- (id)initWithFormulaPredicate:(id)arg1;
- (BOOL)needsThreshold;
- (unsigned char)columnIndexForFilterRuleInTableModel:(id)arg1;
- (BOOL)needsFormulaRewriteForImport;
- (id)initFromArchive:(const struct FilterRuleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FormulaPredicateArchive {} *x3; boolx4; int x5; unsigned int x6[1]; }*)arg1;
- (void)encodeToArchive:(struct FilterRuleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FormulaPredicateArchive {} *x3; boolx4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;

@end
