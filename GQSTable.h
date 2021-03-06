/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTCell, GQDTTable, GQDTOverlapCell;

@interface GQSTable : NSObject  {
    GQDTTable *mTable;
    GQDTOverlapCell *mCurrentOverlapCell;
    GQDTCell *mLastCellRead;
    BOOL mIsStreaming;
    BOOL mAlwaysPutReadCellsInArray;
    long mCellCount;
    BOOL mIsCounting;
}


- (BOOL)isStreaming;
- (long)column;
- (id)table;
- (long)row;
- (void)dealloc;
- (void)setLastCellRead:(id)arg1;
- (BOOL)alwaysPutReadCellsInArray;
- (id)initWithStreaming:(BOOL)arg1 table:(id)arg2;
- (id)lastCellRead;
- (void)setIsCountingCount:(BOOL)arg1;
- (void)setAlwaysPutReadCellsInArray:(BOOL)arg1;
- (void)setCurrentOverlapCell:(id)arg1;
- (id)currentOverlapCell;
- (BOOL)isCounting;
- (void)incrementCellPosition;
- (void)skipCells:(long)arg1;

@end
