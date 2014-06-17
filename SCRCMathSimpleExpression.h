/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression  {
    NSString *_content;
}

@property(copy) NSString * content;


- (id)_functionNames;
- (BOOL)isWordOrAbbreviation;
- (BOOL)isFunctionName;
- (BOOL)isInteger;
- (BOOL)canBeUsedWithBase;
- (id)latexMathModeDescription;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)content;
- (int)integerValue;
- (id)initWithDictionary:(id)arg1;
- (void)setContent:(id)arg1;
- (id)description;
- (void)dealloc;

@end
