/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface TSTListNode : TSTExpressionNode  {
    NSString *mWhitespaceAfterLeftParen;
    NSArray *mWhitespaceAfterDelimiters;
}

@property(retain) NSString * whitespaceAfterLeftParen;
@property(retain) NSArray * whitespaceAfterDelimiters;


- (int)tokenType;
- (id)string;
- (id)description;
- (void)dealloc;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (id)whitespaceAfterDelimiters;
- (void)setWhitespaceAfterLeftParen:(id)arg1;
- (id)whitespaceAfterLeftParen;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (id)argumentSpec;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)initFromArchive:(const struct ListNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ListNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end