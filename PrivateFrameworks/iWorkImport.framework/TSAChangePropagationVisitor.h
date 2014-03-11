/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, TSDChangePropagationMap;

@interface TSAChangePropagationVisitor : TSACommandGatheringVisitor {
    TSDChangePropagationMap *mChangePropagationMap;
    BOOL mMustFindReplacementStyles;
    NSMutableSet *mObjectsChangingAppearance;
    int mStyleReplacementBehavior;
}

@property(retain) TSDChangePropagationMap * changePropagationMap;
@property BOOL mustFindReplacementStyles;
@property(readonly) int styleReplacementBehavior;

- (id)changePropagationMap;
- (void)dealloc;
- (id)initWithChangePropagationMap:(id)arg1 styleReplacementBehavior:(int)arg2;
- (BOOL)mustFindReplacementStyles;
- (id)objectsChangingAppearance;
- (id)p_modifiedAncestorPresetForTableInfo:(id)arg1;
- (void)p_replaceStylesInPropertyMap:(id)arg1 replacements:(id)arg2 forLockedObject:(BOOL)arg3 stylesheetToVaryIn:(id)arg4;
- (id)p_replacementStyleForStyle:(id)arg1 oldParentStyle:(id)arg2 newParentStyle:(id)arg3 replacements:(id)arg4 forLockedObject:(BOOL)arg5 stylesheetToVaryIn:(id)arg6;
- (id)p_replacementStyleForStyle:(id)arg1 replacements:(id)arg2 forLockedObject:(BOOL)arg3 stylesheetToVaryIn:(id)arg4;
- (id)protected_makeTextStyleReplacementStrategyForStorage:(id)arg1;
- (void)protected_propagateCharacterStyleChangesToStorage:(id)arg1 forLockedObject:(BOOL)arg2;
- (id)replacementStyleForStyle:(id)arg1 forLockedObject:(BOOL)arg2 stylesheetToVaryIn:(id)arg3;
- (id)replacementStyleForStyle:(id)arg1 oldParentStyle:(id)arg2 newParentStyle:(id)arg3 forLockedObject:(BOOL)arg4 stylesheetToVaryIn:(id)arg5;
- (id)replacementStyleForStyle:(id)arg1 withReplacements:(id)arg2 forLockedObject:(BOOL)arg3 stylesheetToVaryIn:(id)arg4;
- (void)setChangePropagationMap:(id)arg1;
- (void)setMustFindReplacementStyles:(BOOL)arg1;
- (id)stylePropertiesToAlwaysReset;
- (int)styleReplacementBehavior;
- (void)visitTSCHChartDrawableInfo:(id)arg1;
- (void)visitTSDConnectionLineInfo:(id)arg1;
- (void)visitTSDImageInfo:(id)arg1;
- (void)visitTSDMovieInfo:(id)arg1;
- (void)visitTSDShapeInfo:(id)arg1;
- (void)visitTSDStyledInfo:(id)arg1;
- (void)visitTSSTheme:(id)arg1;
- (void)visitTSTTableInfo:(id)arg1;
- (void)visitTSWPShapeInfo:(id)arg1;
- (void)visitTSWPStorage:(id)arg1;
- (void)visitTSWPTOCInfo:(id)arg1;

@end
