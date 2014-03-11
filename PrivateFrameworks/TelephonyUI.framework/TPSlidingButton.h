/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPSlidingButtonDelegateProtocol>, UIButton, UIImageView, _UIActionSlider;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate> {
    _UIActionSlider *_acceptButton;
    <TPSlidingButtonDelegateProtocol> *_delegate;
    UIImageView *_dialImageView;
    UIButton *_sideButtonRight;
    int _type;
}

@property(retain) _UIActionSlider * acceptButton;
@property <TPSlidingButtonDelegateProtocol> * delegate;
@property(retain) UIImageView * dialImageView;
@property(retain) UIButton * sideButtonRight;
@property int type;

- (struct CGSize { float x1; float x2; })_knobSize;
- (id)acceptButton;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dialImageView;
- (id)initWithSlidingButtonType:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAcceptButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialImageView:(id)arg1;
- (void)setSideButtonRight:(id)arg1;
- (void)setType:(int)arg1;
- (id)sideButtonRight;
- (int)type;

@end
