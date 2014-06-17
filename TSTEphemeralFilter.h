/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSTEphemeralFilter : NSObject  {
    unsigned int mFilterIndex;
    unsigned char mColumnIndex;
    NSArray *mRules;
    BOOL mEnabled;
}

@property(readonly) unsigned int filterIndex;
@property(readonly) unsigned char columnIndex;
@property(readonly) BOOL enabled;
@property(readonly) unsigned int ruleCount;

+ (id)filterWithIndex:(unsigned int)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3 enabled:(BOOL)arg4;

- (unsigned char)columnIndex;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;
- (unsigned int)filterIndex;
- (BOOL)enabled;
- (id)description;
- (void)dealloc;
- (id)filterByRemovingRuleAtIndex:(unsigned int)arg1;
- (id)filterByAddingRule:(id)arg1;
- (id)filterWithRule:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithIndex:(unsigned int)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3 enabled:(BOOL)arg4;

@end
