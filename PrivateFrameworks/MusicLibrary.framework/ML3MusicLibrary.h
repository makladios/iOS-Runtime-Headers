/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3AccountCacheDatabase, ML3ArtworkUtility, ML3Container, ML3DatabaseConnectionPool, ML3DatabaseMetadata, NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SBCPlaybackPositionServiceProxy, _LibraryNotification;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {
    ML3AccountCacheDatabase *_accountCacheDatabase;
    ML3ArtworkUtility *_artworkUtility;
    NSObject<OS_dispatch_queue> *_atomicityQueue;
    ML3DatabaseConnectionPool *_connectionPool;
    NSString *_databasePath;
    _LibraryNotification *_displayValuesNotify;
    BOOL _hasEverConnectedTo;
    _LibraryNotification *_invisiblePropertyNotify;
    BOOL _isHomeSharingLibrary;
    BOOL _isHomeSharingLibraryLoaded;
    BOOL _keepPresignedValidyAfterVerification;
    _LibraryNotification *_libraryChangedNotify;
    NSArray *_libraryContainerFilterPredicates;
    NSArray *_libraryEntityFilterPredicates;
    NSString *_libraryUID;
    _LibraryNotification *_libraryUIDNotify;
    id _loggingObserver;
    id _mcSettingsObserver;
    _LibraryNotification *_nonContentsNotify;
    NSCountedSet *_notifyNamesToIgnore;
    NSMutableDictionary *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMutableDictionary *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMutableDictionary *_pendingLocalNotificationsToPost;
    NSMutableArray *_pendingNotifyPostNames;
    BOOL _reloadForMediaServiceNeeded;
    struct iPhoneSortKeyBuilder { } *_sortKeyBuilder;
    _LibraryNotification *_syncGenerationNotify;
    int _systemLanguageChangedToken;
    SBCPlaybackPositionServiceProxy *_uppService;
    int _willDeleteDatabaseNotifyToken;
}

@property(retain) ML3ArtworkUtility * artworkUtility;
@property(readonly) long long autoFilledTracksTotalSize;
@property(retain) ML3DatabaseConnectionPool * connectionPool;
@property(readonly) long long currentContentRevision;
@property(readonly) ML3Container * currentDevicePurchasesPlaylist;
@property(readonly) long long currentRevision;
@property(readonly) ML3DatabaseMetadata * databaseInfo;
@property(retain) NSString * databasePath;
@property(readonly) BOOL hasEverConnectedToDatabase;
@property BOOL isHomeSharingLibrary;
@property BOOL keepPresignedValidyAfterVerification;
@property(retain) NSArray * libraryContainerFilterPredicates;
@property(retain) NSArray * libraryEntityFilterPredicates;
@property(copy) NSString * libraryUID;
@property(readonly) NSArray * localizedSectionIndexTitles;
@property(readonly) BOOL mediaRestrictionEnabled;
@property(readonly) long long persistentID;
@property(readonly) NSArray * preferredAudioTracks;
@property(readonly) NSArray * preferredSubtitleTracks;
@property(readonly) BOOL supportsUbiquitousPlaybackPositions;
@property long long syncGenerationID;

+ (id)_purgeableTrackPredicateWithUrgency:(unsigned int)arg1;
+ (id)allPragmaSQL;
+ (id)allSchemaSQL;
+ (id)allTables;
+ (id)allTriggersSQL;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3 progressHandler:(id)arg4;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)buildDatabaseTablesUsingConnection:(id)arg1 popuplateDatabaseTablesOnConnectionBlock:(id)arg2;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (BOOL)createIndexesUsingConnection:(id)arg1;
+ (BOOL)createTriggersUsingConnection:(id)arg1;
+ (int)currentUserVersion;
+ (id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2;
+ (BOOL)defaultExcludeFromShuffleForMediaType:(unsigned long)arg1;
+ (BOOL)defaultRememberBookmarkTimeForMediaType:(unsigned long)arg1;
+ (void)disableAutomaticDatabaseArtworkConversion;
+ (void)disableAutomaticDatabaseValidation;
+ (void)disableSharedLibrary;
+ (BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char *)arg2;
+ (BOOL)dropIndexesUsingConnection:(id)arg1;
+ (void)enableAutomaticDatabaseValidation;
+ (void)enumerateSortMapTablesUsingBlock:(id)arg1;
+ (BOOL)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1;
+ (BOOL)importationEnabled;
+ (BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1;
+ (BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
+ (id)indexSchemaSQL;
+ (void)initialize;
+ (id)itemIndexSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)mediaFolderPath;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (BOOL)migrateToCurrentUserVersionUsingConnection:(id)arg1 musicLibrary:(id)arg2;
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1;
+ (id)pathForBaseLocationPath:(long long)arg1;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4;
+ (id)pathForResourceFileOrFolder:(int)arg1;
+ (BOOL)processHasDatabaseWritePermissions;
+ (void)resetArtworkConversionManifestFormatPairs:(id)arg1 usingConnection:(id)arg2;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (void)setImportationEnabled:(BOOL)arg1;
+ (id)sharedLibrary;
+ (id)sharedLibraryDatabasePath;
+ (id)sortMapNewSchemaSQL;
+ (id)sortMapSchemaSQL;
+ (id)storeLinkSchemaSQL;
+ (id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3;
+ (BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2;
+ (BOOL)updateSortMapOnConnection:(id)arg1;
+ (BOOL)updateTrackIntegrityOnConnection:(id)arg1;
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)arg1;
+ (int)userVersionUsingConnection:(id)arg1;

- (void).cxx_destruct;
- (id)_artworkDataForCacheID:(id)arg1 formatID:(unsigned int)arg2 canCreateIfMissing:(BOOL)arg3;
- (id)_artworkMigrator;
- (BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1;
- (void)_configureMediaLibraryDatabaseConnection:(id)arg1;
- (void)_delayableNotifyPost:(id)arg1 localNotificationName:(id)arg2;
- (void)_enqueueLocalNotificationName:(id)arg1 isSourceExternal:(BOOL)arg2;
- (void)_enqueueNotifyPostName:(id)arg1;
- (void)_enumeratePurgeableTracksForUrgency:(unsigned int)arg1 respectSongMattress:(BOOL)arg2 usingBlock:(id)arg3;
- (id)_existingArtworkDataForCacheID:(id)arg1 formatID:(unsigned int)arg2;
- (id)_newGeniusDBConnectionAtPath:(id)arg1;
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)arg1;
- (void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_teardownMediaLibraryDatabaseConnection:(id)arg1;
- (void)_updateDatabaseConnectionsProfilingLevel;
- (void)accessSortKeyBuilder:(id)arg1;
- (id)accountCacheDatabase;
- (long long)addStringToSortMap:(id)arg1;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2;
- (id)artworkDataForCacheID:(id)arg1 formatID:(unsigned int)arg2;
- (id)artworkUtility;
- (long long)autoFilledTracksTotalSize;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned int)arg1 respectSongMattress:(BOOL)arg2;
- (long long)autoFilledTracksTotalSizeWithUrgency:(unsigned int)arg1;
- (BOOL)automaticDatabaseValidationDisabled;
- (void)beginAutoConvertingArtworkFormats;
- (void)beginConvertingArtworkFormatsWithCompletionHandler:(id)arg1;
- (BOOL)buildDatabaseTables;
- (void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(id)arg2;
- (void)checkInDatabaseConnection:(id)arg1;
- (id)checkoutReaderConnection;
- (id)checkoutWriterConnection;
- (BOOL)coerceValidDatabase;
- (BOOL)compactArtwork;
- (id)composerForComposerName:(id)arg1;
- (void)connectionDidOpenDatabase:(id)arg1;
- (void)connectionPool:(id)arg1 createdNewConnection:(id)arg2;
- (id)connectionPool;
- (void)connectionWillCloseDatabase:(id)arg1;
- (void)connectionWillOpenDatabase:(id)arg1;
- (BOOL)createIndexes;
- (long long)currentContentRevision;
- (id)currentDevicePurchasesPlaylist;
- (long long)currentRevision;
- (void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(id)arg2;
- (id)databaseInfo;
- (id)databasePath;
- (void)dealloc;
- (BOOL)deleteAllArtwork;
- (BOOL)deleteAndRecreateDatabaseUsingConnection:(id)arg1;
- (BOOL)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2 deleteAllFromConversionTable:(BOOL)arg3;
- (BOOL)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2;
- (BOOL)deleteArtworkForCacheID:(id)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned int)arg2 respectSongMattress:(BOOL)arg3;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned int)arg2;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (void)deleteFromArtworkConversionForCacheID:(id)arg1 fromFormatID:(unsigned int)arg2 toFormatID:(unsigned int)arg3;
- (void)deletePresignedValidity;
- (BOOL)dropItemIndexes;
- (BOOL)emptyAllTables;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned int)arg2 maximumRevisionType:(int)arg3 usingBlock:(id)arg4;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(id)arg2;
- (BOOL)executeUpdateSQL:(id)arg1;
- (void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(id)arg3;
- (id)genreForGenre:(id)arg1;
- (void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(int)arg2 usingBlock:(id)arg3;
- (long long)getDatabaseFileFreeSpace;
- (id)groupingKeyForString:(id)arg1;
- (id)groupingKeysForStrings:(id)arg1;
- (BOOL)handleDatabaseValidation;
- (BOOL)handlePreprocessDatabase;
- (BOOL)handleSchemaUpgrade;
- (BOOL)hasArtworkForCacheID:(id)arg1 ensureArtworkFileExists:(BOOL)arg2;
- (BOOL)hasArtworkForCacheID:(id)arg1;
- (BOOL)hasEverConnectedToDatabase;
- (BOOL)hasPresignedValidity;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(id)arg3;
- (id)initWithPath:(id)arg1;
- (BOOL)insertArtworkWithImageData:(id)arg1 artworkCreationDirective:(struct { BOOL x1; unsigned int x2; })arg2 forCacheID:(id)arg3;
- (BOOL)insertArtworkWithImageData:(id)arg1 forCacheID:(id)arg2 forFormatID:(unsigned int)arg3;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2;
- (id)insertStringsIntoSortMap:(id)arg1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)isHomeSharingLibrary;
- (BOOL)keepPresignedValidyAfterVerification;
- (id)libraryContainerFilterPredicates;
- (id)libraryEntityFilterPredicates;
- (id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1;
- (id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1;
- (id)libraryUID;
- (void)loadArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2 completionHandler:(id)arg3;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (id)locationKindForKind:(id)arg1;
- (BOOL)mediaRestrictionEnabled;
- (void)migratePresignedValidity;
- (struct { long long x1; int x2; })nameOrderForString:(id)arg1;
- (void)notifyContentsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyInvisiblePropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (void)performDatabaseTransactionWithBlock:(id)arg1;
- (void)performReadOnlyDatabaseTransactionWithBlock:(id)arg1;
- (BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(int)arg3;
- (long long)persistentID;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1 trackValues:(id)arg2;
- (BOOL)populateStaticItemsOfDynamicContainers;
- (id)preferredAudioTracks;
- (id)preferredSubtitleTracks;
- (BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2;
- (void)purgeCloudAssets;
- (void)reconnectToDatabase;
- (void)removeJaliscoTrackData;
- (BOOL)removeLocationsForItemsMissingAssets;
- (void)removeOrphanedTracks;
- (void)removeSagaTrackData;
- (BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2;
- (BOOL)removeSource:(int)arg1;
- (void)removeTombstonesForDeletedItems;
- (BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1;
- (BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1;
- (BOOL)resetAllContents;
- (void)savePlaylists;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (unsigned int)sectionIndexTitleIndexForSectionIndex:(unsigned int)arg1;
- (void)setArtworkUtility:(id)arg1;
- (void)setConnectionPool:(id)arg1;
- (void)setDatabasePath:(id)arg1;
- (void)setIsHomeSharingLibrary:(BOOL)arg1;
- (void)setKeepPresignedValidyAfterVerification:(BOOL)arg1;
- (void)setLibraryContainerFilterPredicates:(id)arg1;
- (void)setLibraryEntityFilterPredicates:(id)arg1;
- (void)setLibraryUID:(id)arg1;
- (void)setSyncGenerationID:(long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (BOOL)supportsUbiquitousPlaybackPositions;
- (long long)syncGenerationID;
- (void)updateArtworkFormatsWithArtworkCreationDirective:(struct { BOOL x1; unsigned int x2; })arg1 forCacheID:(id)arg2;
- (void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)updateSortMap;
- (BOOL)updateSystemPlaylistNamesForCurrentLanguage;
- (void)updateTrackIntegrity;
- (void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (id)uppService;
- (BOOL)validateDatabaseWithTimeout:(double)arg1;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)verifyPresignedValidity;
- (BOOL)writeToDatabaseArtworkForCacheID:(id)arg1 length:(unsigned long)arg2 formatID:(unsigned int)arg3 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;

@end
