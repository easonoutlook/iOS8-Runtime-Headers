/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEORouteMatch, MKAnnotationView, NSHashTable;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {
    MKAnnotationView *_annotationView;
    NSHashTable *_presentationCoordinateObservers;
}

@property MKAnnotationView * annotationView;
@property double presentationCourse;
@property struct { double x1; double x2; } presentationCoordinate;
@property(getter=isTracking) BOOL tracking;
@property(retain) GEORouteMatch * routeMatch;


- (void)setRouteMatch:(id)arg1;
- (id)routeMatch;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (void)setPresentationCourse:(double)arg1;
- (double)presentationCourse;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (struct { double x1; double x2; })presentationCoordinate;
- (void).cxx_destruct;
- (void)setTracking:(BOOL)arg1;
- (BOOL)isTracking;
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;

@end