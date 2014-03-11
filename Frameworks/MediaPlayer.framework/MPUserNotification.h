/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPUserNotification : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct __CFUserNotification { } *_cfUserNotification;
    BOOL _isShowing;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
    id strongSelf;
}

@property(readonly) struct __CFUserNotification { }* cfUserNotification;

+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification { }*)arg2;
+ (id)_userNotificationConversionAccessQueue;
+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification { }*)arg1;

- (void).cxx_destruct;
- (void)_cancelSynchronously:(BOOL)arg1;
- (void)_didReceiveResponseWithFlags:(unsigned long)arg1;
- (void)cancel;
- (struct __CFUserNotification { }*)cfUserNotification;
- (void)dealloc;
- (id)init;
- (id)initWithCFUserNotification:(struct __CFUserNotification { }*)arg1;
- (void)showWithCompletionHandler:(id)arg1;

@end
