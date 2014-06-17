/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class _NSUndoObject;

@interface _NSUndoStack : NSObject  {
    unsigned int _max;
    unsigned int _count;
    unsigned int _nestingLevel;
    _NSUndoObject *_head;
}


- (void)setMax:(unsigned int)arg1;
- (unsigned int)max;
- (void)push:(id)arg1;
- (unsigned int)nestingLevel;
- (BOOL)popAndInvoke;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)init;
- (id)_beginMark;
- (void)_removeBottom;
- (void)removeAllObjectsWithTarget:(id)arg1;
- (void)setDiscardable:(BOOL)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;
- (void)markEnd;
- (id)popUndoObject;
- (BOOL)isDiscardable;
- (void)markBegin;
- (id)topUndoObject;

@end
