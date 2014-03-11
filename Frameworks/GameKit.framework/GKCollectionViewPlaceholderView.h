/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlaceholderContentStateMachine, GKPlaceholderView, NSArray, NSString, UIActivityIndicatorView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <GKStateMachineDelegate> {
    int _alignment;
    NSArray *_constraints;
    NSString *_errorMessage;
    NSString *_errorTitle;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    NSString *_loadingState;
    NSString *_noContentMessage;
    NSString *_noContentTitle;
    GKPlaceholderView *_placeholderView;
}

@property int alignment;
@property(retain) NSArray * constraints;
@property(retain) NSString * errorMessage;
@property(retain) NSString * errorTitle;
@property(retain) UIActivityIndicatorView * loadingIndicatorView;
@property(retain) GKPlaceholderContentStateMachine * loadingMachine;
@property(retain) NSString * loadingState;
@property(retain) NSString * noContentMessage;
@property(retain) NSString * noContentTitle;
@property(retain) GKPlaceholderView * placeholderView;

- (int)alignment;
- (id)constraints;
- (void)dealloc;
- (void)delayedShowLoadingIndicator;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitErrorState;
- (void)didExitLoadingState;
- (void)didExitNoContentState;
- (id)errorMessage;
- (id)errorTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)loadingIndicatorView;
- (id)loadingMachine;
- (id)loadingState;
- (id)noContentMessage;
- (id)noContentTitle;
- (id)placeholderView;
- (void)setAlignment:(int)arg1;
- (void)setConstraints:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setLoadingMachine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)updateConstraints;

@end
