/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class <_EmergencyContactRelationshipPickerDelegate>, NSArray;

@interface _EmergencyContactRelationshipPicker : UITableViewController  {
    NSArray *_labels;
    <_EmergencyContactRelationshipPickerDelegate> *_delegate;
}

@property <_EmergencyContactRelationshipPickerDelegate> * delegate;


- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_cancelTapped:(id)arg1;

@end
