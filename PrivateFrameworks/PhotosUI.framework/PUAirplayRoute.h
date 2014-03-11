/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class MPAVRoute, NSDictionary, NSString, PUAirplaySession;

@interface PUAirplayRoute : NSObject {
    PUAirplaySession *_airplaySession;
    NSString *_audioScreenDNSName;
    MPAVRoute *_avRoute;
    MPAVRoute *_avScreenRoute;
    NSString *_displayName;
    BOOL _isCurrentRoute;
    BOOL _isDefaultRoute;
    BOOL _isPasswordPIN;
    BOOL _isSecondScreenActive;
    NSString *_photoVideoDNSName;
    BOOL _requiresPassword;
    NSDictionary *_routeDescription;
    NSString *_routeUID;
    NSDictionary *_screenRouteDescription;
    BOOL _supportsAudio;
    BOOL _supportsMirroring;
    BOOL _supportsPhotos;
    BOOL _supportsSlideshow;
    BOOL _supportsVideo;
}

@property(readonly) PUAirplaySession * airplaySession;
@property(readonly) NSString * audioScreenDNSName;
@property(readonly) MPAVRoute * avRoute;
@property(readonly) MPAVRoute * avScreenRoute;
@property(readonly) NSString * displayName;
@property(readonly) BOOL isCurrentRoute;
@property(readonly) BOOL isDefaultRoute;
@property(readonly) BOOL isPasswordPIN;
@property(readonly) BOOL isSecondScreenActive;
@property(readonly) NSString * lastKnownPassword;
@property(readonly) NSString * photoVideoDNSName;
@property(readonly) BOOL requiresPassword;
@property(readonly) NSDictionary * routeDescription;
@property(readonly) NSString * routeUID;
@property(readonly) NSDictionary * screenRouteDescription;
@property(readonly) BOOL supportsAudio;
@property(readonly) BOOL supportsMirroring;
@property(readonly) BOOL supportsPhotos;
@property(readonly) BOOL supportsSlideshow;
@property(readonly) BOOL supportsVideo;

- (void).cxx_destruct;
- (BOOL)_sameAsAVRoute:(id)arg1;
- (void)_updateFromAVRoutes;
- (id)airplaySession;
- (id)audioScreenDNSName;
- (id)avRoute;
- (id)avScreenRoute;
- (id)description;
- (id)displayName;
- (BOOL)doesAVRouteReferencesSameRoute:(id)arg1;
- (id)initWithAVRoute:(id)arg1;
- (BOOL)isCurrentRoute;
- (BOOL)isDefaultRoute;
- (BOOL)isPasswordPIN;
- (BOOL)isSameRoute:(id)arg1;
- (BOOL)isSecondScreenActive;
- (id)lastKnownPassword;
- (void)makeRouteCurrentWithCompletion:(id)arg1;
- (id)photoVideoDNSName;
- (BOOL)requiresPassword;
- (void)resignAsCurrentRoute;
- (id)routeDescription;
- (id)routeUID;
- (id)screenRouteDescription;
- (BOOL)supportsAudio;
- (BOOL)supportsMirroring;
- (BOOL)supportsPhotos;
- (BOOL)supportsSlideshow;
- (BOOL)supportsVideo;
- (void)updateFromAVRoute:(id)arg1;

@end
