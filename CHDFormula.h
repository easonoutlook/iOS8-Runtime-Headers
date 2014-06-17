/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorkbook, EDReferenceCollection;

@interface CHDFormula : EDFormula  {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReference:(id)arg1;
+ (id)formulaWithReferences:(id)arg1;

- (id)initWithWorkbook:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)prepareTokens;
- (bool)isConstantStringFormula;
- (id)referencesFromFormula;
- (id)initWithReferences:(id)arg1;
- (id)initWithReference:(id)arg1;
- (unsigned int)countOfCellsBeingReferenced;
- (void)setWorkbook:(id)arg1;
- (id)references;
- (void)dealloc;

@end
