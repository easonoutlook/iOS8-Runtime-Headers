/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSDImageInfo;

@interface TSDInstantAlphaCommand : TSKCommand  {
    TSDImageInfo *mInfo;
    TSDBezierPath *mOldPath;
    TSDBezierPath *mNewPath;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 newPath:(id)arg2;
- (void)p_do;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
