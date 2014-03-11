/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSError, NSMutableArray, NSObject<OS_dispatch_semaphore>;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {
    BOOL _didComplete;
    NSError *_error;
    NSMutableArray *_results;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)dealloc;
- (id)init;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)waitForResults:(id*)arg1;

@end
