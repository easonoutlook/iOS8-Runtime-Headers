/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CPZoneProfile, NSMutableArray, CPCharSequence;

@interface CPZone : CPRegion <CPGraphicUser> {
    NSMutableArray *zoneBorders;
    struct CGPoint { float x1; float x2; } *outerVertices;
    struct CGPoint { float x1; float x2; } *swollenOuterVertices;
    double area;
    BOOL isStraddleZone;
    CPZoneProfile *zoneProfile;
    NSArray *leftGuides;
    NSArray *rightGuides;
    NSArray *gutters;
    NSArray *spacers;
    CPCharSequence *charactersInZone;
    NSMutableArray *textLinesInZone;
    NSArray *graphicsInZone;
    NSMutableArray *backgroundGraphics;
    unsigned int usedGraphicCount;
}


- (unsigned int)wordCount;
- (BOOL)contains:(id)arg1;
- (unsigned int)vertexCount;
- (double)area;
- (BOOL)isRectangular;
- (id)spacers;
- (void)setSpacers:(id)arg1;
- (id)gutters;
- (void)setGutters:(id)arg1;
- (id)rightGuides;
- (void)setRightGuides:(id)arg1;
- (id)leftGuides;
- (void)setLeftGuides:(id)arg1;
- (void)setZoneProfile:(id)arg1;
- (id)zoneProfile;
- (void)setIsStraddleZone:(BOOL)arg1;
- (BOOL)isStraddleZone;
- (int)compareArea:(id)arg1;
- (void)addContentFrom:(id)arg1;
- (id)charactersInZone;
- (void)setCharactersInZone:(id)arg1;
- (void)addPDFChar:(void*)arg1;
- (BOOL)canContain:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })swollenZoneBounds;
- (void)removeUnfilledNeighborShapes;
- (void)setZoneBorders:(id)arg1;
- (id)graphicsInZone;
- (id)zoneBorders;
- (BOOL)hasBorders;
- (struct CGPoint { float x1; float x2; }*)swollenOuterVertices;
- (long)neighborZOrder;
- (long)borderZOrder;
- (BOOL)hasNeighborShape:(id)arg1;
- (BOOL)bordersWindClockwise;
- (BOOL)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (id)backgroundGraphics;
- (struct CGColor { }*)newBackgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })zoneBounds;
- (unsigned int)usedGraphicCount;
- (BOOL)isZone;
- (void)incrementUsedGraphicCount;
- (struct CGPoint { float x1; float x2; }*)outerVertices;
- (void)accept:(id)arg1;
- (id)textLinesInZone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
