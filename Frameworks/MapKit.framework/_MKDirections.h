/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEODirectionsRouteRequest;

@interface _MKDirections : MKDirections {
}

@property(getter=isBusy,readonly) BOOL busy;
@property(readonly) GEODirectionsRouteRequest * geoRequest;

- (void)calculateETAWithCompletionHandler:(id)arg1;
- (id)geoRequest;
- (BOOL)isBusy;

@end
