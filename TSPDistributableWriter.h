/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPDistributableFileManager, TSPDatabase, TSPDistributableArchiveOutputStream;

@interface TSPDistributableWriter : NSObject  {
    TSPDistributableArchiveOutputStream *_outputStream;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; } *_encodedIds;
    struct set<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree_node<int, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<int> > { unsigned long x_3_2_1; } x_1_1_3; } x1; } *_typesSeen;
    BOOL _isCancelled;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    unsigned long long _processedEntriesCount;
}


- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (BOOL)goAndReportProgress:(BOOL)arg1 error:(id*)arg2 context:(id)arg3;
- (id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4;
- (BOOL)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id*)arg4;
- (id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4 includeToc:(BOOL)arg5;

@end
