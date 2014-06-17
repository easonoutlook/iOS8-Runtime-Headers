/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathTableCellExpression : SCRCMathRowExpression  {
    BOOL _didGetTablePosition;
    unsigned int _rowIndex;
    unsigned int _columnIndex;
    unsigned int _tableRowCount;
    unsigned int _tableColumnCount;
}


- (id)_suffixForCell;
- (id)_prefixForCell;
- (void)_getTableDataIfNecessary;
- (id)suffixForChildAtIndex:(unsigned int)arg1;
- (id)prefixForChildAtIndex:(unsigned int)arg1;
- (id)mathMLTag;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;

@end
