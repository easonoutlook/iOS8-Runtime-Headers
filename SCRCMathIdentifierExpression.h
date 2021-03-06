/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression  {
    int _fontStyle;
}

@property(readonly) int fontStyle;


- (int)fontStyle;
- (id)mathMLString;
- (BOOL)_isPrime;
- (BOOL)canFormWordStartingWithExpression:(id)arg1;
- (BOOL)isNaturalSuperscript;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (BOOL)isNumber;

@end
