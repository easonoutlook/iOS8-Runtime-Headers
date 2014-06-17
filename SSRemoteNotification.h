/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {
    NSDictionary *_userInfo;
}

@property(readonly) int actionType;
@property(readonly) NSString * alertBodyString;
@property(readonly) NSString * alertCancelString;
@property(readonly) NSString * alertOKString;
@property(readonly) NSString * alertTitleString;
@property(readonly) id badgeValue;
@property(readonly) NSString * soundFileName;
@property(readonly) NSDictionary * notificationUserInfo;


- (id)notificationUserInfo;
- (id)soundFileName;
- (id)alertTitleString;
- (id)alertOKString;
- (id)alertCancelString;
- (id)alertBodyString;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)_valueForAlertKey:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (int)actionType;
- (id)badgeValue;
- (id)valueForKey:(id)arg1;
- (void)dealloc;

@end
