/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLCloudSharedAlbumProtocol>, CLLocation, NSArray, NSData, NSDate, NSDictionary, NSError, NSManagedObject, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, PLCloudFeedAssetsEntry, PLManagedAsset, PLMoment, UIImage;

@interface PLManagedAsset : PLManagedObject <UIActivityItemSource> {
    BOOL _didPersistAvalanche;
    BOOL _didPrepareForDeletion;
    BOOL _disableDupeAnalysis;
    BOOL _disableFileSystemPersistency;
    BOOL _isRegisteredForChanges;
    BOOL _needsMomentUpdate;
    NSURL *cachedNonPersistedVideoPlaybackURL;
    NSError *cachedNonPersistedVideoPlaybackURLError;
    NSDate *cachedNonPersistedVideoPlaybackURLExpiration;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

@property(retain) NSManagedObject * additionalAttributes;
@property(retain) NSOrderedSet * adjustments;
@property(retain) NSSet * albums;
@property(retain) NSSet * albumsBeingKeyAssetFor;
@property(retain) NSSet * albumsBeingSecondaryKeyAssetFor;
@property(retain) NSSet * albumsBeingTertiaryKeyAssetFor;
@property(readonly) NSSet * allFileURLs;
@property(readonly) NSArray * allUniformTypeIdentifiers;
@property(readonly) BOOL allowsWallpaperEditing;
@property(readonly) NSURL * assetURL;
@property int avalanchePickType;
@property(retain) NSString * avalancheUUID;
@property(retain) NSURL * cachedNonPersistedVideoPlaybackURL;
@property(retain) NSError * cachedNonPersistedVideoPlaybackURLError;
@property(retain) NSDate * cachedNonPersistedVideoPlaybackURLExpiration;
@property(retain) NSString * cloudAssetGUID;
@property(retain) NSString * cloudBatchID;
@property(retain) NSDate * cloudBatchPublishDate;
@property(retain) NSString * cloudCollectionGUID;
@property(retain) NSOrderedSet * cloudComments;
@property(retain) NSNumber * cloudDownloadRequests;
@property(retain) PLCloudFeedAssetsEntry * cloudFeedAssetsEntry;
@property BOOL cloudHasCommentsByMe;
@property BOOL cloudHasCommentsConversation;
@property BOOL cloudHasUnseenComments;
@property BOOL cloudIsDeletable;
@property BOOL cloudIsMyAsset;
@property(retain) NSDate * cloudLastViewedCommentDate;
@property(readonly) NSString * cloudOwnerEmail;
@property(readonly) NSString * cloudOwnerFirstName;
@property(readonly) NSString * cloudOwnerFullName;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(readonly) NSString * cloudOwnerLastName;
@property short cloudPlaceholderKind;
@property(retain) NSDate * cloudServerPublishDate;
@property(readonly) <PLCloudSharedAlbumProtocol> * cloudShareAlbum;
@property BOOL complete;
@property(retain) NSString * creatorBundleID;
@property(retain) NSDate * dateCreated;
@property(retain) NSString * directory;
@property BOOL disableDupeAnalysis;
@property BOOL disableFileSystemPersistency;
@property double duration;
@property(retain) NSString * editorBundleID;
@property unsigned int effectiveThumbnailIndex;
@property(readonly) NSData * embeddedThumbnailData;
@property short embeddedThumbnailHeight;
@property int embeddedThumbnailLength;
@property int embeddedThumbnailOffset;
@property short embeddedThumbnailWidth;
@property long long externalUsageIntent;
@property(retain) NSSet * faces;
@property(readonly) NSString * fileExtension;
@property(readonly) NSSet * filePathsWithoutThumbs;
@property(readonly) NSURL * fileURLForLargeThumbnailFile;
@property(readonly) NSURL * fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSURL * fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSURL * fileURLForThumbnailFile;
@property(retain) NSString * filename;
@property struct { double x1; double x2; } gpsCoordinate;
@property(readonly) BOOL hasEmbeddedThumbnail;
@property(readonly) BOOL hasSlalomRegions;
@property short height;
@property short highDynamicRangeType;
@property struct CGSize { float x1; float x2; } imageSize;
@property(retain) NSString * importSessionID;
@property(readonly) UIImage * inflightImage;
@property(retain) UIImage * inflightImageInMemory;
@property(retain) NSString * inflightImagePath;
@property(retain) UIImage * inflightIndexSheetImage;
@property(retain) NSDictionary * inflightMetadata;
@property(readonly) BOOL isAudio;
@property(readonly) BOOL isCloudSharedAsset;
@property(readonly) BOOL isHDVideo;
@property BOOL isInFlight;
@property(readonly) BOOL isJPEG;
@property(readonly) BOOL isMogul;
@property(readonly) BOOL isPhoto;
@property(readonly) BOOL isPhotoStreamPhoto;
@property(readonly) BOOL isStreamedVideo;
@property(readonly) BOOL isUsedByiPhoto;
@property(readonly) BOOL isVideo;
@property short kind;
@property short kindSubtype;
@property(retain) NSOrderedSet * likeComments;
@property(retain) NSOrderedSet * likeComments;
@property(retain) CLLocation * location;
@property(retain) NSData * locationData;
@property(readonly) NSURL * mainFileURL;
@property(readonly) NSString * mimeType;
@property(retain) NSDate * modificationDate;
@property(retain) PLMoment * moment;
@property BOOL needsMomentUpdate;
@property short orientation;
@property(retain) PLManagedAsset * originalAsset;
@property(retain) NSString * originalAssetsUUID;
@property(retain) NSString * originalFilename;
@property int originalFilesize;
@property(retain) NSData * originalHash;
@property short originalHeight;
@property short originalOrientation;
@property(retain) NSString * originalPath;
@property short originalWidth;
@property(readonly) NSString * pathForFlattenedVideoFile;
@property(readonly) NSString * pathForImageFile;
@property(readonly) NSString * pathForLargeDisplayableImageFile;
@property(readonly) NSString * pathForLargeThumbnailFile;
@property(readonly) NSString * pathForMediumThumbnailFile;
@property(readonly) NSString * pathForMetadataDirectory;
@property(readonly) NSString * pathForOriginalFile;
@property(readonly) NSString * pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedThumbnail;
@property(readonly) NSString * pathForPrebakedWildcatThumbnailsFile;
@property(readonly) NSString * pathForSlalomRegionsArchive;
@property(readonly) NSString * pathForTrimmedVideoFile;
@property(readonly) NSString * pathForVideoFile;
@property(readonly) NSString * pathForVideoPreviewFile;
@property(readonly) NSString * pathForXMPFile;
@property(retain) NSString * publicGlobalUUID;
@property(retain) NSData * reverseLocationData;
@property BOOL reverseLocationDataIsValid;
@property short savedAssetType;
@property(retain) NSSet * sidecarFiles;
@property(readonly) NSArray * slalomRegions;
@property double sortToken;
@property(readonly) NSArray * sortedSidecarFiles;
@property(readonly) NSString * textBadgeString;
@property int thumbnailIndex;
@property(readonly) unsigned int totalCommentsCount;
@property(retain) NSString * uniformTypeIdentifier;
@property BOOL userCloudSharedLiked;
@property(copy) NSString * utiType;
@property(retain) id uuid;
@property short visibilityState;
@property(readonly) UIImage * wallpaperFullScreenImage;
@property short width;

+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (short)_correctedOrientation:(short)arg1;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6 isPlaceholder:(BOOL)arg7;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
+ (short)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithSavedAssetType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 includePendingChanges:(BOOL)arg2 inLibrary:(id)arg3;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id*)arg2 creationDateString:(id*)arg3;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (unsigned int)countAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countUsedAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)diagnosticFilePathForMainFilePath:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)extensionForLargeThumbnailFile;
+ (id)extensionForMediumThumbnailFile;
+ (void)extractDirectory:(id*)arg1 andFilename:(id*)arg2 fromMainFileURL:(id)arg3;
+ (int)feedEntryThumbnailFormat;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (int)formatForThumbnailGeneration;
+ (int)fullSizeImageFormat;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (int)indexSheetBakedFormat;
+ (int)indexSheetUnbakedFormat;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6 isPlaceholder:(BOOL)arg7;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (BOOL)isValidFileExtensionForImport:(id)arg1;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingMimeType;
+ (id)keyPathsForValuesAffectingUtiType;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)largestNonJPEGThumbnailFormat;
+ (struct { double x1; double x2; })locationFromAVAsset:(id)arg1;
+ (struct { double x1; double x2; })locationFromImageProperties:(id)arg1;
+ (id)locationFromLocationData:(id)arg1;
+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (int)masterThumbnailFormat;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)persistedRecentlyUsedGUIDS;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id*)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (int)portraitScrubberThumbnailFormat;
+ (int)posterThumbnailFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)recentlyUsedGUIDsPath;
+ (id)slalomRegionsPathForMainFilePath:(id)arg1;
+ (id)sortedCloudSharedAssetsWithPlaceholderKind:(short)arg1 ascending:(BOOL)arg2 inLibrary:(id)arg3;
+ (int)thumbnailFormat;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id*)arg2 sidecarIndex:(id*)arg3;
+ (id)uuidFromAssetURL:(id)arg1;
+ (int)wildcatCachedStackImageFormat;
+ (int)wildcatIndexSheetFormat;
+ (int)wildcatPhotoScrubberFormat;
+ (int)wildcatStackFormat;

- (id)_compactDebugDescription;
- (void)_computePreCropThumbnailSize:(struct CGSize { float x1; float x2; }*)arg1 andPostCropSize:(struct CGSize { float x1; float x2; }*)arg2 forOrientedOriginalSize:(struct CGSize { float x1; float x2; })arg3 andCroppedSize:(struct CGSize { float x1; float x2; })arg4 isLargeThumbnail:(BOOL)arg5;
- (BOOL)_deviceSupportsMogul;
- (BOOL)_hasPanoramaDimensions;
- (id)_highDynamicRangeTypeDescription;
- (BOOL)_isSavedAssetTypeValid:(short)arg1;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (id)_kindDescription;
- (void)_persistAvalancheToFilesystem;
- (id)_prettyDescription;
- (id)_savedAssetTypeDescription;
- (id)_serializedPropertyDataFromFilter:(id)arg1;
- (id)_settingsDictionaryFromFilter:(id)arg1;
- (id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)_writeXMPHeaderWithProperties:(id)arg1 orientation:(int)arg2;
- (void)_writeXMPSidecarWithProperties:(id)arg1 orientation:(int)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)addAdjustment;
- (void)addComment:(id)arg1;
- (id)addFaceWithRelativeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)adjustmentsXMPRepresentation;
- (id)allFileExtensions;
- (id)allFileURLs;
- (id)allUniformTypeIdentifiers;
- (BOOL)allowsWallpaperEditing;
- (id)assetURL;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)assetURLWithExtension:(id)arg1;
- (id)avalanchePickDescription;
- (BOOL)avalanchePickTypeIsVisible;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (id)cachedNonPersistedVideoPlaybackURL;
- (id)cachedNonPersistedVideoPlaybackURLError;
- (id)cachedNonPersistedVideoPlaybackURLExpiration;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canPerformSharingActions;
- (int)cloudCommentsStatusForOwnedAsset:(BOOL)arg1;
- (BOOL)cloudHasSameOwnerAsAsset:(id)arg1;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (id)cloudShareAlbum;
- (void)copyToPasteboard;
- (BOOL)couldBeStoredInDCIM;
- (id)creatorBundleID;
- (void)dealloc;
- (void)delete;
- (void)deleteComment:(id)arg1;
- (void)deleteFromDatabaseOnly;
- (void)didSave;
- (BOOL)disableDupeAnalysis;
- (BOOL)disableFileSystemPersistency;
- (double)duration;
- (id)editorBundleID;
- (unsigned int)effectiveThumbnailIndex;
- (id)embeddedThumbnailData;
- (short)embeddedThumbnailHeight;
- (int)embeddedThumbnailLength;
- (int)embeddedThumbnailOffset;
- (short)embeddedThumbnailWidth;
- (long long)externalUsageIntent;
- (id)faceWithIdentifier:(short)arg1;
- (id)fileExtension;
- (id)fileExtensionForService:(id)arg1;
- (id)filePathsWithoutThumbs;
- (id)fileURLForLargeThumbnailFile;
- (id)fileURLForMediumThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSidecarFile:(id)arg1;
- (id)fileURLForThumbnailFile;
- (id)filteredImage:(id)arg1 withCIContext:(id)arg2;
- (void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(struct CGImageSource { }*)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(struct __CFDictionary { }*)arg5 updateExistingLargePreview:(BOOL)arg6;
- (void)generateLargeThumbnailFileIfNecessary;
- (void)generateThumbnailsWithImageSource:(struct CGImageSource { }*)arg1 imageData:(id)arg2 updateExistingLargePreview:(BOOL)arg3 allowMediumPreview:(BOOL)arg4 outSmallThumbnail:(id*)arg5 outLargeThumbnail:(id*)arg6;
- (void)getLargestAvailableDataRepresentation:(id*)arg1 type:(id*)arg2;
- (struct { double x1; double x2; })gpsCoordinate;
- (BOOL)hasEmbeddedThumbnail;
- (BOOL)hasGPS;
- (BOOL)hasImageFile;
- (BOOL)hasJustBeenHidden;
- (BOOL)hasJustBeenShown;
- (BOOL)hasSlalomRegions;
- (BOOL)hasThumbnail;
- (short)highDynamicRangeType;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)importSessionID;
- (id)indexSheetImage;
- (id)inflightImage;
- (id)inflightImageInMemory;
- (id)inflightImagePath;
- (id)inflightIndexSheetImage;
- (id)inflightMetadata;
- (BOOL)isAudio;
- (BOOL)isAvalanchePhoto;
- (BOOL)isAvalancheStackPhoto;
- (BOOL)isCloudPlaceholder;
- (BOOL)isCloudSharedAsset;
- (BOOL)isDeletableFromAssetsLibrary;
- (BOOL)isEditable;
- (BOOL)isEditableFromAssetsLibrary;
- (BOOL)isHDVideo;
- (BOOL)isInFlight;
- (BOOL)isInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
- (BOOL)isJPEG;
- (BOOL)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (BOOL)isMogul;
- (BOOL)isPanorama;
- (BOOL)isPhoto;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)isSavedPhotosAsset;
- (BOOL)isStreamedVideo;
- (BOOL)isUsedByiPhoto;
- (BOOL)isVideo;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (id)location;
- (id)mainFileURL;
- (id)mimeType;
- (id)mimeTypeForService:(id)arg1;
- (id)mutableAdjustments;
- (id)mutableAlbumsBeingKeyAssetFor;
- (id)mutableAlbumsBeingSecondaryKeyAssetFor;
- (id)mutableAlbumsBeingTertiaryKeyAssetFor;
- (id)mutableSidecarFiles;
- (BOOL)needsMomentUpdate;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)newFullSizeImage;
- (id)newLowResolutionFullScreenImage;
- (id)originalAsset;
- (id)originalAssetsUUID;
- (id)originalFilename;
- (int)originalFilesize;
- (id)originalHash;
- (short)originalHeight;
- (short)originalOrientation;
- (id)originalPath;
- (short)originalWidth;
- (id)pasteBoardRepresentation;
- (id)pathForDiagnosticFile;
- (id)pathForFlattenedVideoFile;
- (id)pathForImageFile;
- (id)pathForLargeDisplayableImageFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForMediumThumbnailFile;
- (id)pathForMetadataDirectory;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)pathForOriginalFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForSlalomRegionsArchive;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (id)pathForXMPFile;
- (id)pathToOriginalVideoFile;
- (void)persistMetadataToFilesystem;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (void)prepareForDeletion;
- (id)previewFrameImageFromDatabase;
- (id)publicGlobalUUID;
- (void)registerForChanges;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1;
- (id)reverseLocationData;
- (BOOL)reverseLocationDataIsValid;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(short)arg2 imageSource:(struct CGImageSource {}**)arg3 imageData:(id*)arg4;
- (void)setCachedNonPersistedVideoPlaybackURL:(id)arg1;
- (void)setCachedNonPersistedVideoPlaybackURLError:(id)arg1;
- (void)setCachedNonPersistedVideoPlaybackURLExpiration:(id)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (void)setDisableDupeAnalysis:(BOOL)arg1;
- (void)setDisableFileSystemPersistency:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditorBundleID:(id)arg1;
- (void)setEffectiveThumbnailIndex:(unsigned int)arg1;
- (void)setEmbeddedThumbnailHeight:(short)arg1;
- (void)setEmbeddedThumbnailLength:(int)arg1;
- (void)setEmbeddedThumbnailOffset:(int)arg1;
- (void)setEmbeddedThumbnailWidth:(short)arg1;
- (void)setExternalUsageIntent:(long long)arg1;
- (void)setGpsCoordinate:(struct { double x1; double x2; })arg1;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (void)setHighDynamicRangeType:(short)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setInflightImageInMemory:(id)arg1;
- (void)setInflightImagePath:(id)arg1;
- (void)setInflightIndexSheetImage:(id)arg1;
- (void)setInflightMetadata:(id)arg1;
- (void)setIsInFlight:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setNeedsMomentUpdate:(BOOL)arg1;
- (void)setOriginalAsset:(id)arg1;
- (void)setOriginalAssetsUUID:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginalFilesize:(int)arg1;
- (void)setOriginalHash:(id)arg1;
- (void)setOriginalHeight:(short)arg1;
- (void)setOriginalOrientation:(short)arg1;
- (void)setOriginalPath:(id)arg1;
- (void)setOriginalWidth:(short)arg1;
- (void)setPersistedFileSystemAttributes;
- (void)setPublicGlobalUUID:(id)arg1;
- (void)setReverseLocationData:(id)arg1;
- (void)setReverseLocationDataIsValid:(BOOL)arg1;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (void)setUserCloudSharedLiked:(BOOL)arg1;
- (void)setUtiType:(id)arg1;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1;
- (id)shortenedFilePath;
- (id)slalomRegions;
- (id)slalomRegionsUseDefaults:(BOOL)arg1;
- (id)sortedSidecarFiles;
- (id)textBadgeString;
- (id)thumbnailIdentifier;
- (unsigned int)totalCommentsCount;
- (void)unregisterForChanges;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (BOOL)userCloudSharedLiked;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (void)userReadAllCloudSharedComments;
- (id)utiType;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (id)wallpaperFullScreenImage;
- (void)willSave;
- (void)willTurnIntoFault;
- (void)writeXMPWithProperties:(id)arg1 orientation:(int)arg2;

@end
