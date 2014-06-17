/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext  {
    BOOL _invalidateForVerticalScroll;
    BOOL _sectioningIsPreserved;
    BOOL _samplingIsPreserved;
    BOOL _invalidationHasBeenRedispatched;
}

@property BOOL invalidateForVerticalScroll;
@property BOOL sectioningIsPreserved;
@property BOOL samplingIsPreserved;
@property BOOL invalidationHasBeenRedispatched;


- (void)setInvalidationHasBeenRedispatched:(BOOL)arg1;
- (BOOL)invalidationHasBeenRedispatched;
- (void)setSamplingIsPreserved:(BOOL)arg1;
- (BOOL)samplingIsPreserved;
- (void)setSectioningIsPreserved:(BOOL)arg1;
- (BOOL)sectioningIsPreserved;
- (void)setInvalidateForVerticalScroll:(BOOL)arg1;
- (BOOL)invalidateForVerticalScroll;
- (id)description;

@end
