/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIGlintyStringViewDelegate>, NSMutableSet, NSString, UIColor, UIFont, UIImage, UILabel, UIView, _UILegibilitySettings, _UIVibrantSettings;

@interface _UIGlintyStringView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsLuminanceAdjustments;
    BOOL _animating;
    BOOL _animationRepeats;
    UIColor *_backgroundColor;
    UIView *_backgroundView;
    float _blurAlpha;
    NSMutableSet *_blurHiddenRequesters;
    UIView *_blurView;
    UIImage *_chevron;
    UIColor *_chevronBackgroundColor;
    } _chevronFrame;
    int _chevronStyle;
    <_UIGlintyStringViewDelegate> *_delegate;
    UIView *_effectView;
    BOOL _fading;
    UIFont *_font;
    BOOL _hasCustomBackgroundColor;
    BOOL _highlight;
    UIView *_highlightView;
    float _horizontalPadding;
    UILabel *_label;
    } _labelSize;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _needsTextUpdate;
    BOOL _showing;
    UIView *_spotlightView;
    NSString *_text;
    int _textIndex;
    NSString *_textLanguage;
    BOOL _usesBackgroundDimming;
    _UIVibrantSettings *_vibrantSettings;
}

@property BOOL adjustsFontSizeToFitWidth;
@property BOOL allowsLuminanceAdjustments;
@property BOOL animating;
@property BOOL animationRepeats;
@property(retain) UIColor * backgroundColor;
@property(retain) UIView * backgroundView;
@property float blurAlpha;
@property(retain) NSMutableSet * blurHiddenRequesters;
@property(retain) UIView * blurView;
@property(retain) UIImage * chevron;
@property(retain) UIColor * chevronBackgroundColor;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } chevronFrame;
@property int chevronStyle;
@property <_UIGlintyStringViewDelegate> * delegate;
@property(retain) UIView * effectView;
@property BOOL fading;
@property(retain) UIFont * font;
@property BOOL hasCustomBackgroundColor;
@property BOOL highlight;
@property(retain) UIView * highlightView;
@property float horizontalPadding;
@property(retain) UILabel * label;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } labelFrame;
@property struct CGSize { float x1; float x2; } labelSize;
@property(retain) _UILegibilitySettings * legibilitySettings;
@property BOOL needsTextUpdate;
@property BOOL showing;
@property(retain) UIView * spotlightView;
@property(copy) NSString * text;
@property int textIndex;
@property(copy) NSString * textLanguage;
@property BOOL usesBackgroundDimming;
@property(retain) _UIVibrantSettings * vibrantSettings;

- (float)_chevronHeightWithMaxOffset;
- (id)_chevronImageForStyle:(int)arg1;
- (float)_chevronPadding;
- (float)_chevronVerticalOffset;
- (float)_chevronWidthWithPadding;
- (float)_chevronWidthWithPaddingCompression:(float)arg1;
- (id)_highlightColor;
- (id)_highlightCompositingFilter;
- (void)_updateHighlight;
- (void)_updateLabelWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)adjustsFontSizeToFitWidth;
- (BOOL)allowsLuminanceAdjustments;
- (BOOL)animating;
- (BOOL)animationRepeats;
- (id)backgroundColor;
- (id)backgroundView;
- (float)baselineOffsetFromBottom;
- (float)baselineOffsetFromBottomWithSize:(struct CGSize { float x1; float x2; })arg1;
- (float)blurAlpha;
- (id)blurHiddenRequesters;
- (id)blurView;
- (id)chevron;
- (id)chevronBackgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chevronFrame;
- (int)chevronStyle;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)effectView;
- (void)fadeIn;
- (void)fadeInWithDuration:(double)arg1;
- (void)fadeOut;
- (void)fadeOutWithDuration:(double)arg1;
- (BOOL)fading;
- (id)font;
- (BOOL)hasCustomBackgroundColor;
- (void)hide;
- (void)hideBlur;
- (void)hideEffects;
- (BOOL)highlight;
- (id)highlightView;
- (float)horizontalPadding;
- (id)initWithText:(id)arg1 andFont:(id)arg2;
- (BOOL)isAnimating;
- (id)label;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrame;
- (struct CGSize { float x1; float x2; })labelSize;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (BOOL)needsTextUpdate;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAllowsLuminanceAdjustments:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setAnimationRepeats:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBlurAlpha:(float)arg1;
- (void)setBlurHidden:(BOOL)arg1 forRequester:(id)arg2;
- (void)setBlurHiddenRequesters:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setChevron:(id)arg1;
- (void)setChevronBackgroundColor:(id)arg1;
- (void)setChevronFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setChevronStyle:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setFading:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setHasCustomBackgroundColor:(BOOL)arg1;
- (void)setHighlight:(BOOL)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHorizontalPadding:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNeedsTextUpdate:(BOOL)arg1;
- (void)setShowing:(BOOL)arg1;
- (void)setSpotlightView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextIndex:(int)arg1;
- (void)setTextLanguage:(id)arg1;
- (void)setUsesBackgroundDimming:(BOOL)arg1;
- (void)setVibrantSettings:(id)arg1;
- (id)shapeViewForCharactersInString:(id)arg1 withFont:(id)arg2 centeredInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)show;
- (void)showBlur;
- (void)showEffects;
- (BOOL)showing;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)spotlightView;
- (void)startAnimating;
- (void)stopAnimating;
- (id)text;
- (int)textIndex;
- (id)textLanguage;
- (void)updateBlurForHiddenRequesters;
- (void)updateText;
- (void)updateTextWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)usesBackgroundDimming;
- (id)vibrantSettings;

@end
