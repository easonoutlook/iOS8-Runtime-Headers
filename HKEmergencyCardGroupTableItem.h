/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSMutableArray, NSArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem  {
    NSMutableArray *_cumulativeRowOffsets;
    BOOL _enabled;
    NSArray *_subitems;
}

@property(retain) NSArray * subitems;
@property BOOL enabled;


- (id)subitems;
- (void)_getSubitem:(id*)arg1 andSubitemRow:(int*)arg2 forTableViewRow:(int)arg3;
- (void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (BOOL)hasPresentableData;
- (void)setSubitems:(id)arg1;
- (void)setOwningViewController:(id)arg1;
- (void).cxx_destruct;
- (int)numberOfRows;
- (void)setEnabled:(BOOL)arg1;
- (void)setData:(id)arg1;
- (BOOL)enabled;
- (void)commitEditing;

@end
