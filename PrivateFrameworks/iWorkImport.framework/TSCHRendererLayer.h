/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHRenderer;

@interface TSCHRendererLayer : TSDTilingLayer {
    TSCHRenderer *mRenderer;
}

- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithRenderer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_calculateLayerFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_layerFrameFromUnscaledFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)renderer;
- (void)updateFrameFromLayout;

@end
