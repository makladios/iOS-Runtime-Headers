/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIResizableImage : UIImage {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _alwaysStretches;
    } _capInsets;
    BOOL _isSubimage;
    } _subimageInsets;
}

+ (BOOL)supportsSecureCoding;

- (void)_configureFromImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentInsetsInPixels:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 emptySizeFallback:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (id)_initWithOtherImage:(id)arg1;
- (BOOL)_isResizable;
- (BOOL)_isSubimage;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_resizableImageWithCapMask:(int)arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (void)_setCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setSubimageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)_suppressesAccessibilityHairlineThickening;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (int)resizingMode;

@end
