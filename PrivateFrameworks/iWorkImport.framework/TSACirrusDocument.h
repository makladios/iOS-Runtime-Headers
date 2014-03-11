/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSFilePresenter>, NSString, NSURL, TSADocumentRoot, TSPObjectContext, TSUTemporaryDirectory;

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate> {
    NSURL *_URL;
    TSPObjectContext *_context;
    BOOL _isClosed;
    TSUTemporaryDirectory *_tempDirForSupport;
}

@property(copy) NSURL * URL;
@property(readonly) BOOL areNewExternalReferencesToDataAllowed;
@property(retain) TSPObjectContext * context;
@property(readonly) NSString * defaultDraftName;
@property(readonly) NSString * documentCachePath;
@property(readonly) TSADocumentRoot * documentRoot;
@property(readonly) <NSFilePresenter> * filePresenter;
@property(readonly) BOOL ignoreDocumentSupport;
@property(readonly) BOOL isDocumentSupportTemporary;
@property(readonly) NSString * name;

- (id)URL;
- (void)close;
- (id)context;
- (void)dealloc;
- (id)documentCachePath;
- (void)documentDidLoad;
- (id)documentRoot;
- (id)initWithURL:(id)arg1 error:(id*)arg2 passphrase:(id)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)name;
- (void)presentPersistenceError:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setURL:(id)arg1;
- (id)supportDirectoryURL;

@end
