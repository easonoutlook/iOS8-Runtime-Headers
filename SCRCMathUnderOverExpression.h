/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCMathExpression;

@interface SCRCMathUnderOverExpression : SCRCMathExpression  {
    SCRCMathExpression *_under;
    SCRCMathExpression *_over;
    SCRCMathExpression *_base;
}

@property(retain) SCRCMathExpression * under;
@property(retain) SCRCMathExpression * over;
@property(retain) SCRCMathExpression * base;


- (id)mathMLString;
- (id)over;
- (id)under;
- (void)setOver:(id)arg1;
- (void)setUnder:(id)arg1;
- (BOOL)isRangeSubSuperscript;
- (unsigned int)fractionLevel;
- (id)latexMathModeDescription;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (void)setBase:(id)arg1;
- (id)base;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (void)dealloc;

@end
