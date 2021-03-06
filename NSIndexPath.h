/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned int *_indexes;
    unsigned int _length;
    void *_reserved;
}

@property(readonly) int tk_section;
@property(readonly) int tk_row;
@property(readonly) int ab_group;
@property(readonly) int ab_item;
@property(readonly) int item;
@property(readonly) int section;
@property(readonly) int row;
@property(readonly) unsigned int length;

+ (id)indexPathWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2;
+ (id)indexPathForItem:(int)arg1 inSection:(int)arg2;
+ (id)indexPathForItem:(int)arg1 inGroup:(int)arg2;
+ (id)pu_indexPathsForItems:(id)arg1 inSection:(int)arg2;
+ (id)tk_indexPathForRow:(int)arg1 inSection:(int)arg2;

- (id)initWithIndex:(unsigned int)arg1;
- (void)getIndexes:(unsigned int*)arg1;
- (id)initWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
- (int)compare:(id)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(unsigned int)arg1;
- (unsigned int)indexAtPosition:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)length;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)getIndexes:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (int)section;
- (int)row;
- (int)item;
- (id)dd_stringValue;
- (int)ab_item;
- (int)ab_group;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;
- (BOOL)_gkIsGlobal;
- (int)tk_row;
- (int)tk_section;

@end
