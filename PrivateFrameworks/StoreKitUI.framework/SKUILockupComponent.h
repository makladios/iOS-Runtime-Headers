/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEditorialComponent, SKUIItem;

@interface SKUILockupComponent : SKUIPageComponent {
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    SKUIEditorialComponent *_editorial;
    SKUIItem *_item;
    long long _itemIdentifier;
    } _lockupStyle;
}

@property(readonly) BOOL _needsItemData;
@property(readonly) SKUIEditorialComponent * editorial;
@property(readonly) SKUIItem * item;
@property(readonly) long long itemIdentifier;
@property(readonly) struct SKUILockupStyle { int x1; int x2; unsigned int x3; } lockupStyle;

- (void).cxx_destruct;
- (BOOL)_needsItemData;
- (void)_setItem:(id)arg1;
- (void)_setLockupStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg1;
- (int)componentType;
- (id)editorial;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (id)item;
- (long long)itemIdentifier;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })lockupStyle;

@end
