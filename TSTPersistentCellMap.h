/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSTPersistentCellMap : TSPContainedObject <TSTCellMap> {
    struct { unsigned short x1; unsigned char x2; unsigned char x3; } *mCellIDs;
    id *mCells;
    unsigned int mCapacity;
    unsigned int mCount;
    BOOL mMayModifyFormulasInCells;
    BOOL mMayModifyValuesReferencedByFormulas;
    BOOL mIgnoreHiddenCellsWhenApplying;
    BOOL mAppliesToHidden;
}

@property BOOL appliesToHidden;


- (id)cellAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)setMayModifyFormulasInCells:(BOOL)arg1;
- (id)initWithOwner:(id)arg1 andCapacity:(unsigned int)arg2;
- (void)setAppliesToHidden:(BOOL)arg1;
- (BOOL)appliesToHidden;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (BOOL)mayModifyFormulasInCells;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)cellIDs;
- (void)popLastCell;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned int)arg1;
- (id)initWithArchive:(const struct CellMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3; unsigned int x4; struct RepeatedPtrField<TST::CellMapArchive_CellMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; boolx6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)addCell:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)saveToArchive:(struct CellMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3; unsigned int x4; struct RepeatedPtrField<TST::CellMapArchive_CellMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; boolx6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 archiver:(id)arg2;

@end
