/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler  {
    int _numberOfVisibleItems;
    int _numberOfRealItems;
}


- (id)initWithNumberOfVisibleItems:(int)arg1 numberOfRealItems:(int)arg2;
- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (int)unsampledIndexForIndex:(int)arg1;
- (int)indexForUnsampledIndex:(int)arg1 isMainItem:(BOOL*)arg2;

@end
