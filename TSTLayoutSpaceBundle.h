/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject  {
    TSTLayout *mLayout;
    TSTLayoutSpace *mSpace;
    TSTLayoutSpace *mFrozenHeaderColumnsSpace;
    TSTLayoutSpace *mFrozenHeaderRowsSpace;
    TSTLayoutSpace *mFrozenHeaderCornerSpace;
    TSTLayoutSpace *mRepeatHeaderColumnsSpace;
    TSTLayoutSpace *mRepeatHeaderRowsSpace;
    TSTLayoutSpace *mRepeatHeaderCornerSpace;
}

@property TSTLayout * layout;
@property(retain) TSTLayoutSpace * space;
@property(retain) TSTLayoutSpace * frozenHeaderColumnsSpace;
@property(retain) TSTLayoutSpace * frozenHeaderRowsSpace;
@property(retain) TSTLayoutSpace * frozenHeaderCornerSpace;
@property(retain) TSTLayoutSpace * repeatHeaderColumnsSpace;
@property(retain) TSTLayoutSpace * repeatHeaderRowsSpace;
@property(retain) TSTLayoutSpace * repeatHeaderCornerSpace;


- (id)space;
- (void)setSpace:(id)arg1;
- (void)setLayout:(id)arg1;
- (id)layout;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)getSpaceContainingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)performActionOnFrozenLayoutSpaces:(id)arg1;
- (void)setFrozenHeaderCornerSpace:(id)arg1;
- (void)setFrozenHeaderRowsSpace:(id)arg1;
- (void)setFrozenHeaderColumnsSpace:(id)arg1;
- (BOOL)performActionOnRepeatLayoutSpaces:(id)arg1;
- (void)setRepeatHeaderCornerSpace:(id)arg1;
- (void)setRepeatHeaderRowsSpace:(id)arg1;
- (void)setRepeatHeaderColumnsSpace:(id)arg1;
- (void)performActionOnEachLayoutSpace:(id)arg1;
- (id)repeatHeaderCornerSpace;
- (id)repeatHeaderRowsSpace;
- (id)repeatHeaderColumnsSpace;
- (id)frozenHeaderCornerSpace;
- (id)frozenHeaderRowsSpace;
- (id)frozenHeaderColumnsSpace;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg1;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg1;
- (void)invalidateCoordinates;
- (void)invalidateTableOffsets;
- (int)validateLayoutSpaces;

@end
