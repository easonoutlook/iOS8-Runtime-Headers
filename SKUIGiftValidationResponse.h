/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUIGiftValidationResponse : NSObject  {
    NSString *_errorString;
    NSString *_giftKey;
    NSString *_totalGiftAmountString;
    BOOL _valid;
}

@property(readonly) NSString * errorString;
@property(readonly) NSString * giftKey;
@property(readonly) NSString * totalGiftAmountString;
@property(getter=isValid,readonly) BOOL valid;


- (id)giftKey;
- (id)initWithValidationDictionary:(id)arg1;
- (id)errorString;
- (id)totalGiftAmountString;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
