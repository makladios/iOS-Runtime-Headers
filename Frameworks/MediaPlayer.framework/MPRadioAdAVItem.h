/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPRadioAdTrack, NSString, RadioStation;

@interface MPRadioAdAVItem : MPAVAdItem {
    MPRadioAdTrack *_adTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
}

@property(retain) RadioStation * station;
@property(readonly) NSString * stationHash;
@property(readonly) long long stationID;
@property(readonly) NSString * stationName;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)adTrack;
- (id)album;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)initWithAdTrack:(id)arg1;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (void)reevaluateType;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (BOOL)supportsSkip;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;

@end
