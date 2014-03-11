/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataBarElementShapeLayer : CAShapeLayer <TSCHMultiDataElementShapeLayer, TSCHMultiDataAnimatingPathLayerProtocol> {
    BOOL mAboveIntercept;
    struct CGPath { } *mPresentationPath;
}

@property struct CGPath { }* presentationPath;

- (BOOL)aboveIntercept;
- (id)chartRep;
- (id)currentValueLayer;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (void)p_addAnimationsForUpdatingPath:(struct CGPath { }*)arg1 toAnimationInfo:(id)arg2;
- (struct CGPath { }*)presentationPath;
- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(float)arg3;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPresentationPath:(struct CGPath { }*)arg1;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;
- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;

@end
