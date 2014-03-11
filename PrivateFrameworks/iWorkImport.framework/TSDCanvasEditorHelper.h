/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDCanvasEditor>, TSDKeyboardMovementManipulator;

@interface TSDCanvasEditorHelper : NSObject <TSKChangeSourceObserver> {
    <TSDCanvasEditor> *mCanvasEditor;
    TSDKeyboardMovementManipulator *mKeyboardManipulator;
    BOOL mTornDown;
}

+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (id)canvasSelectionWithInfos:(id)arg1;
+ (BOOL)physicalKeyboardIsSender:(id)arg1;
+ (Class)selectionClass;

- (void)alignDrawablesByEdge:(int)arg1;
- (void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)bringForward:(id)arg1;
- (void)bringToFront:(id)arg1;
- (BOOL)canDeleteComment;
- (BOOL)canPasteWithSender:(id)arg1 withPasteboard:(id)arg2;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canPerformMaskWithSender:(id)arg1;
- (BOOL)canPerformMaskWithShapeTypeWithSender:(id)arg1;
- (BOOL)canPerformMaskWithShapeWithSender:(id)arg1;
- (BOOL)canPerformUnmaskWithSender:(id)arg1;
- (BOOL)canUngroupWithSelection:(id)arg1;
- (id)canvasEditor;
- (int)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformBringDrawablesForwardAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDistributeAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformGroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformPasteAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformPasteAsPlainTextAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformPasteValuesAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSendDrawablesBackwardAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformUngroupAction:(SEL)arg1 withSender:(id)arg2;
- (id)canvasSelectionFromRep:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)canvasSelectionWithInfos:(id)arg1;
- (void)clearGuides:(id)arg1;
- (id)commandForDeletingDrawablesFromTopLevelContainer:(id)arg1;
- (id)commandForInsertingDrawablesIntoTopLevelContainer:(id)arg1 below:(id)arg2;
- (id)commandForReplacingDrawable:(id)arg1 withDrawable:(id)arg2;
- (id)commandForReplacingImagePlaceholderInSelection:(id)arg1 withDrawables:(id)arg2 withSender:(id)arg3;
- (id)commandsToSwapConnectionsFromRep:(id)arg1 toInfo:(id)arg2;
- (void)copyUserDefinedGuides:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteComment:(id)arg1;
- (void)deleteGuide:(id)arg1;
- (void)distributeDrawablesByEdge:(int)arg1;
- (void)distributeDrawablesEvenly;
- (id)documentRoot;
- (void)duplicate:(id)arg1;
- (Class)editorClassForSelection:(id)arg1;
- (Class)editorClassForSelectionIgnoringLockedState:(id)arg1;
- (id)editorToPopToOnEndEditingForSelection:(id)arg1;
- (void)group:(id)arg1;
- (id)infosFromCanvasSelection:(id)arg1;
- (id)initWithCanvasEditor:(id)arg1;
- (void)insertFloatingComment;
- (id)interactiveCanvasController;
- (BOOL)isRepSelectable:(id)arg1;
- (id)keyboardMovementManipulator;
- (id)layoutsForAlignAndDistribute;
- (void)lock:(id)arg1;
- (void)mask;
- (void)maskImage:(id)arg1 withShape:(id)arg2 shouldOpenGroup:(BOOL)arg3;
- (void)maskImage:(id)arg1 withShapeType:(int)arg2;
- (void)maskWithShape;
- (void)maskWithShapeType:(int)arg1;
- (id)newEditorForEditorClass:(Class)arg1;
- (void)notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_boundingBoxForLayouts:(id)arg1;
- (BOOL)p_canCopyUserDefinedGuides;
- (BOOL)p_canPasteUserDefinedGuides;
- (BOOL)p_canReduceFileSizeForSelectedImages;
- (void)p_copy:(id)arg1;
- (void)p_copyUserDefinedGuides:(id)arg1;
- (void)p_delete:(id)arg1;
- (Class)p_editorClassForSelection:(id)arg1 shouldIgnoreLockedState:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })p_offsetToMoveCenterOfLayout:(id)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })p_offsetToMoveLayout:(id)arg1 edge:(int)arg2 toOffset:(float)arg3;
- (void)p_setLockStatusOfSelectedDrawables:(BOOL)arg1;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteUserDefinedGuides:(id)arg1;
- (void)pasteValues:(id)arg1;
- (id)pasteboardController;
- (void)prepareGeometryForInsertingDrawables:(id)arg1 withInsertionContext:(id)arg2;
- (void)pushNewEditorForSelection:(id)arg1;
- (void)reduceDocumentFileSize:(id)arg1;
- (void)reduceFileSizeForSelectedImages:(id)arg1;
- (void)sendBackward:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)teardown;
- (void)ungroup:(id)arg1;
- (void)unlock:(id)arg1;
- (void)unmask;

@end
