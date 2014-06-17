/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
    unsigned int length;
    struct CPPDFChar {} **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    BOOL wasMerged;
}


- (void)resize:(unsigned int)arg1;
- (BOOL)mapToPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToPairs:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapWithIndex:(int (*)())arg1 from:(unsigned int)arg2 length:(unsigned int)arg3 passing:(void*)arg4;
- (BOOL)mapWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)removeToSubsequence:(id)arg1 ifTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)copyToSubsequence:(id)arg1 ifTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)copyToSubsequence:(id)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)removeCharAtIndex:(unsigned int)arg1;
- (void)replaceCharAtIndex:(unsigned int)arg1 withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CPPDFStyle {} *x6; float x7; int x8; }*)arg2;
- (void)removeChar;
- (void)addCharsFromSequence:(id)arg1;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CPPDFStyle {} *x6; float x7; int x8; }*)arg1 length:(unsigned int)arg2 ifTrue:(int (*)())arg3 passing:(void*)arg4;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CPPDFStyle {} *x6; float x7; int x8; }*)arg1 length:(unsigned int)arg2;
- (struct CPPDFChar {}**)charArray;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CPPDFStyle {} *x6; float x7; int x8; }*)arg1 length:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)merge:(id)arg1 by:(int (*)())arg2;
- (void)sortBy:(int (*)())arg1;
- (void)removeAllChars;
- (BOOL)map:(int (*)())arg1 whereNeighborsWith:(id)arg2 passing:(void*)arg3;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg1;
- (void)splitToSubsequences:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)sortByAnchorYDecreasingXIncreasing;
- (BOOL)removeSubsequences:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (BOOL)wasMerged;
- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CPPDFStyle {} *x6; float x7; int x8; }*)arg1;
- (id)initWithSizeFor:(unsigned int)arg1;
- (void)removeFrom:(unsigned int)arg1;
- (id)newSubsequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (BOOL)map:(int (*)())arg1 passing:(void*)arg2;
- (id)initSuper;
- (void)dispose;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CPPDFStyle {} *x6; float x7; int x8; }*)charAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)length;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)finalize;

@end
