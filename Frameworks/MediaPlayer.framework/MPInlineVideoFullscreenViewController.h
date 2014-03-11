/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, MPInlineVideoController, MPSwipableView, MPVideoPlaybackOverlayView, MPVolumeController, MPWeakTimer, UIActivityIndicatorView, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
    int _activeOverlayUserEvents;
    BOOL _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPWeakTimer *_idleTimer;
    BOOL _isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    MPVideoPlaybackOverlayView *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _shouldForwardRotationEvents;
    BOOL _statusBarWasHidden;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPVolumeController *_volumeController;
}

@property(retain) MPAVItem * item;
@property MPInlineVideoController * masterController;

- (void).cxx_destruct;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayDidEnd;
- (void)_overlayIdleTimerFired;
- (void)_showOverlayDidEnd;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)cancelOverlayIdleTimer;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)hideLoadingIndicator;
- (id)init;
- (id)item;
- (void)loadView;
- (id)masterController;
- (void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForTransitionFromFullscreen;
- (void)resetOverlayIdleTimer;
- (void)setItem:(id)arg1;
- (void)setMasterController:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)showAlternateTracks;
- (void)showLoadingIndicator;
- (void)showOverlayAnimated:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)swipableViewHadActivity:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)updateOverlayView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
