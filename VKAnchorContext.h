/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchorContext : NSObject  {
    struct shared_ptr<vk::AnchorContext> { 
        struct AnchorContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _anchorContext;
    struct shared_ptr<vk::AnchorFactory> { 
        struct AnchorFactory {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _anchorFactory;
}


- (id)initGeocentricWithCache:(id)arg1;
- (struct shared_ptr<vk::AnchorFactory> { struct AnchorFactory {} *x1; struct __shared_weak_count {} *x2; })anchorFactory;
- (id)initWithAnchorContext:(struct AnchorContext { boolx1; id x2; id x3; }*)arg1;
- (id)newAnchorAtCoordinate:(struct { double x1; double x2; })arg1 followsTerrain:(BOOL)arg2;
- (BOOL)isMercator;
- (id)initMercator;
- (void)setMercatorTerrainHeightCache:(id)arg1;
- (struct shared_ptr<vk::AnchorContext> { struct AnchorContext {} *x1; struct __shared_weak_count {} *x2; })anchorContext;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end