/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class MPImageCache;

@interface MCDAlbumsDetailViewController : MCDTableViewController {
    MPImageCache *_imageCache;
    float _maximumDurationWidth;
}

@property(readonly) float maximumDurationWidth;

+ (id)actionCellConfigurationClasses;

- (void).cxx_destruct;
- (void)_updateTitle;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (float)maximumDurationWidth;
- (void)reloadData;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end
