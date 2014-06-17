/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
    CPCharSequence *charSequence;
    struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; } *wordArray;
    unsigned int wordCount;
    struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; } *inlineList;
    int lineNumber;
    int columnNumber;
    float baseline;
    BOOL baseLineIsNull;
    BOOL hasBeenSplit;
    BOOL hasBeenProcessed;
    BOOL maySplit;
    BOOL hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    BOOL irregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    BOOL isListItem;
    unsigned int listSpacerIndex;
    BOOL lineBreakAfter;

  /* Error parsing encoded ivar type info: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}} */
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; float x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; } *uniformStyle;

    unsigned short uniformStyleFlags;
    float monospaceWidth;
    unsigned int *spacesBefore;
    BOOL disposed;
}

@property unsigned int leftSpacerIndex;
@property unsigned int rightSpacerIndex;
@property BOOL isListItem;
@property unsigned int listSpacerIndex;
@property BOOL lineBreakAfter;


- (unsigned int)wordCount;
- (int)align;
- (void)setBaseline:(float)arg1;
- (float)baseline;
- (BOOL)isListItem;
- (void)setLineBreakAfter:(BOOL)arg1;
- (void)setListSpacerIndex:(unsigned int)arg1;
- (unsigned int)listSpacerIndex;
- (void)setIsListItem:(BOOL)arg1;
- (void)setRightSpacerIndex:(unsigned int)arg1;
- (unsigned int)rightSpacerIndex;
- (void)setLeftSpacerIndex:(unsigned int)arg1;
- (unsigned int)leftSpacerIndex;
- (float)medianFontSize;
- (int)topIsAbove:(id)arg1;
- (void)setIrregular:(BOOL)arg1;
- (BOOL)irregular;
- (void)setMaximumWordGap:(float)arg1;
- (float)maximumWordGap;
- (void)setMaximumLetterGap:(float)arg1;
- (float)maximumLetterGap;
- (void)setLevels:(int)arg1;
- (int)levels;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (void)setBaselineToNull;
- (BOOL)hyphenated;
- (BOOL)overlapsWith:(id)arg1;
- (int)baseLineDescending:(id)arg1;
- (int)baseLineAscending:(id)arg1;
- (int)tabsBefore;
- (void)setTabsBefore:(int)arg1;
- (BOOL)hasTabs;
- (void)setHasTabs:(BOOL)arg1;
- (void)setColumnBreaks:(id)arg1;
- (id)columnBreaks;
- (BOOL)hasBeenProcessed;
- (void)setHasBeenProcessed:(BOOL)arg1;
- (BOOL)hasBeenSplit;
- (void)setHasBeenSplit:(BOOL)arg1;
- (BOOL)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)removeTextLines:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (BOOL)changesFontAt:(id)arg1;
- (BOOL)hasJustifiedAlignment;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfWordAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArray;
- (BOOL)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)overlapsHorizontally:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)recomputeBaseline;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (void)recomputeLevels;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArrayOfSize:(unsigned int)arg1;
- (void)setCharSequence:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)lastWord;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)firstWord;
- (BOOL)lineBreakAfter;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; }*)inlineList;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordAtIndex:(unsigned int)arg1;
- (BOOL)hasDropCap;
- (float)monospaceWidth;
- (id)charSequence;
- (BOOL)styleIsUniform:(struct CPPDFStyle {}**)arg1 styleFlags:(unsigned short)arg2;
- (unsigned int)inlineCount;
- (BOOL)isMonospaced;
- (BOOL)isIndivisible;
- (void)dispose;
- (void)translateObjectYBy:(float)arg1;
- (void)accept:(id)arg1;
- (void)fitBoundsToChildren;
- (long)zOrder;
- (struct CGPoint { float x1; float x2; })anchor;
- (id)properties;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
