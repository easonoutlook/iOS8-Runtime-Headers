/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerCollectionViewFlowLayout : UICollectionViewFlowLayout  {
    BOOL _hideSeparators;
    BOOL _shouldRoundFirstCell;
    float _cornerRadius;
}

@property BOOL hideSeparators;
@property BOOL shouldRoundFirstCell;
@property float cornerRadius;

+ (Class)layoutAttributesClass;

- (void)setShouldRoundFirstCell:(BOOL)arg1;
- (float)_decorationDimension;
- (id)_topDecorationViewLayoutAttributesAtIndexPath:(id)arg1;
- (BOOL)hideSeparators;
- (BOOL)shouldRoundFirstCell;
- (BOOL)_collectionViewIsLayingOutHorizontallyWithCellHeight:(float)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideSeparators:(BOOL)arg1;
- (void)setCornerRadius:(float)arg1;
- (float)cornerRadius;
- (id)init;

@end
