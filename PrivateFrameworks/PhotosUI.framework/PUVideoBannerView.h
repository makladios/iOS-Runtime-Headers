/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, UIImage, UIImageView, UILabel;

@interface PUVideoBannerView : UIView {
    UIImageView *_backgroundView;
    UIImage *_badgeImage;
    UIImageView *_badgeImageView;
    NSString *_bannerText;
    BOOL _flattensSubviews;
    BOOL _slalom;
    UILabel *_textLabel;
    double _videoDuration;
}

@property BOOL flattensSubviews;
@property(getter=isSlalom,readonly) BOOL slalom;
@property(readonly) double videoDuration;

- (void).cxx_destruct;
- (void)_setBadgeImage:(id)arg1 bannerText:(id)arg2;
- (void)_updateFlattenSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)flattensSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSlalom;
- (void)layoutSubviews;
- (void)setFlattensSubviews:(BOOL)arg1;
- (void)setVideoDuration:(double)arg1 isSlalom:(BOOL)arg2;
- (double)videoDuration;

@end
