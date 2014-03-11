/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPChangeSession;

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    TSWPChangeSession *_changeSession;
    } _range;
}

- (id).cxx_construct;
- (void)dealloc;
- (int)delta;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeSession:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(int)arg2 undoTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg3 replaceBlock:(id)arg4;
- (unsigned int)targetCharIndex;

@end
