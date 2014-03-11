/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKUserTrackingButtonTarget>, <MKUserTrackingView>, UIActivityIndicatorView, UIButton, UIImageView;

@interface _MKUserTrackingButtonController : NSObject {
    UIActivityIndicatorView *_activityIndicatorView;
    UIButton *_button;
    UIImageView *_imageView;
    int _state;
    <MKUserTrackingButtonTarget> *_target;
    <MKUserTrackingView> *_userTrackingView;
}

@property(readonly) UIImageView * imageView;
@property int state;
@property(retain) <MKUserTrackingView> * userTrackingView;

- (void).cxx_destruct;
- (id)_activityIndicatorView;
- (void)_authorizationStatusChanged:(id)arg1;
- (id)_contentAnimation;
- (id)_expandAnimation;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
- (void)_reloadState;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (id)_shrinkAnimation;
- (void)_updateState;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)imageView;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;
- (void)setState:(int)arg1;
- (void)setUserTrackingView:(id)arg1;
- (int)state;
- (id)userTrackingView;

@end
