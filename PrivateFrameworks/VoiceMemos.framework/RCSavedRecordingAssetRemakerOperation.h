/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSObject<OS_dispatch_queue>, NSURL, RCSavedRecordingAssetRemaker;

@interface RCSavedRecordingAssetRemakerOperation : NSOperation {
    NSURL *_recordingURI;
    NSObject<OS_dispatch_queue> *_recordingsModelQueue;
    double _remakePriority;
    RCSavedRecordingAssetRemaker *_remaker;
}

@property(copy) NSURL * recordingURI;
@property(retain) NSObject<OS_dispatch_queue> * recordingsModelQueue;
@property double remakePriority;
@property RCSavedRecordingAssetRemaker * remaker;

- (void).cxx_destruct;
- (id)init;
- (void)main;
- (id)recordingURI;
- (id)recordingsModelQueue;
- (double)remakePriority;
- (id)remaker;
- (void)setRecordingURI:(id)arg1;
- (void)setRecordingsModelQueue:(id)arg1;
- (void)setRemakePriority:(double)arg1;
- (void)setRemaker:(id)arg1;

@end
