/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIActivityIndicatorView, UILabel, UIView;

@interface PLPhotoTilePlaceholderView : UIView {
    BOOL _indicatorIsVisible;
    double _lastViewPhaseChangeDate;
    UIView *_loadingContainerView;
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
}

- (void)dealloc;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)showLoadingIndicatorWhenReady;

@end
