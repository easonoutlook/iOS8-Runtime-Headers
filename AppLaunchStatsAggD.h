/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class fetchDenyEntry, fetchFilterEntry, NSObject<OS_dispatch_queue>, NSDate, NSMutableArray, NSMutableDictionary;

@interface AppLaunchStatsAggD : NSObject  {
    boolbuildLaunchStats;
    NSObject<OS_dispatch_queue> *aggDQueue;
    int hasStats;
    int fetchDeniedWithReasons[10];
    int fetchDenied;
    int fetchAttempt;
    int pushDenied;
    int pushAttempt;
    int pushDeniedReasons[11];
    long long fetchDataTotal;
    int fetchDataCount;
    int fetchPWTotal;
    int fetchGiven;
    int fetchFailedCount;
    int fetchAppFiltered[6];
    long long fetchUpdateTimeTotal;
    int fetchUpdateTimeCount;
    int forceRelease;
    int zoneCounts[9];
    int topNZoneCounts[9];
    NSDate *cycleStart;
    NSMutableArray *pastCycle;
    NSMutableDictionary *launchDict;
    int prewarmZoneCounts[9];
    int prewarmEligibleZone[9];
    NSMutableDictionary *prewarmDict;
    NSMutableDictionary *previousPrewarmDict;
    int prewarmHits;
    int prewarmMiss;
    long long avgDownloadsize;
    long long avgPWConsumed;
    int totalBGDownloads;
    long long totalNonDiscDownload;
    long long totalNonDiscEnergy;
    int BGReportToken;
    unsigned long blameReasons[28];
    fetchFilterEntry *mostRecentFilter;
    fetchDenyEntry *mostRecentDeny;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id appisFetchable;

}

@property(retain) NSMutableArray * pastCycle;
@property(readonly) NSDate * cycleStart;

+ (id)sharedInstance;

- (void)setPastCycle:(id)arg1;
- (bool)accountYesterday:(id)arg1 atzone:(int)arg2 launchVal:(int)arg3 result:(int*)arg4;
- (void)calculatePrewarmHitMiss:(id)arg1 launch:(id)arg2;
- (void)accountPredatePrewarm:(id)arg1 prevDay:(id)arg2 launch:(int)arg3 launchvalue:(int)arg4 prewarmvalue:(int)arg5 diff:(int)arg6 result:(int*)arg7;
- (int)distanceToLastPrewarm:(id)arg1 prevDay:(id)arg2 currentSlot:(int)arg3 currentoffset:(int)arg4;
- (void)nonDiscretionaryAdd:(unsigned long long)arg1 withPW:(unsigned long long)arg2;
- (void)backgroundSucceeds:(long long)arg1 withPW:(long long)arg2;
- (void)searchBlame:(id)arg1 inzone:(int)arg2 inminute:(int)arg3;
- (void)mostRecentDenyResult:(int)arg1;
- (void)appFGLaunch:(id)arg1;
- (void)newCycleWithApps:(id)arg1;
- (void)populatePrewarmZones:(int)arg1 callback:(id)arg2;
- (void)populatePredictZones:(int)arg1 filter:(bool)arg2 callback:(id)arg3;
- (id)pastCycle;
- (void)setFetchCapableCheck:(id)arg1;
- (void)setCollectLaunchStats;
- (void)fetchFailedUpdate;
- (void)appPrewarm:(id)arg1 type:(int)arg2;
- (void)fetchDataCount:(int)arg1;
- (void)pushDeniedBecause:(bool)arg1 withPWBudget:(bool)arg2 inwifi:(bool)arg3 incell:(bool)arg4 ignorePoorCell:(bool)arg5;
- (void)pushDenied:(int)arg1;
- (void)pushAttemptIncrement:(int)arg1;
- (void)fetchPWCount:(int)arg1;
- (void)mostRecentFilterResult:(id)arg1;
- (void)fetchCountUpdate:(int)arg1;
- (void)fetchFiltered:(int)arg1;
- (void)fetchDeniedBecause:(bool)arg1 withPWBudget:(bool)arg2 inwifi:(bool)arg3 incell:(bool)arg4 ignorePoorCell:(bool)arg5 incall:(bool)arg6 thermal:(bool)arg7 hascell:(bool)arg8 haswifi:(bool)arg9;
- (void)fetchDenied:(int)arg1;
- (void)fetchAttemptIncrement;
- (void)replacePredictionAtZone:(id)arg1 zoneid:(int)arg2;
- (id)cycleStart;
- (void)forceReleaseCount;
- (void)fetchTimeUpdate:(long long)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)uploadData;

@end
