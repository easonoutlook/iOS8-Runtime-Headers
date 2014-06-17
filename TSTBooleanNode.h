/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSTBooleanNode : TSTExpressionNode  {
    BOOL mValue;
}

@property BOOL value;


- (int)tokenType;
- (BOOL)value;
- (void)setValue:(BOOL)arg1;
- (id)string;
- (id)initWithContext:(id)arg1 boolValue:(BOOL)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)exportString;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)initFromArchive:(const struct BooleanNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; boolx4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct BooleanNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; boolx4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
