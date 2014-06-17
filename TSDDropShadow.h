/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDDropShadow : TSDShadow  {
}

+ (id)instanceWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; float x5; int x6; float x7; boolx8; int x9; struct DropShadowArchive {} *x10; struct ContactShadowArchive {} *x11; struct CurvedShadowArchive {} *x12; int x13; unsigned int x14[1]; }*)arg1 unarchiver:(id)arg2;

- (unsigned int)shadowType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (id)newShadowClampedForSwatches;
- (id)initWithAngle:(float)arg1 offset:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(struct CGColor { }*)arg5 enabled:(BOOL)arg6;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)initWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; float x5; int x6; float x7; boolx8; int x9; struct DropShadowArchive {} *x10; struct ContactShadowArchive {} *x11; struct CurvedShadowArchive {} *x12; int x13; unsigned int x14[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; float x5; int x6; float x7; boolx8; int x9; struct DropShadowArchive {} *x10; struct ContactShadowArchive {} *x11; struct CurvedShadowArchive {} *x12; int x13; unsigned int x14[1]; }*)arg1 archiver:(id)arg2;

@end
