/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIImage, _UIBackdropColorSettings, _UIBackdropView;

@interface _UIBackdropViewSettings : NSObject {
    BOOL _appliesTintAndBlurSettings;
    _UIBackdropView *_backdrop;
    BOOL _backdropVisible;
    int _blurHardEdges;
    NSString *_blurQuality;
    float _blurRadius;
    float _colorBurnTintAlpha;
    float _colorBurnTintLevel;
    UIImage *_colorBurnTintMaskImage;
    _UIBackdropColorSettings *_colorSettings;
    UIColor *_colorTint;
    float _colorTintAlpha;
    float _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    UIColor *_combinedTintColor;
    BOOL _darkenWithSourceOver;
    float _darkeningTintAlpha;
    float _darkeningTintBrightness;
    float _darkeningTintHue;
    UIImage *_darkeningTintMaskImage;
    float _darkeningTintSaturation;
    BOOL _designMode;
    BOOL _enabled;
    BOOL _explicitlySetGraphicsQuality;
    float _filterMaskAlpha;
    UIImage *_filterMaskImage;
    int _graphicsQuality;
    float _grayscaleTintAlpha;
    float _grayscaleTintLevel;
    float _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    BOOL _highlighted;
    UIColor *_legibleColor;
    BOOL _lightenGrayscaleWithSourceOver;
    int _renderingHint;
    BOOL _requiresColorStatistics;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    float _saturationDeltaFactor;
    float _scale;
    BOOL _selected;
    int _stackingLevel;
    double _statisticsInterval;
    int _style;
    int _suppressSettingsDidChange;
    BOOL _usesBackdropEffectView;
    BOOL _usesColorBurnTintView;
    BOOL _usesColorTintView;
    BOOL _usesContentView;
    BOOL _usesDarkeningTintView;
    BOOL _usesGrayscaleTintView;
    unsigned int _version;
    BOOL _zoomsBack;
}

@property BOOL appliesTintAndBlurSettings;
@property _UIBackdropView * backdrop;
@property(getter=isBackdropVisible) BOOL backdropVisible;
@property int blurHardEdges;
@property(copy) NSString * blurQuality;
@property float blurRadius;
@property BOOL blursWithHardEdges;
@property float colorBurnTintAlpha;
@property float colorBurnTintLevel;
@property(retain) UIImage * colorBurnTintMaskImage;
@property(retain) _UIBackdropColorSettings * colorSettings;
@property(retain) UIColor * colorTint;
@property float colorTintAlpha;
@property float colorTintMaskAlpha;
@property(retain) UIImage * colorTintMaskImage;
@property(retain) UIColor * combinedTintColor;
@property BOOL darkenWithSourceOver;
@property float darkeningTintAlpha;
@property float darkeningTintBrightness;
@property float darkeningTintHue;
@property(retain) UIImage * darkeningTintMaskImage;
@property float darkeningTintSaturation;
@property(setter=setDesignMode:) BOOL designMode;
@property(getter=isEnabled) BOOL enabled;
@property BOOL explicitlySetGraphicsQuality;
@property float filterMaskAlpha;
@property(retain) UIImage * filterMaskImage;
@property int graphicsQuality;
@property float grayscaleTintAlpha;
@property float grayscaleTintLevel;
@property float grayscaleTintMaskAlpha;
@property(retain) UIImage * grayscaleTintMaskImage;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIColor * legibleColor;
@property BOOL lightenGrayscaleWithSourceOver;
@property int renderingHint;
@property BOOL requiresColorStatistics;
@property struct __CFRunLoopObserver { }* runLoopObserver;
@property float saturationDeltaFactor;
@property float scale;
@property(getter=isSelected) BOOL selected;
@property int stackingLevel;
@property double statisticsInterval;
@property int style;
@property int suppressSettingsDidChange;
@property BOOL usesBackdropEffectView;
@property BOOL usesColorBurnTintView;
@property BOOL usesColorTintView;
@property BOOL usesContentView;
@property BOOL usesDarkeningTintView;
@property BOOL usesGrayscaleTintView;
@property unsigned int version;
@property BOOL zoomsBack;

+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(int)arg1 graphicsQuality:(int)arg2;
+ (id)settingsForPrivateStyle:(int)arg1;
+ (id)settingsForStyle:(int)arg1 graphicsQuality:(int)arg2;
+ (id)settingsForStyle:(int)arg1;

- (void)addKeyPathObserver:(id)arg1;
- (BOOL)appliesTintAndBlurSettings;
- (id)backdrop;
- (int)blurHardEdges;
- (id)blurQuality;
- (float)blurRadius;
- (BOOL)blursWithHardEdges;
- (void)clearRunLoopObserver;
- (float)colorBurnTintAlpha;
- (float)colorBurnTintLevel;
- (id)colorBurnTintMaskImage;
- (id)colorSettings;
- (id)colorTint;
- (float)colorTintAlpha;
- (float)colorTintMaskAlpha;
- (id)colorTintMaskImage;
- (id)combinedTintColor;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (BOOL)darkenWithSourceOver;
- (float)darkeningTintAlpha;
- (float)darkeningTintBrightness;
- (float)darkeningTintHue;
- (id)darkeningTintMaskImage;
- (float)darkeningTintSaturation;
- (void)dealloc;
- (void)decrementSuppressSettingsDidChange;
- (id)description;
- (BOOL)designMode;
- (BOOL)explicitlySetGraphicsQuality;
- (float)filterMaskAlpha;
- (id)filterMaskImage;
- (int)graphicsQuality;
- (float)grayscaleTintAlpha;
- (float)grayscaleTintLevel;
- (float)grayscaleTintMaskAlpha;
- (id)grayscaleTintMaskImage;
- (void)incrementSuppressSettingsDidChange;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithDefaultValuesForGraphicsQuality:(int)arg1;
- (BOOL)isBackdropVisible;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (id)legibleColor;
- (BOOL)lightenGrayscaleWithSourceOver;
- (void)removeKeyPathObserver:(id)arg1;
- (int)renderingHint;
- (BOOL)requiresColorStatistics;
- (void)restoreDefaultValues;
- (struct __CFRunLoopObserver { }*)runLoopObserver;
- (float)saturationDeltaFactor;
- (float)scale;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)setAppliesTintAndBlurSettings:(BOOL)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackdropVisible:(BOOL)arg1;
- (void)setBlurHardEdges:(int)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setBlurRadius:(float)arg1;
- (void)setBlursWithHardEdges:(BOOL)arg1;
- (void)setColorBurnTintAlpha:(float)arg1;
- (void)setColorBurnTintLevel:(float)arg1;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (void)setColorSettings:(id)arg1;
- (void)setColorTint:(id)arg1;
- (void)setColorTintAlpha:(float)arg1;
- (void)setColorTintMaskAlpha:(float)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setCombinedTintColor:(id)arg1;
- (void)setDarkenWithSourceOver:(BOOL)arg1;
- (void)setDarkeningTintAlpha:(float)arg1;
- (void)setDarkeningTintBrightness:(float)arg1;
- (void)setDarkeningTintHue:(float)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)setDarkeningTintSaturation:(float)arg1;
- (void)setDefaultValues;
- (void)setDesignMode:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExplicitlySetGraphicsQuality:(BOOL)arg1;
- (void)setFilterMaskAlpha:(float)arg1;
- (void)setFilterMaskImage:(id)arg1;
- (void)setGraphicsQuality:(int)arg1;
- (void)setGrayscaleTintAlpha:(float)arg1;
- (void)setGrayscaleTintLevel:(float)arg1;
- (void)setGrayscaleTintMaskAlpha:(float)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLegibleColor:(id)arg1;
- (void)setLightenGrayscaleWithSourceOver:(BOOL)arg1;
- (void)setRenderingHint:(int)arg1;
- (void)setRequiresColorStatistics:(BOOL)arg1;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (void)setSaturationDeltaFactor:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStackingLevel:(int)arg1;
- (void)setStackinglevel:(int)arg1;
- (void)setStatisticsInterval:(double)arg1;
- (void)setStyle:(int)arg1;
- (void)setSuppressSettingsDidChange:(int)arg1;
- (void)setUsesBackdropEffectView:(BOOL)arg1;
- (void)setUsesColorBurnTintView:(BOOL)arg1;
- (void)setUsesColorTintView:(BOOL)arg1;
- (void)setUsesContentView:(BOOL)arg1;
- (void)setUsesDarkeningTintView:(BOOL)arg1;
- (void)setUsesGrayscaleTintView:(BOOL)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setZoomsBack:(BOOL)arg1;
- (int)stackingLevel;
- (double)statisticsInterval;
- (int)style;
- (int)suppressSettingsDidChange;
- (BOOL)usesBackdropEffectView;
- (BOOL)usesColorBurnTintView;
- (BOOL)usesColorTintView;
- (BOOL)usesContentView;
- (BOOL)usesDarkeningTintView;
- (BOOL)usesGrayscaleTintView;
- (unsigned int)version;
- (BOOL)zoomsBack;

@end
