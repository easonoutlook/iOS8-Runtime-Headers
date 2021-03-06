/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, EKOccurrenceCacheSearch;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource  {
    EKOccurrenceCacheSearch *_search;
    NSMutableArray *_processingCachedDays;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _resultsLock;
}


- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)_setCachedDaysAndNotify:(id)arg1;
- (BOOL)supportsInvitations;
- (id)_cachedDays;
- (void)invalidateCachedOccurrences;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (int)countOfOccurrencesAtDayIndex:(int)arg1;
- (BOOL)supportsFakeTodaySection;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;

@end
