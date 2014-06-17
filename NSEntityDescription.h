/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSManagedObjectModel, NSEntityDescription, NSString, NSDictionary, NSMutableDictionary, NSData;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
    int _cd_rc;
    id _snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_propertyRanges;
    struct __entityDescriptionFlags { 
        unsigned int _isAbstract : 1; 
        unsigned int _shouldValidateOnSave : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isFlattened : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _hasPropertiesIndexedBySpotlight : 1; 
        unsigned int _hasPropertiesStoredInTruthFile : 1; 
        unsigned int _rangesAreInDataBlob : 1; 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _hasNonstandardPrimitiveProperties : 2; 
        unsigned int _reservedEntityDescription : 21; 
    } _entityDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long _modelsReferenceIDForEntity;
}

@property(readonly) NSManagedObjectModel * managedObjectModel;
@property(copy) NSString * managedObjectClassName;
@property(copy) NSString * name;
@property(getter=isAbstract) BOOL abstract;
@property(copy,readonly) NSDictionary * subentitiesByName;
@property(retain) NSArray * subentities;
@property(readonly) NSEntityDescription * superentity;
@property(copy,readonly) NSDictionary * propertiesByName;
@property(retain) NSArray * properties;
@property(retain) NSDictionary * userInfo;
@property(copy,readonly) NSDictionary * attributesByName;
@property(copy,readonly) NSDictionary * relationshipsByName;
@property(copy,readonly) NSData * versionHash;
@property(copy) NSString * versionHashModifier;
@property(copy) NSString * renamingIdentifier;
@property(retain) NSArray * compoundIndexes;

+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;
+ (id)_MOClassName;

- (id)attributeKeys;
- (id)propertiesByName;
- (id)managedObjectClassName;
- (void)setManagedObjectClassName:(id)arg1;
- (id)subentities;
- (id)superentity;
- (id)attributesByName;
- (BOOL)isKindOfEntity:(id)arg1;
- (id)relationshipsByName;
- (id)managedObjectModel;
- (void)setProperties:(id)arg1;
- (id)properties;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (BOOL)_hasPropertiesStoredInTruthFile;
- (BOOL)_hasPropertiesIndexedBySpotlight;
- (BOOL)_hasAttributesWithExternalDataReferences;
- (BOOL)_skipValidation;
- (id)_sortedSubentities;
- (void)_setModelsReferenceID:(long)arg1;
- (id)_new_implicitlyObservedKeys;
- (void*)_leopardStyleAttributesByName;
- (void*)_leopardStyleRelationshipsByName;
- (void*)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned int)arg1;
- (id)_allPropertyNames;
- (unsigned long)_offsetRelationshipIndex:(unsigned long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(BOOL)arg3;
- (BOOL)_hasPotentialHashSkew;
- (id)_attributeNamed:(id)arg1;
- (BOOL)_hasCustomPrimitiveProperties;
- (void)_setManagedObjectModel:(id)arg1;
- (id)_keypathsForDeletions;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (void)_setIsFlattened:(BOOL)arg1;
- (void)_removePropertyNamed:(id)arg1;
- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;
- (BOOL)_isInheritedPropertyNamed:(id)arg1;
- (struct __CFSet { }*)_collectSubentities;
- (BOOL)_isEditable;
- (void)_flattenProperties;
- (id)_localRelationshipNamed:(id)arg1;
- (void)_setIsEditable:(BOOL)arg1;
- (id)_propertyWithRenamingIdentifier:(id)arg1;
- (id)elementID;
- (void)setElementID:(id)arg1;
- (void)_setSuperentity:(id)arg1;
- (id)_flattenedSubentities;
- (Class)_snapshotClass;
- (id)compoundIndexes;
- (void)setVersionHashModifier:(id)arg1;
- (id)_newVersionHashInStyle:(unsigned int)arg1;
- (void)setAbstract:(BOOL)arg1;
- (id)inverseForRelationshipKey:(id)arg1;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (id)toOneRelationshipKeys;
- (id)toManyRelationshipKeys;
- (id)_versionHashInStyle:(unsigned int)arg1;
- (id)_subentityNamed:(id)arg1;
- (BOOL)_isFlattened;
- (void)_addProperty:(id)arg1;
- (void)_removeProperty:(id)arg1;
- (id)_relationshipNamesByType:(BOOL)arg1;
- (void)_addSubentity:(id)arg1;
- (void)_removeSubentity:(id)arg1;
- (id)_propertiesOfType:(unsigned int)arg1;
- (id)_compoundIndexes;
- (void)setSubentities:(id)arg1;
- (void)setCompoundIndexes:(id)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (id)versionHashModifier;
- (BOOL)isAbstract;
- (Class)_entityClass;
- (id)_propertySearchMapping;
- (long)_modelsReferenceID;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)arg1;
- (void)_throwIfNotEditable;
- (BOOL)_subentitiesIncludes:(id)arg1;
- (id)versionHash;
- (id)renamingIdentifier;
- (id)subentitiesByName;
- (id)_relationshipNamed:(id)arg1;
- (id)_rootEntity;
- (void)_nukeMOClassName__;
- (id)_propertyNamed:(id)arg1;
- (id)knownKeysMappingStrategy;
- (struct _NSRange { unsigned int x1; unsigned int x2; }*)_propertyRangesByType;

@end