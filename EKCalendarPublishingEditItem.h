/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, UIActivityIndicatorView, UIView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {
    BOOL _published;
    UIView *_footerView;
    UILabel *_descriptionLabel;
    UILabel *_publishingLabel;
    UIActivityIndicatorView *_spinner;
}

@property BOOL published;
@property(readonly) UIView * footerView;


- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)footerView;
- (void).cxx_destruct;
- (void)reset;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (BOOL)published;
- (void)_publishChanged:(id)arg1;
- (id)calendarTitle;
- (id)pubishURL;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (BOOL)configureWithCalendar:(id)arg1;
- (float)footerHeightForSection;
- (id)footerViewForSection;
- (void)layoutForWidth:(float)arg1;
- (void)_applyStyleToUILabel:(id)arg1;
- (unsigned int)numberOfSubitems;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)setPublished:(BOOL)arg1;

@end
