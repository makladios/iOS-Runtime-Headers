/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPUserNotification, NSLock, RadioGetTracksRequest, RadioPlaybackContext, RadioRequestContext, RadioStation;

@interface MPRadioGetTracksOperation : NSOperation {
    MPUserNotification *_explicitUserNotification;
    RadioGetTracksRequest *_getTracksRequest;
    NSLock *_lock;
    unsigned int _numberOfTracks;
    RadioPlaybackContext *_playbackContext;
    int _reasonType;
    RadioRequestContext *_requestContext;
    id _responseBlock;
    RadioStation *_station;
}

@property unsigned int numberOfTracks;
@property(copy) RadioPlaybackContext * playbackContext;
@property(readonly) int reasonType;
@property(retain) RadioRequestContext * requestContext;
@property(copy) id responseBlock;
@property(readonly) RadioStation * station;

- (void).cxx_destruct;
- (id)_heartbeatTokenDataAllowingDelay:(BOOL)arg1 error:(id*)arg2;
- (id)_newGetTracksRequestAllowingHeartbeatDelay:(BOOL)arg1 returningError:(id*)arg2;
- (id)_runFullGetTracksProcessAllowingDialog:(BOOL)arg1 returningError:(id*)arg2;
- (id)_runRequestAllowingHeartbeatDelay:(BOOL)arg1 returningError:(id*)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithStation:(id)arg1 reasonType:(int)arg2;
- (void)main;
- (unsigned int)numberOfTracks;
- (id)playbackContext;
- (int)reasonType;
- (id)requestContext;
- (id)responseBlock;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResponseBlock:(id)arg1;
- (id)station;

@end
