/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester;

@interface GEOVoltaireETAProvider : GEOETAProvider <PBRequesterDelegate> {
    BOOL _cancelled;
    id _errorHandler;
    id _finishedHandler;
    GEORequester *_requester;
    id _simpleETARequestFinishedHandler;
    id _willSendRequestHandler;
}

+ (unsigned short)providerID;
+ (void)setUsePersistentConnection:(BOOL)arg1;

- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterWillSendRequestForEstablishedConnection:(id)arg1;
- (void)startRequest:(id)arg1 connectionProperties:(const struct { unsigned int x1; double x2; unsigned int x3; }*)arg2 willSendRequest:(id)arg3 finished:(id)arg4 error:(id)arg5;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startSimpleETARequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)updateRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
