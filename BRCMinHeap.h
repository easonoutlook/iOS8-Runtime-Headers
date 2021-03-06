/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration> {
    id *_array;
    unsigned int _size;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _comparator;

    unsigned long _mutation;
    NSMapTable *_objects;
    unsigned int _count;
}

@property(readonly) unsigned int count;


- (void)objectWeightChanged:(id)arg1;
- (void)firstObjectWeightChanged;
- (void)removeFirstObject;
- (BOOL)check;
- (id)initWithComparator:(id)arg1;
- (void)_shrink;
- (void)_moveUpOrDown:(id)arg1 index:(unsigned int)arg2;
- (void)_moveUp:(id)arg1 index:(unsigned int)arg2;
- (void)_moveDown:(id)arg1 index:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)firstObject;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (void)addObject:(id)arg1;

@end
