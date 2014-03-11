/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {
    NSString *_clientID;
    unsigned int _contextID;
    NSString *_displayUUID;
}

@property(readonly) NSString * clientID;
@property(readonly) unsigned int contextID;
@property(readonly) NSString * displayUUID;

+ (id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (id)clientID;
- (unsigned int)contextID;
- (void)dealloc;
- (id)description;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualNotIncludingClientID:(id)arg1;
- (id)propertiesOneLevelMoreGeneric;

@end
