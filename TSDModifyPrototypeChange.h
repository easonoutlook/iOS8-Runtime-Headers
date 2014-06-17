/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSPropertyMap, <TSSPropertySource>, TSDPropertySourceForModifyPrototypeChange, TSSMutablePropertySet;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {
    id mPrototype;
    TSSMutablePropertySet *mChangedPropertySet;
    TSSPropertyMap *mChangedPropertyMapBeforeChange;
    TSSPropertyMap *mChangedPropertyMapAfterChange;
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceBeforeChange;
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceAfterChange;
    TSSMutablePropertySet *mPropertiesWithOldValuesRecordedButNotNewValues;
}

@property(retain,readonly) TSSMutablePropertySet * changedPropertySet;
@property(retain,readonly) TSSPropertyMap * changedPropertyMapBeforeChange;
@property(retain,readonly) TSSPropertyMap * changedPropertyMapAfterChange;
@property(retain,readonly) TSSMutablePropertySet * i_propertiesWithOldValuesRecordedButNotNewValues;
@property(readonly) BOOL prototypeIsBeingReplaced;
@property(readonly) BOOL prototypeIsBeingModified;
@property(readonly) BOOL prototypeIsBeingDeleted;
@property(retain,readonly) id prototype;
@property(retain,readonly) id replacement;
@property(retain,readonly) <TSSPropertySource> * propertiesBeforeChange;
@property(retain,readonly) <TSSPropertySource> * propertiesAfterChange;


- (id)replacement;
- (id)description;
- (void)dealloc;
- (BOOL)propertiesAreChanging:(id)arg1;
- (BOOL)propertyIsChanging:(int)arg1;
- (id)prototype;
- (id)changedPropertyMapAfterChange;
- (id)i_propertiesWithOldValuesRecordedButNotNewValues;
- (id)changedPropertySet;
- (id)initModifyPrototypeChangeForPrototype:(id)arg1;
- (id)propertiesAfterChange;
- (id)propertiesBeforeChange;
- (id)changedPropertyMapBeforeChange;
- (BOOL)prototypeIsBeingModified;
- (BOOL)prototypeIsBeingReplaced;
- (BOOL)prototypeIsBeingDeleted;

@end
