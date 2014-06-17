/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUNoCopyDictionary, NSMutableSet;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap> {
    TSUNoCopyDictionary *mDictionary;
    NSMutableSet *mClassesOfChangedPrototypes;
}


- (void)dealloc;
- (id)init;
- (void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3;
- (void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3;
- (void)p_addClassesForPrototype:(id)arg1;
- (void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4;
- (void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (id)prototypePassingTest:(id)arg1;
- (id)prototypeChangeForPrototype:(id)arg1;
- (BOOL)hasAnyChangesForPrototypesOfClasses:(id)arg1;

@end