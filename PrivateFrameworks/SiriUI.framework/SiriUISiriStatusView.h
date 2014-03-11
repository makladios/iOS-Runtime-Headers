/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUISiriStatusViewAnimationDelegate>, <SiriUISiriStatusViewDelegate>, SiriUIMicButton, UIImageView, UILongPressGestureRecognizer, UIView, _UISiriWaveyView;

@interface SiriUISiriStatusView : UIView <_UISiriWaveyViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol> {
    <SiriUISiriStatusViewAnimationDelegate> *_animationDelegate;
    SiriUIMicButton *_button;
    <SiriUISiriStatusViewDelegate> *_delegate;
    float _disabledMicOpacity;
    int _imageSet;
    double _lastStateChangeTime;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_micOutlineLineView;
    int _mode;
    UIImageView *_siriMicGlyphView;
    _UISiriWaveyView *_waveyView;
    float _waveyViewWidth;
}

@property <SiriUISiriStatusViewAnimationDelegate> * animationDelegate;
@property <SiriUISiriStatusViewDelegate> * delegate;
@property float disabledMicOpacity;
@property int mode;
@property float waveyViewWidth;

+ (float)_micGlyphYAdjustment;
+ (float)statusViewHeight;

- (void).cxx_destruct;
- (id)_animationForCGImages:(id)arg1;
- (void)_cancelWhileListening;
- (id)_defaultMicImage;
- (void)_hideWaveform;
- (struct CGImage { }*)_lastToThinkingCGImage;
- (void)_micButtonHeld:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_micButtonHitRect;
- (void)_micButtonTapped:(id)arg1;
- (void)_setMicOutlineLayerContents:(struct CGImage { }*)arg1;
- (void)_setPressedImageEnabled:(BOOL)arg1;
- (void)_showWaveform;
- (void)_startListening;
- (void)_startThinkingFromListening;
- (void)_stopThinking;
- (id)_thinkingSpinningAnimation;
- (id)_transitionFromListeningToIdleAnimation;
- (id)_transitionToListeningAnimation;
- (id)_transitionToThinkingAnimation;
- (id)_transitionToThinkingCompleteAnimation;
- (void)_zoomInMicGlyphForAnimationDuration:(double)arg1;
- (void)_zoomOutMicGlyph;
- (id)animationDelegate;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (float)audioLevelForWaveyView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (float)disabledMicOpacity;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forImageSet:(int)arg2;
- (void)layoutSubviews;
- (int)mode;
- (void)setAnimationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledMicOpacity:(float)arg1;
- (void)setMode:(int)arg1;
- (void)setWaveyViewWidth:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)waveyViewWidth;

@end
