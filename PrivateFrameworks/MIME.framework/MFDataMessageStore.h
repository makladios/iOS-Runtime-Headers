/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {
    NSData *_data;
    Class _messageClass;
    NSString *_storagePath;
}

- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)account;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (void)dealloc;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (id)mailboxUid;
- (id)message;
- (void)setMessageClass:(Class)arg1;
- (void)setStoragePath:(id)arg1;
- (id)storagePath;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (id)storePath;
- (void)writeUpdatedMessageDataToDisk;

@end
