/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKCommand;

@interface TSCHSynchronousCommand : TSKCommand  {
    TSKCommand *mCommand;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (BOOL)shouldRunSynchronously;
- (void)coalesceWithCommand:(id)arg1;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (id)initWithCommand:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
