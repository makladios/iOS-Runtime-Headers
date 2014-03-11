/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSDFPSCounter : NSObject {
    NSMutableArray *_dateArray;
}

- (void)addFrame;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)dealloc;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)init;
- (id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1;
- (id)p_getFPSInfo:(BOOL)arg1;
- (void)reset;
- (void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(BOOL)arg6 slide:(int)arg7;

@end
