/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPReportingRadioStationMetadata, MPReportingTrackMetadata, NSDate;

@interface MPReportingTrackPlaybackEvent : MPReportingEvent {
    struct _MPReportingTimeRange { 
        double location; 
        double duration; 
    NSDate *_date;
    MPReportingRadioStationMetadata *_radioStationMetadata;
    MPReportingTrackMetadata *_trackMetadata;
    } _trackTimeRange;
}

@property(retain) NSDate * date;
@property(retain) MPReportingRadioStationMetadata * radioStationMetadata;
@property(retain) MPReportingTrackMetadata * trackMetadata;
@property struct _MPReportingTimeRange { double x1; double x2; } trackTimeRange;

- (void).cxx_destruct;
- (id)date;
- (BOOL)isValid;
- (id)radioStationMetadata;
- (void)setDate:(id)arg1;
- (void)setRadioStationMetadata:(id)arg1;
- (void)setTrackMetadata:(id)arg1;
- (void)setTrackTimeRange:(struct _MPReportingTimeRange { double x1; double x2; })arg1;
- (id)trackMetadata;
- (struct _MPReportingTimeRange { double x1; double x2; })trackTimeRange;

@end
