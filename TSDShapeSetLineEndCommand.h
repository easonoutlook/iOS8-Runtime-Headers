/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDShapeInfo, TSDLineEnd;

@interface TSDShapeSetLineEndCommand : TSKCommand  {
    TSDShapeInfo *mShape;
    TSDLineEnd *mLineEnd;
    BOOL mIsHeadLineEnd;
}

@property(readonly) TSDShapeInfo * shape;
@property(readonly) BOOL isHeadLineEnd;
@property(readonly) TSDLineEnd * lineEnd;


- (id)actionString;
- (BOOL)process;
- (id)shape;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)lineEnd;
- (BOOL)isHeadLineEnd;
- (id)initWithShape:(id)arg1 lineEnd:(id)arg2 isHeadLineEnd:(BOOL)arg3;
- (void)p_do;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
