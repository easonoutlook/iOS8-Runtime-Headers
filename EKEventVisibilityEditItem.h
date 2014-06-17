/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem, EKEventEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem  {
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
}


- (id)footerView;
- (id)footerTitle;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)_lowestEditItem;
- (id)_editItemForIndex:(unsigned int)arg1;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (float)footerHeightForWidth:(float)arg1;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (BOOL)forceTableReloadOnCommit;
- (BOOL)requiresReconfigurationOnCommit;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (unsigned int)numberOfSubitems;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;

@end
