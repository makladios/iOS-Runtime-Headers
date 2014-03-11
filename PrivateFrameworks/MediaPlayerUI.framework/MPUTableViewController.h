/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPUQueryDataSource, NSMutableArray, UITableView;

@interface MPUTableViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, MPUActionTableViewDataSource, UITableViewDelegate> {
    Class _cellConfigurationClass;
    BOOL _hasAppearedOnce;
    int _numberOfActionRows;
    BOOL _shouldUpdateVisibleCellsWhenVisible;
    UITableView *_tableView;
    NSMutableArray *_visibleActionRows;
}

@property(readonly) Class cellConfigurationClass;
@property(readonly) MPUQueryDataSource * queryDataSource;
@property(readonly) BOOL shouldScrollToFirstDataSourceSectionOnInitialAppearance;
@property(readonly) UITableView * tableView;

+ (Class)_tableViewClass;
+ (id)actionCellConfigurationClasses;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_configureCellsAfterScroll;
- (id)_createTableView;
- (void)_loadCellConfiguration;
- (void)_setCellConfigurationClass:(Class)arg1;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(BOOL)arg2;
- (Class)cellConfigurationClass;
- (Class)cellConfigurationForIndexPath:(id)arg1;
- (int)dataSourceIndexForIndexPath:(id)arg1;
- (int)dataSourceSectionForSection:(int)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (int)indexOfFirstDataSourceSection;
- (id)indexPathForDataSourceIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (BOOL)isTableViewLoaded;
- (int)numberOfActionRowsInTableView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)queryDataSource;
- (void)reloadActionRowsAnimated:(BOOL)arg1;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (int)sectionForDataSourceSection:(int)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
