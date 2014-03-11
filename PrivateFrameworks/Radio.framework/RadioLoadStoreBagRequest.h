/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLoadStoreBagRequest : RadioRequest {
    BOOL _ignoresRadioDiskCache;
}

@property BOOL ignoresRadioDiskCache;

+ (id)_accessQueue;
+ (id)_cachedBagFilenameForActiveAccount;
+ (id)_cachedStoreBagForActiveAccount;
+ (id)_pathForCachedStoreBags;
+ (void)_urlBagDidLoadNotification:(id)arg1;
+ (void)_writeStoreBagToDiskCache:(id)arg1;

- (void)_handleFinishedLoadingBag:(id)arg1 withError:(id)arg2 didLoadFromNonDiskCache:(BOOL)arg3 completionHandler:(id)arg4;
- (BOOL)ignoresRadioDiskCache;
- (void)loadStoreBagWithOptions:(int)arg1 completionHandler:(id)arg2;
- (void)setIgnoresRadioDiskCache:(BOOL)arg1;

@end
