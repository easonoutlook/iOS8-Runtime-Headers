/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPStatisticsControlling>, TSWPStorage, TSWPTextStatistics, NSMutableArray;

@interface TSWPTextStatisticsTracker : NSObject <TSWPStorageObserver, TSWPTextStatisticsTracking> {
    <TSWPStatisticsControlling> *_statisticsController;
    TSWPStorage *_storage;
    TSWPTextStatistics *_storageStatistics;
    NSMutableArray *_paragraphStatistics;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _modifiedRange;
    int _modifiedDelta;
}

@property(readonly) TSWPTextStatistics * statistics;


- (id)statistics;
- (void)dealloc;
- (void)tearDown;
- (void)p_applyTextRangeOffset:(int)arg1 startingAtParagraphIndex:(unsigned int)arg2;
- (void)p_invalidateTrackersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)p_removeTrackersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)p_insertTrackers:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)p_indexOfRangedStatisticForLocation:(unsigned int)arg1;
- (void)p_updateStatisticsInRangedStatistic:(id)arg1;
- (void)p_processStorageChanges;
- (void)incrementallyUpdateStatisticsUntil:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (id)initWithController:(id)arg1 andObject:(id)arg2;

@end
