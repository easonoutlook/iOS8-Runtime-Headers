/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class <EKTravelAdvisorWorld>, <EKTravelRoutePredictor>, EKTravelPrediction, NSMutableArray, EKTravelAgendaItem;

@interface EKTravelAdvisor : NSObject  {
    NSMutableArray *_queue;
    EKTravelAgendaItem *_nextAgendaItem;
    BOOL _queueDirty;
    EKTravelPrediction *_prediction;
    <EKTravelAdvisorWorld> *_world;
    Class _routePredictorClass;
    <EKTravelRoutePredictor> *_routePredictor;
}


- (void)dealloc;
- (id)init;
- (void)_setWakeupCriteriaFromCurrentPrediction;
- (void)_setWakeupCriteriaForPeriodWhileWaitingForRouteHypothesis;
- (void)_updatePredictionFromCurrentLocation:(id)arg1;
- (void)_setNoWakeupCriteria;
- (void)_updatePrediction;
- (void)_forceInvalidatePrediction;
- (id)initWithWorld:(id)arg1 routePredictorClass:(Class)arg2;
- (void)addAgendaItem:(id)arg1;
- (void)setLocationAuthorizationCallback:(id)arg1;
- (void)removeAgendaItem:(id)arg1;

@end
