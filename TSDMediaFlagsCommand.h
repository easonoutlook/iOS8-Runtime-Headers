/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMediaInfo;

@interface TSDMediaFlagsCommand : TSKCommand  {
    TSDMediaInfo *mInfo;
    unsigned int mFlags;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 wasMediaReplaced:(BOOL)arg2 isPlaceholder:(BOOL)arg3;
- (void)p_do;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
