/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKSelection, TSCHSelection;

@interface TSCHArchivedSelection : TSPObject <TSKArchivedSelection> {
    TSCHSelection *mSelection;
}

@property(retain) TSKSelection * selection;


- (void)setSelection:(id)arg1;
- (id)selection;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end