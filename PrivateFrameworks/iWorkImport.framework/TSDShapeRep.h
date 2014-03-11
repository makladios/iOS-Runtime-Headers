/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching, TSDShapeControlRep, TSDPathEditableRep> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL mDirectlyManagesLayerContent;
    BOOL mFrameInUnscaledCanvasIsValid;
    } mFrameInUnscaledCanvasRelativeToSuper;
    } mOriginalAliasedAlignmentFrameInLayerFrame;
    BOOL mShadowOnChildrenDisabled;
}

@property BOOL shadowOnChildrenDisabled;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)addSelectionKnobsToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })aliasedAlignmentFrameInLayerFrame;
- (BOOL)canBeUsedForImageMask;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (BOOL)canMakePathEditable;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clipRect;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)dynamicDragDidBegin;
- (void)dynamicDragDidEnd;
- (id)dynamicMoveLineSegmentDidBegin;
- (void)dynamicMoveLineSegmentDidEndWithTracker:(id)arg1;
- (void)dynamicMovePathKnobDidBegin;
- (void)dynamicMovePathKnobDidEndWithTracker:(id)arg1;
- (id)dynamicMoveSmartShapeKnobDidBegin;
- (void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamicallyMovedPathKnobTo:(struct CGPoint { float x1; float x2; })arg1 withTracker:(id)arg2;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { float x1; float x2; })arg1 withTracker:(id)arg2;
- (void)dynamicallyMovingLineSegmentWithTracker:(id)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (id)editablePathSource;
- (unsigned long long)enabledKnobMask;
- (void)enqueuePathSourceChanges;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameInUnscaledCanvas;
- (BOOL)i_editMenuOverlapsEndKnobs;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)intersectsUnscaledRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateEffectLayersForChildren;
- (BOOL)isDraggable;
- (BOOL)isEditingChildRep;
- (BOOL)isEditingPath;
- (BOOL)isInvisible;
- (BOOL)isPathEditable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layerFrameInScaledCanvasRelativeToParent;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })naturalToEditablePathSpaceTransform;
- (id)newTrackerForKnob:(id)arg1;
- (id)overlayLayers;
- (BOOL)p_beginApplyOpacity:(struct CGContext { }*)arg1 forDrawingInOneStep:(BOOL)arg2;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (BOOL)p_canApplyFillToLayer;
- (BOOL)p_canApplyStrokeToLayer;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext { }*)arg1;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4;
- (void)p_drawLineEndForHead:(BOOL)arg1 withDelta:(struct CGPoint { float x1; float x2; })arg2 andStroke:(id)arg3 inContext:(struct CGContext { }*)arg4 useFastDrawing:(BOOL)arg5;
- (BOOL)p_drawsSelfInOneStep;
- (void)p_endApplyOpacity:(struct CGContext { }*)arg1 apply:(BOOL)arg2;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (id)p_pathEditor;
- (BOOL)p_pathIsAxisAlignedRect;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)processChangedProperty:(int)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;
- (BOOL)selectionIsAppropriateToShowInvisiblePathHighlight;
- (void)setShadowOnChildrenDisabled:(BOOL)arg1;
- (BOOL)shadowOnChildrenDisabled;
- (id)shapeInfo;
- (id)shapeLayout;
- (float)shortestDistanceToPoint:(struct CGPoint { float x1; float x2; })arg1 countAsHit:(BOOL*)arg2;
- (BOOL)shouldAlwaysSmoothText;
- (BOOL)shouldExpandHitRegionWhenSmall;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowAdditionalKnobs;
- (BOOL)shouldShowAdvancedGradientKnobs;
- (BOOL)shouldShowInvisiblePathHighlight;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldShowShadow;
- (BOOL)shouldShowSmartShapeKnobs;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRectForEditMenu;
- (void)updatePositionsOfKnobs:(id)arg1;

@end
