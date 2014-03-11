/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, NSMutableArray;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        int _currentRouteTypeAtEndOfNav; 
        unsigned int _manuallyChangedRouteCount; 
        unsigned int _manuallyDisabledHFPCount; 
        unsigned int _manuallyEnabledHFPCount; 
        unsigned int _spokenPromptsCount; 
        BOOL _bTHFPAvailableAtEndOfNav; 
        BOOL _bTHFPRoutesAvailable; 
        BOOL _currentRouteHFPEnabledAtEndOfNav; 
        BOOL _everManuallyChangedRoute; 
        BOOL _everManuallyEnabledHFPRoute; 
        BOOL _everViewedAudioSheet; 
        BOOL _everViewedAudioSheetBTAny; 
        BOOL _everViewedAudioSheetBTHFP; 
        BOOL _viewedAudioSheet; 
        BOOL _viewedAudioSheetBTAny; 
        BOOL _viewedAudioSheetBTHFP; 
        BOOL _wirelessRoutesAvailable; 
        struct { 
            unsigned int currentRouteTypeAtEndOfNav : 1; 
            unsigned int manuallyChangedRouteCount : 1; 
            unsigned int manuallyDisabledHFPCount : 1; 
            unsigned int manuallyEnabledHFPCount : 1; 
            unsigned int spokenPromptsCount : 1; 
            unsigned int bTHFPAvailableAtEndOfNav : 1; 
            unsigned int bTHFPRoutesAvailable : 1; 
            unsigned int currentRouteHFPEnabledAtEndOfNav : 1; 
            unsigned int everManuallyChangedRoute : 1; 
            unsigned int everManuallyEnabledHFPRoute : 1; 
            unsigned int everViewedAudioSheet : 1; 
            unsigned int everViewedAudioSheetBTAny : 1; 
            unsigned int everViewedAudioSheetBTHFP : 1; 
            unsigned int viewedAudioSheet : 1; 
            unsigned int viewedAudioSheetBTAny : 1; 
            unsigned int viewedAudioSheetBTHFP : 1; 
            unsigned int wirelessRoutesAvailable : 1; 
        } _has; 
    struct { 
        unsigned int navigationAudioFeedback : 1; 
        unsigned int endTimeStamp : 1; 
        unsigned int startTimeStamp : 1; 
        unsigned int arrivedAtDestination : 1; 
    BOOL _arrivedAtDestination;
    NSMutableArray *_directionsFeedbacks;
    double _endTimeStamp;
    GEOLocation *_finalLocation;
    } _has;
    } _navigationAudioFeedback;
    double _startTimeStamp;
}

@property BOOL arrivedAtDestination;
@property(retain) NSMutableArray * directionsFeedbacks;
@property double endTimeStamp;
@property(retain) GEOLocation * finalLocation;
@property BOOL hasArrivedAtDestination;
@property BOOL hasEndTimeStamp;
@property(readonly) BOOL hasFinalLocation;
@property BOOL hasNavigationAudioFeedback;
@property BOOL hasStartTimeStamp;
@property struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; struct { unsigned int x_18_1_1 : 1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 1; unsigned int x_18_1_6 : 1; unsigned int x_18_1_7 : 1; unsigned int x_18_1_8 : 1; unsigned int x_18_1_9 : 1; unsigned int x_18_1_10 : 1; unsigned int x_18_1_11 : 1; unsigned int x_18_1_12 : 1; unsigned int x_18_1_13 : 1; unsigned int x_18_1_14 : 1; unsigned int x_18_1_15 : 1; unsigned int x_18_1_16 : 1; unsigned int x_18_1_17 : 1; } x18; } navigationAudioFeedback;
@property double startTimeStamp;

- (void)addDirectionsFeedback:(id)arg1;
- (BOOL)arrivedAtDestination;
- (void)clearDirectionsFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned int)arg1;
- (id)directionsFeedbacks;
- (unsigned int)directionsFeedbacksCount;
- (double)endTimeStamp;
- (id)finalLocation;
- (BOOL)hasArrivedAtDestination;
- (BOOL)hasEndTimeStamp;
- (BOOL)hasFinalLocation;
- (BOOL)hasNavigationAudioFeedback;
- (BOOL)hasStartTimeStamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; struct { unsigned int x_18_1_1 : 1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 1; unsigned int x_18_1_6 : 1; unsigned int x_18_1_7 : 1; unsigned int x_18_1_8 : 1; unsigned int x_18_1_9 : 1; unsigned int x_18_1_10 : 1; unsigned int x_18_1_11 : 1; unsigned int x_18_1_12 : 1; unsigned int x_18_1_13 : 1; unsigned int x_18_1_14 : 1; unsigned int x_18_1_15 : 1; unsigned int x_18_1_16 : 1; unsigned int x_18_1_17 : 1; } x18; })navigationAudioFeedback;
- (BOOL)readFrom:(id)arg1;
- (void)setArrivedAtDestination:(BOOL)arg1;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setEndTimeStamp:(double)arg1;
- (void)setFinalLocation:(id)arg1;
- (void)setHasArrivedAtDestination:(BOOL)arg1;
- (void)setHasEndTimeStamp:(BOOL)arg1;
- (void)setHasNavigationAudioFeedback:(BOOL)arg1;
- (void)setHasStartTimeStamp:(BOOL)arg1;
- (void)setNavigationAudioFeedback:(struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; struct { unsigned int x_18_1_1 : 1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 1; unsigned int x_18_1_6 : 1; unsigned int x_18_1_7 : 1; unsigned int x_18_1_8 : 1; unsigned int x_18_1_9 : 1; unsigned int x_18_1_10 : 1; unsigned int x_18_1_11 : 1; unsigned int x_18_1_12 : 1; unsigned int x_18_1_13 : 1; unsigned int x_18_1_14 : 1; unsigned int x_18_1_15 : 1; unsigned int x_18_1_16 : 1; unsigned int x_18_1_17 : 1; } x18; })arg1;
- (void)setStartTimeStamp:(double)arg1;
- (double)startTimeStamp;
- (void)writeTo:(id)arg1;

@end
