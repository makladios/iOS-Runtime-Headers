/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPReaderDelegate>, NSError, NSHashTable, NSMapTable, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, TSPComponent, TSPFinalizeHandlerQueue, TSPObjectContext;

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate> {
    struct hash_map<long long, TSP::ObjectInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ObjectInfo> > > { 
        struct __hash_table<std::__1::pair<long long, TSP::ObjectInfo>, __gnu_cxx::__hash_map_hasher<std::__1::pair<long long, TSP::ObjectInfo>, TSP::ObjectIdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<long long, TSP::ObjectInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::pair<long long, TSP::ObjectInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> *> { 
                    struct __hash_node<std::__1::pair<long long, TSP::ObjectInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<long long, TSP::ObjectInfo>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<long long, TSP::ObjectInfo>, std::__1::equal_to<long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct queue<TSP::UnarchiverRepeatedReference, std::__1::deque<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > > { 
        struct deque<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
            struct __split_buffer<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference *> > { 
                struct UnarchiverRepeatedReference {} **__first_; 
                struct UnarchiverRepeatedReference {} **__begin_; 
                struct UnarchiverRepeatedReference {} **__end_; 
                struct __compressed_pair<TSP::UnarchiverRepeatedReference **, std::__1::allocator<TSP::UnarchiverRepeatedReference *> > { 
                    struct UnarchiverRepeatedReference {} **__first_; 
                } __end_cap_; 
            } __map_; 
            unsigned int __start_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
                unsigned long __first_; 
            } __size_; 
        } c; 
    struct { 
        unsigned int isFromPasteboard : 1; 
        unsigned int didFinishResolvingReferences : 1; 
        unsigned int needsUpgrade : 1; 
    NSObject<OS_dispatch_group> *_completionGroup;
    TSPComponent *_component;
    <TSPReaderDelegate> *_delegate;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_errorQueue;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    } _flags;
    BOOL _hasReadFailure;
    } _objectInfoMap;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSHashTable *_objectsToModify;
    NSObject<OS_dispatch_queue> *_objectsToModifyQueue;
    } _repeatedReferences;
    NSObject<OS_dispatch_queue> *_unarchiveQueue;
}

@property(readonly) NSObject<OS_dispatch_group> * completionGroup;
@property(readonly) TSPComponent * component;
@property(readonly) TSPObjectContext * context;
@property(readonly) <TSPReaderDelegate> * delegate;
@property(readonly) BOOL didFinishResolvingReferences;
@property(readonly) BOOL documentHasCurrentFileFormatVersion;
@property(retain) NSError * error;
@property(readonly) BOOL hasReadFailure;
@property(readonly) BOOL isCrossAppPaste;
@property(readonly) BOOL isCrossDocumentPaste;
@property(readonly) BOOL isFromPasteboard;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addUnarchivedObject:(id)arg1 unarchiver:(id)arg2;
- (void)attemptedToReadInMemoryObject:(id)arg1 objectIdentifier:(long long)arg2;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(id)arg2;
- (id)completionGroup;
- (id)component;
- (id)context;
- (id)dataForIdentifier:(long long)arg1;
- (id)delegate;
- (BOOL)didFinishResolvingReferences;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (BOOL)documentHasCurrentFileFormatVersion;
- (id)error;
- (BOOL)finishUnarchiving;
- (BOOL)hasReadFailure;
- (id)init;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;
- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isFromPasteboard;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (struct ObjectInfo { struct queue<TSP::ReferenceCompletionInfo, std::__1::deque<TSP::ReferenceCompletionInfo, std::__1::allocator<TSP::ReferenceCompletionInfo> > > { struct deque<TSP::ReferenceCompletionInfo, std::__1::allocator<TSP::ReferenceCompletionInfo> > { struct __split_buffer<TSP::ReferenceCompletionInfo *, std::__1::allocator<TSP::ReferenceCompletionInfo *> > { struct ReferenceCompletionInfo {} **x_1_3_1; struct ReferenceCompletionInfo {} **x_1_3_2; struct ReferenceCompletionInfo {} **x_1_3_3; struct __compressed_pair<TSP::ReferenceCompletionInfo **, std::__1::allocator<TSP::ReferenceCompletionInfo *> > { struct ReferenceCompletionInfo {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSP::ReferenceCompletionInfo> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)objectInfoForIdentifier:(long long)arg1;
- (void)processObjectsToModify;
- (void)readWithIOCompletionQueue:(id)arg1 ioCompletion:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4;
- (void)runReferenceCompletions;
- (void)setError:(id)arg1;
- (void)setObjectDelegatesToContextObjectDelegate;
- (void)unarchiveObjectWithUnarchiver:(id)arg1;
- (void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(BOOL*)arg3;
- (BOOL)validateObjectIdentifierForObject:(id)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;

@end
