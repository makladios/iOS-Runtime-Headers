/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotosSharingCollectionViewLayoutDelegate>, NSIndexPath, NSMutableDictionary;

@interface PUPhotosSharingCollectionViewLayout : PUHorizontalTiledCollectionViewLayout {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    NSMutableDictionary *_cachedHeaderAttributes;
    } _sharingBadgeOffset;
    NSIndexPath *_zoomingCellIndexPath;
}

@property <PUPhotosSharingCollectionViewLayoutDelegate> * delegate;
@property struct UIOffset { float x1; float x2; } sharingBadgeOffset;
@property(retain) NSIndexPath * zoomingCellIndexPath;

- (void).cxx_destruct;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_floatingSelectionBadgeFrameForBadgeFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 itemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 visibleItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setSharingBadgeOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setZoomingCellIndexPath:(id)arg1;
- (struct UIOffset { float x1; float x2; })sharingBadgeOffset;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)zoomingCellIndexPath;

@end
