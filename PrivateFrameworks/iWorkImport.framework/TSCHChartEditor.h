/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSMutableDictionary, TSCHChartAxisID, TSCHChartDrawableInfo, TSCHChartType, TSCHSelection, TSCHTextEditing, TSDLayout;

@interface TSCHChartEditor : TSDDrawableEditor <TSDStylePresetsInspectorPaneDelegate> {
    NSDictionary *_selectedDataSetNameIndexesByInfo;
    TSCHChartType *mDisplayedChartType;
    TSCHChartAxisID *mInspectorAxisID;
    TSCHSelection *mSelection;
    NSMutableDictionary *mSubselectionState;
    TSCHTextEditing *mTextEditor;
}

@property(readonly) NSDictionary * chartSubselectionState;
@property TSCHChartType * displayedChartType;
@property(readonly) TSCHChartDrawableInfo * firstChartInfo;
@property(readonly) TSDLayout * firstLayout;
@property(readonly) BOOL hasAxisLabelsSelection;
@property(readonly) BOOL hasAxisSeriesLabelsSelection;
@property(readonly) BOOL hasAxisTitleSelection;
@property(readonly) BOOL hasChartDataSetNameSelection;
@property(readonly) BOOL hasChartTitleSelection;
@property(readonly) BOOL hasErrorBarSelection;
@property(readonly) BOOL hasLegendSelection;
@property(readonly) BOOL hasSeriesSelection;
@property(readonly) BOOL hasSeriesValueLabelSelection;
@property(readonly) BOOL hasTrendLineEquationSelection;
@property(readonly) BOOL hasTrendLineR2Selection;
@property(readonly) BOOL hasTrendLineSelection;
@property(copy) TSCHChartAxisID * inspectorAxisID;
@property(readonly) NSDictionary * selectedAxisLabelsAxisIDsByInfo;
@property(readonly) NSDictionary * selectedAxisSeriesLabelsAxisIDsByInfo;
@property(readonly) NSDictionary * selectedAxisTitleAxisIDsByInfo;
@property(readonly) NSDictionary * selectedCategoryAxisIDsByInfo;
@property(readonly) NSDictionary * selectedChartTitleIndexesByInfo;
@property(readonly) NSDictionary * selectedDataSetNameIndexesByInfo;
@property(readonly) NSDictionary * selectedErrorBarGroupsByInfo;
@property(readonly) NSDictionary * selectedLegendsIndexesByInfo;
@property(readonly) NSDictionary * selectedSeriesIndexesByInfo;
@property(readonly) NSDictionary * selectedSeriesValueLabelIndexesByInfo;
@property(readonly) NSDictionary * selectedTrendLineEquationIndexesByInfo;
@property(readonly) NSDictionary * selectedTrendLineIndexesByInfo;
@property(readonly) NSDictionary * selectedTrendLineR2IndexesByInfo;
@property(readonly) NSDictionary * selectedValueAxisIDsByInfo;
@property(retain) TSCHTextEditing * textEditor;

+ (BOOL)automaticallyNotifiesObserversOfSelection;
+ (id)keyPathsForValuesAffectingChartSubselectionState;
+ (id)keyPathsForValuesAffectingHasAxisLabelsSelection;
+ (id)keyPathsForValuesAffectingHasAxisSeriesLabelsSelection;
+ (id)keyPathsForValuesAffectingHasAxisTitleSelection;
+ (id)keyPathsForValuesAffectingHasChartDataSetNameSelection;
+ (id)keyPathsForValuesAffectingHasChartTitleSelection;
+ (id)keyPathsForValuesAffectingHasErrorBarSelection;
+ (id)keyPathsForValuesAffectingHasLegendSelection;
+ (id)keyPathsForValuesAffectingHasSeriesSelection;
+ (id)keyPathsForValuesAffectingHasSeriesValueLabelSelection;
+ (id)keyPathsForValuesAffectingHasTrendLineEquationSelection;
+ (id)keyPathsForValuesAffectingHasTrendLineR2Selection;
+ (id)keyPathsForValuesAffectingHasTrendLineSelection;
+ (id)keyPathsForValuesAffectingSelectedAxisLabelsAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingSelectedAxisSeriesLabelsAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingSelectedAxisTitleAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingSelectedCategoryAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingSelectedChartDataSetNameIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedChartTitleIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedErrorBarGroupsByInfo;
+ (id)keyPathsForValuesAffectingSelectedSeriesIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedSeriesValueLabelIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedTrendLineEquationIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedTrendLineIndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedTrendLineR2IndexesByInfo;
+ (id)keyPathsForValuesAffectingSelectedValueAxisIDsByInfo;
+ (id)keyPathsForValuesAffectingselectedLegendsIndexesByInfo;

- (id)allSelectedChartsDimensions;
- (BOOL)allSelectedChartsMatch;
- (id)allSelectedPathsForInfo:(id)arg1;
- (void)beginDynamic3DChartDepthChangesForChart:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canSelectPath:(id)arg1;
- (void)changeChartTypeForTag:(id)arg1;
- (id)chartLayoutsForChartDrawableInfo:(id)arg1;
- (id)chartSubselectionState;
- (void)clearSelectedPathsForInfo:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (float)depthValueForChart:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)deselectPath:(id)arg1 forInfo:(id)arg2;
- (void)didBecomeCurrentEditor;
- (id)displayedChartType;
- (id)editingSearchReference;
- (id)endDynamic3DChartDepthChangesForChart:(id)arg1;
- (void)enterChartDataEditor:(id)arg1;
- (void)extendSelectionWithPath:(id)arg1 forInfo:(id)arg2;
- (id)firstChartInfo;
- (id)firstLayout;
- (BOOL)forceCanvasTextEditingToEnd;
- (void)forceDataEditingToEnd;
- (BOOL)hasAxisLabelsSelection;
- (BOOL)hasAxisSeriesLabelsSelection;
- (BOOL)hasAxisTitleSelection;
- (BOOL)hasChartDataSetNameSelection;
- (BOOL)hasChartTitleSelection;
- (BOOL)hasErrorBarSelection;
- (BOOL)hasLegendSelection;
- (BOOL)hasSeriesSelection;
- (BOOL)hasSeriesValueLabelSelection;
- (BOOL)hasTrendLineEquationSelection;
- (BOOL)hasTrendLineR2Selection;
- (BOOL)hasTrendLineSelection;
- (id)imageForPreset:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)inspectorAxisID;
- (id)localizedValueLabelsTabName;
- (id)model;
- (id)moreOptionsTitle;
- (void)multiplyAllFontSizesBy:(float)arg1;
- (id)optionalTopSectionCellArrayForPresetPane:(id)arg1;
- (id)p_allNoncompatiblePathTypesForPathType:(id)arg1 info:(id)arg2;
- (id)p_allSelectionPathsForPathType:(id)arg1 info:(id)arg2;
- (int)p_calculateNewToggleTextProperty:(int)arg1 onValue:(int)arg2 offValue:(int)arg3;
- (int)p_canDoShowOrHideSeriesNames:(id)arg1;
- (int)p_canDoShowOrHideSeriesValueLabels:(id)arg1;
- (int)p_canPerformChangeChartType:(id)arg1;
- (int)p_canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)p_canPerformFormatActions:(SEL)arg1 withSender:(id)arg2;
- (int)p_canPerformShowHideActions:(id)arg1 isEnabled:(BOOL)arg2 showStr:(id)arg3 hideStr:(id)arg4 property:(int)arg5 styleOwner:(id)arg6;
- (int)p_canPerformShowHideAxisActions:(id)arg1 chartDrawableInfo:(id)arg2 isEnabled:(BOOL)arg3 showStr:(id)arg4 hideStr:(id)arg5 property:(int)arg6 axisType:(int)arg7 ordinal:(unsigned int)arg8;
- (int)p_canPerformShowHideSeriesActions:(id)arg1 chartDrawableInfo:(id)arg2 isEnabled:(BOOL)arg3 showStr:(id)arg4 hideStr:(id)arg5 property:(int)arg6;
- (int)p_canPerformShowOrHideChartDataEditor:(id)arg1;
- (int)p_canPerformSubselectionEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)p_canShowChartDataEditor;
- (id)p_chartRepsForInfos:(id)arg1;
- (unsigned int)p_currentChartSegmentIndex:(id)arg1;
- (BOOL)p_isInSubselectionMode;
- (id)p_layoutForInfo:(id)arg1;
- (void)p_notifyRepsEditorIsDeselectingInfos:(id)arg1;
- (void)p_notifyRepsEditorIsSelectingInfos:(id)arg1;
- (id)p_orderedChartTypeArray;
- (id)p_pathTypesNotSupportedForSelection;
- (void)p_postCommand:(id)arg1;
- (void)p_postSyncCommand:(id)arg1;
- (void)p_removeSubselectionStateForInfos:(id)arg1;
- (id)p_selectedArgumentsByInfoOfType:(id)arg1;
- (id)p_selectedIndexesByInfoOfType:(id)arg1;
- (void)p_sendKVONotificationForSubselectionChangeOfType:(id)arg1 forWillNotDid:(BOOL)arg2;
- (void)p_setAllSeriesProperty:(int)arg1 toValue:(id)arg2 onChart:(id)arg3 groupOpen:(BOOL*)arg4;
- (void)p_setAllSeriesProperty:(int)arg1 toValue:(id)arg2;
- (void)p_setInfoObject:(id)arg1 forProperty:(int)arg2;
- (void)p_subselectionStateChangedForInfo:(id)arg1;
- (void)p_subselectionStateWillChangeForInfo:(id)arg1;
- (void)p_testAndSetAllSeriesFloatProperty:(int)arg1 toValue:(id)arg2;
- (void)p_testAndSetAllSeriesIntProperty:(int)arg1 toValue:(id)arg2;
- (void)p_testAndSetBool:(BOOL)arg1 forAxisID:(id)arg2 withProperty:(int)arg3;
- (void)p_testAndSetFloat:(float)arg1 forAxisID:(id)arg2 withProperty:(int)arg3;
- (void)p_testAndSetInt:(int)arg1 forAxisID:(id)arg2 withProperty:(int)arg3;
- (void)p_testAndSetSelectedSeriesIntProperty:(int)arg1 toValue:(id)arg2;
- (void)p_testUserMinMaxProperty:(int)arg1 andSetDouble:(double)arg2 forAxisID:(id)arg3;
- (void)p_toggleTextProperty:(int)arg1 onValue:(int)arg2 offValue:(int)arg3;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectParent:(id)arg1;
- (void)selectPath:(id)arg1 forInfo:(id)arg2;
- (id)selectedAxisLabelsAxisIDsByInfo;
- (id)selectedAxisSeriesLabelsAxisIDsByInfo;
- (id)selectedAxisTitleAxisIDsByInfo;
- (id)selectedCategoryAxisIDsByInfo;
- (id)selectedChartDataSetNameIndexesByInfo;
- (id)selectedChartTitleIndexesByInfo;
- (id)selectedDataSetNameIndexesByInfo;
- (id)selectedErrorBarGroupsByInfo;
- (id)selectedIndexesOfType:(id)arg1 forInfo:(id)arg2;
- (id)selectedLegendsIndexesByInfo;
- (id)selectedPathsOfType:(id)arg1 forInfo:(id)arg2;
- (id)selectedSeriesIndexesByInfo;
- (id)selectedSeriesValueLabelIndexesByInfo;
- (id)selectedTrendLineEquationIndexesByInfo;
- (id)selectedTrendLineIndexesByInfo;
- (id)selectedTrendLineR2IndexesByInfo;
- (id)selectedValueAxisIDsByInfo;
- (id)selection;
- (void)setAllFontsToFamilyNamed:(id)arg1;
- (void)setAxisForSelectedSeries:(int)arg1;
- (void)setBevelEdges:(BOOL)arg1;
- (void)setBubbleDimensionType:(int)arg1;
- (void)setChartLabelExplosion:(float)arg1 labelsOn:(BOOL)arg2;
- (void)setChartLabelPosition:(int)arg1 useSelection:(BOOL)arg2;
- (void)setChartTitleAlignment:(int)arg1;
- (BOOL)setChartType:(id)arg1;
- (void)setColumnShape:(int)arg1;
- (void)setConnectedLineType:(int)arg1 setShowLine:(BOOL)arg2 useSelection:(BOOL)arg3;
- (void)setDisplayedChartType:(id)arg1;
- (void)setDynamic3DChartDepthValue:(float)arg1 forChart:(id)arg2;
- (void)setInfos:(id)arg1;
- (void)setInspectorAxisID:(id)arg1;
- (void)setLabelPosition:(int)arg1 forAxisID:(id)arg2;
- (void)setLabelRotation:(float)arg1 forAxisID:(id)arg2;
- (void)setMajorGridCount:(int)arg1 forAxisID:(id)arg2;
- (void)setMaxUserValue:(double)arg1 forAxisID:(id)arg2;
- (void)setMinUserValue:(double)arg1 forAxisID:(id)arg2;
- (void)setMinorGridCount:(int)arg1 forAxisID:(id)arg2;
- (void)setMultiDataControlType:(int)arg1;
- (void)setMultiDataSetNameLocation:(int)arg1;
- (void)setNumberFormat:(id)arg1 forAxisID:(id)arg2;
- (void)setNumberFormatType:(int)arg1 forAxisID:(id)arg2;
- (void)setNumberOfDecades:(int)arg1 forAxisID:(id)arg2;
- (void)setScale:(int)arg1 forAxisID:(id)arg2;
- (void)setSelection:(id)arg1 withFlags:(unsigned int)arg2;
- (void)setSelection:(id)arg1;
- (void)setSelectionPaths:(id)arg1 forPathType:(id)arg2 info:(id)arg3;
- (void)setSelectionWithSearchReference:(id)arg1;
- (void)setSeriesLabelValueAxis:(int)arg1;
- (void)setSeriesNumberFormat:(id)arg1 withFormatType:(int)arg2;
- (void)setSeriesNumberFormat:(id)arg1;
- (void)setSeriesNumberFormatType:(int)arg1;
- (void)setSeriesPercentNumberFormat:(id)arg1;
- (void)setSeriesType:(id)arg1;
- (void)setShowChartBorder:(BOOL)arg1;
- (void)setShowChartLegend:(BOOL)arg1;
- (void)setShowChartTitle:(BOOL)arg1;
- (void)setShowHiddenData:(BOOL)arg1;
- (void)setShowLabels:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowLine:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMajorGridlines:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMajorTickmarks:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMinorGridlines:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowMinorTickmarks:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowNegativeBubbles:(BOOL)arg1;
- (void)setShowSeriesLabels:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setShowSeriesLabels:(BOOL)arg1;
- (void)setShowTitle:(BOOL)arg1 forAxisID:(id)arg2;
- (void)setString:(id)arg1 forSelection:(id)arg2;
- (void)setSymbolType:(int)arg1 useSelection:(BOOL)arg2;
- (void)setTextEditor:(id)arg1;
- (void)setTextProperties:(id)arg1 forSelection:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 onSubselectionType:(id)arg3;
- (BOOL)shouldEndEditingToBeginEditingRep:(id)arg1;
- (void)showOrHideChartBorders:(id)arg1;
- (void)showOrHideChartDataEditor:(id)arg1;
- (void)showOrHideChartLegend:(id)arg1;
- (void)showOrHideChartTitle:(id)arg1;
- (void)showOrHideSeriesNames:(id)arg1;
- (void)showOrHideSeriesValueLabels:(id)arg1;
- (void)showOrHideXAxisLabels:(id)arg1;
- (void)showOrHideXAxisTitle:(id)arg1;
- (void)showOrHideYAxis2Labels:(id)arg1;
- (void)showOrHideYAxis2Title:(id)arg1;
- (void)showOrHideYAxisLabels:(id)arg1;
- (void)showOrHideYAxisTitle:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (void)stylePresetInspector:(id)arg1 didSelectPresetForNonDestructiveApply:(id)arg2;
- (id)stylePresetKindForInspector;
- (id)textEditor;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleSelectionOfPath:(id)arg1 forInfo:(id)arg2;
- (id)topLevelInspectorAutosaveName;
- (id)topLevelInspectorViewControllers;
- (id)tuplesToSetSeriesType:(id)arg1 selectedSeries:(id)arg2 forInfo:(id)arg3;
- (void)underline:(id)arg1;
- (float)viewScaleForSelectionWithTargetPointSize:(float)arg1;
- (void)willResignCurrentEditor;

@end
