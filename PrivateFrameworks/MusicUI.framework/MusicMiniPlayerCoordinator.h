/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MusicMiniPlayerPlaybackControlsView, RUStationActionsViewController, RUTrackActionsModalItem, RUTrackActionsViewController, RadioStation, UIActionSheet, UINavigationController, UIPopoverController, UIViewController, _UINavigationControllerPalette;

@interface MusicMiniPlayerCoordinator : NSObject <MPPlaybackControlsDelegate, MusicMiniPlayerActionsViewControllerDelegate, MusicMiniPlayerMusicTransportControlsTarget, MusicMiniPlayerRadioTransportControlsTarget, RUTrackActionsDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, UIModalItemDelegate, RUStationActionsViewControllerDelegate> {
    _UINavigationControllerPalette *_miniPlayerPalette;
    UINavigationController *_navigationController;
    MusicMiniPlayerPlaybackControlsView *_playbackControlsView;
    RadioStation *_prospectiveStation;
    UIActionSheet *_repeatActionSheet;
    BOOL _shouldPaletteBeAttached;
    UIPopoverController *_stationActionsPopoverController;
    RUStationActionsViewController *_stationActionsViewController;
    RUTrackActionsModalItem *_trackActionsModalItem;
    UIPopoverController *_trackActionsPopoverController;
    RUTrackActionsViewController *_trackActionsViewController;
    UIViewController *_viewController;
}

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_addStationFromItem:(id)arg1 usingArtist:(BOOL)arg2;
- (void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(BOOL)arg3 canShowAlert:(BOOL)arg4;
- (id)_currentProspectivePlaybackInformation;
- (void)_handleAction:(int)arg1 withObject:(id)arg2;
- (id)_init;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_makeStationVisible:(id)arg1;
- (void)_playbackCoordinatorCurrentStationDidChangeNotification:(id)arg1;
- (void)_prepareToAddStation;
- (void)_presentAddStation;
- (void)_presentNowPlaying;
- (void)_presentStationActionsFromView:(id)arg1;
- (void)_presentTrackActionsFromView:(id)arg1;
- (void)_startGeniusPlaylistFromItem:(id)arg1;
- (void)_updateMiniPlayerAttachment;
- (void)_updateMiniPlayerPaletteForNavigationController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)modalItem:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)musicMiniPlayerActionsViewController:(id)arg1 didSelectAction:(int)arg2;
- (BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned int)arg2;
- (BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned int)arg2;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)prospectivePlaybackInformationDidChangeForViewController:(id)arg1;
- (unsigned int)repeatTypeForPlaybackControls:(id)arg1;
- (unsigned int)shuffleTypeForPlaybackControls:(id)arg1;
- (void)stationActionsViewController:(id)arg1 didFinishAction:(int)arg2 withObject:(id)arg3 error:(id)arg4;
- (void)stationActionsViewController:(id)arg1 willBeginAction:(int)arg2;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (void)transportControls:(id)arg1 addStationForItem:(id)arg2 usingArtist:(BOOL)arg3;
- (void)transportControls:(id)arg1 presentStationActionsForItem:(id)arg2;
- (void)transportControls:(id)arg1 requestsStationVisibility:(id)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)transportControlsTappedNowPlayingButton:(id)arg1;
- (void)willShowViewController:(id)arg1 inNavigationController:(id)arg2;

@end
