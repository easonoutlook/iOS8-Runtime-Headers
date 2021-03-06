/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITableView, <ABContactGroupPickerDelegate>, NSArray;

@interface ABContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_pickableGroups;
    UITableView *_tableView;
    <ABContactGroupPickerDelegate> *_groupPickerDelegate;
}

@property <ABContactGroupPickerDelegate> * groupPickerDelegate;

+ (BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1;
+ (id)propertySections;
+ (id)pickableGroupsWithPickedGroups:(id)arg1;

- (void)cancel:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)initWithGroups:(id)arg1;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1;
- (void)setGroupPickerDelegate:(id)arg1;
- (id)groupPickerDelegate;

@end
