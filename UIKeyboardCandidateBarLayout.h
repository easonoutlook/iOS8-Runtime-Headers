/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    NSMutableArray *_allAttributes;
    NSArray *_edgeDummyCellAttributes;
}

@property(retain) NSMutableArray * allAttributes;
@property(retain) NSArray * edgeDummyCellAttributes;

+ (Class)layoutAttributesClass;
+ (id)dummyCellCollectionViewKind;
+ (id)layout;

- (void)setAllAttributes:(id)arg1;
- (void)setEdgeDummyCellAttributes:(id)arg1;
- (id)edgeDummyCellAttributes;
- (id)allAttributes;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (void)dealloc;
- (id)init;

@end
