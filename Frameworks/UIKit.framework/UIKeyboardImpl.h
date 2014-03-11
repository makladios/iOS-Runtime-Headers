/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIKeyInput>, <UIKeyboardCandidateList>, <UIKeyboardImplGeometryDelegate>, <UIKeyboardInput>, <UIKeyboardRecording><UIApplicationEventRecording>, <UIKeyboardTypology>, NSMutableArray, NSMutableDictionary, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, NSString, TIKeyboardCandidateResultSet, TIKeyboardInputManagerState, TIKeyboardInputManagerStub, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent, UIAlertView, UIAutocorrectInlinePrompt, UIDelayedAction, UIKeyboardAutocorrectionController, UIKeyboardLayout, UIKeyboardScheduledTask, UIKeyboardTaskQueue, UIPhysicalKeyboardEvent, UIResponder, UIResponder<UIKeyInput>, UIResponder<UITextInput>, UIResponder<UITextInputPrivate>, UITextInputArrowKeyHistory, UITextInputTraits, UIView, _UIActionWhenIdle;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    int _currentAlertReason;
    BOOL _handlingKeyCommandFromHardwareKeyboard;
    BOOL committingCandidate;
    BOOL geometryIsChanging;
    UIAlertView *keyboardAlertView;
    BOOL m_acceptingCandidate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteInterval;
    double m_autoDeleteLastDelete;
    BOOL m_autoDeleteOK;
    unsigned long m_autoDeleteShiftCharacter;
    UIKeyboardScheduledTask *m_autoDeleteTask;
    BOOL m_autocapitalizationPreference;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    BOOL m_autocorrectPromptTimerFired;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    <UIKeyboardCandidateList> *m_candidateList;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    BOOL m_caretShowingNow;
    int m_changeCount;
    BOOL m_changeNotificationDisabled;
    double m_changeTime;
    id m_changedDelegate;
    BOOL m_changingGeometryWithSameOrientation;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    BOOL m_correctionLearningAllowed;
    int m_currentDirection;
    NSString *m_currentUsedInputMode;
    UITextInputTraits *m_defaultTraits;
    _UIActionWhenIdle *m_deferredDidSetDelegateAction;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    <UIKeyInput> *m_delegate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
    id m_externalTask;
    <UIKeyboardImplGeometryDelegate> *m_geometryDelegate;
    BOOL m_hardwareKeyboardAttached;
    BOOL m_hardwareKeyboardIsSeen;
    UIPhysicalKeyboardEvent *m_hardwareRepeatEvent;
    UIKeyboardScheduledTask *m_hardwareRepeatTask;
    BOOL m_hasInputOnAcceptCandidate;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    TIKeyboardInputManagerStub *m_inputManager;
    TIKeyboardInputManagerState *m_inputManagerState;
    NSString *m_inputModeLastChosen;
    } m_inputPoint;
    BOOL m_insideKeyInputDelegateCall;
    TIKeyboardState *m_keyboardState;
    NSMutableDictionary *m_keyedLayouts;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    UIView *m_languageIndicator;
    NSString *m_lastUsedInputMode;
    UIKeyboardLayout *m_layout;
    BOOL m_longPress;
    UIDelayedAction *m_longPressAction;
    UIView *m_markedTextOverlay;
    BOOL m_maximizing;
    BOOL m_needsCandidates;
    NSString *m_nextInputModeToUse;
    struct __CFRunLoopObserver { } *m_observer;
    int m_orientation;
    int m_originalOrientation;
    BOOL m_originalShouldSkipCandidateSelection;
    BOOL m_performanceLoggingEnabled;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    NSString *m_previousInputString;
    unsigned int m_previousReturnKeyBehavior;
    unsigned int m_previousSpaceKeyBehavior;
    BOOL m_receivedCandidatesInCurrentInputMode;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    BOOL m_replacingWord;
    int m_returnKeyState;
    BOOL m_rivenCenterFilled;
    BOOL m_scrolling;
    BOOL m_selecting;
    BOOL m_settingShift;
    BOOL m_shift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shouldChargeKeys;
    BOOL m_shouldSetInputModeInNextRun;
    BOOL m_shouldSkipCandidateGeneration;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_showInputModeIndicator;
    BOOL m_showsCandidateBar;
    BOOL m_showsCandidateInline;
    BOOL m_softwareKeyboardShownByTouch;
    float m_splitProgress;
    BOOL m_suggestionsShownForCurrentDeletion;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_suppressUpdateCandidateView;
    UIKeyboardTaskQueue *m_taskQueue;
    BOOL m_textInputChangesIgnored;
    unsigned int m_textInputChangingCount;
    BOOL m_textInputChangingDirection;
    BOOL m_textInputChangingText;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    UITextInputTraits *m_traits;
    BOOL m_updateLayoutOnShowKeyboard;
    BOOL m_updatingPreferences;
    BOOL m_userChangedSelection;
    BOOL m_usesCandidateSelection;
    <UIKeyboardTypology> *typologyRecorder;
}

@property(retain) UITextInputArrowKeyHistory * arrowKeyHistory;
@property(readonly) UIKeyboardAutocorrectionController * autocorrectionController;
@property(readonly) BOOL centerFilled;
@property(retain) id changedDelegate;
@property(retain) id changedDelegate;
@property BOOL committingCandidate;
@property(retain) NSString * currentUsedInputMode;
@property(retain) _UIActionWhenIdle * deferredDidSetDelegateAction;
@property(retain) _UIActionWhenIdle * delayedCandidateRequest;
@property(retain) UIResponder<UIKeyInput> * delegate;
@property(readonly) UIResponder * delegateAsResponder;
@property(copy) id externalTask;
@property <UIKeyboardImplGeometryDelegate> * geometryDelegate;
@property BOOL geometryIsChanging;
@property BOOL handlingKeyCommandFromHardwareKeyboard;
@property BOOL hardwareKeyboardIsSeen;
@property(retain) UIPhysicalKeyboardEvent * hardwareRepeatEvent;
@property(retain) UIKeyboardScheduledTask * hardwareRepeatTask;
@property(getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
@property(readonly) UIResponder<UITextInput> * inputDelegate;
@property(readonly) TIKeyboardInputManagerStub * inputManager;
@property(retain) TIKeyboardInputManagerState * inputManagerState;
@property(retain) UIAlertView * keyboardAlertView;
@property(retain) NSString * lastUsedInputMode;
@property(retain) TIKeyboardLayout * layoutForKeyHitTest;
@property(readonly) <UIKeyboardInput> * legacyInputDelegate;
@property(readonly) unsigned int minimumTouchesForTranslation;
@property(retain) NSString * nextInputModeToUse;
@property(readonly) UIResponder<UITextInputPrivate> * privateInputDelegate;
@property BOOL receivedCandidatesInCurrentInputMode;
@property(retain) <UIKeyboardRecording><UIApplicationEventRecording> * recorder;
@property BOOL rivenSplitLock;
@property BOOL shouldSetInputModeInNextRun;
@property(readonly) BOOL shouldShowCandidateBar;
@property BOOL shouldSkipCandidateSelection;
@property BOOL showInputModeIndicator;
@property BOOL showsCandidateBar;
@property BOOL showsCandidateInline;
@property BOOL softwareKeyboardShownByTouch;
@property(readonly) BOOL splitTransitionInProgress;
@property(readonly) UIKeyboardTaskQueue * taskQueue;
@property(retain) TIKeyboardTouchEvent * touchEventWaitingForKeyInputEvent;
@property(retain) <UIKeyboardTypology> * typologyRecorder;

+ (void)_clearHardwareKeyboardMinimizationPreference;
+ (struct CGSize { float x1; float x2; })_defaultSizeForInterfaceOrientation:(int)arg1;
+ (id)activeInstance;
+ (float)additionalInstanceHeight;
+ (float)additionalInstanceHeightForInterfaceOrientation:(int)arg1;
+ (float)additionalInstanceHeightLoading;
+ (float)additionalInstanceHeightLoadingForInterfaceOrientation:(int)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (unsigned int)convertToTextInputAutocapitalizationType:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(int)arg1;
+ (void)hardwareKeyboardAvailabilityChanged;
+ (int)interfaceOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
+ (BOOL)isSplit;
+ (id)keyboardScreen;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInterfaceOrientation:(int)arg1;
+ (Class)layoutClassForCurrentInputMode;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(int)arg2;
+ (void)markElapsed:(id)arg1;
+ (void)markPerformance:(id)arg1;
+ (id)normalizedInputModesFromPreference;
+ (id)orientationKeyForOrientation:(int)arg1;
+ (int)persistentDictationTargetZone;
+ (struct CGPoint { float x1; float x2; })persistentDictationWindowOffset;
+ (struct CGPoint { float x1; float x2; })persistentOffset;
+ (float)persistentSplitProgress;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(BOOL)arg2;
+ (void)releaseSharedInstance;
+ (BOOL)rivenInstalled;
+ (BOOL)rivenPreference;
+ (BOOL)rivenTranslationPreference;
+ (void)sendPerformanceNotification:(id)arg1;
+ (void)setParentTestForProfiling:(id)arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setPersistentOffset:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setPersistentSplitProgress:(float)arg1;
+ (id)sharedInstance;
+ (struct CGSize { float x1; float x2; })sizeForInterfaceOrientation:(int)arg1;
+ (float)splitProgress;
+ (BOOL)supportsSplit;
+ (void)suppressSetPersistentOffset:(BOOL)arg1;
+ (unsigned int)translateToTextInputKeyboardType:(int)arg1;

- (id)UILanguagePreference;
- (id)_autocorrectPromptRects;
- (id)_canonicalKeyTypeForKeyType:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (void)_handleKeyBehavior:(unsigned int)arg1 forKeyType:(id)arg2;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned int)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (BOOL)_hasCandidates;
- (id)_inputForAutocorrectionCandidate;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (id)_keyboardBehaviorState;
- (id)_layout;
- (void)_moveWithEvent:(id)arg1;
- (BOOL)_needsCandidates;
- (void)_nop;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (int)_positionInCandidateList:(id)arg1;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)_setAutocorrects:(BOOL)arg1;
- (void)_setInputManager:(id)arg1;
- (void)_setNeedsCandidates:(BOOL)arg1;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (BOOL)_systemHasKbd;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)acceptAutocorrection;
- (void)acceptAutocorrectionAndEndComposition;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2 executionContext:(id)arg3;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned int)arg2;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCurrentCandidate;
- (void)acceptCurrentCandidateIfSelected;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidateWithExecutionContext:(id)arg1;
- (void)acceptFirstCandidate;
- (BOOL)acceptInputString:(id)arg1;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2 forInput:(id)arg3;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2;
- (id)acceptedAutocorrectionForWordTerminator:(id)arg1;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2;
- (void)addInputString:(id)arg1;
- (void)addWordTerminator:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 executionContext:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animateAutocorrection;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)applyAutocorrection;
- (id)arrowKeyHistory;
- (BOOL)autocapitalizationPreference;
- (id)autocorrectPrompt;
- (BOOL)autocorrectSpellingEnabled;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)autocorrectionController;
- (BOOL)autocorrectionPreference;
- (BOOL)autocorrectionPreferenceForTraits;
- (id)autocorrectionRecordForWord:(id)arg1;
- (BOOL)automaticMinimizationEnabled;
- (void)callChanged;
- (void)callChangedSelection;
- (BOOL)callLayoutIgnoresShiftState;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetAutoshift:(BOOL)arg1;
- (void)callLayoutSetShift:(BOOL)arg1;
- (void)callLayoutUpdateAllLocalizedKeys;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutUpdateReturnKey;
- (BOOL)callLayoutUsesAutoShift;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (BOOL)callShouldInsertText:(id)arg1;
- (BOOL)callShouldReplaceExtendedRange:(unsigned int)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3;
- (BOOL)canHandleEvent:(id)arg1;
- (BOOL)canHandleKeyHitTest;
- (void)cancelAllKeyEvents;
- (void)cancelSplitTransition;
- (id)candidateList;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (BOOL)centerFilled;
- (int)changeCount;
- (BOOL)changeNotificationDisabled;
- (id)changedDelegate;
- (BOOL)checkSpellingPreference;
- (BOOL)checkSpellingPreferenceForTraits;
- (void)clearAnimations;
- (void)clearAutoDeleteTimer;
- (void)clearAutocorrectPromptTimer;
- (void)clearChangeTimeAndCount;
- (void)clearDelegate;
- (void)clearExcessKeyboardMemory;
- (void)clearInput;
- (void)clearInputForMarkedText;
- (void)clearLanguageIndicator;
- (void)clearLayouts;
- (void)clearLongPressTimer;
- (void)clearSelection;
- (void)clearShiftState;
- (void)clearTimers;
- (void)clearTransientState;
- (BOOL)committingCandidate;
- (void)completeAcceptCandidate:(id)arg1;
- (void)completeAcceptCandidateBeforeAddingInput:(id)arg1 executionContext:(id)arg2;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)completeAddInputString:(id)arg1 generateCandidates:(BOOL)arg2;
- (void)completeAddInputString:(id)arg1;
- (void)completeDeleteFromInput;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned long)arg1;
- (void)completeHandleAutoDelete;
- (void)completeHandleKeyEvent:(id)arg1;
- (void)completeUpdateForChangedSelection:(BOOL)arg1;
- (void)continueGenerateAutocorrectionWithOperations:(id)arg1;
- (void)continueGenerateCandidatesAsynchronouslyWithOperations:(id)arg1;
- (void)continueGenerateReplacementsForStringWithCandidates:(id)arg1 candidatesHandler:(id)arg2;
- (void)continueHandleAcceptedCandidateWithOperations:(id)arg1;
- (void)continueHandleKeyboardInputWithOperations:(id)arg1;
- (void)continuePerformHitTestToKeyCode:(int)arg1 keyCodeHandler:(id)arg2;
- (void)continueSyncToKeyboardStateWithOperations:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (BOOL)currentKeyboardTraitsAllowCandidateBar;
- (id)currentUsedInputMode;
- (void)dealloc;
- (void)defaultsDidChange;
- (id)deferredDidSetDelegateAction;
- (id)delayedCandidateRequest;
- (void)delayedInit;
- (id)delegate;
- (id)delegateAsResponder;
- (BOOL)delegateIsSMSTextView;
- (BOOL)delegateSuggestionsForCurrentInput;
- (BOOL)delegateSupportsCorrectionUI;
- (void)deleteBackward;
- (void)deleteBackwardAndNotify:(BOOL)arg1;
- (void)deleteForwardAndNotify:(BOOL)arg1;
- (void)deleteFromInput;
- (void)deleteFromInputWithExecutionContext:(id)arg1;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (void)detach;
- (void)didChangePhraseBoundary;
- (void)didSetDelegate;
- (void)dismissKeyboard;
- (BOOL)displaysCandidates;
- (BOOL)doubleSpacePeriodPreference;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (void)ejectKeyDown;
- (void)enable;
- (id)externalTask;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)fadeAutocorrectPrompt;
- (void)finishLayoutChangeWithArguments:(id)arg1;
- (void)finishSetInputMode:(id)arg1 didChangeDirection:(BOOL)arg2 executionContext:(id)arg3;
- (void)finishSetInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)finishTextChanged;
- (void)firstHardwareAutoRepeatWithExecutionContext:(id)arg1;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)forceShiftUpdate;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (void)generateCandidates;
- (void)generateCandidatesAsynchronously;
- (void)generateCandidatesAsynchronouslyWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(id)arg2 executionContext:(id)arg3;
- (void)geometryChangeDone:(BOOL)arg1;
- (id)geometryDelegate;
- (BOOL)geometryIsChanging;
- (id)getLastUsedInputMode;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)handleClear;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleDelayedActionLongPress;
- (void)handleDelayedActionUpdateAutocorrectPrompt;
- (void)handleDelayedActionUpdateTextCandidateView;
- (void)handleDelete;
- (void)handleDeleteAsRepeat:(BOOL)arg1 executionContext:(id)arg2;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (BOOL)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3;
- (BOOL)handleKeyCommand:(id)arg1 repeatOkay:(BOOL*)arg2;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)handleKeyEvent:(id)arg1;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)handleObserverCallback;
- (void)handleReplyToGenerateAutocorrectionWithTask:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToGenerateCandidatesAsynchronouslyWithTask:(id)arg1;
- (void)handleReplyToGenerateReplacementsForStringWithTask:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToHandleAcceptedCandidateWithTask:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToHandleKeyboardInputWithTask:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToPerformHitTestWithTask:(id)arg1 executionContext:(id)arg2;
- (void)handleReplyToSyncToKeyboardStateWithTask:(id)arg1 executionContext:(id)arg2;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (BOOL)handlingKeyCommandFromHardwareKeyboard;
- (void)hardwareKeyboardAvailabilityChanged;
- (BOOL)hardwareKeyboardIsSeen;
- (id)hardwareKeyboardsSeenPreference;
- (id)hardwareRepeatEvent;
- (id)hardwareRepeatTask;
- (BOOL)hasAutoRepeat;
- (BOOL)hasEditableMarkedText;
- (BOOL)hasMarkedText;
- (BOOL)hideAccessoryViewsDuringSplit;
- (void)hideKeyboard;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputDelegate;
- (id)inputEventForInputString:(id)arg1;
- (id)inputManager;
- (id)inputManagerState;
- (id)inputModeFirstPreference;
- (id)inputModeLastChosen;
- (id)inputModeLastChosenPreference;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedPreference;
- (id)inputModePreference;
- (id)inputOverlayContainer;
- (id)inputStringFromPhraseBoundary;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)installRecorder;
- (void)installTypology;
- (int)interfaceOrientation;
- (BOOL)isAllowedInputMode:(id)arg1;
- (BOOL)isAutoDeleteActive;
- (BOOL)isAutoFillMode;
- (BOOL)isAutoShifted;
- (BOOL)isDesiredInputMode:(id)arg1;
- (BOOL)isInHardwareKeyboardMode;
- (BOOL)isLongPress;
- (BOOL)isMinimized;
- (BOOL)isSelectionAtSentenceAutoshiftBoundary;
- (BOOL)isShiftLocked;
- (BOOL)isShifted;
- (BOOL)isUsingDictationLayout;
- (BOOL)isValidKeyInput:(id)arg1;
- (void)jumpToCompositions;
- (void)keyActivated;
- (void)keyDeactivated;
- (id)keyboardAlertView;
- (void)keyboardDidHide:(id)arg1;
- (BOOL)keyboardDrawsOpaque;
- (BOOL)keyboardRecordingEnabled;
- (BOOL)keyboardsExpandedPreference;
- (id)lastUsedInputMode;
- (void)launchTypologyApplication;
- (id)layoutForKeyHitTest;
- (void)layoutHasChanged;
- (id)layoutState;
- (id)legacyInputDelegate;
- (void)logHandwritingData;
- (void)longPressAction;
- (id)markedText;
- (id)markedTextOverlay;
- (unsigned int)minimumTouchesForTranslation;
- (void)movePhraseBoundaryToDirection:(int)arg1;
- (void)moveSelectionToEndOfWord;
- (BOOL)needsKeyHitTestResults;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (BOOL)nextCharacterIsWordCharacter;
- (id)nextInputModeInPreferencedList;
- (id)nextInputModeToUse;
- (BOOL)noContent;
- (void)notifyShiftState;
- (void)performHitTestForTouchEvent:(id)arg1 keyCodeHandler:(id)arg2 executionContext:(id)arg3;
- (void)performKeyBehaviorConfirm;
- (void)performKeyBehaviorConfirmFirstCandidate;
- (void)performOperations:(id)arg1;
- (BOOL)performanceLoggingPreference;
- (unsigned int)phraseBoundary;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForGeometryChange;
- (void)prepareForSelectionChange;
- (void)prepareLayoutForInterfaceOrientation:(int)arg1;
- (id)privateInputDelegate;
- (BOOL)receivedCandidatesInCurrentInputMode;
- (void)recomputeActiveInputModes;
- (void)recomputeActiveInputModesFromList:(id)arg1;
- (id)recorder;
- (void)refreshKeyboardState;
- (void)refreshRivenPreferences;
- (void)releaseInputManager;
- (void)releaseInputManagerIfInactive;
- (void)releaseSuppressUpdateCandidateView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeAllDynamicDictionaries;
- (void)removeAutocorrectPrompt;
- (void)removeAutocorrection;
- (void)removeFromSuperview;
- (void)replaceText:(id)arg1;
- (id)replyHandlerForAdjustPhraseBoundaryWithExecutionContext:(id)arg1;
- (id)replyHandlerForGenerateAutocorrectionWithExecutionContext:(id)arg1;
- (id)replyHandlerForGenerateCandidatesAsynchronouslyWithSelectedCandidate:(id)arg1;
- (id)replyHandlerForGenerateReplacementsForStringWithCandidatesHandler:(id)arg1 executionContext:(id)arg2;
- (id)replyHandlerForHandleAcceptedCandidateWithExecutionContext:(id)arg1;
- (id)replyHandlerForHandleKeyboardInputWithExecutionContext:(id)arg1;
- (id)replyHandlerForPerformHitTestForTouchEventWithKeyCodeHandler:(id)arg1 executionContext:(id)arg2;
- (id)replyHandlerForSyncToKeyboardStateWithExecutionContext:(id)arg1;
- (void)resizeCandidateBarWithDelta:(float)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (id)returnKeyDisplayName;
- (BOOL)returnKeyEnabled;
- (int)returnKeyType;
- (void)revealHiddenCandidates;
- (BOOL)rivenSplitLock;
- (void)saveInputModesPreference:(id)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (id)searchStringForMarkedText;
- (void)selectionDidChange:(id)arg1;
- (BOOL)selectionIsEndOfWord;
- (void)selectionScrolling:(id)arg1;
- (id)selectionView;
- (void)selectionWillChange:(id)arg1;
- (void)setArrowKeyHistory:(id)arg1;
- (void)setAutocorrectSpellingEnabled:(BOOL)arg1;
- (void)setAutocorrection:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(BOOL)arg1;
- (void)setCandidateList:(id)arg1 updateCandidateView:(BOOL)arg2;
- (void)setCandidates:(id)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (void)setChanged;
- (void)setChangedDelegate:(id)arg1;
- (void)setCommittingCandidate:(BOOL)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)setCurrentUsedInputMode:(id)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDeferredDidSetDelegateAction:(id)arg1;
- (void)setDelayedCandidateRequest:(id)arg1;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExternalTask:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometryDelegate:(id)arg1;
- (void)setGeometryIsChanging:(BOOL)arg1;
- (void)setHandlingKeyCommandFromHardwareKeyboard:(BOOL)arg1;
- (void)setHardwareKeyboardIsSeen:(BOOL)arg1;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (void)setHardwareRepeatEvent:(id)arg1;
- (void)setHardwareRepeatTask:(id)arg1;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setInSplitKeyboardMode:(id)arg1;
- (void)setInitialDirection;
- (void)setInputManagerFromInputMode:(id)arg1;
- (void)setInputManagerState:(id)arg1;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setInputMode:(id)arg1;
- (void)setInputModeFromPreferences;
- (void)setInputModeLastChosenPreference;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setKeyboardAlertView:(id)arg1;
- (void)setLastUsedInputMode:(id)arg1;
- (void)setLayoutForKeyHitTest:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inputString:(id)arg3 searchString:(id)arg4;
- (void)setNextInputModeToUse:(id)arg1;
- (void)setOrientation;
- (void)setPreviousInputString:(id)arg1;
- (void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1;
- (void)setRecorder:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setRivenSplitLock:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShift:(BOOL)arg1;
- (void)setShiftLocked:(BOOL)arg1;
- (void)setShiftLockedForced:(BOOL)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftOffIfNeeded;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShouldSetInputModeInNextRun:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1;
- (void)setShowInputModeIndicator:(BOOL)arg1;
- (void)setShowsCandidateBar:(BOOL)arg1;
- (void)setShowsCandidateInline:(BOOL)arg1;
- (void)setSoftwareKeyboardShownByTouch:(BOOL)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSplitProgress:(float)arg1;
- (void)setTextInputChangesIgnored:(BOOL)arg1;
- (void)setTouchEventWaitingForKeyInputEvent:(id)arg1;
- (void)setTypologyRecorder:(id)arg1;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (BOOL)shiftLockPreference;
- (BOOL)shiftLockedEnabled;
- (BOOL)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)arg1;
- (BOOL)shouldForceASCIICapable;
- (BOOL)shouldIgnoreCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (BOOL)shouldSetInputModeInNextRun;
- (BOOL)shouldShowCandidateBar;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (BOOL)showInputModeIndicator;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)showKeyboard;
- (void)showKeyboardIfNeeded;
- (void)showNextCandidates;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (BOOL)showsCandidateBar;
- (BOOL)showsCandidateInline;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(BOOL)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (BOOL)softwareKeyboardShownByTouch;
- (BOOL)splitTransitionInProgress;
- (void)startAutoDeleteTimer;
- (void)startCaretBlinkIfNeeded;
- (void)startKeyboardRecording;
- (void)stopAutoDelete;
- (void)stopKeyboardRecording;
- (void)storeDelegateConformance;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)suppliesCompletions;
- (BOOL)supportsNumberKeySelection;
- (BOOL)swipeToTabPreference;
- (void)syncInputManagerToKeyboardState;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)takeTextInputTraitsFromDelegate;
- (id)taskQueue;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (void)textChanged:(id)arg1 executionContext:(id)arg2;
- (void)textChanged:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textFrameChanged:(id)arg1;
- (int)textInputChangingCount;
- (id)textInputTraits;
- (void)textWillChange:(id)arg1;
- (void)timeElapsed:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1;
- (void)toggleShift;
- (void)toggleSoftwareKeyboard;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)touchAutocorrectPromptTimer;
- (id)touchEventWaitingForKeyInputEvent;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(BOOL)arg2;
- (void)trackUsageForCandidateAcceptedAction:(id)arg1;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (BOOL)typologyEnabled;
- (id)typologyRecorder;
- (void)unmarkText:(id)arg1;
- (void)unmarkText;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)updateAutocorrectPromptAction;
- (void)updateAutocorrectPromptDisplay:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateCandidateDisplay;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1 documentOperation:(id)arg2;
- (void)updateChangeTimeAndIncrementCount;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)arg1;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (void)updateForChangedSelection;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)updateFromTextInputTraits;
- (void)updateInputManagerAutocapitalizationType;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 preserveIfPossible:(BOOL)arg2;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1;
- (id)updateKeyBehaviors:(id)arg1 withBehaviors:(id)arg2 forState:(id)arg3;
- (void)updateKeyboardConfigurations;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)updateLayout;
- (void)updateLayoutAndSetShift;
- (void)updateLayoutIfNeeded;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)updateObserverState;
- (void)updateReturnKey:(BOOL)arg1;
- (void)updateReturnKey;
- (void)updateShiftState;
- (void)updateTextCandidateView;
- (BOOL)userSelectedCurrentCandidate;
- (BOOL)usesCandidateSelection;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;

@end
