/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@class AppLaunchStatsSaveAndRestore, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsState : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {
    long long BGDataBudgetCap;
    long long BGDataCarryCap;
    long long _BGMinSlotData;
    float _dataCellMultiplier;
    float _dataWifiMultiplier;
    BOOL _enableBlackListCheck;
    BOOL _enableBudgetCheck;
    BOOL _enableForeGroundAppCheck;
    BOOL _enableLiveListCheck;
    BOOL _enableOpportunisticFetchCheck;
    float _globalFetchPWPC;
    long long _globalMinSlotData;
    float _globalNonactivePWPC;
    float _globalPushPWPC;
    long long _globalTimeThreshold;
    NSMutableArray *appForecastArray;
    unsigned long long appForecastQuality;
    NSMutableDictionary *appsAliveInLSTDict;
    booldoUniformBudget;
    boolhasCellConnected;
    boolhasWifiConnected;
    boolisBatteryChargerConnected;
    boolisDataResourceAvailable;
    boolisDeviceInCall;
    boolisDeviceInGoodCellularCondition;
    boolisDevicePhoneType;
    boolisDeviceUnderThermalPressure;
    boolisFetchPowerResourceAvailable;
    boolisFetchPushPowerResourceAvailable;
    boolisWIFIConnected;
    NSMutableArray *cacheAppsforFullDebug;
    NSMutableArray *dailyAppForecastSlots;
    NSMutableArray *dailyDataBGBudgetSlots;
    NSMutableArray *dailyDataBudgetSlots;
    NSMutableArray *dailyDataNDISCBudgetSlots;
    NSMutableArray *dailyLaunchArrays;
    NSMutableArray *dailyPowerFetchBudgetSlots;
    NSMutableArray *dailyPowerNDISCBudgetSlots;
    NSMutableArray *dailyPowerPushBudgetSlots;
    NSMutableArray *dataForecastArray;
    unsigned long long dataForecastQuality;
    long long endofdayBGDataBudget;
    long long endofdayDataBudget;
    long long endofdayNDISCDataBudget;
    NSMutableArray *fireDates;
    long long globalDataBudgetCap;
    long long globalDataCarryCap;
    long long globalPowerBudgetCap;
    NSMutableArray *powerFetchForecastArray;
    NSMutableArray *powerPushForecastArray;
    NSMutableArray *recentLaunchArrays;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    NSDate *startTimeStamp;
    NSDate *startTimeStampOOB;
    NSObject<OS_dispatch_queue> *stateQueue;
    int thermalStatusToken;
    NSMutableArray *weeklyLaunchArrays;
}

@property(readonly) long long BGDataBudgetCap;
@property(readonly) long long BGDataCarryCap;
@property(readonly) long long BGMinSlotData;
@property(retain) NSMutableArray * appForecastArray;
@property unsigned long long appForecastQuality;
@property(retain) NSMutableDictionary * appsAliveInLSTDict;
@property(readonly) NSMutableArray * cacheAppsforFullDebug;
@property(retain) NSMutableArray * dailyAppForecastSlots;
@property(retain) NSMutableArray * dailyDataBGBudgetSlots;
@property(retain) NSMutableArray * dailyDataBudgetSlots;
@property(retain) NSMutableArray * dailyDataNDISCBudgetSlots;
@property(retain) NSMutableArray * dailyLaunchArrays;
@property(retain) NSMutableArray * dailyPowerFetchBudgetSlots;
@property(retain) NSMutableArray * dailyPowerNDISCBudgetSlots;
@property(retain) NSMutableArray * dailyPowerPushBudgetSlots;
@property(readonly) float dataCellMultiplier;
@property(retain) NSMutableArray * dataForecastArray;
@property unsigned long long dataForecastQuality;
@property(readonly) float dataWifiMultiplier;
@property bool doUniformBudget;
@property BOOL enableBlackListCheck;
@property(readonly) BOOL enableBudgetCheck;
@property(readonly) BOOL enableForeGroundAppCheck;
@property(readonly) BOOL enableLiveListCheck;
@property(readonly) BOOL enableOpportunisticFetchCheck;
@property long long endofdayBGDataBudget;
@property long long endofdayDataBudget;
@property long long endofdayNDISCDataBudget;
@property(retain) NSMutableArray * fireDates;
@property(readonly) long long globalDataBudgetCap;
@property(readonly) long long globalDataCarryCap;
@property(readonly) float globalFetchPWPC;
@property(readonly) long long globalMinSlotData;
@property(readonly) float globalNonactivePWPC;
@property(readonly) float globalPushPWPC;
@property(readonly) long long globalTimeThreshold;
@property(readonly) bool hasCellConnected;
@property(readonly) bool hasWifiConnected;
@property bool isBatteryChargerConnected;
@property bool isDataResourceAvailable;
@property bool isDeviceInCall;
@property(readonly) bool isDeviceInGoodCellularCondition;
@property bool isDeviceUnderThermalPressure;
@property bool isFetchPowerResourceAvailable;
@property bool isFetchPushPowerResourceAvailable;
@property(readonly) bool isWIFIConnected;
@property(retain) NSMutableArray * powerFetchForecastArray;
@property(retain) NSMutableArray * powerPushForecastArray;
@property(retain) NSMutableArray * recentLaunchArrays;
@property(retain) NSMutableArray * weeklyLaunchArrays;

- (void).cxx_destruct;
- (long long)BGDataBudgetCap;
- (long long)BGDataCarryCap;
- (long long)BGMinSlotData;
- (void)addPredictedSlotsToDailyAppForecastQueue:(id)arg1;
- (void)addPredictedSlotsToDailyDataBudgetQueue:(id)arg1 forcastquality:(long long)arg2;
- (void)addPredictedSlotsToDailyOutOfBandQueue:(id)arg1;
- (void)addPredictedSlotsToDailyPowerBudgetQueue:(id)arg1 forcastquality:(long long)arg2 batteryCapacity:(id)arg3;
- (int)addToOutOfBandAppList:(int)arg1 withCacheDict:(id)arg2 withAppList:(id)arg3;
- (id)appForecastArray;
- (unsigned long long)appForecastQuality;
- (id)appsAliveInLSTDict;
- (id)cacheAppsforFullDebug;
- (long long)calculateDailyDataBudgetFor:(const char *)arg1;
- (long long)calculateSlotMinDataBudget:(const char *)arg1;
- (void)convertPCdistributionToInt:(id)arg1 fetchOver:(float)arg2 array:(id)arg3 dailyInt:(int)arg4;
- (id)dailyAppForecastSlots;
- (id)dailyDataBGBudgetSlots;
- (id)dailyDataBudgetSlots;
- (id)dailyDataNDISCBudgetSlots;
- (id)dailyLaunchArrays;
- (id)dailyPowerFetchBudgetSlots;
- (id)dailyPowerNDISCBudgetSlots;
- (id)dailyPowerPushBudgetSlots;
- (float)dataCellMultiplier;
- (id)dataForecastArray;
- (unsigned long long)dataForecastQuality;
- (float)dataWifiMultiplier;
- (void)dealloc;
- (bool)doUniformBudget;
- (BOOL)enableBlackListCheck;
- (BOOL)enableBudgetCheck;
- (BOOL)enableForeGroundAppCheck;
- (BOOL)enableLiveListCheck;
- (BOOL)enableOpportunisticFetchCheck;
- (long long)endofdayBGDataBudget;
- (long long)endofdayDataBudget;
- (long long)endofdayNDISCDataBudget;
- (id)fireDates;
- (bool)getAppsAliveInLSTList:(id)arg1;
- (BOOL)getInCallStatus;
- (id)getOutOfBandAppList;
- (long long)globalDataBudgetCap;
- (long long)globalDataCarryCap;
- (float)globalFetchPWPC;
- (long long)globalMinSlotData;
- (float)globalNonactivePWPC;
- (float)globalPushPWPC;
- (long long)globalTimeThreshold;
- (bool)hasCellConnected;
- (bool)hasResourcesAvailable:(bool)arg1 forTriggerType:(int)arg2;
- (bool)hasWifiConnected;
- (id)init;
- (bool)isBatteryChargerConnected;
- (bool)isChargeOnWifiOn;
- (bool)isDataResourceAvailable;
- (bool)isDeviceInCall;
- (bool)isDeviceInGoodCellularCondition;
- (bool)isDeviceUnderThermalPressure;
- (bool)isFetchPowerResourceAvailable;
- (bool)isFetchPushPowerResourceAvailable;
- (bool)isOutOfBand;
- (bool)isWIFIConnected;
- (void)logAll:(struct __aslclient { }*)arg1 withMsg:(struct __aslmsg { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __aslclient { }*)arg1 withMsg:(struct __aslmsg { }*)arg2 withLevel:(int)arg3;
- (id)popFirstSlotInDailyBudgetQueue:(id)arg1;
- (id)powerFetchForecastArray;
- (id)powerPushForecastArray;
- (id)recentLaunchArrays;
- (int)reloadConfiguration;
- (void)resetAppsAliveInLSTList;
- (void)restore:(id)arg1;
- (void)save:(id)arg1;
- (void)saveContext:(id)arg1;
- (void)setAppForecastArray:(id)arg1;
- (void)setAppForecastQuality:(unsigned long long)arg1;
- (void)setAppsAliveInLSTDict:(id)arg1;
- (void)setDailyAppForecastSlots:(id)arg1;
- (void)setDailyDataBGBudgetSlots:(id)arg1;
- (void)setDailyDataBudgetSlots:(id)arg1;
- (void)setDailyDataNDISCBudgetSlots:(id)arg1;
- (void)setDailyLaunchArrays:(id)arg1;
- (void)setDailyPowerFetchBudgetSlots:(id)arg1;
- (void)setDailyPowerNDISCBudgetSlots:(id)arg1;
- (void)setDailyPowerPushBudgetSlots:(id)arg1;
- (void)setDataForecastArray:(id)arg1;
- (void)setDataForecastQuality:(unsigned long long)arg1;
- (void)setDoUniformBudget:(bool)arg1;
- (void)setEnableBlackListCheck:(BOOL)arg1;
- (void)setEndofdayBGDataBudget:(long long)arg1;
- (void)setEndofdayDataBudget:(long long)arg1;
- (void)setEndofdayNDISCDataBudget:(long long)arg1;
- (void)setFireDates:(id)arg1;
- (void)setIsBatteryChargerConnected:(bool)arg1;
- (void)setIsDataResourceAvailable:(bool)arg1;
- (void)setIsDeviceInCall:(bool)arg1;
- (void)setIsDeviceUnderThermalPressure:(bool)arg1;
- (void)setIsFetchPowerResourceAvailable:(bool)arg1;
- (void)setIsFetchPushPowerResourceAvailable:(bool)arg1;
- (void)setPowerFetchForecastArray:(id)arg1;
- (void)setPowerPushForecastArray:(id)arg1;
- (void)setRecentLaunchArrays:(id)arg1;
- (void)setWeeklyLaunchArrays:(id)arg1;
- (void)updateAppsAliveInLSTList:(id)arg1;
- (id)weeklyLaunchArrays;

@end
