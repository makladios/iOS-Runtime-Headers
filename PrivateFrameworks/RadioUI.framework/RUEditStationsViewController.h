/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate>, MPImageCache, NSArray, NSIndexPath, RUCreateStationViewController, RUParallelScrollView, RUProxyTableView, UIAlertView, _UIBackdropView;

@interface RUEditStationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    _UIBackdropView *_backdropView;
    RUParallelScrollView *_containerScrollView;
    RUCreateStationViewController *_createStationViewController;
    <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> *_delegate;
    UIAlertView *_deletionAlertView;
    unsigned int _ignoreReloadDataCount;
    MPImageCache *_imageCache;
    NSIndexPath *_indexPathToDelete;
    BOOL _isEditing;
    BOOL _needsReloadAfterEndIgnoring;
    NSArray *_stations;
    RUProxyTableView *_tableView;
}

@property <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> * delegate;

- (void).cxx_destruct;
- (void)_beginIgnoringReloadData;
- (void)_commitDeletingStationWithCompletionHandler:(id)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_endIgnoringReloadData;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_updateBarButtonItemsAnimated:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
