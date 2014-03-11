/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSData, NSDictionary, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id _internal;
}

@property(readonly) NSString * applicationUsername;
@property(readonly) NSString * partnerIdentifier;
@property(readonly) NSString * partnerTransactionIdentifier;
@property(readonly) NSString * productIdentifier;
@property(readonly) int quantity;
@property(readonly) NSData * requestData;
@property(readonly) NSDictionary * requestParameters;

+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;

- (id)applicationUsername;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)partnerIdentifier;
- (id)partnerTransactionIdentifier;
- (id)productIdentifier;
- (int)quantity;
- (id)requestData;
- (id)requestParameters;

@end
