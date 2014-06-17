/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSObject<OS_dispatch_semaphore>, UILocalNotification;

@interface UIHandleLocalNotificationAction : BSAction  {
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
    UILocalNotification *_cachedNotification;
}

@property(copy,readonly) UILocalNotification * notification;
@property(copy,readonly) NSString * action;


- (id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithNotification:(id)arg1;
- (id)_initWithNotification:(id)arg1 action:(id)arg2 type:(int)arg3 withHandler:(id)arg4;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)action;
- (id)notification;
- (int)UIActionType;
- (void)dealloc;

@end
