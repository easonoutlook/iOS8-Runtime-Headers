/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLRelationship, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty  {
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}


- (BOOL)isOrdered;
- (void)dealloc;
- (void)_setForeignOrderKey:(id)arg1;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setInverseRelationship:(id)arg1;
- (id)sourceEntity;
- (id)relationshipDescription;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)correlationTableName;
- (id)foreignKey;
- (id)inverseRelationship;
- (id)destinationEntity;

@end