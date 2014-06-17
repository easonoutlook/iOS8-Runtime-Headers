/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDateComponents, UITableViewCell, PreferencesTwoPartValueCell, UIDatePicker, NSTimeZone;

@interface EKEventDateEditItem : EKEventEditItem <EKTimeZoneViewControllerDelegate, EKCellShortener> {
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    BOOL _allDay;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    BOOL _showTimeZones;
    PreferencesTwoPartValueCell *_startDateCell;
    PreferencesTwoPartValueCell *_endDateCell;
    UITableViewCell *_allDayCell;
    UITableViewCell *_startTimeZoneCell;
    UITableViewCell *_endTimeZoneCell;
    UITableViewCell *_startDatePickerCell;
    UITableViewCell *_endDatePickerCell;
    int _selectedSubitem;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    BOOL _endTimeWasMessedUp;
    BOOL _changingDate;
    int _shorteningStatus;
    BOOL _pushingTZController;
    BOOL _showsAllDay;
}

@property BOOL showsAllDay;


- (BOOL)isInline;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setShowsAllDay:(BOOL)arg1;
- (BOOL)showsAllDay;
- (void)shortenCell:(id)arg1;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (BOOL)_endDateIsBeforeStartDate;
- (void)_validateTimezones;
- (void)_pickNextReasonableTime;
- (void)_updateTimeWidths;
- (void)_resetStartString:(BOOL)arg1 endString:(BOOL)arg2;
- (void)_updateDateColors;
- (int)_rowForSubitem:(int)arg1;
- (void)_hideInlineDateControls;
- (id)_endDatePickerCell;
- (id)_startDatePickerCell;
- (id)_timeZoneDescription:(id)arg1;
- (id)_endTimeZoneCell;
- (id)_startTimeZoneCell;
- (id)_allDayCell;
- (id)_endDateCell;
- (id)_startDateCell;
- (int)_subitemForRow:(int)arg1;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_newDatePicker;
- (void)_datePickerDoubleTapped:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_allDayChanged:(id)arg1;
- (BOOL)_shouldShowTimeZone;
- (void)_updateDatePickerAnimated:(BOOL)arg1;
- (void)_setAllDay:(BOOL)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (id)_calendarForEventComponents:(BOOL)arg1;
- (void)_setEndTimeZone:(id)arg1;
- (void)_setStartTimeZone:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1;
- (void)refreshFromCalendarItemAndStore;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (BOOL)requiresReconfigurationOnCommit;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)endInlineEditing;
- (unsigned int)numberOfSubitems;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;

@end
