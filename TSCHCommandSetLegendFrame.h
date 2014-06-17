/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCHCommandSetLegendFrame : TSCHChartCommand  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mOldLegendFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mNewLegendFrame;
}


- (BOOL)process;
- (id).cxx_construct;
- (id)initWithChartInfo:(id)arg1 legendOffset:(struct CGPoint { float x1; float x2; })arg2 legendSize:(struct CGSize { float x1; float x2; })arg3;
- (const struct ChartCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; boolx5; int x6; unsigned int x7[1]; }*)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
