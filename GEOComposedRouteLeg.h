/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, GEOComposedRoute;

@interface GEOComposedRouteLeg : NSObject  {
    GEOComposedRoute *_composedRoute;
    int _type;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _pointRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _stepRange;
}

@property(readonly) int type;
@property(readonly) int transportType;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } pointRange;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } stepRange;
@property(readonly) unsigned int startPointIndex;
@property(readonly) unsigned int endPointIndex;
@property(readonly) unsigned int pointCount;
@property(readonly) unsigned int startStepIndex;
@property(readonly) unsigned int endStepIndex;
@property(readonly) unsigned int stepCount;
@property(readonly) NSArray * steps;
@property GEOComposedRoute * composedRoute;


- (id)steps;
- (int)transportType;
- (unsigned int)endPointIndex;
- (id)composedRoute;
- (unsigned int)pointCount;
- (unsigned int)startPointIndex;
- (unsigned int)stepCount;
- (unsigned int)startStepIndex;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (double)remainingDistanceAlongLegFromStepIndex:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (unsigned int)endStepIndex;
- (double)remainingTimeAlongLegFromStepIndex:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pointRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })stepRange;
- (void)setComposedRoute:(id)arg1;
- (int)type;
- (id)description;

@end