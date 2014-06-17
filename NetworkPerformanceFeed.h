/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
 */

@class AnalyticsWorkspace, NSObject<OS_dispatch_queue>;

@interface NetworkPerformanceFeed : NSObject  {
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *concQueue;
    NSObject<OS_dispatch_queue> *callerQueue;
    id _delegate;
}

@property id delegate;


- (bool)resetDataForKeys:(id)arg1 reply:(id)arg2;
- (bool)watchpointOn:(int)arg1 forIdentifier:(id)arg2 andKey:(id)arg3 onThreshold:(double)arg4 withOptions:(id)arg5 uponHit:(id)arg6;
- (bool)fullScorecardFor:(int)arg1 options:(id)arg2 reply:(id)arg3;
- (bool)predictWaitUntilKnownGoodNetworkFor:(int)arg1 matchSignature:(bool)arg2 reply:(id)arg3;
- (bool)usageConsultOn:(int)arg1 onlyRelativeToReferencePoint:(id)arg2 reply:(id)arg3;
- (bool)setReferencePoint:(int)arg1 reply:(id)arg2;
- (id)_formatWatchpointHit:(id)arg1;
- (id)_formatInstantRouteMetrics:(id)arg1;
- (id)_routeMetricsPresentationFromRoll:(id)arg1 source:(struct route_stats_stuct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; }*)arg2 since:(id)arg3 isKnownGood:(id)arg4;
- (bool)_rollRouteMetricsValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3;
- (id)_flowMetricsPresentationFromRoll:(id)arg1 source:(struct flow_stats_stuct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg2;
- (bool)_rollFlowMetricsValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3 andRequest:(id)arg4;
- (id)_normalizedOpts:(id)arg1 toNetwork:(int)arg2;
- (void)_consultReturn:(id)arg1 advice:(int)arg2;
- (id)initWithWorkspace:(id)arg1;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
