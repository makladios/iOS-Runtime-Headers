/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOClientCapabilities, GEOLocation, GEORouteAttributes, NSData, NSMutableArray;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int sessionID : 1; 
        unsigned int includeBetterRouteSuggestion : 1; 
    GEOClientCapabilities *_clientCapabilities;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypoints;
    NSData *_directionsResponseID;
    } _has;
    BOOL _includeBetterRouteSuggestion;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    } _sessionID;
}

@property(retain) GEOClientCapabilities * clientCapabilities;
@property(retain) GEOLocation * currentUserLocation;
@property(retain) NSMutableArray * destinationWaypoints;
@property(retain) NSData * directionsResponseID;
@property(readonly) BOOL hasClientCapabilities;
@property(readonly) BOOL hasCurrentUserLocation;
@property(readonly) BOOL hasDirectionsResponseID;
@property BOOL hasIncludeBetterRouteSuggestion;
@property(readonly) BOOL hasRouteAttributes;
@property BOOL hasSessionID;
@property BOOL includeBetterRouteSuggestion;
@property(retain) GEORouteAttributes * routeAttributes;
@property(retain) NSMutableArray * routes;
@property(retain) NSMutableArray * serviceTags;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;

- (void)addDestinationWaypoint:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearDestinationWaypoints;
- (void)clearRoutes;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserLocation;
- (void)dealloc;
- (id)description;
- (id)destinationWaypointAtIndex:(unsigned int)arg1;
- (id)destinationWaypoints;
- (unsigned int)destinationWaypointsCount;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (BOOL)hasClientCapabilities;
- (BOOL)hasCurrentUserLocation;
- (BOOL)hasDirectionsResponseID;
- (BOOL)hasIncludeBetterRouteSuggestion;
- (BOOL)hasRouteAttributes;
- (BOOL)hasSessionID;
- (unsigned int)hash;
- (BOOL)includeBetterRouteSuggestion;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned int)arg1;
- (id)routeAttributes;
- (id)routes;
- (unsigned int)routesCount;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (id)serviceTags;
- (unsigned int)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setClientCapabilities:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDestinationWaypoints:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setHasIncludeBetterRouteSuggestion:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setIncludeBetterRouteSuggestion:(BOOL)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
