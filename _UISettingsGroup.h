/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSHashTable;

@interface _UISettingsGroup : _UISettings <NSFastEnumeration> {
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
}


- (void)enumerateSettingsUsingBlock:(id)arg1;
- (void)moveSettings:(id)arg1 toIndex:(unsigned int)arg2;
- (void)removeSettings:(id)arg1;
- (void)addSettings:(id)arg1;
- (BOOL)containsSettings:(id)arg1;
- (id)settingsAtIndex:(unsigned int)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_sendMove:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)moveSettingsAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)_sendRemove:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeSettingsAtIndex:(unsigned int)arg1;
- (void)_sendInsert:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSettings:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)indexOfSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)removeGroupObserver:(id)arg1;
- (void)addGroupObserver:(id)arg1;
- (void)_startObservingPropertiesAndChildren;
- (BOOL)_hasObservers;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)_stopObservingPropertiesAndChildren;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_startInit;
- (void)setValuesFromModel:(id)arg1;
- (id)archiveDictionary;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)dealloc;

@end
