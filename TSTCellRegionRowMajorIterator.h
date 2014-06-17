/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating> {
    struct set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> > { 
        struct __tree<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> > { 
            struct __tree_node<TSUColumnRowRect, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUColumnRowRect, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } mCellRangeSet;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mCellID;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mBoundingCellRange;
}


- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)terminate;
- (id)initWithCellRegion:(id)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;

@end
