/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKResourceManager, NSObject<OS_dispatch_queue>;

@interface VKGGLTextureManager : NSObject <GEOResourceManifestTileGroupObserver> {
    unsigned int _tileGroupIdentifier;
    NSObject<OS_dispatch_queue> *_textureQueue;
    struct map<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> > > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, geo::fast_shared_ptr<ggl::Texture2D> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _textureDictionary;
    VKResourceManager *_resourceManager;
    struct Device { int (**x1)(); int x2; } *_device;
}


- (id)dataWithName:(id)arg1 fromResourceManager:(id)arg2;
- (struct fast_shared_ptr<ggl::Texture2D> { struct _fast_shared_ptr_control {} *x1; })textureWithName:(id)arg1 forScale:(float)arg2;
- (struct fast_shared_ptr<ggl::Texture2D> { struct _fast_shared_ptr_control {} *x1; })textureWithName:(id)arg1 mipmap:(BOOL)arg2;
- (struct fast_shared_ptr<ggl::Texture2D> { struct _fast_shared_ptr_control {} *x1; })textureWithName:(id)arg1 forScale:(float)arg2 mipmap:(BOOL)arg3;
- (struct fast_shared_ptr<ggl::Texture2D> { struct _fast_shared_ptr_control {} *x1; })textureWithName:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2 device:(struct Device { int (**x1)(); int x2; }*)arg3;
- (void).cxx_destruct;
- (void)purge;
- (id).cxx_construct;
- (void)dealloc;

@end
