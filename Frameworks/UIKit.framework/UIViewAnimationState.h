/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_UIBasicAnimationFactory>, CAMediaTimingFunction, NSMutableArray, NSMutableSet, NSString, NSUUID, UIView, UIViewAnimationState;

@interface UIViewAnimationState : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _willStartSent : 1;
    unsigned int _useCurrentLayerState : 1;
    unsigned int _cacheTransition : 1;
    unsigned int _autoreverses : 1;
    unsigned int _roundsToInteger : 1;
    unsigned int _layoutSubviews : 1;
    NSMutableArray *_addedCompletions;
    BOOL _allowUserInteractionToCutOffEndOfAnimation;
    id _alongsideAnimations;
    BOOL _animationDidStopSent;
    <_UIBasicAnimationFactory> *_animationFactory;
    BOOL _animationFactoryMakesPerAnimationCustomCurves;
    NSString *_animationID;
    void *_context;
    int _curve;
    CAMediaTimingFunction *_customCurve;
    double _delay;
    id _delegate;
    int _didEndCount;
    SEL _didEndSelector;
    double _duration;
    int _filter;
    float _filterValue;
    UIView *_filterView;
    double _frameInterval;
    UIViewAnimationState *_nextState;
    } _position;
    float _repeatCount;
    BOOL _retainedSelf;
    double _start;
    NSMutableSet *_trackedAnimations;
    int _transition;
    UIView *_transitionView;
    NSUUID *_uuid;
    SEL _willStartSelector;
}

@property(readonly) BOOL _allowsUserInteraction;

+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void*)arg2;

- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (void)_addAnimationStateForTracking:(id)arg1;
- (BOOL)_allowsUserInteraction;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1 disableTrackingIfNeeded:(BOOL)arg2;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1;
- (void)_runAlongsideAnimations;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)_trackAnimation:(id)arg1 forProperty:(id)arg2 inLayer:(id)arg3;
- (id)_trackedAnimations;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (void)pop;
- (void)prepareAction:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 customCurve:(id)arg4;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3;
- (void)setAnimationAttributes:(id)arg1;
- (void)setupCustomTimingCurve;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(id)arg8;

@end
