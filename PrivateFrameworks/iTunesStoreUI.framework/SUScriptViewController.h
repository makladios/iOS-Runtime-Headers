/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, SUScriptNavigationController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptSplitViewController, SUScriptViewController, UIViewController;

@interface SUScriptViewController : SUScriptObject {
    NSArray *_scriptToolbarItems;
}

@property(retain) id backgroundColor;
@property(readonly) NSString * contextDictionary;
@property(retain) SUScriptViewController * inputAccessoryViewController;
@property(retain) NSString * modalPresentationStyle;
@property(readonly) NSString * modalPresentationStyleNameFormSheet;
@property(readonly) NSString * modalPresentationStyleNameFullScreen;
@property(readonly) SUScriptViewController * modalViewController;
@property(retain) UIViewController * nativeViewController;
@property(readonly) SUScriptNavigationController * navigationController;
@property(readonly) SUScriptNavigationItem * navigationItem;
@property(readonly) SUScriptPopOver * popOver;
@property(readonly) SUScriptViewController * presentingViewController;
@property(retain) SUScriptSection * section;
@property id showsLibraryButton;
@property(readonly) SUScriptSplitViewController * splitViewController;
@property(copy) id toolbarItems;
@property(retain) id topBackgroundColor;
@property(retain) SUScriptViewController * transientViewController;
@property id usesBlurredBackground;
@property(readonly) SUScriptViewController * volumeViewController;
@property id wantsFullScreenLayout;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_dismissModalViewControllerWithTransition:(id)arg1;
- (id)_parentViewControllerForVolumeViewController;
- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (int)_transitionForString:(id)arg1;
- (void)addPassbookPassWithURL:(id)arg1;
- (id)attributeKeys;
- (id)backgroundColor;
- (id)contextDictionary;
- (void)dealloc;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissModalViewControllerWithTransition:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)dismissVolumeViewControllerAnimated:(id)arg1;
- (BOOL)equals:(id)arg1;
- (id)inputAccessoryViewController;
- (id)modalPresentationStyle;
- (id)modalPresentationStyleNameFormSheet;
- (id)modalPresentationStyleNameFullScreen;
- (id)modalViewController;
- (id)nativeViewController;
- (id)navigationController;
- (id)navigationItem;
- (id)newNativeViewController;
- (id)newScriptColorWithValue:(id)arg1;
- (id)popOver;
- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;
- (id)presentingViewController;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (id)scriptAttributeKeys;
- (id)section;
- (void)setBackgroundColor:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setModalPresentationStyle:(id)arg1;
- (void)setNativeViewController:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShowsLibraryButton:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarItems:(id)arg1;
- (void)setTopBackgroundColor:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setUsesBlurredBackground:(id)arg1;
- (void)setWantsFullScreenLayout:(id)arg1;
- (id)showsLibraryButton;
- (id)splitViewController;
- (void)tearDownUserInterface;
- (id)toolbarItems;
- (id)topBackgroundColor;
- (id)transientViewController;
- (id)usesBlurredBackground;
- (id)volumeViewController;
- (id)wantsFullScreenLayout;

@end
