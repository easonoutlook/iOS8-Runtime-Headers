/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSDLayoutGeometry;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBoundsForStandardKnobs;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}


- (BOOL)canFlip;
- (void)setGeometry:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumSize;
- (void)invalidate;
- (void)dealloc;
- (void)wrappableChildInvalidated;
- (id)p_childWrapPathsFrom:(id)arg1;
- (id)descendentWrappables;
- (void)p_invalidateDescendentWrapPaths;
- (void)p_invalidateParentForWrap;
- (void)p_destroyDynamicCopies;
- (void)p_createDynamicCopies;
- (id)i_computeWrapPath;
- (BOOL)supportsFlipping;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)visibleGeometries;
- (BOOL)providesGuidesForChildLayouts;
- (BOOL)allowsConnections;
- (id)i_externalWrapPath;
- (id)reliedOnLayouts;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (id)i_wrapPath;
- (void)takeRotationFromTracker:(id)arg1;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (BOOL)supportsParentRotation;
- (id)computeInfoGeometryDuringResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (void)setDynamicGeometry:(id)arg1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)resizeMayChangeAspectRatio;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (void)invalidateExteriorWrap;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (void)takeSizeFromTracker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;

@end
