/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TNSheetSelection;

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection> {
    TNSheetSelection *mSelection;
}

@property(retain) TNSheetSelection * selection;


- (id)initWithContext:(id)arg1;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end