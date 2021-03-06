/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPStatisticsControlling>, TSWPTextStatistics, TSTTableInfo, NSMutableArray;

@interface TSTTextStatisticsTracker : NSObject <TSWPTextStatisticsTracking, TSKChangeSourceObserver, TSWPStorageObserver> {
    <TSWPStatisticsControlling> *mStatisticsController;
    TSTTableInfo *mTableInfo;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mCellRange;
    NSMutableArray *mStatArray;
    TSWPTextStatistics *mTotalStatistics;
}


- (id)statistics;
- (id).cxx_construct;
- (void)dealloc;
- (void)tearDown;
- (void)incrementallyUpdateStatisticsUntil:(id)arg1;
- (void)p_updateStats:(id)arg1 withCell:(id)arg2;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (id)initWithController:(id)arg1 andObject:(id)arg2;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;

@end
