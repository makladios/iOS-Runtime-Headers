/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AVPlayerItemDelegate>, AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    unsigned int RTCReportingFlags;
    NSURL *URL;
    BOOL allowProgressiveSwitchUp;
    BOOL allowsExtendedReadAhead;
    AVAsset *asset;
    AVAsset *assetWithFigPlaybackItem;
    NSDictionary *audibleDRMInfo;
    AVAudioMix *audioMix;
    NSArray *automaticallyLoadedAssetKeys;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSString *dataYouTubeID;
    <AVPlayerItemDelegate> *delegate;
    BOOL didApplyInitialAudioMix;
    BOOL didBecomeReadyForBasicInspection;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    int eqPreset;
    NSError *error;
    BOOL externalProtectionRequested;
    BOOL externalSubtitlesEnabled;
    struct OpaqueFigCPEProtector { } *figCPEProtector;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    struct OpaqueCMTimebase { } *figTimebase;
    void *figVideoCompositor;
    } forwardPlaybackEndTime;
    NSDictionary *gaplessInfo;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    BOOL haveCPEProtector;
    BOOL haveInitialSamples;
    BOOL initialAlwaysMonitorsPlayability;
    double initialBufferingTargetMaximum;
    double initialBufferingTargetMinimum;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    struct __CFString { } *initialFigTimePitchAlgorithm;
    BOOL initialLimitReadAhead;
    int initialPlaybackLikelyToKeepUpTrigger;
    } initialTime;
    } initialToleranceAfter;
    } initialToleranceBefore;
    int initialVariantIndex;
    BOOL initialWillNeverSeekBackwardsHint;
    BOOL isCurrentPlayerItem;
    NSMutableArray *itemLegibleOutputs;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    float maximumBitRate;
    NSString *mediaKind;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    BOOL needTimedMetadataNotification;
    BOOL networkUsuallyExceedsMaxBitRate;
    AVPlayerItem *nextItem;
    int nextSeekIDToGenerate;
    BOOL nonForcedSubtitlesEnabled;
    int pendingSeekID;
    AVPlayerConnection *playerConnection;
    AVWeakReference *playerReference;
    AVPlayerItem *previousItem;
    AVPropertyStorage *propertyStorage;
    NSDictionary *rampInOutInfo;
    BOOL requiresAccessLog;
    unsigned int restrictions;
    } reversePlaybackEndTime;
    BOOL savesDownloadedDataToDiskWhenDone;
    id seekCompletionHandler;
    struct OpaqueFigSimpleMutex { } *seekIDMutex;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSString *serviceIdentifier;
    float soundCheckVolumeNormalization;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    int status;
    NSMutableArray *syncLayers;
    NSObject<OS_dispatch_queue> *syncLayersQ;
    NSArray *textStyleRules;
    NSArray *timedMetadata;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    AVVideoComposition *videoComposition;
    float volumeAdjustment;
    BOOL wasInitializedWithURL;
    AVWeakReference *weakReference;
}

@end
