/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSString;

@interface TSTDateNode : TSTExpressionNode  {
    NSDate *mValue;
    BOOL mBlank;
    NSString *mDateFormat;
}

@property(retain) NSDate * value;
@property(getter=isBlank) BOOL blank;
@property(retain) NSString * format;


- (BOOL)isBlank;
- (int)tokenType;
- (id)format;
- (void)setFormat:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)string;
- (id)date;
- (id)description;
- (void)dealloc;
- (void)setBlank:(BOOL)arg1;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })durationWrapper;
- (id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 dateValue:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)exportString;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)initFromArchive:(const struct DateNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct DateNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
