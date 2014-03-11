/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class ADBannerView, MPRadioAdObserver, NSArray, NSMapTable, RadioStation, RadioStationSkipController;

@interface MPRadioQueueFeeder : MPQueueFeeder <UIAlertViewDelegate> {
    MPRadioAdObserver *_adObserver;
    BOOL _didReceiveTracklistEnd;
    NSMapTable *_fetchingTracksCompletionHandlersByStation;
    BOOL _hasReceivedStreamTrack;
    int _maximumGetTracksRetryCount;
    NSArray *_previousDatabaseTrackPlaybackDescriptorQueue;
    ADBannerView *_skipAdView;
    RadioStation *_station;
    RadioStationSkipController *_stationSkipController;
    NSMapTable *_stationTracklistRetrievalRetryCount;
    NSArray *_tracks;
    BOOL _wasUsingBackgroundNetwork;
}

@property(retain) RadioStation * station;
@property(copy) NSArray * tracks;

+ (void)_explicitContentAllowedDidChangeNotification:(id)arg1;
+ (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(BOOL)arg1 removeTracks:(BOOL)arg2;
+ (BOOL)isExplicitTracksEnabled;
+ (BOOL)isProfileExplicitContentRestricted;
+ (BOOL)isUserDefaultExplicitTracksEnabled;
+ (int)maximumNumberOfTracksToFetch;
+ (void)setUserDefaultExplicitTracksEnabled:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (BOOL)_canHavePlaceholderTrack;
- (void)_cancelScheduledAds;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(BOOL)arg2 skipDate:(id)arg3;
- (void)_didFailToLoadAdNotification:(id)arg1;
- (BOOL)_endPlaybackIfNecessaryForNetworkType;
- (void)_fetchAdditionalTracksWithBaseIndex:(int)arg1 withCompletionHandler:(id)arg2;
- (BOOL)_hasReceivedStreamTrack;
- (unsigned int)_indexOfCurrentItem;
- (unsigned int)_indexOfItem:(id)arg1;
- (void)_insertAdTrack:(id)arg1 afterCurrentItemIndex:(unsigned int)arg2;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangedNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(int)arg2;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_songBeganResponseNotification:(id)arg1;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (id)_trackAtIndex:(unsigned int)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
- (void)_updateWithTracks:(id)arg1 tracklistActionType:(int)arg2 options:(int)arg3;
- (BOOL)canSeek;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSkipToPreviousItem;
- (void)controller:(id)arg1 willChangePlaybackIndexBy:(int)arg2 deltaType:(int)arg3 ignoreElapsedTime:(BOOL)arg4 allowSkippingUnskippableContent:(BOOL)arg5;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)init;
- (unsigned int)initialPlaybackQueueDepth;
- (BOOL)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned int)itemCount;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (int)playbackMode;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (unsigned int)realRepeatType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)setAVController:(id)arg1;
- (void)setStation:(id)arg1;
- (void)setTracks:(id)arg1;
- (id)station;
- (id)tracks;

@end
