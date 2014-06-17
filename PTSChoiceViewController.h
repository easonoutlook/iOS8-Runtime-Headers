/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class PTSChoiceRow, NSIndexPath;

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver> {
    NSIndexPath *_valueIndexPath;
    PTSChoiceRow *_row;
}

@property(retain) PTSChoiceRow * row;


- (void)row:(id)arg1 didChangeValue:(id)arg2;
- (id)initWithPresentingRow:(id)arg1;
- (void)_checkAppropriateCell;
- (id)_indexPathForValue:(id)arg1;
- (void)setRow:(id)arg1;
- (void).cxx_destruct;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)row;
- (void)dealloc;

@end