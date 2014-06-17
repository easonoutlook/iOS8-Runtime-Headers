/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSMutableArray, _HKEmergencyContact;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <ABPeoplePickerNavigationControllerDelegate, HKMedicalIDEditorCellEditDelegate, _EmergencyContactRelationshipPickerDelegate> {
    void *_addressBook;
    NSMutableArray *_cells;
    _HKEmergencyContact *_selectedContact;
}


- (void)_presentEmergencyContactPicker;
- (id)_dequeueAndConfigureContactViewCellForIndex:(int)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(int)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactAddCellInTableView:(id)arg1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void).cxx_destruct;
- (int)numberOfRows;
- (id)title;
- (void)dealloc;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;

@end