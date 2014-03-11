/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MusicMiniPlayerActionsViewControllerDelegate>, MPAVItem, NSArray;

@interface MusicMiniPlayerActionsViewController : UITableViewController {
    NSArray *_actions;
    <MusicMiniPlayerActionsViewControllerDelegate> *_delegate;
    MPAVItem *_item;
}

@property <MusicMiniPlayerActionsViewControllerDelegate> * delegate;
@property(readonly) MPAVItem * item;

+ (id)_actionsForItem:(id)arg1;
+ (id)_imageForAction:(int)arg1;
+ (id)_titleForAction:(int)arg1;
+ (BOOL)hasActionsForItem:(id)arg1;

- (void).cxx_destruct;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_updateActions;
- (void)dealloc;
- (id)delegate;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

@end
