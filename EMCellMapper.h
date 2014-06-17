/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference;

@interface EMCellMapper : CMMapper  {
    struct EDCellHeader { unsigned int x1; unsigned int x2; } *edCell;
    EDReference *edMergedCellReference;
    int rowNumber;
    int firstColumn;
    int lastColumn;
    int columnSpan;
    BOOL firstCellFlag;
    BOOL spreadLeftFlag;
    double columnWidth;
}

+ (BOOL)isCellEmpty:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg1;

- (id)initWithParent:(id)arg1;
- (int)columnSpan;
- (id)mapHyperlinkAt:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg4;
- (void)adjustColumnSpanForGrid:(double*)arg1 columnCount:(unsigned int)arg2 nextCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg3 withState:(id)arg4;
- (BOOL)isCellMerged;
- (BOOL)isCellSpreading:(id)arg1;
- (BOOL)isFirstCell;
- (void)setFirstCellFlag;
- (BOOL)isCellEmpty;
- (void)resetColumnSpan:(int)arg1;
- (void)setFirstColumn:(int)arg1;
- (void)setLastColumn:(int)arg1;
- (id)initWithEDCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg1 rowInfo:(struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2 parent:(id)arg3 state:(id)arg4;
- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;
- (int)firstColumn;
- (int)lastColumn;
- (double)columnWidth;

@end
