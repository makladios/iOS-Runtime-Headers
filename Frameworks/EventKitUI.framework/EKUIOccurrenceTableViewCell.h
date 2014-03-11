/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKUIOccurrenceTableViewCellContentView, UIView;

@interface EKUIOccurrenceTableViewCell : UITableViewCell {
    EKUIOccurrenceTableViewCellContentView *_contentView;
    BOOL _drawsOwnRowSeparators;
    UIView *_separatorViewForNonOpaqueTables;
    BOOL _usesInsetMargin;
    BOOL _usesVibrantSeparatorOverlayDrawing;
}

@property BOOL drawsOwnRowSeparators;
@property BOOL usesInsetMargin;
@property BOOL usesVibrantSeparatorOverlayDrawing;

+ (id)_birthdayIcon;
+ (id)_facebookIcon;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (float)_rightImageSpacing;
+ (id)_tentativeAngledStripeBackground;
+ (id)cancelledDeclinedColorBarColor;
+ (id)invitationPrimaryTextColor;
+ (id)needsReplyBackgroundColor;
+ (float)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)normalBackgroundColor;
+ (id)normalBottomTimeTextColor;
+ (id)normalPrimaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)normalTopTimeTextColor;
+ (id)prefixPrimaryTextColor;
+ (id)primaryTextLabelFont;
+ (id)reuseIdentifier;
+ (id)secondaryTextLabelFont;
+ (id)strikethroughPrimaryTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)strikethroughTimeTextColor;
+ (id)tentativeBackgroundColor;
+ (float)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (id)timeLabelsFont;

- (void).cxx_destruct;
- (void)_setMarginExtendsToFullWidth:(BOOL)arg1;
- (BOOL)drawsOwnRowSeparators;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDrawsOwnRowSeparators:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUsesInsetMargin:(BOOL)arg1;
- (void)setUsesVibrantSeparatorOverlayDrawing:(BOOL)arg1;
- (void)updateWithEvent:(id)arg1 placedUnderDayWithStartDate:(id)arg2 showCalendarColors:(BOOL)arg3;
- (BOOL)usesInsetMargin;
- (BOOL)usesVibrantSeparatorOverlayDrawing;

@end
