/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSWPStorage, NSURL;

@interface TSWPCreateHyperlinkCommand : TSWPTextBaseCommand  {
    TSWPStorage *_storage;
    NSURL *_url;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; } *_undoRedoTransaction;
}

@property(readonly) TSWPStorage * storage;

+ (Class)appSpecificCreateHyperlinkCommandClass;

- (id)actionString;
- (BOOL)process;
- (id)storage;
- (void)undoRedo;
- (id).cxx_construct;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 URL:(id)arg3;
- (BOOL)shouldRunSynchronously;
- (void)loadFromArchive:(const struct CreateHyperlinkCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct UndoTransaction {} *x8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CreateHyperlinkCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct UndoTransaction {} *x8; int x9; unsigned int x10[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
