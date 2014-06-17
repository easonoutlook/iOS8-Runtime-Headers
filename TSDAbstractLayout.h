/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDAbstractLayout, NSArray, TPPageLayout, TSDLayoutGeometry, NSMutableArray;

@interface TSDAbstractLayout : NSObject  {
    TSDAbstractLayout *mParent;
    NSMutableArray *mChildren;
    TSDLayoutGeometry *mGeometry;
    struct CGPoint { 
        float x; 
        float y; 
    } mInterimPosition;
    BOOL mInterimPositionXSet;
    BOOL mInterimPositionYSet;
    struct CGPoint { 
        float x; 
        float y; 
    } mLastInterimPosition;
    BOOL mLastInterimPositionXSet;
    BOOL mLastInterimPositionYSet;
}

@property(readonly) unsigned int pageIndex;
@property(readonly) TPPageLayout * pageLayout;
@property(copy) TSDLayoutGeometry * geometry;
@property TSDAbstractLayout * parent;
@property(readonly) TSDAbstractLayout * root;
@property(copy) NSArray * children;
@property float interimPositionX;
@property float interimPositionY;


- (id)parent;
- (void)setParent:(id)arg1;
- (id)root;
- (id)children;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (unsigned int)pageIndex;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)removeFromParent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)dealloc;
- (id)init;
- (id)pageLayout;
- (BOOL)supportsFlipping;
- (BOOL)supportsInspectorPositioning;
- (BOOL)supportsResize;
- (void)fixTransformFromInterimPosition;
- (void)setInterimPositionY:(float)arg1;
- (float)interimPositionY;
- (void)setInterimPositionX:(float)arg1;
- (float)interimPositionX;
- (BOOL)shouldSnapWhileResizing;
- (void)exchangeChildAtIndex:(unsigned int)arg1 withChildAtIndex:(unsigned int)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (BOOL)isAxisAlignedUnflippedInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInParent;
- (id)visibleGeometries;
- (id)geometryForTransforming;
- (id)geometryInParent;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint { float x1; float x2; })arg1 interimPositionXSet:(BOOL)arg2 interimPositionYSet:(BOOL)arg3;
- (void)addLayoutsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toArray:(id)arg2 deep:(BOOL)arg3;
- (id)parentLayoutForProvidingGuides;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInParent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInParent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForCulling;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)fixTransformFromLastInterimPosition;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)geometryInRoot:(id)arg1;
- (struct CGPoint { float x1; float x2; })alignmentFrameOriginForFixingInterimPosition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameInRoot;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedRectInRoot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInRoot;
- (id)geometryInRoot;
- (struct CGPoint { float x1; float x2; })positionInRootForAttachmentPositioner;
- (BOOL)supportsParentRotation;
- (BOOL)canRotateChildLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRoot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;

@end
