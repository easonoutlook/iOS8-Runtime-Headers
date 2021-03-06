/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, TSCHChartDrawableInfo;

@interface TSCHCommandReplaceAll : TSKReplaceAllChildCommand  {
    TSCHChartDrawableInfo *mInfo;
    NSMutableArray *mCommands;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithParentCommand:(id)arg1 chartInfo:(id)arg2;
- (void)p_addSubcommandsForStyleOwner:(id)arg1 property:(int)arg2;
- (BOOL)shouldRunSynchronously;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
