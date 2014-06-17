/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableArray;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout> {
    int _colorSchemeStyle;
    float _overrideContentHeight;
    float _overrideContentWidth;
    NSMutableArray *_pinnedSectionInfos;
    int _pinningStyle;
    BOOL _rendersWithPerspective;
    BOOL _showsBackdropWhilePinning;
}

@property float overrideContentHeight;
@property float overrideContentWidth;
@property BOOL showsBackdropWhilePinning;
@property int pinningStyle;
@property BOOL rendersWithPerspective;

+ (Class)layoutAttributesClass;

- (BOOL)showsBackdropWhilePinning;
- (float)overrideContentWidth;
- (void)setOverrideContentHeight:(float)arg1;
- (float)overrideContentHeight;
- (int)pinningStyle;
- (void)setShowsBackdropWhilePinning:(BOOL)arg1;
- (void)setOverrideContentWidth:(float)arg1;
- (void)setRendersWithPerspective:(BOOL)arg1;
- (void)invalidateStorePageSections;
- (void)setPinningStyle:(int)arg1;
- (BOOL)rendersWithPerspective;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)init;

@end