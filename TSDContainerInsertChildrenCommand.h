/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject<TSDMutableContainerInfo>, NSArray;

@interface TSDContainerInsertChildrenCommand : TSKCommand  {
    TSPObject<TSDMutableContainerInfo> *mContainer;
    NSArray *mChildren;
    unsigned int mIndex;
}

@property(readonly) NSArray * children;
@property(readonly) TSPObject<TSDMutableContainerInfo> * container;


- (id)children;
- (id)actionString;
- (BOOL)process;
- (id)container;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 insertingChildren:(id)arg2 atIndex:(unsigned int)arg3 objectContext:(id)arg4;
- (void)p_do;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
