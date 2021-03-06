/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class <HKEmergencyCardEnabledDelegate>, UISwitch, UITableViewCell;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem  {
    UITableViewCell *_cell;
    UISwitch *_switch;
    <HKEmergencyCardEnabledDelegate> *_enabledDelegate;
}

@property <HKEmergencyCardEnabledDelegate> * enabledDelegate;


- (id)enabledDelegate;
- (void)_switchSwitched:(id)arg1;
- (id)titleForFooter;
- (float)heightForFooter;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (void)setEnabledDelegate:(id)arg1;
- (id)initInEditMode:(BOOL)arg1;
- (void).cxx_destruct;
- (id)_cell;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })separatorInset;

@end
