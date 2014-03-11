/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface TSPPasteboardUIPasteboard : TSPPasteboard {
    NSMutableDictionary *_pasteboardItem;
    NSObject<OS_dispatch_queue> *_pasteboardItemQueue;
    int _transactionCount;
}

- (void).cxx_destruct;
- (id)URLs;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2;
- (void)beginTransaction;
- (int)clearContents;
- (BOOL)containsImportableTextTypes;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (void)endTransaction;
- (id)importablePlainTextTypes;
- (id)initWithGeneralPasteboard;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2;
- (id)initWithUniquePasteboardName;
- (oneway void)invalidate;
- (int)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
