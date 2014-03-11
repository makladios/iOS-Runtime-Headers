/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver> {
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    BOOL _hasURLAuthenticationTimeToLive;
    BOOL _isObservingReachability;
    BOOL _isUpdating;
    NSMutableDictionary *_supportedFeatures;
    NSLock *_supportedFeaturesLock;
    NSMutableArray *_updateCompletionHandlers;
    double _urlAuthenticationTimeToLive;
}

@property(copy) NSString * countryCode;
@property(readonly) BOOL currentCountrySupportsCarIntegration;
@property(readonly) BOOL currentCountrySupportsDirections;
@property(readonly) BOOL currentCountrySupportsNavigation;
@property(readonly) BOOL currentCountrySupportsRouteGenius;
@property(readonly) BOOL currentCountrySupportsTraffic;
@property(readonly) double urlAuthenticationTimeToLive;

+ (id)sharedConfiguration;

- (void)_checkCountryProvidersWithOldCountryCode:(id)arg1 providers:(id)arg2;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(int*)arg3;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(int*)arg4;
- (void)_determineCurrentCountryCode:(id)arg1;
- (void)_notifyUpdateCompletionHandlers:(BOOL)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_resetSupportedFeatures;
- (BOOL)countryCode:(id)arg1 supportsFeature:(int)arg2;
- (id)countryCode;
- (id)countryDefaultForKey:(id)arg1 sourcePtr:(int*)arg2;
- (id)countryDefaultForKey:(id)arg1;
- (BOOL)currentCountrySupportsCarIntegration;
- (BOOL)currentCountrySupportsDirections;
- (BOOL)currentCountrySupportsFeature:(int)arg1;
- (BOOL)currentCountrySupportsNavigation;
- (BOOL)currentCountrySupportsRouteGenius;
- (BOOL)currentCountrySupportsTraffic;
- (void)dealloc;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int*)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)updateCountryConfiguration:(id)arg1;
- (void)updateProvidersForCurrentCountry;
- (double)urlAuthenticationTimeToLive;

@end
