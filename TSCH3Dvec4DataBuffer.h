/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer  {
    struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > { 
        struct tvec4<float> {} *__begin_; 
        struct tvec4<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float> > > { 
            struct tvec4<float> {} *__first_; 
        } __end_cap_; 
    } mContainer;
}

@property(readonly) /* Warning: unhandled struct encoding: '{vector<glm::detail::tvec4<float>' */ struct * container; /* unknown property attribute:  std::__1::allocator<glm::detail::tvec4<float> > >=^{tvec4<float>}}} */


- (unsigned int)components;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > { struct tvec4<float> {} *x1; struct tvec4<float> {} *x2; struct __compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float> > > { struct tvec4<float> {} *x_3_1_1; } x3; }*)container;
- (const void*)data;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)clear;
- (unsigned int)count;
- (id)elementsAtIndices:(id)arg1;
- (void)fillCapacity;
- (unsigned int)componentByteSize;

@end
