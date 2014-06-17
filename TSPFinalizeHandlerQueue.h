/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_queue>;

@interface TSPFinalizeHandlerQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct list<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> > { 
        struct __list_node_base<TSP::FinalizeHandlerItem *, void *> { 
            struct __list_node<TSP::FinalizeHandlerItem *, void *> {} *__prev_; 
            struct __list_node<TSP::FinalizeHandlerItem *, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<TSP::FinalizeHandlerItem *, void *> > > { 
            unsigned long __first_; 
        } __size_alloc_; 
    } _order;
    struct hash_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > > { 
        struct __hash_table<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::FinalizeHandlerItem>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _map;
}


- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (id)init;
- (void)runFinalizeHandlerForItem:(struct FinalizeHandlerItem { struct queue<void (^)(), std::__1::deque<void (^)(), std::__1::allocator<void (^)()> > >={deque<void (^)(), std::__1::allocator<void (^)()> >={__split_buffer<void (^__strong *)(), std::__1::allocator<void (^__strong *)()> >=^^@?^^@?^^@?{__compressed_pair<void (^__strong **)(), std::__1::allocator<void (^__strong *)()> >=^^@? {} x1; }*)arg1;
- (void)visitItemForCycleDetection:(struct FinalizeHandlerItem { struct queue<void (^)(), std::__1::deque<void (^)(), std::__1::allocator<void (^)()> > >={deque<void (^)(), std::__1::allocator<void (^)()> >={__split_buffer<void (^__strong *)(), std::__1::allocator<void (^__strong *)()> >=^^@?^^@?^^@?{__compressed_pair<void (^__strong **)(), std::__1::allocator<void (^__strong *)()> >=^^@? {} x1; }*)arg1;
- (void)addFinalizeHandlers:(struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {}*)arg1 strongReferencesOrNull:(struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg2 forIdentifier:(long long)arg3;
- (BOOL)runFinalizeHandlers;

@end
