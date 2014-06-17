/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKUIEventInviteesEditViewController, NSString, EKParticipant;

@interface EKEventAttendeesEditItem : EKEventEditItem  {
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    EKUIEventInviteesEditViewController *_inviteesDetailController;
}


- (void).cxx_destruct;
- (id)attendeesWithoutSelfOrganizer;
- (id)_inviteesDetailController;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)forceTableReloadOnCommit;
- (BOOL)forceRefreshStartAndEndDatesOnCommit;
- (BOOL)requiresReconfigurationOnCommit;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end