/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIShelfLayoutData;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout  {
    SKUIShelfLayoutData *_layoutData;
}

@property(retain) SKUIShelfLayoutData * layoutData;

+ (float)snapToBoundariesDecelerationRate;
+ (Class)layoutAttributesClass;

- (id)layoutData;
- (void)setLayoutData:(id)arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 withScrollingVelocity:(struct CGPoint { float x1; float x2; })arg2;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;

@end
