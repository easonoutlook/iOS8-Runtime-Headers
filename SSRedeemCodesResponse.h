/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDictionary;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
    NSDictionary *_errors;
    NSDictionary *_redeemedCodes;
}

@property(readonly) NSArray * failedCodes;
@property(copy,readonly) NSArray * redeemedCodes;


- (void)setRedeemedCodes:(id)arg1;
- (void)setFailedCodes:(id)arg1;
- (id)redeemedCodes;
- (id)failedCodes;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)errorForCode:(id)arg1;
- (id)dictionaryForCode:(id)arg1;
- (void)dealloc;

@end
