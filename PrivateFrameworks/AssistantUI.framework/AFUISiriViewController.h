/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUISiriViewControllerDataSource>, <AFUISiriViewControllerDelegate>, AFUIDialogPhase, AFUIRequestOptions, AFUISiriRemoteViewController, AFUISiriSession, AFUISiriView, NSNumber, NSObject<OS_dispatch_queue>, NSTimer, SiriUIAudioRoutePickerController, UIStatusBar;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate> {
    BOOL _attemptingRemoteViewControllerPresentation;
    AFUIRequestOptions *_currentRequestOptions;
    <AFUISiriViewControllerDataSource> *_dataSource;
    <AFUISiriViewControllerDelegate> *_delegate;
    BOOL _eyesFree;
    BOOL _hasCalledBeginAppearanceTransition;
    BOOL _hasCalledEndAppearanceTransition;
    BOOL _inHoldToTalkMode;
    BOOL _isStark;
    NSTimer *_manualEndpointTimer;
    BOOL _mapsGatekeeperEnabled;
    NSNumber *_recordingStartedTimeValue;
    AFUISiriRemoteViewController *_remoteViewController;
    NSObject<OS_dispatch_queue> *_remoteViewControllerDispatchQueue;
    SiriUIAudioRoutePickerController *_routePickerController;
    AFUISiriSession *_session;
    BOOL _showsStatusBar;
    UIStatusBar *_statusBar;
    BOOL _statusBarEnabled;
    BOOL _visible;
}

@property(getter=_currentRequestOptions,setter=_setCurrentRequestOptions:,copy) AFUIRequestOptions * currentRequestOptions;
@property <AFUISiriViewControllerDataSource> * dataSource;
@property <AFUISiriViewControllerDelegate> * delegate;
@property(readonly) AFUIDialogPhase * dialogPhase;
@property(getter=isEyesFree) BOOL eyesFree;
@property(getter=_hasCalledBeginAppearanceTransition,setter=_setHasCalledBeginAppearanceTransition:) BOOL hasCalledBeginAppearanceTransition;
@property(getter=_hasCalledEndAppearanceTransition,setter=_setHasCalledEndAppearanceTransition:) BOOL hasCalledEndAppearanceTransition;
@property(readonly) BOOL hasScreenSnapshot;
@property(getter=_isInHoldToTalkMode,setter=_setInHoldToTalkMode:) BOOL inHoldToTalkMode;
@property BOOL isStark;
@property(getter=_manualEndpointTimer,setter=_setManualEndpointTimer:,retain) NSTimer * manualEndpointTimer;
@property BOOL mapsGatekeeperEnabled;
@property(getter=_recordingStartedTimeValue,setter=_setRecordingStartedTimeValue:,retain) NSNumber * recordingStartedTimeValue;
@property(getter=_remoteViewController,readonly) AFUISiriRemoteViewController * remoteViewController;
@property(getter=_remoteViewControllerDispatchQueue,readonly) NSObject<OS_dispatch_queue> * remoteViewControllerDispatchQueue;
@property(retain) SiriUIAudioRoutePickerController * routePickerController;
@property(getter=_session,readonly) AFUISiriSession * session;
@property BOOL showsStatusBar;
@property(getter=_statusBar,setter=_setStatusBar:,retain) UIStatusBar * statusBar;
@property BOOL statusBarEnabled;
@property(retain) AFUISiriView * view;
@property(getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (void)_activationTriggerDidRelease:(id)arg1;
- (void)_addStatusBar;
- (id)_currentRequestOptions;
- (void)_enqueueRemoteViewControllerMessageBlock:(id)arg1;
- (void)_enterHoldToTalkMode;
- (void)_exitHoldToTalkMode;
- (BOOL)_hasCalledBeginAppearanceTransition;
- (BOOL)_hasCalledEndAppearanceTransition;
- (BOOL)_holdToTalkThresholdHasElapsed;
- (void)_holdToTalkTriggerDidReleaseFromSource:(int)arg1;
- (BOOL)_isInHoldToTalkMode;
- (id)_manualEndpointTimer;
- (void)_manualEndpointTimerFired:(id)arg1;
- (double)_manualEndpointingThreshold;
- (void)_presentRemoteViewController;
- (id)_recordingStartedTimeValue;
- (id)_remoteViewController;
- (id)_remoteViewControllerDispatchQueue;
- (void)_removeStatusBar;
- (id)_routePickerController;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (id)_session;
- (void)_setCurrentRequestOptions:(id)arg1;
- (void)_setHasCalledBeginAppearanceTransition:(BOOL)arg1;
- (void)_setHasCalledEndAppearanceTransition:(BOOL)arg1;
- (void)_setInHoldToTalkMode:(BOOL)arg1;
- (void)_setManualEndpointTimer:(id)arg1;
- (void)_setRecordingStartedTimeValue:(id)arg1;
- (void)_setShowAudioRoutePicker:(BOOL)arg1;
- (void)_setStatusBar:(id)arg1;
- (id)_statusBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_statusBarFrame;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_transitionToAutomaticEndpointMode;
- (void)_updateAudioRoutePicker;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)defrost;
- (id)delegate;
- (id)dialogPhase;
- (void)dismissSiriRemoteViewController:(id)arg1;
- (void)endSession;
- (void)handlePasscodeUnlockWithCompletion:(id)arg1;
- (BOOL)hasQueuedTTS;
- (BOOL)hasScreenSnapshot;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (BOOL)isEyesFree;
- (BOOL)isListening;
- (BOOL)isPreventingActivationGesture;
- (BOOL)isStark;
- (BOOL)isVisible;
- (void)loadView;
- (unsigned int)lockStateForSiriRemoteViewController:(id)arg1;
- (BOOL)mapsGatekeeperEnabled;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
- (void)preheat;
- (void)presentRemoteViewControllerIfNecessary;
- (void)resetContext;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(BOOL)arg2;
- (id)routePickerController;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(BOOL)arg2;
- (void)setAlertContext;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEyesFree:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(unsigned int)arg1;
- (void)setMapsGatekeeperEnabled:(BOOL)arg1;
- (void)setOverriddenApplicationContext:(id)arg1;
- (void)setRoutePickerController:(id)arg1;
- (void)setShowsStatusBar:(BOOL)arg1;
- (void)setStatusBarEnabled:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (BOOL)showsStatusBar;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)siriDidDeactivate;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (BOOL)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3;
- (BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
- (BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (void)siriSession:(id)arg1 didChangeToState:(int)arg2;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(id)arg2;
- (BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriView:(id)arg1 didReceiveStartSpeechRequestWithTrigger:(id)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveCancelSpeechRequestAction:(id)arg1;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)siriViewDidReceiveStartSpeechRequestAction:(id)arg1;
- (void)siriViewDidReceiveStopRecordingSpeechAction:(id)arg1;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (BOOL)statusBarEnabled;
- (void)stopRequestWithOptions:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)telephonyRequestCompleted;
- (id)underlyingConnection;
- (void)updateAlertAndApplicationContexts;
- (void)updateRequestOptions:(id)arg1;
- (void)userInteractionDidOccur;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
