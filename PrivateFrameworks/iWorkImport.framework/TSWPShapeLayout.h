/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPShapeLayoutDelegate>, TSDWrapPolygon, TSWPLayout, TSWPPadding;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver> {
    TSDWrapPolygon *_cachedInteriorWrapPolygon;
    TSWPLayout *_containedLayout;
    <TSWPShapeLayoutDelegate> *_delegate;
    BOOL _observingStorage;
}

@property(readonly) struct CGSize { float x1; float x2; } adjustedInsets;
@property(readonly) BOOL alwaysStartsNewTarget;
@property(readonly) BOOL autosizes;
@property(readonly) unsigned int columnCount;
@property(readonly) BOOL columnsAreLeftToRight;
@property(readonly) TSWPLayout * containedLayout;
@property <TSWPShapeLayoutDelegate> * delegate;
@property(readonly) TSWPPadding * layoutMargins;
@property(readonly) BOOL shrinkTextToFit;
@property(readonly) float textScaleFactor;

- (void)addChild:(id)arg1;
- (struct CGSize { float x1; float x2; })adjustedInsets;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGPoint { float x1; float x2; })autosizePositionOffset;
- (struct CGPoint { float x1; float x2; })autosizePositionOffsetForFixedWidth:(BOOL)arg1 height:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })autosizedTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })autosizedTransformForInfoGeometry:(id)arg1;
- (BOOL)autosizes;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)childSearchTargets;
- (id)children;
- (unsigned int)columnCount;
- (BOOL)columnsAreLeftToRight;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeLayoutTransform;
- (id)containedLayout;
- (void)createContainedLayoutForEditing;
- (void)createContainedLayoutForInstructionalText;
- (unsigned int)cropLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }[128])arg2;
- (void)dealloc;
- (id)delegate;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (void)destroyContainedLayoutForInstructionalText;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (id)initWithInfo:(id)arg1;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2;
- (id)interiorClippingPath;
- (id)interiorWrapPath;
- (id)interiorWrapPolygon;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidatePath;
- (void)invalidateSize;
- (BOOL)isInvisibleAutosizingShape;
- (id)layoutMargins;
- (float)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)pathSource;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 outWidth:(float*)arg3 outGap:(float*)arg4;
- (void)processChangedProperty:(int)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (BOOL)resizeMayChangeAspectRatio;
- (void)setChildren:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeometry:(id)arg1;
- (BOOL)shrinkTextToFit;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (BOOL)supportsRotation;
- (BOOL)textLayoutShouldLayoutVertically:(id)arg1;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (id)textWrapper;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
