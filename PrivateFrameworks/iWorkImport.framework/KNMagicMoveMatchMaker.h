/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMagicMoveMatchMaker : NSObject {
}

+ (BOOL)isDrawableIgnored:(id)arg1;
+ (id)layerAndContentsArrayByUpdatingMorphMatches:(id)arg1 withCurrentTime:(double)arg2 animationStartTime:(double)arg3 animationDuration:(double)arg4 morphFrameDuration:(double)arg5 animatedSlideView:(id)arg6 playbackSession:(id)arg7 generateSingleTextures:(BOOL)arg8;
+ (id)magicMoveMatchesFromAnimatedSlideView:(id)arg1 outMorphMatches:(id)arg2 textDeliveryType:(int)arg3;
+ (id)magicMoveMatchesWithOutgoingInfos:(id)arg1 incomingInfos:(id)arg2 outgoingCanvas:(id)arg3 incomingCanvas:(id)arg4 textDeliveryType:(int)arg5 outgoingAnimatedSlideModel:(id)arg6 incomingAnimatedSlideModel:(id)arg7 ignoreBuildVisibility:(BOOL)arg8;
+ (int)magicMoveMorphTexturesPerSecond;
+ (id)p_animationMatchesFromMatch:(id)arg1 outMorphMatches:(id)arg2 animatedSlideView:(id)arg3 outgoingCanvas:(id)arg4 incomingCanvas:(id)arg5 ignoreBuildVisibility:(BOOL)arg6;
+ (id)p_magicMoveMatchesUsingAttributesForClass:(Class)arg1 outgoingObjects:(id)arg2 incomingObjects:(id)arg3 textureContext:(id)arg4 outgoingAnimatedSlideModel:(id)arg5 ignoreBuildVisibility:(BOOL)arg6;
+ (id)p_matchObjectWithRep:(id)arg1 model:(id)arg2 ignoreBuildVisibility:(BOOL)arg3;
+ (void)setDrawable:(id)arg1 isIgnored:(BOOL)arg2;

@end
