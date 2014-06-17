/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPStyleReorderCommand : TSWPStyleBaseCommand  {
    unsigned int _newPresetIndex;
    unsigned int _oldPresetIndex;
}

@property unsigned int newPresetIndex;
@property unsigned int oldPresetIndex;


- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (void)setOldPresetIndex:(unsigned int)arg1;
- (void)setNewPresetIndex:(unsigned int)arg1;
- (id)initWithTheme:(id)arg1 style:(id)arg2 newPresetIndex:(unsigned int)arg3;
- (void)p_CommitAndRedo;
- (unsigned int)newPresetIndex;
- (unsigned int)oldPresetIndex;
- (void)loadFromMessage:(const struct StyleReorderCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleBaseCommandArchive {} *x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToMessage:(struct StyleReorderCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleBaseCommandArchive {} *x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
