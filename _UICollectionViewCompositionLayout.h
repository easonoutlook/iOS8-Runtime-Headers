/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSArray;

@interface _UICollectionViewCompositionLayout : UICollectionViewLayout  {
    NSMutableDictionary *_sublayoutsDict;
}

@property(readonly) NSArray * sublayouts;

+ (Class)invalidationContextClass;

- (void)removeSublayout:(id)arg1;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(int)arg3 offset:(struct CGPoint { float x1; float x2; })arg4 relativeToEdges:(unsigned int)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 relativeToEdges:(unsigned int)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayout:(id)arg1 forRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateLayoutWithContext:(struct _UICollectionViewCompositionLayoutInvalidationContext { Class x1; id x2; }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLayout:(id)arg1 offset:(struct CGPoint { float x1; float x2; })arg2 relativeToEdges:(unsigned int)arg3 fromSiblingLayout:(id)arg4;
- (void)_prepareLayout:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)_originConvertedSublayoutAttributesForAttributes:(id)arg1 inLayout:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sublayouts;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)init;

@end
