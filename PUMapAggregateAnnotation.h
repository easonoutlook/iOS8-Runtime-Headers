/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSMutableSet, NSString, NSDate, NSObject;

@interface PUMapAggregateAnnotation : NSObject <PUMapAnnotationAnimatable> {
    struct { 
        double latitude; 
        double longitude; 
    } _originalCoordinate;
    unsigned int _hash;
    NSMutableSet *_subAnnotations;
    NSArray *_mapItems;
    NSObject *_itemId;
    unsigned int _relativeOrder;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * subtitle;
@property(readonly) struct { double x1; double x2; } originalCoordinate;
@property(retain,readonly) NSObject * itemId;
@property(retain,readonly) NSDate * dateCreated;
@property(readonly) unsigned int count;
@property(readonly) NSArray * mapItems;
@property(retain,readonly) NSMutableSet * subAnnotations;
@property unsigned int relativeOrder;


- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinate;
- (id)dateCreated;
- (id)itemId;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)subtitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllSubAnnotations;
- (void)removeSubAnnotation:(id)arg1;
- (void)_updateComputedValuesForSubAnnotationUpdate;
- (void)addSubAnnotation:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 mapItems:(id)arg2;
- (void)setRelativeOrder:(unsigned int)arg1;
- (unsigned int)relativeOrder;
- (id)subAnnotations;
- (int)annotationSortingCompareWithAnnotation:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (void)resetCoordinateToOriginal;
- (struct { double x1; double x2; })originalCoordinate;
- (id)mapItems;
- (id)compactDescription;
- (id)newestMaxMapItems:(unsigned int)arg1;
- (id)description;
- (unsigned int)count;

@end
