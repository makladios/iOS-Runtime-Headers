/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface ATXPCConnection : NSObject {
    BOOL _assertionHeld;
    NSObject<OS_xpc_object> *_conn;
    id _context;
    id _disconnectHandler;
    NSObject<OS_dispatch_queue> *_eventQueue;
    id _lockdownHandler;
    id _messageHandler;
    NSMutableSet *_outstandingMessages;
}

@property BOOL assertionHeld;
@property(retain) id context;
@property(copy) id disconnectHandler;
@property(copy) id lockdownHandler;
@property(copy) id messageHandler;
@property(readonly) NSString * serviceName;

- (void)_handleLockdownMessage:(void*)arg1;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (unsigned int)_outstandingMessages;
- (void)_registerMessage:(id)arg1;
- (void)_removeMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (BOOL)assertionHeld;
- (id)context;
- (void)dealloc;
- (id)disconnectHandler;
- (id)eventQueue;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)lockdownHandler;
- (id)messageHandler;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1;
- (id)serviceName;
- (void)setAssertionHeld:(BOOL)arg1;
- (void)setContext:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (void)setLockdownHandler:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)shutdown;

@end
