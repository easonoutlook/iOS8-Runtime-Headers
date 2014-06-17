/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIActivityIndicatorView, NSMutableArray, <EKStyleProvider>, <EKTravelRouteEstimationControllerDelegate>, EKEventStore, NSDictionary, EKStructuredLocation, NSDate;

@interface EKTravelRouteEstimationController : NSObject  {
    EKEventStore *_eventStore;
    <EKStyleProvider> *_styleProvider;
    UIActivityIndicatorView *_spinner;
    EKStructuredLocation *_originStructuredLocation;
    NSMutableArray *_rows;
    BOOL _isEstimating;
    <EKTravelRouteEstimationControllerDelegate> *_delegate;
    NSDate *_arrivalDate;
    EKStructuredLocation *_destinationStructuredLocation;
    EKStructuredLocation *_evaluatedOriginLocation;
    NSDictionary *_travelTimeEstimatedValues;
    NSDictionary *_travelTimeLookupErrors;
}

@property <EKTravelRouteEstimationControllerDelegate> * delegate;
@property(retain) NSDate * arrivalDate;
@property(retain) EKStructuredLocation * originStructuredLocation;
@property(retain) EKStructuredLocation * destinationStructuredLocation;
@property BOOL isEstimating;
@property(retain) EKStructuredLocation * evaluatedOriginLocation;
@property(readonly) unsigned int numberOfOutputRows;
@property(retain) NSDictionary * travelTimeEstimatedValues;
@property(retain) NSDictionary * travelTimeLookupErrors;


- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setIsEstimating:(BOOL)arg1;
- (id)_imageForCellAtIndex:(unsigned int)arg1;
- (id)_errorStringForMapKitErrorCode:(unsigned int)arg1;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned int)arg1;
- (id)travelTimeLookupErrors;
- (id)travelTimeEstimatedValues;
- (void)setTravelTimeLookupErrors:(id)arg1;
- (void)setTravelTimeEstimatedValues:(id)arg1;
- (id)_routingModeTypesAsEnum;
- (void)_lookupTimedOut;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (void)setEvaluatedOriginLocation:(id)arg1;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (BOOL)isEstimating;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned int)arg1;
- (int)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned int)arg1;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned int)arg1;
- (BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned int)arg1;
- (unsigned int)numberOfOutputRows;
- (void)beginTravelTimeEstimationLookup;
- (id)initWithDestinationStructuredLocation:(id)arg1 styleProvider:(id)arg2 eventStore:(id)arg3;
- (id)evaluatedOriginLocation;
- (void)beginOriginLocationEstimationLookup;
- (id)destinationStructuredLocation;
- (id)originStructuredLocation;
- (void)setDestinationStructuredLocation:(id)arg1;
- (void)setOriginStructuredLocation:(id)arg1;
- (id)arrivalDate;
- (void)setArrivalDate:(id)arg1;

@end
