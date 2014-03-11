/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPlatform : NSObject {
    unsigned int _memSize;
    int _numCPUs;
    BOOL _proceduralRoadAlpha;
    BOOL _shouldUseTrafficAlphaHack;
    BOOL _supports3DBuildingStrokes;
    BOOL _supportsBuildingStrokes;
    BOOL _useCheapTrafficShader;
}

@property(readonly) BOOL canMakeSharingThumbnails;
@property(readonly) BOOL isPad;
@property(readonly) float mainScreenPPI;
@property(readonly) float mainScreenScale;
@property(readonly) unsigned int memorySize;
@property(readonly) BOOL proceduralRoadAlpha;
@property(readonly) BOOL roadsWithSimpleLineMeshesAvailable;
@property(readonly) BOOL shouldDrawWhenReady;
@property(readonly) BOOL shouldStyleLabelsInParallel;
@property(readonly) BOOL shouldUseTrafficAlphaHack;
@property(readonly) BOOL supports3DBuildingStrokes;
@property(readonly) BOOL supportsBuildingStrokes;
@property(readonly) BOOL supportsDepthDependentBuildings;
@property(readonly) BOOL supportsHiResBuildings;
@property(readonly) BOOL supportsHiResRTT;
@property(readonly) unsigned int tileMaximumLimit;
@property(readonly) BOOL useCheapTrafficShader;

+ (id)sharedPlatform;

- (unsigned int)_calculateMemSize;
- (void)_determineHardware;
- (BOOL)canMakeSharingThumbnails;
- (void)dealloc;
- (id)init;
- (BOOL)isPad;
- (float)mainScreenPPI;
- (float)mainScreenScale;
- (unsigned int)memorySize;
- (BOOL)proceduralRoadAlpha;
- (BOOL)roadsWithSimpleLineMeshesAvailable;
- (BOOL)shouldDrawWhenReady;
- (BOOL)shouldStyleLabelsInParallel;
- (BOOL)shouldUseTrafficAlphaHack;
- (BOOL)supports3DBuildingStrokes;
- (BOOL)supportsBuildingStrokes;
- (BOOL)supportsDepthDependentBuildings;
- (BOOL)supportsHiResBuildings;
- (BOOL)supportsHiResRTT;
- (unsigned int)tileMaximumLimit;
- (unsigned int)tileReserveLimit:(BOOL)arg1;
- (BOOL)useCheapTrafficShader;

@end
