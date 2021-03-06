/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject  {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    boolmApplyToDate;
}

+ (id)conditionalFormatting;

- (id)rules;
- (unsigned int)rangeCount;
- (void)addRange:(id)arg1;
- (bool)isApplyToDate;
- (void)addRule:(id)arg1;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;
- (id)rangeAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
