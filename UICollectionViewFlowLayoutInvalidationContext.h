/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext  {
    struct { 
        unsigned int invalidateDelegateMetrics : 1; 
        unsigned int invalidateAttributes : 1; 
    } _flowLayoutInvalidationFlags;
}

@property BOOL invalidateFlowLayoutDelegateMetrics;
@property BOOL invalidateFlowLayoutAttributes;


- (BOOL)invalidateFlowLayoutDelegateMetrics;
- (void)setInvalidateFlowLayoutDelegateMetrics:(BOOL)arg1;
- (BOOL)invalidateFlowLayoutAttributes;
- (void)setInvalidateFlowLayoutAttributes:(BOOL)arg1;
- (id)init;

@end
