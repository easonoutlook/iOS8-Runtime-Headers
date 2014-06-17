/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSKShuffleMapping : NSObject <NSCopying> {
    unsigned short mStartIndex;
    unsigned short mEndIndex;
    unsigned short *mMapping;
    BOOL mIsVertical;
    BOOL mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}

@property(readonly) unsigned short startIndex;
@property(readonly) unsigned short endIndex;
@property(readonly) unsigned short* mapping;
@property(readonly) unsigned short mappingSize;


- (unsigned short*)mapping;
- (id)initWithArchive:(const struct ShuffleMappingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3; unsigned int x4; struct RepeatedPtrField<TSK::ShuffleMappingArchive_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; boolx6; boolx7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; unsigned int x12[1]; }*)arg1;
- (unsigned short)endIndex;
- (BOOL)isVertical;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned short)startIndex;
- (void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2;
- (void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2;
- (void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(BOOL)arg3;
- (void)enumerateMappingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (id)copyInverse;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(BOOL)arg4;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2;
- (unsigned short)mappingSize;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short*)arg3;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })contiguousMappingForRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 inTable:(struct __CFUUID { }*)arg2;
- (unsigned short)reverseMapIndex:(unsigned short)arg1;
- (BOOL)isMove;
- (unsigned short)mapIndex:(unsigned short)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })mapCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })reverseMapCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)saveToArchive:(struct ShuffleMappingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3; unsigned int x4; struct RepeatedPtrField<TSK::ShuffleMappingArchive_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; boolx6; boolx7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; unsigned int x12[1]; }*)arg1;

@end
