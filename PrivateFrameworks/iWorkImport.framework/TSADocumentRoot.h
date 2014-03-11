/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSADocumentRootDelegate>, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSAFunctionBrowserState, TSCECalculationEngine, TSKViewState, TSTCustomFormatList;

@interface TSADocumentRoot : TSKDocumentRoot <TSKImportExportDelegate> {
    TSCECalculationEngine *_calculationEngine;
    NSString *_creationLanguage;
    unsigned int _creationLanguageWritingDirection;
    <TSADocumentRootDelegate> *_delegate;
    TSAFunctionBrowserState *_functionBrowserState;
    BOOL _hasPreUFFVersion;
    BOOL _needsMovieCompatibilityUpgrade;
    int _needsToCaptureViewState;
    TSTCustomFormatList *_tablesCustomFormatList;
    NSString *_templateIdentifier;
    NSMutableDictionary *_upgradeState;
    TSKViewState *_viewState;
    NSMutableSet *_warnings;
    NSArray *buildVersionHistory;
}

@property(copy) NSArray * buildVersionHistory;
@property(readonly) NSString * defaultDraftName;
@property <TSADocumentRootDelegate> * delegate;
@property(getter=isDocumentEditedSinceLastSave,readonly) BOOL documentEditedSinceLastSave;
@property BOOL hasPreUFFVersion;
@property(readonly) BOOL importingDesignDemoDoc;
@property(readonly) BOOL isBrowsingVersions;
@property(readonly) NSSet * missingFontWarningMessages;
@property(readonly) NSString * name;
@property BOOL needsMovieCompatibilityUpgrade;
@property(copy) NSString * templateIdentifier;
@property(readonly) TSKViewState * viewState;

+ (id)buildVersionHistoryPath;
+ (id)buildVersionHistoryPathPreUFF;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3;
+ (struct CGSize { float x1; float x2; })previewImageMaxSizeForType:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })previewImageSizeForType:(unsigned int)arg1;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (id)scaledPreviewImageForType:(unsigned int)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(id)arg7;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;

- (long long)addObserverForICloudTeardownWithBlock:(id)arg1;
- (void)addWarning:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (id)buildVersionHistory;
- (id)calculationEngine;
- (id)captureViewState;
- (void)captureViewStateIfNeeded;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2;
- (id)createViewStateRoot;
- (id)creationLanguage;
- (id)customFormatList;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (id)defaultDraftName;
- (id)delegate;
- (void)didEnterBackground;
- (void)didSaveWithEncryptionChange;
- (id)documentCachePath;
- (void)documentDidLoad;
- (void)documentDidSave;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3;
- (void)fulfillPasteboardPromises;
- (id)functionBrowserState;
- (BOOL)hasICloudConflict;
- (BOOL)hasPreUFFVersion;
- (void)importerDidFinish:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(BOOL)arg2;
- (void)invalidateViewState;
- (BOOL)isDocumentEditedSinceLastSave;
- (BOOL)isMultiPageForQuickLook;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; boolx11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (id)missingFontWarningMessages;
- (id)name;
- (id)namedTextStyles;
- (BOOL)needsMovieCompatibilityUpgrade;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3;
- (struct CGImageSource { }*)newImageSourceForDocumentCachePath:(id)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 override:(id)arg3;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned int*)arg3;
- (void)p_registerAllFormulasAfterImport;
- (void)p_removeStyles:(id)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)p_updateCreationLanguage;
- (id)packageDataForWrite;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)prepareForSavingAsTemplate;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (void)prepareToGeneratePreview;
- (id)previewImage;
- (id)previewImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)protected_defaultTextPresetOrdering;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg1;
- (id)referencedStylesOfClass:(Class)arg1;
- (void)removeWarning:(id)arg1;
- (void)resumeBackgroundActivities;
- (void)resumeThumbnailing;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; boolx11; int x12; unsigned int x13[1]; }*)arg1 archiver:(id)arg2;
- (void)setBuildVersionHistory:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (void)setCreationLanguage:(id)arg1;
- (void)setCustomFormatList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (void)setHasPreUFFVersion:(BOOL)arg1;
- (void)setNeedsMovieCompatibilityUpgrade:(BOOL)arg1;
- (void)setTemplateIdentifier:(id)arg1;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (void)stashUpgradeState:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; boolx11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (id)templateIdentifier;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (void)updateWritingDirection:(unsigned int)arg1;
- (id)upgradeState;
- (void)upgradeTextStylesForUnity;
- (id)viewState;
- (id)warnings;
- (void)willClose;
- (void)willEnterForeground;
- (BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned int)writingDirection;

@end
