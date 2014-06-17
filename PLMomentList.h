/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<NSCopying>, NSArray, NSOrderedSet, PLMomentNameInfo, NSString, NSDate, NSData;

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData> {
    PLMomentNameInfo *_cachedNameInfo;
    BOOL _loadedNameInfo;
}

@property short granularityLevel;
@property int sortIndex;
@property(retain) NSString * title;
@property(retain) NSString * title2;
@property(retain) NSString * title3;
@property(retain) NSDate * startDate;
@property(retain) NSDate * representativeDate;
@property(retain) NSDate * endDate;
@property(retain) NSOrderedSet * momentsForMegaMoment;
@property(retain) NSOrderedSet * momentsForYear;
@property(retain) NSData * reverseLocationData;
@property BOOL reverseLocationDataIsValid;
@property(retain) NSString * uuid;
@property(retain,readonly) NSString * localizedTitle;
@property(retain,readonly) NSArray * localizedLocationNames;
@property short generationType;
@property(retain) NSOrderedSet * moments;
@property(readonly) unsigned int containersCount;
@property(retain,readonly) NSObject<NSCopying> * uniqueObjectID;
@property(retain) NSArray * userTitles;

+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg1 inYear:(int)arg2 withDay:(int)arg3 inManagedObjectContext:(id)arg4;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 returnsObjectsAsFaults:(BOOL)arg4;
+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)findOrCreateYearMomentListForYear:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;

- (void)removeMoment:(id)arg1 forMomentListLevel:(short)arg2;
- (void)addMoment:(id)arg1 forMomentListLevel:(short)arg2;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned int)arg2;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (BOOL)isMeaningful;
- (id)pl_debugDescription;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned int)arg2;
- (void)removeMomentsForYear:(id)arg1;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (void)addMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForYearObject:(id)arg1;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)addMoment:(id)arg1 forMegaMomentAtIndex:(unsigned int)arg2;
- (void)removeMoments:(id)arg1 forMomentListLevel:(short)arg2;
- (void)addMoments:(id)arg1 forMomentListLevel:(short)arg2;
- (void)invalidateNameInfo;
- (BOOL)_validateForInsertOrUpdate:(id*)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (void)_updateCachedNameInfoIfNeeded;
- (id)userTitles;
- (void)setUserTitles:(id)arg1;
- (id)momentListDebugDescription;
- (void)setMoments:(id)arg1;
- (void)addMomentToFront:(id)arg1;
- (void)addMoments:(id)arg1;
- (void)removeMoments:(id)arg1;
- (id)moments;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
- (id)uniqueObjectID;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (void)didTurnIntoFault;
- (void)willSave;
- (void)awakeFromInsert;
- (void)delete;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)_typeDescription;
- (BOOL)isEmpty;
- (void)dealloc;

@end