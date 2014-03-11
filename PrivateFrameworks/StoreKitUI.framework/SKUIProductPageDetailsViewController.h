/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIProductPageChildViewControllerDelegate>, NSMutableArray, NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableTextBoxSection, SKUIProductPageTableViewController, SKUIResourceLoader, UIScrollView;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController> {
    SKUIClientContext *_clientContext;
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIResourceLoader *_resourceLoader;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}

@property(retain) SKUIClientContext * clientContext;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) SKUIProductPage * productPage;
@property(readonly) UIScrollView * scrollView;

+ (float)defaultPageWidthForUserInterfaceIdiom:(int)arg1;

- (void).cxx_destruct;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (id)_bundledAppsSection;
- (void)_configureSwooshSection:(id)arg1;
- (id)_copyrightSection;
- (id)_descriptionSection;
- (void)_expandSection:(id)arg1;
- (id)_featuresSection;
- (id)_infoSection;
- (id)_parentBundlesSection;
- (id)_resourceLoader;
- (id)_screenshotsSection;
- (id)_storeNotesSection;
- (id)_tableViewController;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(float)arg2;
- (id)_whatsNewSection;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)initWithProductPage:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (id)productPage;
- (void)screenshotsWillBeginDragging:(id)arg1;
- (id)scrollView;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)tableViewForTableViewSection:(id)arg1;

@end
