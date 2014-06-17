/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDate;

@interface GEORerouteInfo : NSObject  {
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
    NSDate *_time;
    double _distanceFromDestination;
}

@property(readonly) double penalty;
@property(retain) NSDate * time;
@property double distanceFromDestination;


- (void)setDistanceFromDestination:(double)arg1;
- (double)distanceFromDestination;
- (double)penalty;
- (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 destinationCoordinate:(struct { double x1; double x2; })arg4 numThrottledReroutes:(unsigned int)arg5;
- (id)time;
- (void)setTime:(id)arg1;

@end
