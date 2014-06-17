/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDDrawableInfo, TSDDrawableComment;

@interface TSDDrawableInfoCommentCommand : TSKCommand  {
    TSDDrawableInfo *mInfo;
    TSDDrawableComment *mNewComment;
    TSDDrawableComment *mOldComment;
}


- (BOOL)process;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (void)p_doWithBeginEditing:(BOOL)arg1;
- (id)initWithContext:(id)arg1 info:(id)arg2 comment:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end