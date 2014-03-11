/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableDictionary, SKUIScreenshot;

@interface SKUISearchItem : SKUIItem {
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
    SKUIScreenshot *_primaryScreenshot;
    NSArray *_screenshots;
}

@property(readonly) SKUIScreenshot * primaryScreenshot;
@property(readonly) NSArray * screenshots;

- (void).cxx_destruct;
- (id)childItemForIdentifier:(id)arg1;
- (id)childItemIdentifiers;
- (id)initWithLookupDictionary:(id)arg1;
- (id)loadedChildItems;
- (id)primaryScreenshot;
- (id)screenshots;
- (void)setChildItem:(id)arg1 forIdentifier:(id)arg2;

@end
