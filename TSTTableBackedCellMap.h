/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTTableModel;

@interface TSTTableBackedCellMap : TSPObject <TSTCellMap> {
    TSTTableModel *mTableModel;
    struct { unsigned short x1; unsigned char x2; unsigned char x3; } *mCellIDs;
    unsigned int mCapacity;
    unsigned int mCount;
    BOOL mMayModifyFormulasInCells;
    BOOL mMayModifyValuesReferencedByFormulas;
    BOOL mIgnoreHiddenCellsWhenApplying;
    BOOL mAppliesToHidden;
}

@property BOOL mayModifyFormulasInCells;
@property BOOL mayModifyValuesReferencedByFormulas;
@property BOOL appliesToHidden;


- (id)cellAtIndex:(unsigned int)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithArchive:(const struct TableBackedCellMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; unsigned int x4; unsigned int x5; struct RepeatedPtrField<TST::TableBackedCellMapArchive_CellIDEntry> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; boolx7; boolx8; boolx9; int x10; unsigned int x11[1]; }*)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (id)initWithContext:(id)arg1 documentRoot:(id)arg2 andCapacity:(unsigned int)arg3;
- (void)p_expandRowsForCapacity:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_storageCellIDForIndex:(unsigned int)arg1;
- (void)setMayModifyFormulasInCells:(BOOL)arg1;
- (void)setAppliesToHidden:(BOOL)arg1;
- (BOOL)appliesToHidden;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (BOOL)mayModifyFormulasInCells;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)cellIDs;
- (void)popLastCell;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned int)arg1;
- (void)addCell:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)saveToArchive:(struct TableBackedCellMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; unsigned int x4; unsigned int x5; struct RepeatedPtrField<TST::TableBackedCellMapArchive_CellIDEntry> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; boolx7; boolx8; boolx9; int x10; unsigned int x11[1]; }*)arg1 archiver:(id)arg2;

@end
