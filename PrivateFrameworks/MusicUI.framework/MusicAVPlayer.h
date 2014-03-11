/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSObject<OS_dispatch_queue>, RadioStation;

@interface MusicAVPlayer : MPAVController {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _checkedDefaultsForLastPlayedStation;
    RadioStation *_lastPlayedStation;
    NSObject<OS_dispatch_queue> *_lastPlayedStationSaveQueue;
}

@property(readonly) RadioStation * currentStation;
@property(retain) RadioStation * lastPlayedStation;

+ (id)sharedAVPlayer;

- (void).cxx_destruct;
- (void)_currentStationDidChangeNotification:(id)arg1;
- (void)_downloadCancelledNotification:(id)arg1;
- (void)_endPlaybackIfNeededForCurrentNetwork;
- (id)_expectedAssetTypesForPlaybackMode:(int)arg1;
- (void)_matchCellularRestrictedDidChangeNotification:(id)arg1;
- (void)_musicPlayer_defaultsDidChangeNotification;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_previewSessionDidStopNotification:(id)arg1;
- (void)_reloadLastPlayedStation;
- (void)beginOrTogglePlayback;
- (void)beginPlayback;
- (id)currentStation;
- (void)dealloc;
- (id)init;
- (id)lastPlayedStation;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)seekAlbum:(int)arg1;
- (void)seekPlaylist:(int)arg1;
- (void)setLastPlayedStation:(id)arg1;

@end
