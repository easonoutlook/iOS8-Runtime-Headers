/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSTextTable, NSMutableArray;

@interface NSRTFReaderTableState : NSObject  {
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
}


- (void)dealloc;

@end
