/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling  {
    int mMode;
    int mWrap;
    int mFace;
    int mXposition;
    int mYposition;
    int mScontinuity;
    int mTcontinuity;
    BOOL mReveal;
}

@property int mode;
@property int wrap;
@property int face;
@property int xposition;
@property int yposition;
@property int scontinuity;
@property int tcontinuity;
@property BOOL reveal;

+ (id)instanceWithArchive:(const struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DBaseImageTextureTilingArchive {} *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; boolx11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;

- (void)setWrap:(int)arg1;
- (int)wrap;
- (void)setFace:(int)arg1;
- (int)face;
- (int)mode;
- (void)setMode:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setReveal:(BOOL)arg1;
- (BOOL)reveal;
- (void)setTcontinuity:(int)arg1;
- (int)tcontinuity;
- (void)setScontinuity:(int)arg1;
- (int)scontinuity;
- (void)setYposition:(int)arg1;
- (int)yposition;
- (void)setXposition:(int)arg1;
- (int)xposition;
- (void)copyFromBaseImageTextureTiling:(id)arg1;
- (void)restoreDefault;
- (id)initWithArchive:(const struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DBaseImageTextureTilingArchive {} *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; boolx11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DImageTextureTilingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DBaseImageTextureTilingArchive {} *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; boolx11; int x12; unsigned int x13[1]; }*)arg1 archiver:(id)arg2;

@end
