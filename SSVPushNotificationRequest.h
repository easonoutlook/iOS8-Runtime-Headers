/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSVPushNotificationParameters;

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding> {
    SSVPushNotificationParameters *_parameters;
}

@property(copy) SSVPushNotificationParameters * pushNotificationParameters;


- (void)setPushNotificationParameters:(id)arg1;
- (id)pushNotificationParameters;
- (id)initWithPushNotificationParameters:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithResponseBlock:(id)arg1;
- (void).cxx_destruct;
- (BOOL)start;
- (void)startWithCompletionBlock:(id)arg1;

@end
