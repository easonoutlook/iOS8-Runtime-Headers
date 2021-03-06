/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableDictionary, <PUCollectionViewLayoutProvider>;

@interface PUCollectionViewLayoutCache : UICollectionViewLayout  {
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    <PUCollectionViewLayoutProvider> *_layoutProvider;
    struct { 
        unsigned int hasSupplementaryLayoutAttributes : 1; 
        unsigned int hasDecorationLayoutAttributes : 1; 
    } _layoutProviderFlags;
    BOOL _cachesResults;
}

@property(readonly) <PUCollectionViewLayoutProvider> * layoutProvider;
@property BOOL cachesResults;


- (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (void)setCachesResults:(BOOL)arg1;
- (void)invalidateLayoutCache;
- (BOOL)cachesResults;
- (id)layoutProvider;
- (id)initWithProvider:(id)arg1;
- (id)init;

@end
