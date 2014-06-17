/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLLocation, NSMutableArray, NSDate;

@interface EKTravelAgendaItem : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _adviceBlock;

    NSMutableArray *_trace;
    CLLocation *_location;
    NSDate *_date;
    int _travelMethod;
}

@property(readonly) CLLocation * location;
@property(readonly) NSDate * date;
@property(readonly) int travelMethod;

+ (BOOL)_clLocation:(id)arg1 isEqualToCLLocation:(id)arg2;

- (id)location;
- (id)date;
- (id)description;
- (void)dealloc;
- (void)traceLocation:(id)arg1 date:(id)arg2;
- (void)tracePrediction:(id)arg1 date:(id)arg2 delay:(double)arg3;
- (BOOL)writeTraceToDisk;
- (id)initWithLocation:(id)arg1 date:(id)arg2 adviceBlock:(id)arg3;
- (void)advise:(id)arg1;
- (int)travelMethod;
- (BOOL)isEqualToTravelAgendaItem:(id)arg1;
- (id)initWithLocation:(id)arg1 date:(id)arg2 travelMethod:(int)arg3 adviceBlock:(id)arg4;

@end
