/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLGroupCullableMesh : VGLMesh {
    struct vector<VGLGroupInfo, vk_allocator<VGLGroupInfo> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<VGLGroupInfo *, vk_allocator<VGLGroupInfo> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    struct { 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } indexRange; 
        struct { 
            float x0; 
            float x1; 
            float y0; 
            float y1; 
            float z0; 
            float z1; 
        } bounds; 
        struct vector<int, vk_allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, vk_allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } groupInfoIndices; 
        struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, vk_allocator<int> > { 
            struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, vk_allocator<int> > { 
                struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<int, void *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<int, void *> *> > > { 
                        struct __hash_node<int, void *> {} **__first_; 
                        struct __bucket_list_deallocator<vk_allocator<std::__1::__hash_node<int, void *> *> > { 
                            struct __compressed_pair<unsigned long, vk_allocator<std::__1::__hash_node<int, void *> *> > { 
                                unsigned long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, vk_allocator<std::__1::__hash_node<int, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<int, void *> *> { 
                        struct __hash_node<int, void *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::hash<int> > { 
                    unsigned long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::equal_to<int> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } overflowSourceFragments; 
    struct bitset<16> { 
        unsigned int __first_; 
    struct unordered_map<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, unsigned int> > > { 
        struct __hash_table<std::__1::pair<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, unsigned int, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, unsigned int, std::__1::equal_to<unsigned int>, true>, vk_allocator<std::__1::pair<unsigned int, unsigned int> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<unsigned int, unsigned int>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> > { 
                        struct __compressed_pair<unsigned long, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *>, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, unsigned int>, void *> *> { 
                    struct __hash_node<std::__1::pair<unsigned int, unsigned int>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, unsigned int, std::__1::hash<unsigned int>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, unsigned int, std::__1::equal_to<unsigned int>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    BOOL _didFreeze;
    float _fragmentSize;
    } _fragmentsToDrawBitset;
    } _fragments[16];
    } _groupIDToInfoIndex;
    } _groupInfoCollection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addGroupForIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 boundingBox:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 center:(struct { float x1; float x2; float x3; })arg3 groupID:(unsigned int)arg4;
- (void)drawGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, vk_allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg1 context:(id)arg2;
- (void)drawInPreparedCulls:(id)arg1 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, vk_allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg2;
- (void)drawInPreparedCulls:(id)arg1;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 context:(id)arg3;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, vk_allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg3 context:(id)arg4;
- (void)drawLinesInPreparedCulls:(id)arg1 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, vk_allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg2;
- (void)drawLinesInPreparedCulls:(id)arg1;
- (void)freeze;
- (void)groupsContainingPositionA:(struct { float x1; float x2; float x3; })arg1 positionB:(struct { float x1; float x2; float x3; })arg2 groupIDs:(unsigned int*)arg3 groupIDCount:(unsigned int*)arg4 maxGroupIDs:(unsigned int)arg5;
- (void)prepareCullsInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 numRects:(unsigned int)arg2;

@end