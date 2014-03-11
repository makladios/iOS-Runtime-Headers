/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPeoplePickerNavigationControllerDelegate>, <ABStyleProvider>, ABModel, NSArray;

@interface ABPeoplePickerNavigationController : UINavigationController {
    struct { 
        unsigned int allowsEditing : 1; 
        unsigned int allowsCancel : 1; 
        unsigned int allowsActions : 1; 
        unsigned int allowsConferencing : 1; 
        unsigned int allowsSounds : 1; 
        unsigned int allowsVibrations : 1; 
        unsigned int hidesSearchableSources : 1; 
        unsigned int hidesPromptInLandscape : 1; 
    void *_addressBook;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyFaceTimeActions;
    BOOL _allowsOnlyPhoneActions;
    int _behavior;
    NSArray *_defaultToolbarItems;
    struct __CFArray { } *_displayedProperties;
    } _flags;
    int _insertionProperty;
    id _insertionValue;
    ABModel *_model;
    BOOL _navigationBarIsAnimating;
    id _peoplePickerDelegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

@property(setter=ab_setDefaultToolbarItems:,retain) NSArray * ab_defaultToolbarItems;
@property void* addressBook;
@property BOOL allowsContactBlocking;
@property BOOL allowsOnlyFaceTimeActions;
@property BOOL allowsOnlyPhoneActions;
@property(copy) NSArray * displayedProperties;
@property BOOL hidesPromptInLandscape;
@property BOOL hidesSearchableSources;
@property <ABPeoplePickerNavigationControllerDelegate> * peoplePickerDelegate;
@property(retain) <ABStyleProvider> * styleProvider;

+ (void)initialize;
+ (void)notifyPreferencesChanged;

- (void)__loadDatabaseAtDirectory:(id)arg1;
- (BOOL)_allowsAutorotation;
- (void)_applicationEnteringForeground;
- (void)_performCancel:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (id)_setupAccountsAndGroupsController;
- (BOOL)_shouldPreventCancelButtonsFromShowing;
- (void)_updateViewControllerNavigationButtons;
- (void)ab_changeViewControllerToolbarItemsIfEmpty:(id)arg1 animated:(BOOL)arg2;
- (void)ab_changeViewControllersToolbarItemsIfEmpty:(BOOL)arg1;
- (id)ab_defaultToolbarItems;
- (BOOL)ab_ownsViewControllerToolbarItems:(id)arg1;
- (void)ab_restoreViewControllerToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_setDefaultToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_setDefaultToolbarItems:(id)arg1;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsCancel;
- (BOOL)allowsCardEditing;
- (BOOL)allowsConferencing;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsOnlyFaceTimeActions;
- (BOOL)allowsOnlyPhoneActions;
- (BOOL)allowsShowingPersonsCards;
- (id)bannerTitle;
- (id)bannerValue;
- (int)behavior;
- (BOOL)ckCanDismissWhenSuspending;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)finishNavigationBarAnimation;
- (void)groupsViewControllerDidFinish:(id)arg1;
- (BOOL)hidesPromptInLandscape;
- (BOOL)hidesSearchableSources;
- (id)init;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2;
- (id)initAsAddressBook:(BOOL)arg1 withStyle:(int)arg2;
- (id)initAsAddressBook:(BOOL)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithoutSetup;
- (int)insertionProperty;
- (id)insertionValue;
- (BOOL)isDefaultViewControllerVisible;
- (void)loadState;
- (id)membersViewController;
- (id)model;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (BOOL)navigationBarIsAnimating;
- (void)notePreferencesChanged;
- (id)peoplePickerDelegate;
- (void)personViewController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)popToDefaultViewController:(BOOL)arg1;
- (void)presentGroupsViewController;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)promptForViewControllerType:(int)arg1 orientation:(int)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)safePopToRootViewControllerAnimated:(BOOL)arg1;
- (void)saveState;
- (void)searchCurrentContactsGroupUsingQuery:(id)arg1 animated:(BOOL)arg2;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setBehavior:(int)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setHidesPromptInLandscape:(BOOL)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)setInsertionValue:(id)arg1 property:(int)arg2;
- (void)setParentViewController:(id)arg1;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (void)setPrompt:(id)arg1;
- (void)setSearchCompletionDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3;
- (void)setupAsMePicker;
- (void)setupInitialStackAndLoadState:(BOOL)arg1;
- (BOOL)shouldContinueAfterSelectingPerson:(void*)arg1 cell:(id)arg2;
- (BOOL)shouldPerformDefaultActionForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 withMemberCell:(id)arg4;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 forceDisableEditing:(BOOL)arg4;
- (void)showCardForPerson:(void*)arg1;
- (void)showMembersOfContactsFilter:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (void)showMembersOfContactsFilter:(id)arg1;
- (void)showUnifiedCardForPerson:(void*)arg1;
- (id)styleProvider;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end
