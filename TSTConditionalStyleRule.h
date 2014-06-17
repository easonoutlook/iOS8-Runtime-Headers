/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle, TSTCellStyle, TSTFormulaPredicate;

@interface TSTConditionalStyleRule : NSObject <NSCopying> {
    TSTFormulaPredicate *mPredicate;
    TSWPParagraphStyle *mTextStyle;
    TSTCellStyle *mCellStyle;
    int _predicateType;
}

@property(readonly) struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }* formula;
@property(copy,readonly) TSTFormulaPredicate * predicate;
@property(readonly) int predicateType;
@property(copy,readonly) TSTCellStyle * cellStyle;
@property(copy,readonly) TSWPParagraphStyle * textStyle;

+ (id)conditionalStyleRuleWithRule:(id)arg1;

- (id)cellStyle;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)formula;
- (id)predicate;
- (id)textStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)evaluateFormulaAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 withCalcEngine:(id)arg2 withFormulaTableID:(struct __CFUUID { }*)arg3;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (int)predicateType;
- (id)copyByRemappingFormulaIDsWithMap:(struct __CFDictionary { }*)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3;
- (id)copyWithContext:(id)arg1;

@end