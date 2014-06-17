/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSDGLVoronoiTriangleData : NSObject  {
    unsigned int *_triangleIndexToCellIndexMappingTable;
    unsigned int *_triangleIndexToCellTriangleIndexMappingTable;
    unsigned int _triangleIndexToCellMappingTableCount;
    unsigned int _triangleCount;
    NSArray *_cells;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
}

@property(readonly) unsigned int triangleCount;
@property(readonly) NSArray * cells;
@property(readonly) unsigned int cellCount;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;


- (id)cells;
- (unsigned int)cellCount;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (unsigned int)triangleIndexInCellFromGlobalTriangleIndex:(unsigned int)arg1;
- (id)cellFromTriangleIndex:(unsigned int)arg1;
- (id)initWithPoints:(unsigned int)arg1 clippedToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 percentOfCellsToSplit:(float)arg3;
- (unsigned int)cellIndexFromTriangleIndex:(unsigned int)arg1;
- (void)p_setupDataWithPointCount:(unsigned int)arg1 clippedToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 percentOfCellsToSplit:(float)arg3;
- (unsigned int)triangleCount;

@end
