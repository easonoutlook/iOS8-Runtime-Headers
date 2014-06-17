/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendar, CalendarEventAlarmTable, EKUIAlarm;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {
    CalendarEventAlarmTable *_table;
    BOOL _immediateAlarmCreation;
    BOOL _allDay;
    BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
    BOOL _shouldShowLeaveNowOption;
    BOOL _eventHasTravelTime;
    EKUIAlarm *_alarm;
    EKCalendar *_calendar;
    unsigned int _alarmIndex;
}

@property(retain) EKUIAlarm * alarm;
@property(retain) EKCalendar * calendar;
@property unsigned int alarmIndex;
@property BOOL allDay;
@property BOOL shouldAllowAlarmsTriggeringAfterStartDate;
@property BOOL shouldShowLeaveNowOption;
@property BOOL eventHasTravelTime;
@property int presetIdentifier;


- (void).cxx_destruct;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)tableHeaderView;
- (BOOL)shouldShowLeaveNowOption;
- (void)alarmTableDidChangeAlarm:(id)arg1;
- (int)presetIdentifier;
- (void)setCustomString:(id)arg1;
- (void)setPresetIdentifier:(int)arg1;
- (BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
- (unsigned int)alarmIndex;
- (id)alarm;
- (BOOL)customSelected;
- (void)setShouldShowLeaveNowOption:(BOOL)arg1;
- (void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1;
- (void)setAlarm:(id)arg1;
- (void)setAlarmIndex:(unsigned int)arg1;
- (BOOL)eventHasTravelTime;
- (void)setEventHasTravelTime:(BOOL)arg1;
- (void)_storeChanged:(id)arg1;
- (BOOL)allDay;
- (void)setAllDay:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;

@end
