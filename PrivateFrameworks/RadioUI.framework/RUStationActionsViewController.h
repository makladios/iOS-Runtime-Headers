/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUStationActionsViewControllerDelegate>, MPAVItem, NSArray, NSMutableArray, RUInnerShadowHeaderFooterView, RUStationTuningView, RadioStation, UILabel, UISwitch, UITableView, UITableViewCell, _RUStationTrackInfoView;

@interface RUStationActionsViewController : UIViewController <_RUStationTrackInfoViewDelegate, MCProfileConnectionObserver, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UILabel *_copyrightLabel;
    int _currentAction;
    <RUStationActionsViewControllerDelegate> *_delegate;
    BOOL _isProfileExplicitContentRestricted;
    MPAVItem *_item;
    UILabel *_navigationTitleLabel;
    UISwitch *_playExplicitTracksSwitch;
    NSArray *_playbackQueue;
    RadioStation *_station;
    NSMutableArray *_stationActionGroups;
    UITableViewCell *_stationTuningCell;
    RUStationTuningView *_stationTuningView;
    UITableView *_tableView;
    RUInnerShadowHeaderFooterView *_topShadowView;
    _RUStationTrackInfoView *_trackInfoView;
}

@property <RUStationActionsViewControllerDelegate> * delegate;
@property(readonly) MPAVItem * item;
@property(readonly) RadioStation * station;

- (void).cxx_destruct;
- (void)_addDerivedStationUsingArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_doneAction:(id)arg1;
- (id)_indexPathForStationAction:(int)arg1;
- (void)_layoutTopShadowView;
- (id)_newSectionHeaderWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2;
- (id)_newShadowViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_playExplicitSwitchAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_showStoreSheetAction:(id)arg1;
- (int)_stationActionForIndexPath:(id)arg1;
- (void)_updateAvailableActions;
- (void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1;
- (void)_updateTableFooterView;
- (void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3;
- (id)item;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)station;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)trackInfoViewDidTapArtwork:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
