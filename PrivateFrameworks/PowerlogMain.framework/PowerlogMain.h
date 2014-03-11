/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogMain.framework/PowerlogMain
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDateFormatter, NSString, PLEntry;

@interface PowerlogMain : NSObject {
    BOOL _bbPostProcessing;
    BOOL _bbPostProcessingNotify;
    BOOL _exitRequested;
    NSString *_fileGUID;
    BOOL _logToFile;
    PLEntry *_loggerList;
    BOOL _setupComplete;
    BOOL _shouldKeepRunning;
    int crashReportDirectoryDescriptor;
    int currentLogDirectoryDescriptor;
    int kQueue;
    struct __CFFileDescriptor { } *kqueueDescriptorRef;
    struct __CFRunLoopSource { } *kqueueDescriptorSource;
    NSString *linkedLogPath;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } *logFile;
    NSDateFormatter *logTimestampFormatter;
    id rolloverTimer;
    BOOL rotateDebugLogging;
    BOOL runLoopDebugLogging;
}

@property BOOL basebandPostProcessing;
@property BOOL basebandPostProcessingNotify;
@property BOOL exitRequested;
@property(retain) NSString * fileGUID;
@property BOOL logToFile;
@property(readonly) PLEntry * loggerList;
@property BOOL setupComplete;
@property BOOL shouldKeepRunning;

+ (BOOL)haveSharedPowerlogMain;
+ (id)sharedPowerlogMain;
+ (BOOL)shouldRunPowerlogDependant;
+ (void)stopSharedPowerlogMain;

- (int)ComputeTimeFromNowFromDefaults:(id)arg1;
- (void)DeleteOldFiles;
- (void)addLoggerByName:(id)arg1;
- (BOOL)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3;
- (BOOL)basebandPostProcessing;
- (BOOL)basebandPostProcessingNotify;
- (void)blackListTodayAsFullMode;
- (void)createNewCurrentLogWithTimestamp:(id)arg1;
- (short)currentLoggerMode;
- (id)currentLoggingModeString;
- (short)currentRunningMode;
- (BOOL)dateInRange:(id)arg1 startInclusive:(id)arg2 endExclusive:(id)arg3;
- (void)dealloc;
- (BOOL)deleteFileAtPath:(id)arg1;
- (BOOL)doesFileAtPathExist:(id)arg1;
- (BOOL)exitRequested;
- (void)fatalError:(id)arg1 withReason:(id)arg2;
- (id)fileGUID;
- (BOOL)fileIsUnlockedAtPath:(id)arg1 withIdentifier:(id)arg2;
- (void)generateLogGatheringFiles:(id)arg1;
- (void)generatePListForLog:(id)arg1 InCrashReporter:(id)arg2;
- (id)init;
- (BOOL)isFileDescripterMultiLinked:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (BOOL)isSameHardLinkedFileAtPath:(id)arg1 asAtPath:(id)arg2;
- (void)logDirectoryEventForFileDescriptor:(struct __CFFileDescriptor { }*)arg1;
- (void)logFileCheck;
- (void)logFileCheckFired:(id)arg1;
- (id)logFileNameForTimestamp:(id)arg1;
- (void)logStateEvent:(id)arg1 existingLogDate:(id)arg2 periodStart:(id)arg3 rolloverDate:(id)arg4;
- (void)logStatusRequestFired:(id)arg1;
- (BOOL)logToFile;
- (id)loggerList;
- (BOOL)moveFileAtPath:(id)arg1;
- (BOOL)moveFileFromPath:(id)arg1 toPath:(id)arg2;
- (void)powerlogExitRequested;
- (BOOL)readLogFilePrefix:(id)arg1 buildVersion:(id*)arg2 logDate:(id*)arg3;
- (id)remainingStringFrom:(id)arg1 byRemovingPrefix:(id)arg2 byRemovingSuffix:(id)arg3;
- (void)resetTimstampFormater;
- (void)rolloverTimerFired:(id)arg1;
- (id)rotatePowerlogDefaultStringValue;
- (void)run;
- (void)runBBPowerTool;
- (void)runThread:(id)arg1;
- (void)setBasebandPostProcessing:(BOOL)arg1;
- (void)setBasebandPostProcessingNotify:(BOOL)arg1;
- (void)setExitRequested:(BOOL)arg1;
- (void)setFileGUID:(id)arg1;
- (BOOL)setFileProtectionForPath:(id)arg1 withIdentifier:(id)arg2;
- (void)setLogToFile:(BOOL)arg1;
- (void)setRolloverTimer:(id)arg1;
- (void)setSetupComplete:(BOOL)arg1;
- (void)setShouldKeepRunning:(BOOL)arg1;
- (BOOL)setupComplete;
- (void)setupLoggers;
- (void)setupNotifications;
- (BOOL)shouldKeepRunning;
- (BOOL)shouldLinkToCrashreporter;
- (BOOL)shouldRotateLogFilesWithPeriodStart:(id*)arg1 withRolloverDate:(id*)arg2;
- (void)startLoggingToCurrentLog:(id)arg1;
- (void)startLoggingToFile;
- (void)stopLoggingAndCloseFile;
- (void)stopNotifications;
- (void)triggerAllLoggers:(id)arg1;
- (void)watchCrashReportDirectories:(BOOL)arg1;

@end
