/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, TSDRootLayout, TSDLayout, TSDCanvas;

@interface TSDLayoutController : NSObject  {
    TSDCanvas *mCanvas;
    TSDRootLayout *mRootLayout;
    struct __CFDictionary { } *mLayoutsByInfo;
    NSMutableSet *mInvalidLayouts;
    NSMutableSet *mLayoutsNeedingRecreating;
    NSMutableSet *mInvalidChildrenLayouts;
    TSDLayout *mValidatingLayout;
}

+ (id)allInteractiveLayoutControllers;
+ (void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(id)arg2;

- (id)canvas;
- (id)initWithCanvas:(id)arg1;
- (void)dealloc;
- (BOOL)isLayoutOffscreen;
- (void)i_removeAllLayouts;
- (id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfTopLevelLayouts;
- (id)layoutsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutsForInfos:(id)arg1;
- (void)invalidateLayoutForRecreation:(id)arg1;
- (id)validatedLayoutsForInfo:(id)arg1;
- (void)validateLayoutsWithDependencies:(id)arg1;
- (id)sortLayoutsForDependencies:(id)arg1;
- (void)validateLayouts:(id)arg1;
- (void)notifyThatLayoutsChangedOutsideOfLayout;
- (void)validateLayouts;
- (void)i_unregisterLayout:(id)arg1;
- (void)i_registerLayout:(id)arg1;
- (id)rootLayout;
- (void)invalidateChildrenOfLayout:(id)arg1;
- (void)invalidateLayout:(id)arg1;
- (id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)validatedLayoutForInfo:(id)arg1;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutForInfo:(id)arg1;
- (void)validateLayoutWithDependencies:(id)arg1;
- (void)setInfos:(id)arg1;

@end
