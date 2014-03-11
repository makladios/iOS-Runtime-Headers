/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSPropertyMap;

@interface TSCHConfiguration : NSObject {
    BOOL mDisableHighQualityRenderingIfNecessary;
    BOOL mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    Class mMultiDataChartOptionsControllerBuildSupportClass;
    BOOL mShouldForceDiscreteGraphicsFor3D;
    BOOL mShowMessageOnSelection;
    BOOL mSupports3DFillDataEmbeddingRecovery;
    BOOL mSupportsChartDataEditor;
    BOOL mSupportsChartRangeEditingMode;
    BOOL mSupportsNumberFormatSameAsSource;
    BOOL mSupportsTextBackground;
    BOOL mUse3DFillFor3DChartFallback;
}

@property(readonly) TSSPropertyMap * appSpecificPropertyOverrides;
@property BOOL disableHighQualityRenderingIfNecessary;
@property BOOL exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property Class multiDataChartOptionsControllerBuildSupportClass;
@property BOOL shouldForceDiscreteGraphicsFor3D;
@property BOOL showMessageOnSelection;
@property BOOL supports3DFillDataEmbeddingRecovery;
@property BOOL supportsChartDataEditor;
@property BOOL supportsChartRangeEditingMode;
@property BOOL supportsNumberFormatSameAsSource;
@property BOOL supportsTextBackground;
@property BOOL use3DFillFor3DChartFallback;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)resetSharedChartConfiguration;
+ (id)sharedChartConfiguration;

- (id)appSpecificPropertyOverrides;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)disableHighQualityRenderingIfNecessary;
- (BOOL)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
- (id)init;
- (Class)multiDataChartOptionsControllerBuildSupportClass;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDisableHighQualityRenderingIfNecessary:(BOOL)arg1;
- (void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(BOOL)arg1;
- (void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1;
- (void)setShouldForceDiscreteGraphicsFor3D:(BOOL)arg1;
- (void)setShowMessageOnSelection:(BOOL)arg1;
- (void)setSupports3DFillDataEmbeddingRecovery:(BOOL)arg1;
- (void)setSupportsChartDataEditor:(BOOL)arg1;
- (void)setSupportsChartRangeEditingMode:(BOOL)arg1;
- (void)setSupportsNumberFormatSameAsSource:(BOOL)arg1;
- (void)setSupportsTextBackground:(BOOL)arg1;
- (void)setUse3DFillFor3DChartFallback:(BOOL)arg1;
- (BOOL)shouldForceDiscreteGraphicsFor3D;
- (BOOL)showMessageOnSelection;
- (BOOL)supports3DFillDataEmbeddingRecovery;
- (BOOL)supportsChartDataEditor;
- (BOOL)supportsChartRangeEditingMode;
- (BOOL)supportsNumberFormatSameAsSource;
- (BOOL)supportsTextBackground;
- (BOOL)use3DFillFor3DChartFallback;

@end
