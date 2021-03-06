/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSObject<OS_dispatch_queue>, MKMapView, NSMutableArray, NSMutableSet, <PUMapAnnotationManagerDataSource>, PUMapAnnotationQuadtree, NSMutableDictionary;

@interface PUMapAnnotationManager : NSObject <PUMapAnnotationQuadtreeDataSource> {
    NSMutableSet *_managedAnnotations;
    BOOL _showDebugOverlays;
    NSMutableArray *_debugOverlays;
    PUMapAnnotationQuadtree *_quadtree;
    unsigned int _currentTreeLevel;
    NSMutableSet *_activeAnnotations;
    NSMutableDictionary *_activeAnnotationAddresses;
    NSMutableSet *_pendingRemoves;
    NSMutableSet *_animatedRemoves;
    NSObject<OS_dispatch_queue> *_processingQueue;
    int _updateId;
    struct CGSize { 
        float width; 
        float height; 
    } _currentMapSize;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _currentCoordRegion;
    BOOL _alwaysFadeRemoves;
    <PUMapAnnotationManagerDataSource> *_dataSource;
    MKMapView *_mapView;
    struct CGSize { 
        float width; 
        float height; 
    } _annotationSize;
}

@property <PUMapAnnotationManagerDataSource> * dataSource;
@property(retain) MKMapView * mapView;
@property(readonly) NSArray * annotations;
@property struct CGSize { float x1; float x2; } annotationSize;
@property BOOL alwaysFadeRemoves;

+ (BOOL)coordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 overlapsWithCoordinateRegion2:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)newAnnotationsFromQuadtree:(id)arg1 treeLevel:(unsigned int)arg2 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 mapSize:(struct CGSize { float x1; float x2; })arg4 updateId:(int)arg5 referenceId:(int*)arg6 annotationSize:(struct CGSize { float x1; float x2; })arg7;
+ (void)mergeOverlappingAnnotations:(id)arg1 withQuadtree:(id)arg2 treeLevel:(unsigned int)arg3 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4 mapSize:(struct CGSize { float x1; float x2; })arg5 annotationSize:(struct CGSize { float x1; float x2; })arg6;

- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)mapView;
- (id)mapAnnotationQuadtree:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(struct { double x1; double x2; })arg3;
- (void)_removeAnnotationFromMapView:(id)arg1 wasAnimated:(BOOL)arg2;
- (void)_updateZPositionForAnnotations:(id)arg1 withAnimationInfoSet:(id)arg2;
- (BOOL)_addMappedAnimationInfoToInfoSet:(id)arg1 forRemoveAnnotation:(id)arg2 remainingRemoveAnnotationsToAnimate:(id)arg3 remainingAddedAnnotationsToAnimate:(id)arg4 addContainsRemoveMap:(id)arg5 removeContainsAddMap:(id)arg6 activeTreeLevel:(unsigned int)arg7 addAddressesToAnnotations:(id)arg8;
- (int)_fadeTypeWithIsEqual:(BOOL)arg1 removeAnnotation:(id)arg2 addAnnotation:(id)arg3 isRemove:(BOOL)arg4;
- (id)_animatableMapViewAnnotations;
- (void)_updateAnnotationsWithIncomingAnnotationToAddress:(id)arg1;
- (void)_updateAnnotationsFromQuadtreeWithTreeLevel:(unsigned int)arg1 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 mapSize:(struct CGSize { float x1; float x2; })arg3 updateId:(int)arg4;
- (BOOL)_updateTreeLevelFromMap;
- (BOOL)_updateMapParams;
- (void)removeAnnotation:(id)arg1;
- (void)_executeOnProcessingQueueWithBlock:(id)arg1;
- (void)_internalUpdateAnnotationsTreeLevel:(unsigned int)arg1 coordRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 mapSize:(struct CGSize { float x1; float x2; })arg3 updateId:(int)arg4;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)_updateAnnotationsForMapViewAdjustTreeLevel:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)removeAllMapAnnotations;
- (void)removeAnnotations:(id)arg1;
- (id)_puAnnotationViewForAnnotation:(id)arg1;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)updateAnnotationsForMapViewAdjustTreeLevel:(BOOL)arg1;
- (void)setMapView:(id)arg1;
- (void)setAlwaysFadeRemoves:(BOOL)arg1;
- (void)setAnnotationSize:(struct CGSize { float x1; float x2; })arg1;
- (void)removeAnnotations:(id)arg1 thenAddAnnotations:(id)arg2;
- (id)annotations;
- (BOOL)alwaysFadeRemoves;
- (struct CGSize { float x1; float x2; })annotationSize;
- (id)init;

@end
