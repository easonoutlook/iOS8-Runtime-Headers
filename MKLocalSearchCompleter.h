/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <GEOMapServiceCompletionTicket>, NSTimer, NSArray;

@interface MKLocalSearchCompleter : MKSearchCompleter  {
    double _lastRequestTime;
    BOOL _dirty;
    NSArray *_results;
    NSTimer *_timer;
    <GEOMapServiceCompletionTicket> *_ticket;
    int _source;
}


- (void)retry;
- (void)setFragment:(id)arg1;
- (void).cxx_destruct;
- (void)setSource:(int)arg1;
- (int)source;
- (id)results;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)_markDirty;
- (void)_fireRequest;
- (void)_scheduleRequest;
- (void)_cancelTimer;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (void)_schedulePendingRequest;
- (void)_handleCompletion:(id)arg1 forTicket:(id)arg2;
- (BOOL)resultsAreCurrent;
- (void)setBoundingRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isSearching;

@end
