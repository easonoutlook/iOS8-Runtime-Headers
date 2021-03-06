/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUMapItem, NSString, NSArray, NSDate, NSObject, NSMutableSet;

@interface PUMapAnnotation : NSObject <PUMapAnnotationAnimatable> {
    unsigned int _hash;
    PUMapItem *_mapItem;
    unsigned int _relativeOrder;
    struct { 
        double latitude; 
        double longitude; 
    } _originalCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property(retain) PUMapItem * mapItem;
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

+ (id)annotationSortingComparatorOldestToNewest;
+ (id)annotationSortingComparatorNewestToOldest;
+ (id)compactDescriptionForAnnotations:(id)arg1;

- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinate;
- (id)dateCreated;
- (id)itemId;
- (void).cxx_destruct;
- (id)_dateString;
- (int)compare:(id)arg1;
- (id)subtitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)setRelativeOrder:(unsigned int)arg1;
- (unsigned int)relativeOrder;
- (id)subAnnotations;
- (int)annotationSortingCompareWithAnnotation:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (void)resetCoordinateToOriginal;
- (struct { double x1; double x2; })originalCoordinate;
- (id)mapItems;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (id)compactDescription;
- (id)newestMaxMapItems:(unsigned int)arg1;
- (id)description;
- (unsigned int)count;

@end
