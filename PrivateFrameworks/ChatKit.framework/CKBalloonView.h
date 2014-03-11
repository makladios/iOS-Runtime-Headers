/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKBalloonControl, CKBalloonImageView, CKManualUpdater, NSObject<CKBalloonViewDelegate>, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CKBalloonView : CKBalloonImageView <UIGestureRecognizerDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _canUseOpaqueMask;
    CKBalloonControl *_control;
    NSObject<CKBalloonViewDelegate> *_delegate;
    CKManualUpdater *_displayUpdater;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    BOOL _filled;
    BOOL _hasOverlay;
    BOOL _hasTail;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _orientation;
    CKBalloonImageView *_overlay;
    BOOL _showingMenu;
    } _textAlignmentInsets;
    BOOL _wantsSkinnyMask;
}

@property BOOL canUseOpaqueMask;
@property(retain) CKBalloonControl * control;
@property NSObject<CKBalloonViewDelegate> * delegate;
@property(retain) CKManualUpdater * displayUpdater;
@property(readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;
@property(getter=isFilled) BOOL filled;
@property BOOL hasOverlay;
@property BOOL hasTail;
@property(readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;
@property BOOL orientation;
@property(retain) CKBalloonImageView * overlay;
@property(readonly) UIColor * overlayColor;
@property(getter=isShowingMenu) BOOL showingMenu;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;
@property BOOL wantsSkinnyMask;

- (void)_dismissOverlay;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canUseOpaqueMask;
- (void)configureForMessagePart:(id)arg1;
- (id)control;
- (void)dealloc;
- (id)delegate;
- (SEL)delegateActionForAction:(SEL)arg1;
- (id)description;
- (id)displayUpdater;
- (void)doDoubleTapOrLongPress;
- (void)doubleTap:(id)arg1 forEvent:(id)arg2;
- (id)doubleTapGestureRecognizer;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasOverlay;
- (BOOL)hasTail;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFilled;
- (BOOL)isShowingMenu;
- (void)layoutSubviews;
- (void)longPress:(id)arg1 forEvent:(id)arg2;
- (id)longPressGestureRecognizer;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)orientation;
- (id)overlay;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)prepareForReuse;
- (BOOL)resignFirstResponder;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setControl:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setFilled:(BOOL)arg1;
- (void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2;
- (void)setHasOverlay:(BOOL)arg1;
- (void)setHasTail:(BOOL)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setOrientation:(BOOL)arg1;
- (void)setOverlay:(id)arg1;
- (void)setShowingMenu:(BOOL)arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setWantsSkinnyMask:(BOOL)arg1;
- (void)showMenu;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tap:(id)arg1 forEvent:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (void)touchCancelForControl:(id)arg1;
- (void)touchDown:(id)arg1 forEvent:(id)arg2;
- (BOOL)wantsSkinnyMask;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;

@end
