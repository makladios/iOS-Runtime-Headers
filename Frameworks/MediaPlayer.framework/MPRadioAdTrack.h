/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class ADBannerView, NSDictionary, NSString, NSURL;

@interface MPRadioAdTrack : NSObject <NSCopying> {
    int _adType;
    ADBannerView *_adView;
    NSDictionary *_loudnessInfo;
    NSURL *_url;
}

@property(readonly) BOOL adHasAction;
@property(readonly) int adType;
@property(readonly) ADBannerView * adView;
@property(readonly) NSURL * artworkURL;
@property(readonly) NSDictionary * loudnessInfo;
@property(readonly) NSString * uniqueIdentifier;
@property(copy) NSURL * url;

- (void).cxx_destruct;
- (id)_loudnessInfoForVideoAssetDictionary:(id)arg1;
- (BOOL)adHasAction;
- (int)adType;
- (id)adView;
- (id)album;
- (id)artist;
- (id)artworkURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAdView:(id)arg1;
- (id)initWithVideoAdView:(id)arg1;
- (BOOL)isLiked;
- (id)loudnessInfo;
- (id)previewURL;
- (void)setURL:(id)arg1;
- (long long)storeID;
- (id)title;
- (id)uniqueIdentifier;
- (id)url;

@end
