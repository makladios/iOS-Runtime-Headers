/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextInputControllerDelegate>, <UITextInputDelegate>, <UITextInputTokenizer>, NSArray, NSDictionary, NSHashTable, NSLayoutManager, UITextChecker, UITextInputTraits, UITextPosition, UITextRange, UIView, UIView<UITextInput>, _UIDictationAttachment, _UITextInputControllerTokenizer, _UITextKitTextRange, _UITextServiceSession, _UITextUndoManager, _UITextUndoOperationTyping;

@interface UITextInputController : NSObject <UITextInput, UITextInputAdditions> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct { 
        unsigned int delegateRespondsToTextInputShouldBeginEditing : 1; 
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1; 
        unsigned int delegateRespondsToTextInputDidChange : 1; 
        unsigned int delegateRespondsToTextInputDidChangeSelection : 1; 
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1; 
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection : 1; 
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1; 
        unsigned int textOrSelectionChangeOriginatesWithKeyboard : 1; 
        unsigned int showingTextStyleOptions : 1; 
        unsigned int undoRedoInProgress : 1; 
        unsigned int textOrSelectionChangeOriginatesWithMarkedText : 1; 
        unsigned int nextSelectionChangeMustUpdate : 1; 
        unsigned int hasTextAlternatives : 1; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    BOOL _allowsEditingTextAttributes;
    BOOL _continuousSpellCheckingEnabled;
    _UITextServiceSession *_definitionSession;
    <UITextInputControllerDelegate> *_delegate;
    _UIDictationAttachment *_dictationPlaceholder;
    NSDictionary *_emptyStringAttributes;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    <UITextInputDelegate> *_inputDelegate;
    NSLayoutManager *_layoutManager;
    _UITextServiceSession *_learnSession;
    } _markedTextRange;
    } _markedTextSelection;
    NSHashTable *_observedScrollViews;
    } _previousSelectedRange;
    _UITextKitTextRange *_selectedTextRange;
    UITextChecker *_textChecker;
    UITextInputTraits *_textInputTraits;
    } _tiFlags;
    _UITextInputControllerTokenizer *_tokenizer;
    NSDictionary *_typingAttributes;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
}

@property BOOL allowsEditingTextAttributes;
@property int autocapitalizationType;
@property int autocorrectionType;
@property(readonly) UITextPosition * beginningOfDocument;
@property(getter=_caretRect,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } caretRect;
@property BOOL continuousSpellCheckingEnabled;
@property <UITextInputControllerDelegate> * delegate;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isEditing,readonly) BOOL editing;
@property(getter=_emptyStringAttributes,setter=_setEmptyStringAttributes:,copy) NSDictionary * emptyStringAttributes;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property int keyboardAppearance;
@property int keyboardType;
@property(retain) NSLayoutManager * layoutManager;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property struct _NSRange { unsigned int x1; unsigned int x2; } previousSelectedRange;
@property int returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property(copy) UITextRange * selectedTextRange;
@property int selectionAffinity;
@property int spellCheckingType;
@property(readonly) UIView * textInputView;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(copy) NSDictionary * typingAttributes;

- (void)_addShortcut:(id)arg1;
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;
- (id)_attributesForReplacementInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_canHandleResponderAction:(SEL)arg1;
- (void)_cancelDictationIfNecessaryForChangeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_caretRectForOffset:(unsigned int)arg1;
- (id)_characterPositionForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_clearSelectionUI;
- (void)_commonInitWithLayoutManager:(id)arg1;
- (void)_coordinateSelectionChange:(id)arg1;
- (void)_copySelectionToClipboard;
- (void)_define:(id)arg1;
- (BOOL)_delegateShouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (id)_emptyStringAttributes;
- (void)_ensureSelectionValid;
- (void)_ensureSelectionVisible;
- (id)_filteredAttributedTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_firstTextView;
- (id)_fixupTypingAttributeForAttributes:(id)arg1;
- (void)_forceUnmarkTextDueToEditing;
- (BOOL)_hasDictationPlaceholder;
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 resultLength:(unsigned int*)arg4;
- (void)_insertText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)_invalidateEmptyStringAttributes;
- (void)_invalidateTypingAttributes;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isSecureTextEntry;
- (id)_layoutManager;
- (BOOL)_mightHaveSelection;
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_parentScrollView;
- (void)_promptForReplace:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeForBackwardsDelete;
- (id)_rectsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_removeDefinitionController;
- (void)_removeShortcutController;
- (void)_resetShowingTextStyle:(id)arg1;
- (id)_selectedAttributedText;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectedRange;
- (id)_selectedText;
- (void)_selectionDidScroll:(id)arg1;
- (void)_selectionGeometryChanged;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (void)_setEmptyStringAttributes:(id)arg1;
- (void)_setGestureRecognizers;
- (void)_setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setSelectedTextRange:(id)arg1;
- (void)_setUndoRedoInProgress:(BOOL)arg1;
- (void)_setupTextContainerView:(id)arg1;
- (BOOL)_shouldConsiderTextViewForGeometry:(id)arg1;
- (BOOL)_shouldHandleResponderAction:(SEL)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_teardownTextContainerView:(id)arg1;
- (void)_textContainerDidChangeView:(id)arg1;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_toggleFontTrait:(int)arg1;
- (void)_undoManagerWillUndo:(id)arg1;
- (BOOL)_undoRedoInProgress;
- (void)_updateFirstTextView;
- (unsigned int)_validCaretPositionFromCharacterIndex:(unsigned int)arg1 downstream:(BOOL)arg2;
- (id)_whitelistedTypingAttributes;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)allowsEditingTextAttributes;
- (int)atomStyle;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)changeWillBeUndone:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)checkSpellingForWordInRange:(id)arg1;
- (void)clearText;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)coalesceInTextView:(id)arg1 affectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (BOOL)continuousSpellCheckingEnabled;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (id)delegate;
- (void)delegateWillChangeAttributedText:(id)arg1;
- (void)deleteBackward;
- (void)didEndEditing;
- (BOOL)drawsAsAtom;
- (id)endOfDocument;
- (void)endSelectionChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasText;
- (void)increaseSize:(id)arg1;
- (id)initWithLayoutManager:(id)arg1;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isCoalescing;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (id)layoutManager;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })markedRange;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })nsRangeForTextRange:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)preheatTextChecker;
- (struct _NSRange { unsigned int x1; unsigned int x2; })previousSelectedRange;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 replacementText:(id)arg4;
- (void)removeAlternativesForCurrentWord;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeSpellingMarkersForCurrentWord;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (void)removeTextStylingFromString:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setPreviousSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)stopCoalescing;
- (id)textChecker;
- (id)textInRange:(id)arg1;
- (id)textRangeForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (id)typingAttributes;
- (void)undoDidChangeText;
- (id)undoManager;
- (void)undoWillChangeText;
- (void)unmarkText;
- (void)updateSelection;

@end
