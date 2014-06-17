/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class IMMessageItem, IMMessage, AXEventPathInfoRepresentation, NSDictionary;

@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration, CKRecordValue, PQLBindable> {
}

@property(readonly) AXEventPathInfoRepresentation * firstPath;
@property(retain,readonly) IMMessage * lastMessage;
@property(retain,readonly) IMMessage * lastFinishedMessage;
@property(retain,readonly) IMMessage * lastIncomingMessage;
@property(retain,readonly) IMMessage * lastIncomingFinishedMessage;
@property(retain,readonly) IMMessageItem * __imLastMessageItem;
@property(readonly) NSDictionary * bw_builtInMicRouteDictionary;
@property(readonly) unsigned int count;

+ (id)arrayWithArray:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObject:(id)arg1;
+ (id)array;
+ (id)arrayWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)newArrayWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;
+ (id)arrayWithValues:(id)arg1 inBlock:(id)arg2;
+ (id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned long)arg3;
+ (id)cdvArrayWithIntegers:(int)arg1;
+ (id)_arrayWithIntArg:(int)arg1 additionalArgs:(void*)arg2;
+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned int)arg2;
+ (id)_gkArrayWithIndexSet:(id)arg1;
+ (id)arrayTableWithLength:(unsigned int)arg1;
+ (id)arrayTableWithColumnsFromDictionary:(id)arg1;
+ (id)arrayTableWithKeys:(id)arg1 andLength:(unsigned int)arg2;
+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned int)arg1;
+ (id)arrayWithInts:(int*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithInts:(int*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
+ (id)arrayWithUIntegers:(unsigned int*)arg1 count:(unsigned int)arg2;

- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)countForObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithSet:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingComparator:(id)arg4;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)indexOfObjectPassingTest:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (id)arrayByAddingObject:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)initWithArray:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)reverseObjectEnumerator;
- (id)initWithObjects:(id)arg1;
- (id)componentsJoinedByString:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)lastObject;
- (id)firstObject;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)allObjects;
- (id)description;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)reversedArray;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectPassingTest:(id)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)firstObjectCommonWithArray:(id)arg1;
- (unsigned int)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (BOOL)_hasStrongReferences;
- (BOOL)_hasObjects;
- (unsigned long)_cfTypeID;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)getObjects:(id*)arg1;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (BOOL)isNSArray__;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)sortedArrayHint;
- (id)_stringToWrite;
- (id)sortedArrayUsingFunction:(int (*)())arg1 context:(void*)arg2 hint:(id)arg3;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3 error:(out id*)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned int)arg4 context:(void*)arg5;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)pathsMatchingExtensions:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)cutFirstObject;
- (id)__imArrayByApplyingBlock:(id)arg1 filter:(id)arg2;
- (void)__imForEach:(id)arg1;
- (BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (id)__imDeepCopy;
- (int)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (id)__imFirstObject;
- (id)__imArrayByFilteringWithBlock:(id)arg1;
- (BOOL)_hasSameMembers:(id)arg1;
- (BOOL)__imIsMutable;
- (id)__imSetFromArray;
- (id)_copyForEnumerating;
- (id)__imArrayByApplyingBlock:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (void)differencesFromArray:(id)arg1 usingComparator:(id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4;
- (void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3;
- (id)bs_mapNoNulls:(id)arg1;
- (id)bs_flatten;
- (id)bs_first:(unsigned int)arg1;
- (id)bs_reverse;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_filter:(id)arg1;
- (id)bs_map:(id)arg1;
- (void)bs_each:(id)arg1;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_firstObjectPassingTest:(id)arg1;
- (id)_arrayByFilteringCandidatesForNonExtendedView;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)_web_lowercaseStrings;
- (id)_webkit_numberAtIndex:(unsigned int)arg1;
- (id)_webkit_stringAtIndex:(unsigned int)arg1;
- (id)pickableRouteWithUID:(id)arg1;
- (id)bw_builtInMicRouteDictionary;
- (struct CGSize { float x1; float x2; })_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; }*)arg2 forWidth:(float)arg3 withFont:(id)arg4 lineBreakMode:(int)arg5;
- (id)_nextToLastObject;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_filteredArrayOfObjectsPassingTest:(id)arg1;
- (id)_ui_firstObject;
- (id)_ui_onlyObject;
- (id)subarraysOfSize:(unsigned int)arg1;
- (BOOL)MPIsEmpty;
- (void)_ICSStringsForPropertyValuesWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)_ICSParametersAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (BOOL)ICSContainsArray:(id)arg1;
- (id)_sa_mappedArrayWithBlock:(id)arg1;
- (id)mf_uncommentedAddressList;
- (id)mf_objectsPassingTest:(id)arg1;
- (id)mf_indicesOfStringsWithPrefix:(id)arg1;
- (unsigned int)mf_indexOfObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (unsigned int)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(id)arg2;
- (id)mf_objectEquivalentTo:(id)arg1 usingComparator:(id)arg2;
- (unsigned int)mf_indexOfObject:(id)arg1 usingComparator:(id)arg2;
- (id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (unsigned int)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)mf_dictionaryWithMessagesSortedByStore;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)_nextKeywordUsingCursors:(struct __CFDictionary { }*)arg1;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;
- (id)arrayByPerformingSpecifierUpdatesUsingBlock:(id)arg1;
- (unsigned int)indexOfSpecifierWithID:(id)arg1;
- (id)specifierForID:(id)arg1;
- (BOOL)CalContainsObjectIdenticalTo:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (id)allObjectsWithClass:(Class)arg1;
- (unsigned int)mf_indexOfMailboxDictionaryWithName:(id)arg1;
- (id)MSDeepCopy;
- (id)MSMutableDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)cplDeepCopy;
- (unsigned int)pl_indexOfLastObjectPassingTest:(id)arg1;
- (unsigned int)pl_indexOfFirstObjectPassingTest:(id)arg1;
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;
- (unsigned int)pl_indexOfLastObjectInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 passingTest:(id)arg2;
- (unsigned int)pl_indexOfFirstObjectInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 passingTest:(id)arg2;
- (unsigned int)pl_countOfObjectsPassingTest:(id)arg1;
- (id)pl_shortDescription;
- (id)cr_insertionSortedArrayUsingComparator:(id)arg1;
- (id)cr_firstObjectPassingTest:(id)arg1;
- (id)cr_map:(id)arg1;
- (unsigned int)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(id)arg2 match:(BOOL*)arg3;
- (id)_IDsFromURIs;
- (id)_URIsFromIDs;
- (id)_FTFilteredArrayForAPS;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)messages;
- (id)messageForChatItemAtIndex:(unsigned int)arg1;
- (id)__imItems;
- (id)__itemForChatItemAtIndex:(unsigned int)arg1;
- (void)__enumerateItemsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)__imLastMessageItem;
- (void)enumerateMessagesWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)lastMessage;
- (id)lastFinishedMessage;
- (id)_gkFilterWithBlock:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkMapWithBlock:(id)arg1;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(id)arg2;
- (id)_gkFirstObject;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapConcurrentlyWithBlock:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkOrderedSet;
- (id)_gkPlayersIDsFromPlayers;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkPlayersFromInternals;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkInternalsFromPlayers;
- (unsigned int)mf_indexOfRecipientWithEmailAddress:(id)arg1;
- (id)mf_commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2 usingSelector:(SEL)arg3;
- (id)mf_commaSeparatedRecipientListWithWidth:(float)arg1 forFont:(id)arg2;
- (unsigned int)_mapkit_indexForObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (id)_mapkit_arrayByRemovingObject:(id)arg1;
- (void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2;
- (id)copyDeep_MC;
- (id)arrayByMappingObjectsUsingBlock:(id)arg1;
- (id)firstObjectWithStringValue:(id)arg1 forKey:(id)arg2;
- (id)nextToLastObject;
- (id)secondObject;
- (id)objectAtIndexNoThrow:(int)arg1;
- (id)objectOrNullAtIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1 defaultValue:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectAtIndex:(unsigned int)arg1 defaultValue:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (double)doubleAtIndex:(unsigned int)arg1 defaultValue:(double)arg2;
- (float)floatAtIndex:(unsigned int)arg1 defaultValue:(float)arg2;
- (int)intAtIndex:(unsigned int)arg1 defaultValue:(int)arg2;
- (BOOL)boolAtIndex:(unsigned int)arg1 defaultValue:(BOOL)arg2;
- (double)doubleAtIndex:(unsigned int)arg1;
- (float)floatAtIndex:(unsigned int)arg1;
- (BOOL)boolAtIndex:(unsigned int)arg1;
- (int)intAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectAtIndex:(unsigned int)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (unsigned int)countObjectsPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (unsigned int)countObjectsPassingTest:(id)arg1;
- (id)pu_localizedComposedStringWithCount:(unsigned int)arg1;
- (id)pu_localizedComposedStringThatFitsWidth:(float)arg1 withMeasuringLabel:(id)arg2;
- (id)SCNMutableDeepCopy;
- (id)getTableColumn:(id)arg1;
- (void)setTableColumn:(id)arg1 withValues:(id)arg2;
- (void)setTableColumnWithColumnsFromDictionary:(id)arg1;
- (id)map:(id)arg1;
- (BOOL)anyPassPredicate:(id)arg1;
- (id)dictionaryOfResultsFromBlock:(id)arg1;
- (double)reduceDouble:(id)arg1 withInitialValue:(double)arg2;
- (id)mapDouble:(id)arg1;
- (id)mapAtIndices:(id)arg1 withBlock:(id)arg2;
- (id)objectsInRangeFromIndex:(unsigned int)arg1 withLength:(unsigned int)arg2;
- (BOOL)nonePassPredicate:(id)arg1;
- (id)reduce:(id)arg1 withInitialValue:(id)arg2;
- (id)objectOrNilAtIndex:(int)arg1;
- (id)indexSet;
- (id)firstPath;
- (id)assetForIdentifier:(id)arg1;
- (id)afui_arrayByMappingWithBlock:(id)arg1;
- (id)allObjectsWithClass:(Class)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (id)componentsJoinedIntoListWithMaxItems:(int)arg1;
- (id)CNFRegArrayPassingTest:(id)arg1;
- (id)CNFRegArrayPassingTests:(id)arg1;
- (id)__ck_commaJoinedValueForKey:(id)arg1;
- (id)__ck_indexSetForIndexPathRowsInSection:(int)arg1;
- (id)__ck_indexSetForIndexPathItemsInSection:(int)arg1;
- (id)__ck_messageForChatItemAtIndex:(unsigned int)arg1;
- (id)__ck_IMChatItemsAtIndexes:(id)arg1;
- (id)__ck_indexesOfUnplayedAudioMessages;
- (void)__ck_unloadTranscriptTextAtIndexes:(id)arg1;
- (void)__ck_unloadSizesAtIndexes:(id)arg1;
- (unsigned int)__ck_indexOfMediaObject:(id)arg1;
- (id)__ck_indexesOfPartsOfMessage:(id)arg1;
- (unsigned int)__ck_indexOfTransfer:(id)arg1;
- (id)composeRecipientNormalizedAddresses;
- (id)composeRecipientHandles;
- (id)composeRecipientAddresses;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2 usingSelector:(SEL)arg3;
- (id)_gkBubbleOfType:(int)arg1;
- (id)arrayByTransformingWithBlock:(id)arg1;
- (id)arrayByFlattening;
- (id)uniqueObjects;
- (id)arrayOfObjectsPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (void)enumerateSnapshotObjectsUsingBlock:(id)arg1;
- (id)arrayByReversingOrder;
- (id)arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)intersectionWithArray:(id)arg1;
- (id)arrayWithObjectsInSet:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (unsigned int)indexOfSmallestObject;
- (id)rangeCheckedObjectAtIndex:(unsigned int)arg1;
- (id)initWithInts:(int*)arg1 count:(unsigned int)arg2;
- (id)initWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
- (void)appendJsonStringToString:(id)arg1;
- (id)prs_filterObjectsUsingBlock:(id)arg1;
- (id)prs_mapObjectsUsingBlock:(id)arg1;
- (id)prs_arrayAtIndex:(unsigned int)arg1;
- (id)prs_dictionaryAtIndex:(unsigned int)arg1;
- (id)prs_stringAtIndex:(unsigned int)arg1;
- (id)prs_numberAtIndex:(unsigned int)arg1;
- (id)prs_mapAndFilterObjectsUsingBlock:(id)arg1;
- (BOOL)containsAtleastOneOf:(id)arg1;
- (id)arrayByRemovingObjectsFromArray:(id)arg1;
- (BOOL)containsString:(id)arg1;
- (id)_withoutEmptyStrings;
- (BOOL)_containsSubArray:(id)arg1;
- (id)repeatedNTimes:(int)arg1;
- (id)_subsequenceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (id)_subsequenceFromIndex:(unsigned int)arg1;
- (id)_subsequenceToIndex:(unsigned int)arg1;
- (id)_spliceAt:(int)arg1 amount:(int)arg2 andInsert:(id)arg3;
- (id)_spliceAt:(int)arg1 amount:(int)arg2 andOverlay:(id)arg3;
- (id)safari_mapAndFilterObjectsUsingBlock:(id)arg1;
- (id)safari_numberAtIndex:(unsigned int)arg1;
- (id)safari_stringAtIndex:(unsigned int)arg1;
- (id)safari_arrayAtIndex:(unsigned int)arg1;
- (id)safari_dictionaryAtIndex:(unsigned int)arg1;
- (id)safari_filterObjectsUsingBlock:(id)arg1;
- (id)safari_mapObjectsUsingBlock:(id)arg1;
- (id)arrayByTransformingWithBlock:(id)arg1;
- (id)arrayByFlattening;
- (id)uniqueObjects;
- (id)arrayOfObjectsPassingTest:(id)arg1;
- (id)firstObjectPassingTest:(id)arg1;
- (void)enumerateSnapshotObjectsUsingBlock:(id)arg1;
- (id)arrayByReversingOrder;
- (id)arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)intersectionWithArray:(id)arg1;
- (id)arrayWithObjectsInSet:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (unsigned int)indexOfSmallestObject;
- (id)rangeCheckedObjectAtIndex:(unsigned int)arg1;
- (id)initWithInts:(int*)arg1 count:(unsigned int)arg2;
- (id)initWithCGFloats:(float*)arg1 count:(unsigned int)arg2;
- (id)initWithUIntegers:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)appendJsonStringToString:(id)arg1;
- (id)initWithUInt32Array:(const struct RepeatedField<unsigned int> { unsigned int *x1; int x2; int x3; }*)arg1;
- (void)saveToUInt32Array:(struct RepeatedField<unsigned int> { unsigned int *x1; int x2; int x3; }*)arg1;
- (id)initWithColorArray:(const struct RepeatedPtrField<TSP::Color> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)saveToColorArray:(struct RepeatedPtrField<TSP::Color> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)initWithProtobufStringArray:(const struct RepeatedPtrField<std::__1::basic_string<char> > { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)saveToProtobufStringArray:(struct RepeatedPtrField<std::__1::basic_string<char> > { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)initWithGeometryArray:(const struct RepeatedPtrField<TSD::GeometryArchive> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)saveToGeometryArray:(struct RepeatedPtrField<TSD::GeometryArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (int)propertyAtIndex:(unsigned int)arg1;

@end
