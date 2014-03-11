/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXAccessQueue, NSMutableArray;

@interface AXSpringBoardServer : AXServer {
    AXAccessQueue *_accessQueue;
    NSMutableArray *_actionHandlers;
    id _currentAlertHandler;
    NSMutableArray *_gestureOverrides;
}

@property(retain) AXAccessQueue * accessQueue;
@property(retain) NSMutableArray * actionHandlers;
@property(copy) id currentAlertHandler;
@property(retain) NSMutableArray * gestureOverrides;

+ (id)server;

- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (id)_serviceName;
- (BOOL)_shouldValidateEntitlements;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)accessQueue;
- (id)actionHandlers;
- (int)activeApplicationOrientation;
- (int)activeInterfaceOrientation;
- (void)cleanupAlertHandler;
- (void)copyStringToPasteboard:(id)arg1;
- (id)currentAlertHandler;
- (void)dealloc;
- (id)gestureOverrides;
- (void)hideAlert;
- (void)hideNotificationCenter;
- (id)init;
- (BOOL)isAppSwitcherVisible;
- (BOOL)isControlCenterVisible;
- (BOOL)isGuidedAccessActive;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isMediaPlaying;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isOrientationLocked;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (BOOL)isRingerMuted;
- (BOOL)isScreenLockedWithPasscode:(BOOL*)arg1;
- (BOOL)isSideSwitchUsedForOrientation;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isSiriVisible;
- (BOOL)isSpringboardFrontmost;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (BOOL)isSystemSleeping;
- (BOOL)isVoiceControlRunning;
- (void)openAppSwitcher;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openSCATCustomGestureCreation;
- (void)openSiri;
- (void)openVoiceControl;
- (int)pid;
- (void)registerOverrideIntentForGesture:(unsigned int)arg1 withHandler:(id)arg2 withIdentifierCallback:(id)arg3;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)removeOverrideIntent:(id)arg1;
- (void)resetDimTimer;
- (void)setAccessQueue:(id)arg1;
- (void)setActionHandlers:(id)arg1;
- (void)setCancelGestureActivation:(unsigned int)arg1 cancelEnabled:(BOOL)arg2;
- (void)setCurrentAlertHandler:(id)arg1;
- (void)setGestureOverrides:(id)arg1;
- (void)setSiriIsTalking:(BOOL)arg1;
- (void)setSystemGesturesEnabled:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)showAlert:(int)arg1 withHandler:(id)arg2 withData:(id)arg3;
- (void)showAlert:(int)arg1 withHandler:(id)arg2;
- (void)showControlCenter:(BOOL)arg1;
- (void)showNotificationCenter;
- (void)startHearingAidServer;
- (void)takeScreenshot;
- (void)toggleHearingControl;
- (void)toggleNotificationCenter;
- (int)topEventPidOverride;
- (float)volumeLevel;

@end
