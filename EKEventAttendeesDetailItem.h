/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSMutableDictionary, EKEventDetailAttendeesCell;

@interface EKEventAttendeesDetailItem : EKEventDetailItem  {
    NSMutableDictionary *_attendeesCells;
    EKEventDetailAttendeesCell *_cell;
    int _status;
    NSArray *_attendees;
}

@property int status;
@property(retain) NSArray * attendees;


- (void)setStatus:(int)arg1;
- (int)status;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfSubitems;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)setAttendees:(id)arg1;
- (id)attendees;

@end
