/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, NSObject<TSDInfo>, NSSet, TSDLayoutGeometry, TPInteractiveCanvasController;

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget> {
    NSObject<TSDInfo> *mInfo;
    int mLayoutState;
    struct CGPoint { 
        float x; 
        float y; 
    } mBaseAlignmentFrameOriginForFixingInterimPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } mBaseCapturedAlignmentFrameOriginForInline;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mDirtyRect;
    struct { 
        unsigned int position : 1; 
        unsigned int size : 1; 
    } mInvalidFlags;
    TSDLayoutGeometry *mBaseGeometry;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mInitialBoundsForStandardKnobs;
    struct CGPoint { 
        float x; 
        float y; 
    } mCapturedInfoGeometryPositionForInline;
    struct CGPoint { 
        float x; 
        float y; 
    } mCapturedAlignmentFrameOriginForInline;
    NSMutableSet *mConnectedLayouts;
}

@property(readonly) TPInteractiveCanvasController * interactiveCanvasController;
@property(readonly) NSObject<TSDInfo> * info;
@property(copy) TSDLayoutGeometry * dynamicGeometry;
@property(readonly) TSDLayoutGeometry * originalGeometry;
@property(readonly) int layoutState;
@property(readonly) NSSet * connectedLayouts;
@property(readonly) BOOL invalidGeometry;
@property(readonly) BOOL isStrokeBeingManipulated;
@property(readonly) BOOL canAspectRatioLockBeChangedByUser;
@property(readonly) BOOL resizeMayChangeAspectRatio;


- (void)setParent:(id)arg1;
- (BOOL)isBeingManipulated;
- (BOOL)canFlip;
- (struct CGSize { float x1; float x2; })minimumSize;
- (int)layoutState;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (id)info;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)stroke;
- (void)validate;
- (void)invalidate;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)setAdjustedInterimPositionY:(float)arg1;
- (void)setAdjustedInterimPositionX:(float)arg1;
- (void)removeConnectedLayout:(id)arg1;
- (void)addConnectedLayout:(id)arg1;
- (BOOL)allowsConnections;
- (id)i_externalWrapPath;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
- (id)additionalGuides;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shouldDisplayGuides;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (id)searchTarget;
- (struct CGPoint { float x1; float x2; })centerForConnecting;
- (id)newCommandToMoveByOffset:(struct CGPoint { float x1; float x2; })arg1 whenDistributingLayoutsByOffsets:(id)arg2;
- (id)inspectorGeometry;
- (id)pureGeometryInRoot;
- (id)initialInfoGeometry;
- (struct CGSize { float x1; float x2; })maximumSizeForChildLayout:(id)arg1;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformForProvidingGuides;
- (void)dragByUnscaled:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isBeingTransformed;
- (void)pauseDynamicTransformation;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(float)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (BOOL)isStrokeBeingManipulated;
- (BOOL)shouldBeDisplayedInShowMode;
- (struct CGPoint { float x1; float x2; })infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)invalidateChildren;
- (BOOL)shouldValidate;
- (void)layoutSearchForAnnotationWithHitBlock:(id)arg1;
- (id)childSearchTargets;
- (struct CGPoint { float x1; float x2; })calculatePointFromSearchReference:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumFrameSizeForChild:(id)arg1;
- (float)scaleForInlineClampingUnrotatedSize:(struct CGSize { float x1; float x2; })arg1 withGeometry:(id)arg2;
- (id)pureGeometry;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialBoundsForStandardKnobs;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })alignmentFrameOriginForFixingInterimPosition;
- (BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
- (struct CGPoint { float x1; float x2; })capturedInfoPositionForAttachment;
- (BOOL)invalidGeometry;
- (id)rootLayout;
- (void)parentDidChange;
- (void)p_recursiveInvalidate;
- (void)p_registerWithLayoutController:(id)arg1;
- (void)parentWillChangeTo:(id)arg1;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)invalidatePosition;
- (void)p_invalidateConnectedLayouts;
- (id)dependentLayouts;
- (void)updateChildrenFromInfo;
- (id)i_wrapPath;
- (void)endRotate;
- (void)takeRotationFromTracker:(id)arg1;
- (void)beginRotate;
- (id)originalGeometry;
- (void)endDrag;
- (void)beginDrag;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformInRoot;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalPureTransformInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })i_takeDirtyRect;
- (id)connectedLayouts;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (BOOL)orderedBefore:(id)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 asChild:(BOOL)arg2;
- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;
- (id)computeInfoGeometryDuringResize;
- (void)setDynamicGeometry:(id)arg1;
- (id)originalPureGeometry;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)resizeMayChangeAspectRatio;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (void)invalidateFrame;
- (id)dynamicGeometry;
- (void)invalidateSize;
- (void)invalidateExteriorWrap;
- (Class)repClassOverride;
- (void)endResize;
- (void)beginResize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (void)takeSizeFromTracker:(id)arg1;
- (id)layoutController;
- (struct CGPoint { float x1; float x2; })centerForRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;
- (BOOL)isInGroup;
- (BOOL)isInTopLevelContainerForEditing;
- (void)validateFromLastInterimPosition;
- (id)interactiveCanvasController;
- (void)processChanges:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pureTransformInRoot;

@end
