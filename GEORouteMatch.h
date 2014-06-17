/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORouteMatch, NSDate, GEOComposedRoute;

@interface GEORouteMatch : NSObject  {
    GEOComposedRoute *_route;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _locationCoordinate;
    unsigned int _stepIndex;
    double _matchedCourse;
    double _distanceFromRoute;
    double _modifiedHorizontalAccuracy;
    double _modifiedCourseAccuracy;
    unsigned int _consecutiveProgressionsOffRoute;
    double _distanceTraveledOffRoute;
    BOOL _isGoodMatch;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_road;
    double _roadWidth;
    GEORouteMatch *_projectedFrom;
    NSDate *_timestamp;
}

@property(readonly) GEOComposedRoute * route;
@property struct { double x1; double x2; } locationCoordinate;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property unsigned int stepIndex;
@property(readonly) double matchedCourse;
@property double distanceFromRoute;
@property struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }* road;
@property(readonly) double roadWidth;
@property(readonly) BOOL routeMatchedToEnd;
@property(readonly) BOOL projectedPastEndOfLeg;
@property(retain) GEORouteMatch * projectedFrom;
@property BOOL isGoodMatch;
@property unsigned int consecutiveProgressionsOffRoute;
@property double distanceTraveledOffRoute;
@property double modifiedHorizontalAccuracy;
@property double modifiedCourseAccuracy;
@property(readonly) NSDate * timestamp;


- (id)step;
- (BOOL)routeMatchBehind:(id)arg1;
- (double)matchedCourse;
- (struct { double x1; double x2; })locationCoordinate;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (double)roadWidth;
- (id)route;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setStepIndex:(unsigned int)arg1;
- (BOOL)projectedPastEndOfLeg;
- (BOOL)routeMatchedToEnd;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;
- (BOOL)isEqualIgnoringScore:(id)arg1;
- (void)setDistanceTraveledOffRoute:(double)arg1;
- (double)distanceTraveledOffRoute;
- (void)setConsecutiveProgressionsOffRoute:(unsigned int)arg1;
- (unsigned int)consecutiveProgressionsOffRoute;
- (double)distanceFromRoute;
- (void)setLocationCoordinate:(struct { double x1; double x2; })arg1;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)road;
- (void)setModifiedCourseAccuracy:(double)arg1;
- (double)modifiedCourseAccuracy;
- (void)setModifiedHorizontalAccuracy:(double)arg1;
- (double)modifiedHorizontalAccuracy;
- (void)setIsGoodMatch:(BOOL)arg1;
- (BOOL)isGoodMatch;
- (void)setProjectedFrom:(id)arg1;
- (id)projectedFrom;
- (void)setRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 locationCoordinate:(struct { double x1; double x2; })arg3 stepIndex:(unsigned int)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (unsigned int)stepIndex;
- (id).cxx_construct;
- (id)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end