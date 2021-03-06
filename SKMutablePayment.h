/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary, NSString, NSData;

@interface SKMutablePayment : SKPayment  {
}

@property(copy) NSString * applicationUsername;
@property(copy) NSString * productIdentifier;
@property int quantity;
@property(copy) NSData * requestData;
@property(copy) NSString * partnerIdentifier;
@property(copy) NSString * partnerTransactionIdentifier;
@property(copy) NSDictionary * requestParameters;


- (void)setPartnerIdentifier:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setPartnerTransactionIdentifier:(id)arg1;
- (void)setQuantity:(int)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setApplicationUsername:(id)arg1;
- (void)setRequestParameters:(id)arg1;

@end
