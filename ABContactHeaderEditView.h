/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, <ABPropertyCellDelegate>, UITableView, <ABContactHeaderViewDelegate>;

@interface ABContactHeaderEditView : ABContactHeaderView <UITableViewDelegate, UITableViewDataSource, ABPropertyGroupItemDelegate, ABContactPhotoViewDelegate> {
    UITableView *_editingTable;
    NSArray *_editingGroups;
    <ABPropertyCellDelegate> *_namePropertyDelegate;
    <ABContactHeaderViewDelegate> *_headerDelegate;
}

@property(retain) NSArray * editingGroups;
@property <ABPropertyCellDelegate> * namePropertyDelegate;
@property <ABContactHeaderViewDelegate> * headerDelegate;

+ (id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2;

- (BOOL)hasPhoto;
- (void)updateConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setHeaderDelegate:(id)arg1;
- (void)setNamePropertyDelegate:(id)arg1;
- (id)editingGroups;
- (id)selectEditingGroupAtIndex:(unsigned int)arg1;
- (BOOL)photoIsModified;
- (void)setEditingGroups:(id)arg1 withUpdate:(BOOL)arg2;
- (void)didUpdatePhoto;
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;
- (id)headerDelegate;
- (id)_phoneticNameForValue:(id)arg1 isFamilyName:(BOOL)arg2;
- (id)namePropertyDelegate;
- (void)setEditingGroups:(id)arg1;
- (id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)updateFontSizes;

@end
