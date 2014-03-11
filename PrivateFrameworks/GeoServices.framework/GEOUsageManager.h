/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, GEOUsageCollectionRequest, NSLock, NSMapTable, NSTimer;

@interface GEOUsageManager : NSObject <PBRequesterDelegate> {
    id _backgroundTaskEnd;
    id _backgroundTaskStart;
    GEOUsageCollectionRequest *_request;
    NSLock *_requestLock;
    GEORequester *_requester;
    NSMapTable *_requesterToBackgroundTask;
    NSTimer *_updateTimer;
}

@property(copy) id backgroundTaskEnd;
@property(copy) id backgroundTaskStart;

+ (void)setUsePersistentConnection:(BOOL)arg1;
+ (id)sharedManager;

- (void)_applicationDeactivating;
- (void)_cleanupRequester;
- (void)_cleanupTimer;
- (void)_endBackgroundTaskForRequester:(id)arg1;
- (void)_prepareRequest;
- (void)_scheduleUpdateTimer;
- (void)_sendUsageToServer;
- (void)_startBackgroundTaskForRequester:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (id)_usageURL;
- (id)backgroundTaskEnd;
- (id)backgroundTaskStart;
- (void)captureDirectionsFeedbackCollection:(id)arg1;
- (void)captureMapsUsageFeedbackCollection:(id)arg1;
- (void)captureSuggestionsFeedbackCollection:(id)arg1;
- (void)captureTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2;
- (void)captureUsageDataForTiles:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setBackgroundTaskEnd:(id)arg1;
- (void)setBackgroundTaskStart:(id)arg1;
- (BOOL)shouldIgnoreCollectionForCountry;

@end
