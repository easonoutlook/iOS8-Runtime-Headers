/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary, NSString, NSData;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id _internal;
}

@property(copy,readonly) NSString * productIdentifier;
@property(copy,readonly) NSData * requestData;
@property(readonly) int quantity;
@property(copy,readonly) NSString * applicationUsername;
@property(copy,readonly) NSString * partnerIdentifier;
@property(copy,readonly) NSString * partnerTransactionIdentifier;
@property(copy,readonly) NSDictionary * requestParameters;

+ (id)paymentWithProductIdentifier:(id)arg1;
+ (id)paymentWithProduct:(id)arg1;

- (id)requestParameters;
- (id)partnerIdentifier;
- (id)requestData;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)partnerTransactionIdentifier;
- (id)applicationUsername;
- (id)productIdentifier;
- (void)dealloc;
- (id)init;
- (int)quantity;

@end
