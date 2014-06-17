/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PULayoutSectioningDelegate>, PULayoutSectioning;

@interface PULayoutSectioning : NSObject  {
    BOOL _invalidatingSampling;
    BOOL _invalidatingSections;
    PULayoutSectioning *_baseSectioning;
    <PULayoutSectioningDelegate> *_delegate;
}

@property <PULayoutSectioningDelegate> * delegate;
@property(retain) PULayoutSectioning * baseSectioning;


- (void).cxx_destruct;
- (id)delegate;
- (id)baseSectioning;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (void)setBaseSectioning:(id)arg1;
- (BOOL)hasSomeSampling;
- (id)sectioningHashHasIncorrectSampling:(BOOL*)arg1 hasInvisibleItemsInBaseSectioning:(BOOL*)arg2;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(BOOL)arg1 hasIncorrectSampling:(BOOL*)arg2 hasInvisibleItemsInBaseSectioning:(BOOL*)arg3;
- (int)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (void)_baseSectioningDidInvalidateSections:(id)arg1;
- (void)_baseSectioningDidInvalidateSampling:(id)arg1;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;
- (id)sectioningHash;
- (id)sectioningDescription;
- (int)numberOfRealItemsInVisualSection:(int)arg1;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(int)arg1 inVisualItemRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id)arg3;
- (struct PUSimpleIndexPath { int x1; int x2; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1 isMainItem:(BOOL*)arg2;
- (struct PUSimpleIndexPath { int x1; int x2; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (void)invalidateSections;
- (void)invalidateSampling;
- (int)numberOfVisualItemsInVisualSection:(int)arg1;
- (void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(id)arg2;
- (int)mainRealSectionForVisualSection:(int)arg1;
- (int)visualSectionForRealSection:(int)arg1;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
