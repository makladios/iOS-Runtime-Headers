/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIFlowcaseDelegate>, NSArray, NSMutableArray, SKUIFlowcaseView;

@interface SKUIFlowcaseViewController : UIViewController <SKUIFlowcaseViewDelegate> {
    <SKUIFlowcaseDelegate> *_delegate;
    NSArray *_flowcaseItems;
    SKUIFlowcaseView *_flowcaseView;
    NSMutableArray *_landscapeImages;
    NSMutableArray *_portraitImages;
    NSArray *_views;
}

@property <SKUIFlowcaseDelegate> * delegate;
@property(readonly) NSArray * flowcaseItems;

- (void).cxx_destruct;
- (void)_reloadImages;
- (id)_views;
- (void)dealloc;
- (id)delegate;
- (id)flowcaseItems;
- (void)flowcaseView:(id)arg1 didSelectViewAtIndex:(int)arg2;
- (void)flowcaseViewDidEndDecelerating:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtIndex:(int)arg1;
- (id)indexSetForVisibleViews;
- (id)initWithFlowcase:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2 orientation:(int)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
