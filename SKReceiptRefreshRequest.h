/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest  {
    NSDictionary *_properties;
}

@property(readonly) NSDictionary * receiptProperties;


- (id)receiptProperties;
- (id)initWithReceiptProperties:(id)arg1;
- (BOOL)_wantsVPP;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsExpired;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;

@end
