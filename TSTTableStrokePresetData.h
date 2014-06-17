/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject  {
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    TSDStroke *mExteriorStroke;
    unsigned int mVisibleMask;
}

@property(retain) TSDStroke * horizontalStroke;
@property(retain) TSDStroke * verticalStroke;
@property(retain) TSDStroke * exteriorStroke;
@property unsigned int mask;


- (void)setMask:(unsigned int)arg1;
- (unsigned int)mask;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setExteriorStroke:(id)arg1;
- (void)setVerticalStroke:(id)arg1;
- (void)setHorizontalStroke:(id)arg1;
- (id)exteriorStroke;
- (id)verticalStroke;
- (id)horizontalStroke;
- (id)initWithDeprecatedArchive:(const struct Deprecated_StrokePresetDataArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Deprecated_TableStrokeArchive {} *x3; struct Deprecated_TableStrokeArchive {} *x4; struct Deprecated_TableStrokeArchive {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (id)initWithArchive:(const struct StrokePresetDataArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StrokeArchive {} *x3; struct StrokeArchive {} *x4; struct StrokeArchive {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct StrokePresetDataArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StrokeArchive {} *x3; struct StrokeArchive {} *x4; struct StrokeArchive {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;

@end
