/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURL;

@interface TSPDatabase : TSUDatabase  {
    NSURL *_packageURL;
    BOOL _incrementalVacuum;
    struct sqlite3_stmt { } *_insertObjectStatement;
    struct sqlite3_stmt { } *_insertDataStateStatement;
    struct sqlite3_stmt { } *_updateDataStateStatement;
    struct sqlite3_stmt { } *_insertRelationshipStatement;
    struct sqlite3_stmt { } *_relationshipTargetsStatement;
}


- (BOOL)closeWithError:(id*)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)parseArchive:(struct Message { int (**x1)(); }*)arg1 forObject:(id)arg2 error:(id*)arg3;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)newRelationshipTargetsForSourceIdentifier:(long long)arg1 error:(id*)arg2;
- (BOOL)insertRelationshipWithSourceIdentifier:(long long)arg1 targetIdentifier:(long long)arg2 error:(id*)arg3;
- (struct sqlite3_blob { }*)openDataStateBlobWithIdentifier:(long long)arg1 willWrite:(BOOL)arg2 error:(id*)arg3;
- (BOOL)updateDataStateWithIdentifier:(long long)arg1 size:(int)arg2 error:(id*)arg3;
- (BOOL)insertDataStateWithSize:(int)arg1 identifier:(long long*)arg2 error:(id*)arg3;
- (BOOL)insertObjectWithIdentifier:(long long)arg1 stateIdentifier:(const struct ObjectStateIdentifier { BOOL x1; long long x2; BOOL x3; id x4; }*)arg2 classType:(int)arg3 error:(id*)arg4;
- (BOOL)documentVersion:(struct { unsigned long long x1; unsigned long long x2; }*)arg1 closedCleanlyToken:(long long*)arg2 error:(id*)arg3;
- (BOOL)setClosedCleanlyToken:(long long)arg1 error:(id*)arg2;
- (BOOL)setDocumentVersion:(struct { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)queryObjectWithIdentifier:(long long)arg1 error:(id*)arg2;
- (struct sqlite3_blob { }*)openBlobForObject:(id)arg1 error:(id*)arg2;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg1 error:(id*)arg2;
- (BOOL)numberOfDatabaseObjects:(unsigned int*)arg1 error:(id*)arg2;
- (BOOL)lastObjectIdentifier:(long long*)arg1 error:(id*)arg2;
- (BOOL)documentVersion:(unsigned long long*)arg1 error:(id*)arg2;
- (id)objectFromStatement:(struct sqlite3_stmt { }*)arg1;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (struct sqlite3_blob { }*)openDataStateBlobWithIdentifier:(long long)arg1 error:(id*)arg2;
- (id)initReadonlyWithPath:(id)arg1 error:(id*)arg2;
- (BOOL)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2;
- (BOOL)needsUpgradeFromSchemaVersion:(int)arg1;

@end
