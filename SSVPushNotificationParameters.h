/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {
    NSNumber *_accountIdentifier;
    NSString *_environmentName;
    NSMutableDictionary *_parameterDictionary;
    int _requestType;
}

@property(copy) NSNumber * accountIdentifier;
@property(copy) NSString * environmentName;
@property(copy) NSArray * mediaKinds;
@property(copy) NSString * notificationType;
@property(copy) NSDictionary * putParameters;
@property int requestType;


- (id)environmentName;
- (id)_copyParametersDictionary;
- (void)setPutParameters:(id)arg1;
- (void)setMediaKinds:(id)arg1;
- (id)putParameters;
- (id)notificationType;
- (id)mediaKinds;
- (void)setEnvironmentName:(id)arg1;
- (id)valueForParameter:(id)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (int)requestType;
- (void)setRequestType:(int)arg1;
- (void)setNotificationType:(id)arg1;
- (id)accountIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)init;

@end
