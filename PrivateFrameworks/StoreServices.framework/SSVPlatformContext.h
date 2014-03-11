/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSVSAPContext>, NSArray, NSDictionary, NSString;

@interface SSVPlatformContext : NSObject <NSCopying> {
    NSString *_lookupURLString;
    <SSVSAPContext> *_sapContext;
    NSArray *_signedHeaders;
    NSArray *_signedQueryParameters;
    NSString *_unpersonalizedLookupURLString;
}

@property(retain) <SSVSAPContext> * SAPContext;
@property(readonly) NSDictionary * bagDictionary;
@property(readonly) NSString * lookupURLString;
@property(readonly) NSArray * signedHeaders;
@property(readonly) NSArray * signedQueryParameters;
@property(readonly) NSString * unpersonalizedLookupURLString;

- (void).cxx_destruct;
- (id)SAPContext;
- (id)bagDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBagDictionary:(id)arg1;
- (id)lookupURLString;
- (void)setSAPContext:(id)arg1;
- (id)signedHeaders;
- (id)signedQueryParameters;
- (id)unpersonalizedLookupURLString;

@end
