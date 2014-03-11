/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUFeedViewControllerSpec, PUPhotoDecoration, PUPhotosGridViewControllerSpec, PUPhotosPanoramaViewControllerSpec, PUPhotosPickerViewControllerSpec, UIImage;

@interface PUAlbumListViewControllerSpec : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    int _albumDeletionConfirmationStyle;
    BOOL _allowsAlbumCountSubtitle;
    BOOL _allowsAlbumOpaqueLabels;
    int _collageFastImageFormat;
    int _collageQualityImageFormat;
    float _collageSpacing;
    PUPhotoDecoration *_emptyStackPhotoDecoration;
    int _fastImageFormat;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
    PUPhotosGridViewControllerSpec *_gridViewControllerSpec;
    PUPhotosPanoramaViewControllerSpec *_panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    int _qualityImageFormat;
    float _sectionFooterHeight;
    float _sectionHeaderHeight;
    BOOL _shouldUseCollageForCloudFeedPlaceholder;
    } _stackOffset;
    } _stackPerspectiveInsets;
    } _stackPerspectiveOffset;
    PUPhotoDecoration *_stackPhotoDecoration;
    } _stackSize;
    unsigned int _stackViewStyle;
    BOOL _usesStackTransitionToGrid;
}

@property(readonly) UIImage * addSharedAlbumPlaceholderImage;
@property(readonly) int albumDeletionConfirmationStyle;
@property(readonly) BOOL allowsAlbumCountSubtitle;
@property(readonly) BOOL allowsAlbumOpaqueLabels;
@property(readonly) int collageFastImageFormat;
@property(readonly) int collageQualityImageFormat;
@property(readonly) float collageSpacing;
@property(readonly) struct CGSize { float x1; float x2; } contentSizeForViewInPopover;
@property(readonly) UIImage * emptyAlbumPlaceholderImage;
@property(readonly) UIImage * emptySharedAlbumPlaceholderImage;
@property(readonly) PUPhotoDecoration * emptyStackPhotoDecoration;
@property(readonly) int fastImageFormat;
@property(readonly) PUFeedViewControllerSpec * feedViewControllerSpec;
@property(readonly) PUPhotosGridViewControllerSpec * gridViewControllerSpec;
@property(readonly) PUPhotosPanoramaViewControllerSpec * panoramaViewControllerSpec;
@property(readonly) PUPhotosPickerViewControllerSpec * photosPickerViewControllerSpec;
@property(readonly) int qualityImageFormat;
@property(readonly) float sectionFooterHeight;
@property(readonly) float sectionHeaderHeight;
@property(readonly) BOOL shouldUseCollageForCloudFeedPlaceholder;
@property(readonly) struct UIOffset { float x1; float x2; } stackOffset;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } stackPerspectiveInsets;
@property(readonly) struct UIOffset { float x1; float x2; } stackPerspectiveOffset;
@property(readonly) PUPhotoDecoration * stackPhotoDecoration;
@property(readonly) struct CGSize { float x1; float x2; } stackSize;
@property(readonly) unsigned int stackViewStyle;
@property(readonly) BOOL usesStackTransitionToGrid;

- (void).cxx_destruct;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3 imageAlpha:(float)arg4;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (struct CGPoint { float x1; float x2; })_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)addSharedAlbumPlaceholderImage;
- (int)albumDeletionConfirmationStyle;
- (BOOL)allowsAlbumCountSubtitle;
- (BOOL)allowsAlbumOpaqueLabels;
- (struct CGSize { float x1; float x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)collageFastImageFormat;
- (int)collageQualityImageFormat;
- (float)collageSpacing;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)emptyAlbumPlaceholderImage;
- (id)emptySharedAlbumPlaceholderImage;
- (id)emptyStackPhotoDecoration;
- (int)fastImageFormat;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (int)qualityImageFormat;
- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (struct UIOffset { float x1; float x2; })stackOffset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })stackPerspectiveInsets;
- (struct UIOffset { float x1; float x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;
- (struct CGSize { float x1; float x2; })stackSize;
- (unsigned int)stackViewStyle;
- (BOOL)usesStackTransitionToGrid;

@end
