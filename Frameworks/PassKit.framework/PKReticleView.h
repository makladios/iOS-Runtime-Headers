/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CAShapeLayer;

@interface PKReticleView : UIView {
    struct CGPath { } *_bouncePathRectangle;
    struct CGPath { } *_bouncePathSquare;
    struct CGColor { } *_shadowColorDefault;
    struct CGColor { } *_shadowColorFailure;
    struct CGColor { } *_shadowColorSuccess;
    CAShapeLayer *_shapeLayer;
}

+ (Class)layerClass;

- (struct CGPath { }*)_createReticlePathForPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (struct CGPoint { float x1; float x2; }*)_makeSanitizedCorners:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)blinkForSuccess:(BOOL)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)positionWithCorners:(struct CGPoint { float x1; float x2; }*)arg1 completion:(id)arg2;
- (void)reset;

@end
