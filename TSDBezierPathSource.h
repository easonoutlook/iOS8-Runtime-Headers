/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {
    TSDBezierPath *mPath;
    BOOL mIsRectangular;
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
}

@property struct CGSize { float x1; float x2; } naturalSize;

+ (id)pathSourceWithBezierPath:(id)arg1;

- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToNaturalSize;
- (void)p_setBezierPath:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1 andBezierArchive:(struct BezierPathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Size {} *x4; struct Path {} *x5; int x6; unsigned int x7[1]; }*)arg2;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1 andBezierArchive:(const struct BezierPathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Size {} *x4; struct Path {} *x5; int x6; unsigned int x7[1]; }*)arg2;
- (BOOL)isRectangularForever;
- (id)bezierPathWithoutFlips;
- (id)initWithBezierPath:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;

@end
