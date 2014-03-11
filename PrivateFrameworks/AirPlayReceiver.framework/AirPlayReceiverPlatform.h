/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@class AirPlayControllerServer, AirPlayReceiverSimulator, WPAdvertising;

@interface AirPlayReceiverPlatform : NSObject <WPAdvertisingDelegate> {
    WPAdvertising *_btleAdvertiser;
    unsigned char _btleEnabled;
    struct __SCDynamicStore { } *_btleSCStore;
    unsigned char _btleSeed;
    unsigned char _btleStarted;
    int _cloudConnectivityNotifyToken;
    int _conferenceRoomModeNotifyToken;
    AirPlayControllerServer *_controllerServer;
    int _dacpErrorNotifyToken;
    int _dacpNotifyTokens[24];
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    unsigned char _playbackPrevented;
    int _prefChangedNotifyToken;
    AirPlayReceiverSimulator *_sim;
    int _systemBufferSamples;
    int _systemSampleRate;
    int _touchSetupActiveNotifyToken;
    struct AirPlayReceiverUIPrivate { } *_ui;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
}

- (void)_btleStart;
- (long)_btleStartListeningForNetworkChanges;
- (void)_btleStop;
- (void)_btleStopListeningForNetworkChanges;
- (void)_btleUpdate;
- (void)advertiserDidDeregisterService;
- (void)advertiserDidRegisterService;
- (void)advertiserDidUpdateState:(id)arg1;
- (void)advertiserFailedToRegisterService;

@end
