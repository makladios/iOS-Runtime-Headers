/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, SSMetricsConfiguration;

@interface SSMetricsConfiguration : NSObject {
    NSSet *_blacklistedEvents;
    SSMetricsConfiguration *_childConfiguration;
    NSDictionary *_config;
    BOOL _disabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    BOOL _sendDisabled;
}

@property(retain) SSMetricsConfiguration * childConfiguration;
@property(readonly) NSDictionary * fieldsMap;

+ (id)_reportingFrequencyOverride;
+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id)arg1;
+ (void)setReportingFrequencyOverride:(id)arg1;

- (BOOL)_configBooleanForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)_initSSMetricsEventConfiguration;
- (void)_setReportingFrequencyOverride:(id)arg1;
- (id)blacklistedEventFields;
- (id)childConfiguration;
- (id)compoundStringWithElements:(id)arg1;
- (void)dealloc;
- (id)eventFields;
- (id)fieldsMap;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)initWithStorePlatformData:(id)arg1;
- (BOOL)isDisabled;
- (BOOL)isEventTypeBlacklisted:(id)arg1;
- (BOOL)isSendDisabled;
- (id)pingURLs;
- (double)reportingFrequency;
- (id)reportingURLString;
- (void)setChildConfiguration:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)valueForConfigurationKey:(id)arg1;

@end
