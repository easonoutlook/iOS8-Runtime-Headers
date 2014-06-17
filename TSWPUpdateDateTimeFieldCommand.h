/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, TSWPDateTimeSmartField;

@interface TSWPUpdateDateTimeFieldCommand : TSWPTextCommand  {
    TSWPDateTimeSmartField *_dateTimeField;
    NSDate *_date;
    long _dateStyle;
    long _timeStyle;
}


- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 dateTimeField:(id)arg3 date:(id)arg4 dateStyle:(long)arg5 timeStyle:(long)arg6;
- (void)p_updateFieldProperties;
- (void)doUndoRedo;
- (int)persistenceKind;
- (void)doCommit;
- (void)loadFromArchive:(const struct UpdateDateTimeFieldCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TextCommandArchive {} *x3; struct Reference {} *x4; struct Date {} *x5; int x6; int x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct UpdateDateTimeFieldCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TextCommandArchive {} *x3; struct Reference {} *x4; struct Date {} *x5; int x6; int x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
