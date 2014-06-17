/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDAffineGeometry, GQDBezierPath;

@interface GQDDrawable : NSObject <GQWrapPointGenerator> {
    GQDAffineGeometry *mGeometry;
    struct __CFURL { } *mUrl;
    char *mUid;
    GQDBezierPath *mWrapPath;
    GQDAffineGeometry *mWrapGeometry;
    struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, GQUtility::NSObjectComparator<GQDWrapPoint> > { unsigned long x_3_2_1; struct NSObjectComparator<GQDWrapPoint> { SEL x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; } *mInnerWrapPoints;
    BOOL mHasPagesOrder;
    long mPagesOrder;
}


- (struct __CFString { }*)urlString;
- (const char *)uid;
- (id)geometry;
- (struct __CFURL { }*)url;
- (void)dealloc;
- (int)pagesOrder;
- (BOOL)hasPagesOrder;
- (int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;
- (void)clearWrapPoints;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct ObjcSharedPtr<GQDWrapPoint> {} *x1; struct ObjcSharedPtr<GQDWrapPoint> {} *x2; struct __compressed_pair<GQUtility::ObjcSharedPtr<GQDWrapPoint> *, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct ObjcSharedPtr<GQDWrapPoint> {} *x_3_1_1; } x3; }*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (void)addWrapPoint:(id)arg1;
- (const struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, GQUtility::NSObjectComparator<GQDWrapPoint> > { unsigned long x_3_2_1; struct NSObjectComparator<GQDWrapPoint> { SEL x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; }*)wrapPoints;
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath { }*)arg2 context:(struct FindLinesContext { BOOL x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct __CFArray {} *x4; BOOL x5; int x6; }*)arg3;
- (struct CGPath { }*)createBezierPath;

@end
