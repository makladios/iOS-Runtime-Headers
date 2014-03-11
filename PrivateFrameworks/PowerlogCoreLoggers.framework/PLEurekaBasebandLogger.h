/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class NSDate, NSString, PLBasebandLogChannel;

@interface PLEurekaBasebandLogger : PLBasebandLogger <PLBasebandLogChannelDelegate> {
    BOOL _currentlyCalibrating;
    NSDate *_lastBBActivityTimestamp;
    NSString *_lastBBActivityType;
    NSDate *_lastTimeCalibration;
    double _timeCalibration;
    PLBasebandLogChannel *cachedChannel;
    PLBasebandLogChannel *streamingChannel;
}

@property BOOL currentlyCalibrating;
@property(retain) NSDate * lastBBActivityTimestamp;
@property(retain) NSString * lastBBActivityType;
@property(retain) NSDate * lastTimeCalibration;
@property double timeCalibration;

- (void)calibrateBasebandTime:(id)arg1;
- (void)channel:(id)arg1 hasDataAvailable:(id)arg2;
- (void)channelDidBecomeInvalid:(id)arg1;
- (void)cleanBBState;
- (BOOL)currentlyCalibrating;
- (void)dealloc;
- (void)disableDetailedBBLogging:(id)arg1;
- (void)eventToCommitHardwareLogsOccurred:(id)arg1;
- (void)eventToEnableDetailedBBLoggingOccured;
- (void)eventToFlushCacheOccurred:(id)arg1;
- (void)eventToFlushLTESleepMgrStatsOccurred:(id)arg1;
- (void)handlePLBasebandEventNotification:(id)arg1;
- (void)handlePostCDRXCapabilityNo:(id)arg1;
- (void)handleSleep;
- (void)handleWake;
- (BOOL)inCall;
- (id)initWithConnection:(id)arg1;
- (id)lastBBActivityTimestamp;
- (id)lastBBActivityType;
- (id)lastTimeCalibration;
- (id)localDate:(id)arg1;
- (void)log;
- (void)openChannels;
- (void)postCDRXCapability:(BOOL)arg1;
- (void)reconnectTimerFired:(id)arg1;
- (void)resetLogLevel;
- (void)scheduleBBSecondStage;
- (void)scheduleReconnect;
- (void)setCurrentlyCalibrating:(BOOL)arg1;
- (void)setHWLoggingLevel:(unsigned int)arg1;
- (void)setLastBBActivityTimestamp:(id)arg1;
- (void)setLastBBActivityType:(id)arg1;
- (void)setLastTimeCalibration:(id)arg1;
- (void)setTimeCalibration:(double)arg1;
- (BOOL)setupChannel:(id)arg1 withLogCodes:(id)arg2 andEvents:(id)arg3;
- (double)timeCalibration;
- (void)triggerBBCoreDump;
- (void)triggerBBSecondStage:(id)arg1;

@end
