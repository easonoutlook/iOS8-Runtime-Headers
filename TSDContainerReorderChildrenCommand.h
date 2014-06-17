/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject<TSDMutableContainerInfo>, NSIndexSet, NSArray;

@interface TSDContainerReorderChildrenCommand : TSKCommand  {
    TSPObject<TSDMutableContainerInfo> *mContainer;
    NSArray *mChildren;
    NSIndexSet *mChildrenIndexes;
    BOOL mCoalesceable;
}

@property(readonly) NSArray * children;
@property(readonly) TSPObject<TSDMutableContainerInfo> * container;
@property(readonly) NSIndexSet * indexes;
@property(getter=isCoalesceable,readonly) BOOL coalesceable;


- (id)children;
- (id)actionString;
- (id)indexes;
- (BOOL)process;
- (id)container;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (BOOL)isCoalesceable;
- (id)initWithContainer:(id)arg1 movingChildren:(id)arg2 toIndexes:(id)arg3 coalesceable:(BOOL)arg4 objectContext:(id)arg5;
- (void)p_do;
- (void)coalesceWithCommand:(id)arg1;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
