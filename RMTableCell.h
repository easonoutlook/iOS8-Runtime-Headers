/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class RMTable, NSString, RMTableCell;

@interface RMTableCell : NSObject  {
    NSString *_contents;
    RMTableCell *_nextCellInColumn;
    RMTableCell *_nextCellInRow;
    RMTable *_table;
    struct CGPDFNode { } *_tableCellNode;
}

@property(readonly) struct CGPDFPage { }* page;
@property(retain) RMTableCell * nextCellInColumn;
@property(retain) RMTableCell * nextCellInRow;
@property RMTable * table;
@property struct CGPDFNode { }* tableCellNode;


- (id)nextCellInColumn;
- (id)nextCellInRow;
- (struct CGPDFNode { }*)tableCellNode;
- (void)setNextCellInColumn:(id)arg1;
- (void)setNextCellInRow:(id)arg1;
- (void)setTableCellNode:(struct CGPDFNode { }*)arg1;
- (void)setTable:(id)arg1;
- (unsigned int)column;
- (struct CGPDFPage { }*)page;
- (id)table;
- (unsigned int)row;
- (struct CGColor { }*)backgroundColor;
- (id)contents;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;

@end
