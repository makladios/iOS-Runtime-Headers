/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKETAUpdaterDelegate>, GEOClientETATrafficUpdateRequest, GEOLocation, GEORoute, GEORouteAttributes, GEOWaypoint, NSData, NSTimer, VKAttributedRouteMatch;

@interface MKETAUpdater : NSObject {
    BOOL _allowRequests;
    GEOClientETATrafficUpdateRequest *_currentETARequest;
    <MKETAUpdaterDelegate> *_delegate;
    GEOWaypoint *_destination;
    NSData *_directionsResponseID;
    NSTimer *_etaIdleTimer;
    int _etaState;
    double _lastETARequestTime;
    double _requestInterval;
    GEORoute *_route;
    GEORouteAttributes *_routeAttributes;
    VKAttributedRouteMatch *_routeMatch;
    BOOL _shouldUseConditionalRequest;
    GEOLocation *_userLocation;
}

@property BOOL allowRequests;
@property(readonly) GEOClientETATrafficUpdateRequest * currentRequest;
@property <MKETAUpdaterDelegate> * delegate;
@property(retain) GEOWaypoint * destination;
@property(retain) NSData * directionsResponseID;
@property double requestInterval;
@property(retain) GEORoute * route;
@property(retain) GEORouteAttributes * routeAttributes;
@property(retain) VKAttributedRouteMatch * routeMatch;
@property BOOL shouldUseConditionalRequest;
@property(retain) GEOLocation * userLocation;

- (void).cxx_destruct;
- (void)_addCurrentRouteToETARequest:(id)arg1 currentStepIndex:(unsigned int)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (void)_clearCurrentETARequest;
- (void)_clearTimer;
- (void)_continueUpdateRequests;
- (BOOL)_sendETARequest:(id)arg1 isUpdate:(BOOL)arg2;
- (BOOL)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (BOOL)allowRequests;
- (id)currentRequest;
- (void)dealloc;
- (id)delegate;
- (id)destination;
- (id)directionsResponseID;
- (id)init;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (double)requestInterval;
- (void)reset;
- (id)route;
- (id)routeAttributes;
- (id)routeMatch;
- (void)setAllowRequests:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setEtaState:(int)arg1;
- (void)setRequestInterval:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShouldUseConditionalRequest:(BOOL)arg1;
- (void)setUserLocation:(id)arg1;
- (BOOL)shouldUseConditionalRequest;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;
- (BOOL)updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (id)userLocation;

@end
