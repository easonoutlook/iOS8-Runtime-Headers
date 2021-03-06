/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface PSSearchResults : NSObject <NSCopying> {
    NSMutableArray *_sectionEntries;
    NSMutableSet *_explicitlyAddedSectionEntries;
    NSMutableDictionary *_entriesBySection;
    BOOL _needsSorting;
    BOOL _treatSectionEntriesAsRegularEntries;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sectionComparator;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _entryComparator;

}

@property(copy) id sectionComparator;
@property(copy) id entryComparator;
@property BOOL treatSectionEntriesAsRegularEntries;


- (void)addEntries:(id)arg1;
- (void)setTreatSectionEntriesAsRegularEntries:(BOOL)arg1;
- (BOOL)treatSectionEntriesAsRegularEntries;
- (id)entryComparator;
- (id)sectionComparator;
- (void)setEntryComparator:(id)arg1;
- (id)allSectionEntries;
- (id)entryAtIndexPath:(id)arg1;
- (id)sectionEntryAtIndex:(unsigned int)arg1;
- (unsigned int)totalNumberOfEntries;
- (unsigned int)numberOfEntriesInSectionAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSectionEntries;
- (id)entriesInSectionAtIndex:(unsigned int)arg1;
- (id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3;
- (void)setSectionComparator:(id)arg1;
- (BOOL)removeEntry:(id)arg1;
- (void)mergeWithResults:(id)arg1;
- (id)resultsByMergingWithResults:(id)arg1;
- (void)sortResults;
- (unsigned int)removeEntries:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)addEntry:(id)arg1;

@end
