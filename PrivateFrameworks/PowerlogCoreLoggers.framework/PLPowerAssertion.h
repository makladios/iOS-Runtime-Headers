/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class NSDate;

@interface PLPowerAssertion : NSObject {
    long _globalUniqueID;
    BOOL _open;
    long _pid;
    double _timeIntervalSinceReferenceDate;
}

@property long globalUniqueID;
@property BOOL open;
@property long pid;
@property double timeIntervalSinceReferenceDate;
@property NSDate * timestamp;

- (void)dealloc;
- (id)description;
- (long)globalUniqueID;
- (unsigned int)hash;
- (id)initWithPid:(long)arg1 withGlobalUniqueID:(long)arg2 withTimestamp:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)open;
- (long)pid;
- (void)setGlobalUniqueID:(long)arg1;
- (void)setOpen:(BOOL)arg1;
- (void)setPid:(long)arg1;
- (void)setTimeIntervalSinceReferenceDate:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)timestamp;

@end
